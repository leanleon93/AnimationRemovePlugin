#include "SkillIdManager.h"
#include "EU/job/AAA_job_RecordBase.h"
#include "EU/text/AAA_text_RecordBase.h"
#include "EU/skill_inheritance/AAA_skill_inheritance_RecordBase.h"
#include <algorithm>
#include "EU/skill3/AAA_skill3_RecordBase.h"
#include "EU/skill3/skill3_active_skill_Record.h"
#include "EU/itemskill/AAA_itemskill_RecordBase.h"
#include "PluginConfig.h"
#include <Windows.h>
#ifdef _DEBUG
#include <iostream>
#include <utility>
#endif // _DEBUG
#include "EU/effect_group/AAA_effect_group_RecordBase.h"
#include "SkillTraitJobstyleHelper.cpp"
#include "EU/BnsTableNames.h"

using namespace BnsTables;

SkillIdManager g_SkillIdManager;

__int16 SkillIdManager::GetSkillshowTableId() const {
	return skillshowTableId;
}

char SkillIdManager::GetJobIdForEnName(std::wstring const& enName) {
	if (auto it = jobNameMap.find(enName); it != jobNameMap.end()) {
		return it->second;
	}
	if (auto it = jobNameFallbackMap.find(enName); it != jobNameFallbackMap.end()) {
		return it->second;
	}
	return 0;
}

bool SkillIdManager::SetupSkillShowTableId() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	const auto tableId = DataHelper::GetTableId(manager, L"skillshow3");
	if (tableId == 0) {
		return false;
	}
	skillshowTableId = tableId;
	return true;
}

std::unordered_set<int> SkillIdManager::GetInheritedIds(int id) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill-inheritance") || !versionCheckSuccess[L"skill-inheritance"]) {
		return {};
	}
	const auto table = DataHelper::GetTable(manager, L"skill-inheritance");
	if (table == nullptr) return {};
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	std::unordered_set<int> inheritedIds;
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (EU::skill_inheritance_Record*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->parent_skill_id != id) continue;
		if (std::ranges::find(idExclusionList.begin(), idExclusionList.end(), record->key.skill_id) != idExclusionList.end()) continue;
		inheritedIds.insert(record->key.skill_id);
		auto nestedIds = GetInheritedIds(record->key.skill_id);
		inheritedIds.insert(nestedIds.begin(), nestedIds.end());
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return inheritedIds;
}

std::unordered_set<int> SkillIdManager::GetChildSkillIds(int id) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill3") || !versionCheckSuccess[L"skill3"]) {
		return {};
	}
	const auto table = DataHelper::GetTable(manager, L"skill3");
	if (table == nullptr) return {};
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	std::unordered_set<int> childIds;
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->subtype != (__int16)std::to_underlying(EU::skill3_RecordSubType::skill3_record_sub_active_skill)) continue;
		auto activeSkillRecord = (EU::skill3_active_skill_Record*)record;
		if (activeSkillRecord->key.id != id) continue;
		if (std::ranges::find(idExclusionList.begin(), idExclusionList.end(), activeSkillRecord->key.id) != idExclusionList.end()) continue;
		for (auto key : activeSkillRecord->children_skill) {
			if (key.Key == 0) continue;
			auto idPtr = reinterpret_cast<__int32*>(&key);
			auto childSkillId = *idPtr;
			if (std::ranges::find(idExclusionList.begin(), idExclusionList.end(), childSkillId) != idExclusionList.end()) continue;
			childIds.insert(childSkillId);
			auto nestedIds = GetChildSkillIds(childSkillId);
			childIds.insert(nestedIds.begin(), nestedIds.end());
		}
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return childIds;
}

void SkillIdManager::AddIds(EU::skill_trait_Record const* record, int const* ids, int size, SkillIdsForJob& skillIdsForJobEntry) {
	auto jobStyleIndex = Data::SkillTraitJobStyleHelper::GetSpecIndexForJobStyleType(record->key.job_style);
	if (jobStyleIndex <= 0) return;
	if (!skillIdsForJobEntry.SkillIdsForSpec.contains(jobStyleIndex)) {
		skillIdsForJobEntry.SkillIdsForSpec[jobStyleIndex] = {};
	}

	for (int i = 0; i < size; i++) {
		if (ids[i] == 0) continue;
		if (std::ranges::find(idExclusionList.begin(), idExclusionList.end(), ids[i]) != idExclusionList.end()) continue;
		skillIdsForJobEntry.SkillIdsForSpec[jobStyleIndex].insert(ids[i]);
		auto inheritedIds = GetInheritedIds(ids[i]);
		skillIdsForJobEntry.SkillIdsForSpec[jobStyleIndex].insert(inheritedIds.begin(), inheritedIds.end());
	}
}

void  SkillIdManager::AddFixedIds(EU::skill_trait_Record const* record, SkillIdsForJob& skillIdsForJobEntry) {
	int size = sizeof(record->fixed_skill3_id) / sizeof(record->fixed_skill3_id[0]);
	AddIds(record, record->fixed_skill3_id, size, skillIdsForJobEntry);
}

void  SkillIdManager::AddVariableIds(EU::skill_trait_Record const* record, SkillIdsForJob& skillIdsForJobEntry) {
	int size = sizeof(record->variable_skill3_id) / sizeof(record->variable_skill3_id[0]);
	AddIds(record, record->variable_skill3_id, size, skillIdsForJobEntry);
}

void SkillIdManager::AddChildrenSkillIds(SkillIdsForJob& skillIdsForJobEntry) {
	for (auto const& [specIndex, skillIds] : skillIdsForJobEntry.SkillIdsForSpec) {
		for (auto id : skillIds) {
			auto childIds = GetChildSkillIds(id);
			skillIdsForJobEntry.SkillIdsForSpec[specIndex].insert(childIds.begin(), childIds.end());
		}
	}
}

static bool containsSubstring(const wchar_t* str, const wchar_t* substr) {
	std::wstring s(str);
	std::wstring sub(substr);

	// Convert both strings to lowercase
	std::ranges::transform(s.begin(), s.end(), s.begin(), ::towlower);
	std::ranges::transform(sub.begin(), sub.end(), sub.begin(), ::towlower);

	return s.find(sub) != std::wstring::npos;
}

std::unordered_set<int> SkillIdManager::GetItemSkills(int id) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"itemskill") || !versionCheckSuccess[L"itemskill"]) {
		return {};
	}
	const auto table = DataHelper::GetTable(manager, L"itemskill");
	if (table == nullptr) return {};
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	std::unordered_set<int> itemSkills;
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (EU::itemskill_Record*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->skill_id != id) continue;
		auto itemSimSkillId = static_cast<__int32>(record->item_sim_skill.Key);
		if (itemSimSkillId == 0) continue;
		itemSkills.insert(itemSimSkillId);
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return itemSkills;
}

void SkillIdManager::AddItemSkills(SkillIdsForJob& skillIdsForJobEntry) {
	for (auto const& [specIndex, skillIds] : skillIdsForJobEntry.SkillIdsForSpec) {
		for (auto id : skillIds) {
			auto itemSkills = GetItemSkills(id);
			globalItemSkillIds.insert(itemSkills.begin(), itemSkills.end());
			skillIdsForJobEntry.SkillIdsForSpec[specIndex].insert(itemSkills.begin(), itemSkills.end());
		}
	}
}

bool SkillIdManager::SetupSkillIdsForJob(char jobId) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill-trait") || !versionCheckSuccess[L"skill-trait"]) {
		return false;
	}
	const auto table = DataHelper::GetTable(manager, L"skill-trait");
	if (table == nullptr) return false;
	auto skillIdsForJobEntry = SkillIdsForJob();
	skillIdsForJobEntry.JobId = jobId;

	auto innerIter = table->__vftable->createInnerIter_d0(table);
	//loop
	std::vector<EU::skill_trait_Record> filteredTraitRecords;
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (EU::skill_trait_Record*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->key.job != jobId) continue;
		AddFixedIds(record, skillIdsForJobEntry);
		AddVariableIds(record, skillIdsForJobEntry);
	} while (innerIter->_vtptr->Next(innerIter));
	AddChildrenSkillIds(skillIdsForJobEntry);
	AddItemSkills(skillIdsForJobEntry);
	skillIdsForJobMap[jobId] = skillIdsForJobEntry;
	table->__vftable->removeInnerIter(table, innerIter);
	return true;
}

std::unordered_set<unsigned __int64> SkillIdManager::GetEffectIdsForEffectGroup(unsigned __int64 effectGroupId) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"effect-group") || !versionCheckSuccess[L"effect-group"]) {
		return {};
	}
	const auto table = DataHelper::GetTable(manager, L"effect-group");
	if (table == nullptr) return  { };
	auto record = table->__vftable->Find_b8(table, effectGroupId);
	if (record == nullptr) return  { };
	auto effectGroupRecord = (EU::effect_group_Record*)record;
	std::unordered_set<unsigned __int64> effectIds;
	for (auto effectId : effectGroupRecord->effect) {
		if (effectId.Key == 0) continue;
		effectIds.insert(effectId.Key);
	}
	return effectIds;
}

bool SkillIdManager::SetupEffectIdsForJob(char jobId) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill3") || !versionCheckSuccess[L"skill3"]) {
		return false;
	}
	const auto table = DataHelper::GetTable(manager, L"skill3");
	if (table == nullptr) return false;
	auto effectIdsForJobEntry = EffectIdsForJob();
	effectIdsForJobEntry.JobId = jobId;

	auto skillIdsForJobEntry = skillIdsForJobMap.find(jobId);
	if (skillIdsForJobEntry == skillIdsForJobMap.end()) return false;
	auto const& skillIdsForJob = skillIdsForJobEntry->second;

	auto const& fixedTargetEffectIdsForJob = fixedTargetEffectIds.find(jobId);

	for (auto const& skillIdsForSpec = skillIdsForJob.SkillIdsForSpec; auto const& [specIndex, skillIds] : skillIdsForSpec) {
		if (fixedTargetEffectIdsForJob != fixedTargetEffectIds.end()) {
			auto const& fixedEffectIdsForSpec = fixedTargetEffectIdsForJob->second.EffectIdsForSpec.find(specIndex);
			if (fixedEffectIdsForSpec != fixedTargetEffectIdsForJob->second.EffectIdsForSpec.end()) {
				effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(fixedEffectIdsForSpec->second.begin(), fixedEffectIdsForSpec->second.end());
			}
		}
		for (auto id : skillIds) {
			auto innerIter = table->__vftable->createInnerIter_d0(table);
			do {
				if (!innerIter->_vtptr->IsValid(innerIter)) continue;
				auto record = (EU::skill3_Record*)innerIter->_vtptr->Ptr(innerIter);
				if (record == nullptr) continue;
				if (record->key.id != id) continue;
				if (record->subtype != (__int16)EU::skill3_RecordSubType::skill3_record_sub_active_skill) continue;
				bool breakOuter = false;
				for (auto const& systematization : record->systematization) {
					if (systematization.Key == 0) continue;
					if (systematization.Key == 30) {
						breakOuter = true;
						break;
					}
				}
				if (breakOuter) continue;
				auto activeSkillRecord = (EU::skill3_active_skill_Record*)record;
				for (auto passiveEffect : activeSkillRecord->passive_effect) {
					if (passiveEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(passiveEffect.Key);
				}
				for (auto castEffect : activeSkillRecord->cast_effect) {
					if (castEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(castEffect.Key);
				}

				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_1) {
					if (swing_caster_effect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect.Key);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_2) {
					if (swing_caster_effect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect.Key);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_3) {
					if (swing_caster_effect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect.Key);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_4) {
					if (swing_caster_effect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect.Key);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_5) {
					if (swing_caster_effect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect.Key);
				}

				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_1) {
					if (execCasterEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect.Key);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_2) {
					if (execCasterEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect.Key);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_3) {
					if (execCasterEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect.Key);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_4) {
					if (execCasterEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect.Key);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_5) {
					if (execCasterEffect.Key == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect.Key);
				}
				for (auto execEffectGroupId : activeSkillRecord->exec_effect_1) {
					if (execEffectGroupId.Key == 0) continue;
					auto effectIds = GetEffectIdsForEffectGroup(execEffectGroupId.Key);
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(effectIds.begin(), effectIds.end());
				}
				for (auto execEffectGroupId : activeSkillRecord->exec_effect_2) {
					if (execEffectGroupId.Key == 0) continue;
					auto effectIds = GetEffectIdsForEffectGroup(execEffectGroupId.Key);
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(effectIds.begin(), effectIds.end());
				}
				for (auto execEffectGroupId : activeSkillRecord->exec_effect_3) {
					if (execEffectGroupId.Key == 0) continue;
					auto effectIds = GetEffectIdsForEffectGroup(execEffectGroupId.Key);
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(effectIds.begin(), effectIds.end());
				}
				for (auto execEffectGroupId : activeSkillRecord->exec_effect_4) {
					if (execEffectGroupId.Key == 0) continue;
					auto effectIds = GetEffectIdsForEffectGroup(execEffectGroupId.Key);
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(effectIds.begin(), effectIds.end());
				}
				for (auto execEffectGroupId : activeSkillRecord->exec_effect_5) {
					if (execEffectGroupId.Key == 0) continue;
					auto effectIds = GetEffectIdsForEffectGroup(execEffectGroupId.Key);
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(effectIds.begin(), effectIds.end());
				}
			} while (innerIter->_vtptr->Next(innerIter));
			table->__vftable->removeInnerIter(table, innerIter);
		}
	}
	effectIdsForJobMap[jobId] = effectIdsForJobEntry;
	return true;
}

bool SkillIdManager::SetupAllSkillIds() {
	skillIdsForJobMap.clear();
	globalItemSkillIds.clear();
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	for (auto const& jobId : jobIds) {
		if (SetupSkillIdsForJob(jobId)) {
			SetupEffectIdsForJob(jobId);
		}
	}
	return true;
}

bool SkillIdManager::SetupJobNameMap() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	jobNameMap.clear();
	jobIds.clear();
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"job") || !versionCheckSuccess[L"job"]) {
		jobIds = jobIdsFallback;
		return true;
	}
	const auto table = DataHelper::GetTable(manager, L"job");
	const auto textTable = DataHelper::GetTable(manager, L"text");
	if (table == nullptr || textTable == nullptr) {
		return false;
	}
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (EU::job_Record*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		jobIds.insert(record->key.job);
		auto enJobName = (EU::text_Record*)textTable->__vftable->Find_b8(textTable, record->name2.Key);
		jobNameMap[enJobName->text.ReadableText] = record->key.job;
#ifdef _DEBUG
		std::wcout << "{ L\"" << enJobName->text.ReadableText << "\", " << +record->key.job << " }," << std::endl;
#endif // _DEBUG
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return true;
}

bool SkillIdManager::AllVersionsSuccess() const {
	auto allSuccess = std::ranges::all_of(versionCheckSuccess, [](auto const& kvp) { return kvp.second; });
	return allSuccess;
}

bool SkillIdManager::CompatabilityCheck() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	for (auto const& tableName : usedTables) {
		if (auto table = DataHelper::GetTable(manager, tableName.c_str()); table == nullptr) {
			return false;
		}
#ifdef _DEBUG
		std::wcout << "Table " << tableName << " found." << std::endl;
#endif // _DEBUG
		auto tableDef = DataHelper::GetTableDef(manager, tableName.c_str());
		if (tableDef == nullptr) {
			continue;
		}
#ifdef _DEBUG
		std::wcout << "\tID: " << tableDef->type << std::endl;
		std::wcout << "\tVersion union: " << tableDef->version.ver << std::endl;
		std::wcout << "\tMajor Version: " << tableDef->version.major_ver << std::endl;
		std::wcout << "\tMinor Version: " << tableDef->version.minor_ver << std::endl;
		printf("\tAddress of %s is %p\n", "type", &tableDef->type);
		std::cout << std::endl;
#endif // _DEBUG
		auto confirmedVersion = EU::TableNames::GetTableVersion(EU::TableNames::GetTableId(tableName));
#ifdef _DEBUG
		std::wcout << "Confirmed version for " << tableName << " is " << confirmedVersion.Version.VersionKey << std::endl;
		std::wcout << "Confirmed major version for " << tableName << " is " << confirmedVersion.Version.MajorVersion << std::endl;
		std::wcout << "Confirmed minor version for " << tableName << " is " << confirmedVersion.Version.MinorVersion << std::endl;
		std::cout << std::endl;
#endif // _DEBUG

		if (tableDef->version.ver == confirmedVersion.Version.VersionKey) {
			versionCheckSuccess[tableName] = true;
		}
	}
	return true;
}

bool SkillIdManager::Setup() {
	if (auto successVersionCheck = CompatabilityCheck(); !successVersionCheck) return false;
	if (!AllVersionsSuccess()) {
		MessageBox(nullptr, L"AnimFilter version is not 100% compatible with the game version.\nSome Animations might not be removed but your game will not break.\nPlease update the plugin if available.", L"AnimFilter Version Mismatch", MB_OK | MB_ICONWARNING);
	}
	auto success1 = SetupJobNameMap();
	if (!success1) return false;
	auto success2 = SetupAllSkillIds();
	if (!success2) return false;
	auto success3 = SetupSkillShowTableId();
	if (success1 && success2 && success3) {
		SetupComplete = true;
		ResetIdsToFilter();
		ReapplyEffectFilters();
	}
	return success1 && success2 && success3;
}

Data::DataManager* SkillIdManager::GetDataManager() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return nullptr;
	}
	return reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
}

static void addIdsForSpec(std::unordered_set<int>& idsToFilter, std::unordered_map<int, std::unordered_set<int>>& skillIdsForSpec, int specIndex) {
	auto skillIdsForSpecRecord = skillIdsForSpec.find(specIndex);
	if (skillIdsForSpecRecord != skillIdsForSpec.end()) {
		for (auto id : skillIdsForSpecRecord->second) {
			idsToFilter.insert(id);
		}
	}
}

static void removeIdsForSpec(std::unordered_set<int>& idsToFilter, std::unordered_map<int, std::unordered_set<int>>& skillIdsForSpec, int specIndex) {
	auto skillIdsForSpecRecord = skillIdsForSpec.find(specIndex);
	if (skillIdsForSpecRecord != skillIdsForSpec.end()) {
		for (auto id : skillIdsForSpecRecord->second) {
			idsToFilter.erase(id);
		}
	}
}

void SkillIdManager::ResetIdsToFilter() {
	idsToFilter.clear();
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile())
		return;
	auto& activeProfile = g_PluginConfig.GetActiveProfile();

	//iterate over filters
	for (auto const& jobOption : activeProfile.SkillFilters) {
		if (jobOption.Name.empty() || !jobOption.IsHideAny()) continue;
		auto jobId = GetJobIdForEnName(jobOption.Name);
		if (jobId == 0) continue;
		auto skillIdsForJobRecord = skillIdsForJobMap.find(jobId);
		if (skillIdsForJobRecord == skillIdsForJobMap.end()) continue;
		auto& skillIdsForJob = skillIdsForJobRecord->second;
		//add ids to filter if hide
		if (jobOption.HideSpec1) {
			addIdsForSpec(idsToFilter, skillIdsForJob.SkillIdsForSpec, 1);
		}
		if (jobOption.HideSpec2) {
			addIdsForSpec(idsToFilter, skillIdsForJob.SkillIdsForSpec, 2);
		}
		if (jobOption.HideSpec3) {
			addIdsForSpec(idsToFilter, skillIdsForJob.SkillIdsForSpec, 3);
		}
		//remove the ids from the filter if not hide to not remove shared ids
		if (!jobOption.HideSpec1)
		{
			removeIdsForSpec(idsToFilter, skillIdsForJob.SkillIdsForSpec, 1);
		}
		if (!jobOption.HideSpec2)
		{
			removeIdsForSpec(idsToFilter, skillIdsForJob.SkillIdsForSpec, 2);
		}
		if (!jobOption.HideSpec3)
		{
			removeIdsForSpec(idsToFilter, skillIdsForJob.SkillIdsForSpec, 3);
		}
	}

	//remove all itemskills if set to hide global
	if (activeProfile.HideGlobalItemSkills) {
		idsToFilter.insert(globalItemSkillIds.begin(), globalItemSkillIds.end());
	}

	//remove bardTreeExclusionIds from idsToFilter if not hidetree
	if (!activeProfile.HideTree) {
		for (auto id : bardTreeExclusionIds) {
			idsToFilter.erase(id);
		}
	}
	if (!activeProfile.HideTimeDistortion) {
		for (auto id : wlTDExclusionIds) {
			idsToFilter.erase(id);
		}
	}
	if (activeProfile.HideTaxi) {
		taxiExclusionIds = {};
	}
	else {
		taxiExclusionIds = defaultTaxiExclusionIds;
	}
	ResetEffectIdsToFilter();
}

static void addEffectIdsForSpec(std::unordered_set<unsigned __int64>& idsToFilter, std::unordered_map<int, std::unordered_set<unsigned __int64>>& effectIdsForSpec, int specIndex) {
	auto effectIdsForSpecRecord = effectIdsForSpec.find(specIndex);
	if (effectIdsForSpecRecord != effectIdsForSpec.end()) {
		for (auto id : effectIdsForSpecRecord->second) {
			idsToFilter.insert(id);
		}
	}
}

static void removeEffectIdsForSpec(std::unordered_set<unsigned __int64>& idsToFilter, std::unordered_map<int, std::unordered_set<unsigned __int64>>& effectIdsForSpec, int specIndex) {
	auto effectIdsForSpecRecord = effectIdsForSpec.find(specIndex);
	if (effectIdsForSpecRecord != effectIdsForSpec.end()) {
		for (auto id : effectIdsForSpecRecord->second) {
			idsToFilter.erase(id);
		}
	}
}

void SkillIdManager::ResetEffectIdsToFilter() {
	effectIdsToFilter.clear();
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile())
		return;
	auto& activeProfile = g_PluginConfig.GetActiveProfile();

	//iterate over filters
	for (auto const& jobOption : activeProfile.SkillFilters) {
		if (jobOption.Name.empty() || !jobOption.IsHideAny()) continue;
		auto jobId = GetJobIdForEnName(jobOption.Name);
		if (jobId == 0) continue;
		auto effectIdsForJobRecord = effectIdsForJobMap.find(jobId);
		if (effectIdsForJobRecord == effectIdsForJobMap.end()) continue;
		auto& effectIdsForJob = effectIdsForJobRecord->second;

		if (jobOption.HideSpec1) {
			addEffectIdsForSpec(effectIdsToFilter, effectIdsForJob.EffectIdsForSpec, 1);
		}
		if (jobOption.HideSpec2) {
			addEffectIdsForSpec(effectIdsToFilter, effectIdsForJob.EffectIdsForSpec, 2);
		}
		if (jobOption.HideSpec3) {
			addEffectIdsForSpec(effectIdsToFilter, effectIdsForJob.EffectIdsForSpec, 3);
		}

		if (!jobOption.HideSpec1)
		{
			removeEffectIdsForSpec(effectIdsToFilter, effectIdsForJob.EffectIdsForSpec, 1);
		}
		if (!jobOption.HideSpec2)
		{
			removeEffectIdsForSpec(effectIdsToFilter, effectIdsForJob.EffectIdsForSpec, 2);
		}
		if (!jobOption.HideSpec3)
		{
			removeEffectIdsForSpec(effectIdsToFilter, effectIdsForJob.EffectIdsForSpec, 3);
		}
	}
}

__int64 SkillIdManager::SkillShow3KeyHelper::BuildKey(__int32 id_, __int16 variation_id_, __int16 skillskin_id_) {
	EU::skillshow3_Record::Key key{};
	key.id = id_;
	key.variation_id = variation_id_;
	key.skillskin_id = skillskin_id_;
	return std::bit_cast<__int64>(key);
}

EU::skillshow3_Record::Key SkillIdManager::SkillShow3KeyHelper::ExtractKey(__int64 key) {
	EU::skillshow3_Record::Key parts{};
	parts.key = key;
	return parts;
}

__int32 SkillIdManager::SkillShow3KeyHelper::ExtractId(__int64 key) {
	return static_cast<__int32>(key);
}

void SkillIdManager::SetDataManagerPtr(__int64 const* ptr) {
	this->dataManagerPtr = ptr;
}

bool SkillIdManager::IsSetupComplete() const {
	return SetupComplete;
}

const std::unordered_set<int>& SkillIdManager::GetIdsToFilter() const {
	return idsToFilter;
}

void SkillIdManager::RestoreEffects() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return;
	}
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"effect") || !versionCheckSuccess[L"effect"]) {
		return;
	}
	const auto table = DataHelper::GetTable(manager, L"effect");
	if (table == nullptr) return;
	for (auto& [key, kvp] : effectRestoreList) {
		auto record = table->__vftable->Find_b8(table, key);
		if (record == nullptr) continue;
		auto effectRecord = (EU::effect_Record*)record;
		std::string attribute = "normal_component";
		if (kvp.contains(attribute)) effectRecord->normal_component[0] = kvp[attribute];
		attribute = "critical_component";
		if (kvp.contains(attribute)) effectRecord->critical_component[0] = kvp[attribute];
		attribute = "back_normal_component";
		if (kvp.contains(attribute)) effectRecord->back_normal_component[0] = kvp[attribute];
		attribute = "back_critical_component";
		if (kvp.contains(attribute)) effectRecord->back_critical_component[0] = kvp[attribute];
		attribute = "buff_continuance_component";
		if (kvp.contains(attribute)) effectRecord->buff_continuance_component[0] = kvp[attribute];
		attribute = "immune_buff_component";
		if (kvp.contains(attribute)) effectRecord->immune_buff_component[0] = kvp[attribute];
		attribute = "detach_show";
		if (kvp.contains(attribute)) effectRecord->detach_show[0] = kvp[attribute];
		attribute = "dispel_show";
		if (kvp.contains(attribute)) effectRecord->dispel_show[0] = kvp[attribute];
	}
	for (auto& [key, kvp] : effectSwapRestoreList) {
		auto record = table->__vftable->Find_b8(table, key);
		if (record == nullptr) continue;
		auto effectRecord = (EU::effect_Record*)record;
		std::string attribute = "normal_component";
		if (kvp.contains(attribute)) effectRecord->normal_component = kvp[attribute];
		attribute = "critical_component";
		if (kvp.contains(attribute)) effectRecord->critical_component = kvp[attribute];
		attribute = "back_normal_component";
		if (kvp.contains(attribute)) effectRecord->back_normal_component = kvp[attribute];
		attribute = "back_critical_component";
		if (kvp.contains(attribute)) effectRecord->back_critical_component = kvp[attribute];
		attribute = "buff_continuance_component";
		if (kvp.contains(attribute)) effectRecord->buff_continuance_component = kvp[attribute];
		attribute = "immune_buff_component";
		if (kvp.contains(attribute)) effectRecord->immune_buff_component = kvp[attribute];
		attribute = "detach_show";
		if (kvp.contains(attribute)) effectRecord->detach_show = kvp[attribute];
		attribute = "dispel_show";
		if (kvp.contains(attribute)) effectRecord->dispel_show = kvp[attribute];
	}

	//Clear
	for (auto& [key, kvp] : effectRestoreList) {
		kvp.clear();
	}
	for (auto& [key, kvp] : effectSwapRestoreList) {
		kvp.clear();
	}
	effectRestoreList.clear();
	effectSwapRestoreList.clear();
}

void SkillIdManager::RemoveAnimationsForEffect(EU::effect_Record* effectRecord) {
	if (effectRestoreList.contains(effectRecord->key.key)) return;
	if (effectSwapRestoreList.contains(effectRecord->key.key)) return;
	std::string attribute = "normal_component";
	if (effectRecord->normal_component != nullptr && effectRecord->normal_component[0] != L'\0') {
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->normal_component[0];
		*effectRecord->normal_component = L'\0';
	}
	if (effectRecord->critical_component != nullptr && effectRecord->critical_component[0] != L'\0') {
		attribute = "critical_component";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->critical_component[0];
		*effectRecord->critical_component = L'\0';
	}
	if (effectRecord->back_normal_component != nullptr && effectRecord->back_normal_component[0] != L'\0') {
		attribute = "back_normal_component";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->back_normal_component[0];
		*effectRecord->back_normal_component = L'\0';
	}
	if (effectRecord->back_critical_component != nullptr && effectRecord->back_critical_component[0] != L'\0') {
		attribute = "back_critical_component";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->back_critical_component[0];
		*effectRecord->back_critical_component = L'\0';
	}
	if (effectRecord->buff_continuance_component != nullptr && effectRecord->buff_continuance_component[0] != L'\0') {
		attribute = "buff_continuance_component";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->buff_continuance_component[0];
		*effectRecord->buff_continuance_component = L'\0';
	}
	if (effectRecord->immune_buff_component != nullptr && effectRecord->immune_buff_component[0] != L'\0') {
		attribute = "immune_buff_component";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->immune_buff_component[0];
		*effectRecord->immune_buff_component = L'\0';
	}
	if (effectRecord->detach_show != nullptr && effectRecord->detach_show[0] != L'\0') {
		attribute = "detach_show";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->detach_show[0];
		*effectRecord->detach_show = L'\0';
	}
	if (effectRecord->dispel_show != nullptr && effectRecord->dispel_show[0] != L'\0') {
		attribute = "dispel_show";
		effectRestoreList[effectRecord->key.key][attribute] = effectRecord->dispel_show[0];
		*effectRecord->dispel_show = L'\0';
	}
}

void SkillIdManager::SwapAnimationsForEffect(EU::effect_Record* target, EU::effect_Record* animation) {
	if (effectSwapRestoreList.contains(target->key.key)) return;
	for (auto [attribute, member1, member2] : {
		std::tuple<std::string, wchar_t*&, wchar_t*&>("normal_component", target->normal_component, animation->normal_component),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("critical_component", target->critical_component, animation->critical_component),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("back_normal_component", target->back_normal_component, animation->back_normal_component),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("back_critical_component", target->back_critical_component, animation->back_critical_component),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("buff_continuance_component", target->buff_continuance_component, animation->buff_continuance_component),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("immune_buff_component", target->immune_buff_component, animation->immune_buff_component),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("detach_show", target->detach_show, animation->detach_show),
		std::tuple<std::string, wchar_t*&, wchar_t*&>("dispel_show", target->dispel_show, animation->dispel_show),
		}) {
		effectSwapRestoreList[target->key.key][attribute] = member1;
		member1 = member2;
	}
}

void SkillIdManager::SwapEffects() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return;
	}
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile()) return;
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"effect") || !versionCheckSuccess[L"effect"]) {
		return;
	}
	const auto table = DataHelper::GetTable(manager, L"effect");
	if (table == nullptr) return;
	for (auto& [effectKey, effectSwap] : g_PluginConfig.GetActiveProfile().EffectSwaps) {
		auto animationKey = effectSwap.AnimationEffectId;
		auto effectRecord = (EU::effect_Record*)table->__vftable->Find_b8(table, effectKey);
		if (effectRecord == nullptr) continue;
		auto animationRecord = (EU::effect_Record*)table->__vftable->Find_b8(table, animationKey);
		if (animationRecord == nullptr) continue;
		SwapAnimationsForEffect(effectRecord, animationRecord);
	}
}

void SkillIdManager::RemoveEffects() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return;
	}
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile()) return;
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"effect") || !versionCheckSuccess[L"effect"]) {
		return;
	}
	const auto table = DataHelper::GetTable(manager, L"effect");
	if (table == nullptr) return;
	for (auto& effectFilters = g_PluginConfig.GetActiveProfile().EffectFilters; auto const& filter : effectFilters) {
		if (filter.IsAlias) continue; //TODO: add alias support
		auto record = table->__vftable->Find_b8(table, filter.Key);
		if (record == nullptr) continue;
		auto effectRecord = (EU::effect_Record*)record;
		RemoveAnimationsForEffect(effectRecord);
	}
	for (auto const effectId : effectIdsToFilter) {
		auto record = table->__vftable->Find_b8(table, effectId);
		if (record == nullptr) continue;
		auto effectRecord = (EU::effect_Record*)record;
		RemoveAnimationsForEffect(effectRecord);
	}
}

std::unordered_set<int> SkillIdManager::GetAllSkillIdsFromJobMap() {
	std::unordered_set<int> allSkillIds;
	for (auto const& [enName, skillIdsForJob] : skillIdsForJobMap) {
		for (auto const& [specIndex, skillIds] : skillIdsForJob.SkillIdsForSpec) {
			allSkillIds.insert_range(skillIds);
		}
	}
	return allSkillIds;
}

void SkillIdManager::ReapplyEffectFilters() {
	RestoreEffects();
	SwapEffects();
	RemoveEffects();
}

bool SkillIdManager::IsCriticalFail() const {
	return CriticalFail;
}

const std::unordered_map<__int32, __int16>& SkillIdManager::GetTaxiExclusionIdVariations() const {
	return taxiExclusionIdVariations;
}

const std::unordered_set<int>& SkillIdManager::GetTaxiSkillIds() const {
	return taxiExclusionIds;
}