#include "SkillIdManager.h"
#include "Records/Job/JobRecordBase.h"
#include "Records/Text/TextRecordBase.h"
#include "Records/SkillInheritance/SkillInheritanceBase.h"
#include <algorithm>
#include "Records/Skill3/Skill3RecordBase.h"
#include "Records/Skill3/Skill3ActiveSkillRecord.h"
#include "Records/Itemskill/ItemskillRecordBase.h"
#include "PluginConfig.h"
#include <Windows.h>
#ifdef _DEBUG
#include <iostream>
#endif // _DEBUG

SkillIdManager g_SkillIdManager;

__int16 SkillIdManager::GetSkillshowTableId() const {
	return skillshowTableId;
}

char SkillIdManager::GetKrJobForEnName(std::wstring const& enName) {
	if (auto it = jobNameMap.find(enName); it != jobNameMap.end()) {
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
		auto record = (Data::SkillInheritanceRecord*)innerIter->_vtptr->Ptr(innerIter);
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
		if (record->subtype != (__int16)Data::Skill3RecordSubType::SKILL3_RECORD_SUB_ACTIVE_SKILL) continue;
		auto activeSkillRecord = (Data::Skill3ActiveSkillRecord*)record;
		if (activeSkillRecord->key.id != id) continue;
		if (std::ranges::find(idExclusionList.begin(), idExclusionList.end(), activeSkillRecord->key.id) != idExclusionList.end()) continue;
		for (auto key : activeSkillRecord->children_skill) {
			if (key == 0) continue;
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

void SkillIdManager::AddIds(Data::SkillTraitRecord const* record, int const* ids, int size, SkillIdsForJob& skillIdsForJobEntry) {
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

void  SkillIdManager::AddFixedIds(Data::SkillTraitRecord const* record, SkillIdsForJob& skillIdsForJobEntry) {
	int size = sizeof(record->fixed_skill3_id) / sizeof(record->fixed_skill3_id[0]);
	AddIds(record, record->fixed_skill3_id, size, skillIdsForJobEntry);
}

void  SkillIdManager::AddVariableIds(Data::SkillTraitRecord const* record, SkillIdsForJob& skillIdsForJobEntry) {
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

bool SkillIdManager::IsBraceletId(int id) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill3") || !versionCheckSuccess[L"skill3"]) {
		return false;
	}
	const auto table = DataHelper::GetTable(manager, L"skill3");
	if (table == nullptr) return {};
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (Data::Skill3Record*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->key.id != id) continue;
		if (containsSubstring(record->alias, L"bracelet")) {
			return true;
		}
		else {
			return false;
		}
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return false;
}

void SkillIdManager::FilterBracelet(SkillIdsForJob& skillIdsForJobEntry) {
	std::unordered_set<int> braceletIds;
	for (auto const& [specIndex, skillIds] : skillIdsForJobEntry.SkillIdsForSpec) {
		for (auto id : skillIds) {
			if (IsBraceletId(id)) {
				braceletIds.insert(id);
			}
		}
	}
	for (auto id : braceletIds) {
		skillIdsForJobEntry.SkillIdsForSpec[1].erase(id);
		skillIdsForJobEntry.SkillIdsForSpec[2].erase(id);
		skillIdsForJobEntry.SkillIdsForSpec[3].erase(id);
	}
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
		auto record = (Data::ItemSkillRecord*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->skill_id != id) continue;
		auto itemSimSkillId = static_cast<__int32>(record->item_sim_skill);
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
			skillIdsForJobEntry.SkillIdsForSpec[specIndex].insert(itemSkills.begin(), itemSkills.end());
		}
	}
}

bool SkillIdManager::SetupSkillIdsForJob(const std::wstring& enName, char krName) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill-trait") || !versionCheckSuccess[L"skill-trait"]) {
		return false;
	}
	const auto table = DataHelper::GetTable(manager, L"skill-trait");
	if (table == nullptr) return false;
	auto skillIdsForJobEntry = SkillIdsForJob();
	skillIdsForJobEntry.EnJobName = enName;

	auto innerIter = table->__vftable->createInnerIter_d0(table);
	//loop
	std::vector<Data::SkillTraitRecord> filteredTraitRecords;
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (Data::SkillTraitRecord*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->key.job != krName) continue;
		AddFixedIds(record, skillIdsForJobEntry);
		AddVariableIds(record, skillIdsForJobEntry);
	} while (innerIter->_vtptr->Next(innerIter));
	AddChildrenSkillIds(skillIdsForJobEntry);
	AddItemSkills(skillIdsForJobEntry);
	FilterBracelet(skillIdsForJobEntry);
	skillIdsForJobMap[enName] = skillIdsForJobEntry;
	table->__vftable->removeInnerIter(table, innerIter);
	return true;
}

bool SkillIdManager::SetupEffectIdsForJob(const std::wstring& enName, [[maybe_unused]] char krName) {
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"skill3") || !versionCheckSuccess[L"skill3"]) {
		return false;
	}
	const auto table = DataHelper::GetTable(manager, L"skill3");
	if (table == nullptr) return false;
	auto effectIdsForJobEntry = EffectIdsForJob();
	effectIdsForJobEntry.EnJobName = enName;

	auto skillIdsForJobEntry = skillIdsForJobMap.find(enName);
	if (skillIdsForJobEntry == skillIdsForJobMap.end()) return false;
	auto const& skillIdsForJob = skillIdsForJobEntry->second;

	auto const& fixedTargetEffectIdsForJob = fixedTargetEffectIds.find(enName);

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
				auto record = (Data::Skill3Record*)innerIter->_vtptr->Ptr(innerIter);
				if (record == nullptr) continue;
				if (record->key.id != id) continue;
				if (record->subtype != (__int16)Data::Skill3RecordSubType::SKILL3_RECORD_SUB_ACTIVE_SKILL) continue;
				bool breakOuter = false;
				for (auto const& systematization : record->systematization) {
					if (systematization == 0) continue;
					if (systematization == 30) {
						breakOuter = true;
						break;
					}
				}
				if (breakOuter) continue;
				auto activeSkillRecord = (Data::Skill3ActiveSkillRecord*)record;
				for (auto passiveEffect : activeSkillRecord->passive_effect) {
					if (passiveEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(passiveEffect);
				}
				for (auto castEffect : activeSkillRecord->cast_effect) {
					if (castEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(castEffect);
				}

				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_1) {
					if (swing_caster_effect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_2) {
					if (swing_caster_effect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_3) {
					if (swing_caster_effect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_4) {
					if (swing_caster_effect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect);
				}
				for (auto swing_caster_effect : activeSkillRecord->swing_caster_effect_5) {
					if (swing_caster_effect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(swing_caster_effect);
				}

				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_1) {
					if (execCasterEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_2) {
					if (execCasterEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_3) {
					if (execCasterEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_4) {
					if (execCasterEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect);
				}
				for (auto execCasterEffect : activeSkillRecord->exec_caster_effect_5) {
					if (execCasterEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execCasterEffect);
				}
				for (auto execEffect : activeSkillRecord->exec_effect_1) {
					if (execEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execEffect);
				}
				for (auto execEffect : activeSkillRecord->exec_effect_2) {
					if (execEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execEffect);
				}
				for (auto execEffect : activeSkillRecord->exec_effect_3) {
					if (execEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execEffect);
				}
				for (auto execEffect : activeSkillRecord->exec_effect_4) {
					if (execEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execEffect);
				}
				for (auto execEffect : activeSkillRecord->exec_effect_5) {
					if (execEffect == 0) continue;
					effectIdsForJobEntry.EffectIdsForSpec[specIndex].insert(execEffect);
				}
			} while (innerIter->_vtptr->Next(innerIter));
			table->__vftable->removeInnerIter(table, innerIter);
		}
	}
	effectIdsForJobMap[enName] = effectIdsForJobEntry;
	return true;
}

bool SkillIdManager::SetupAllSkillIds() {
	skillIdsForJobMap.clear();
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	for (auto const& [enName, krName] : jobNameMap) {
		if (SetupSkillIdsForJob(enName, krName)) {
			SetupEffectIdsForJob(enName, krName);
		}
	}
	return true;
}

bool SkillIdManager::SetupJobNameMap() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	jobNameMap.clear();
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	if (!versionCheckSuccess.contains(L"job") || !versionCheckSuccess[L"job"]) {
		CriticalFail = true;
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
		auto record = (Data::JobRecord*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		auto enJobName = (Data::TextRecord*)textTable->__vftable->Find_b8(textTable, record->name2);
		jobNameMap[enJobName->text.data] = record->key.job;
#ifdef _DEBUG
		std::wcout << "{ L\"" << enJobName->text.data << "\", " << +record->key.job << " }," << std::endl;
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
			continue;
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
		auto confirmedVersion = confirmedMajorMinorVersions.find(tableName);
		if (confirmedVersion == confirmedMajorMinorVersions.end()) {
			continue;
		}
		if (tableDef->version.ver == confirmedVersion->second) {
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

void SkillIdManager::ResetIdsToFilter() {
	idsToFilter.clear();
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile())
		return;
	auto& activeProfile = g_PluginConfig.GetActiveProfile();

	//iterate over all jobnames
	for (auto const& [enName, krName] : jobNameMap) {
		auto jobOption = activeProfile.GetJobSkillOption(enName);
		if (jobOption.Name.empty() || !jobOption.IsHideAny()) continue;
		auto skillIdsForJobRecord = skillIdsForJobMap.find(enName);
		if (skillIdsForJobRecord == skillIdsForJobMap.end()) continue;
		auto& skillIdsForJob = skillIdsForJobRecord->second;
		if (jobOption.HideSpec1) {
			auto skillIdsForSpecRecord = skillIdsForJob.SkillIdsForSpec.find(1);
			if (skillIdsForSpecRecord != skillIdsForJob.SkillIdsForSpec.end()) {
				idsToFilter.insert_range(skillIdsForSpecRecord->second);
			}
		}
		if (jobOption.HideSpec2) {
			auto skillIdsForSpecRecord = skillIdsForJob.SkillIdsForSpec.find(2);
			if (skillIdsForSpecRecord != skillIdsForJob.SkillIdsForSpec.end()) {
				idsToFilter.insert_range(skillIdsForSpecRecord->second);
			}
		}
		if (jobOption.HideSpec3) {
			auto skillIdsForSpecRecord = skillIdsForJob.SkillIdsForSpec.find(3);
			if (skillIdsForSpecRecord != skillIdsForJob.SkillIdsForSpec.end()) {
				idsToFilter.insert_range(skillIdsForSpecRecord->second);
			}
		}
		if (jobOption.IsHideAll()) {
			idsToFilter.insert(skillIdsForJob.SharedSkillIds.begin(), skillIdsForJob.SharedSkillIds.end());
		}
	}
	ResetEffectIdsToFilter();
}

void SkillIdManager::ResetEffectIdsToFilter() {
	effectIdsToFilter.clear();
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile())
		return;
	auto& activeProfile = g_PluginConfig.GetActiveProfile();

	//iterate over all jobnames
	for (auto const& [enName, krName] : jobNameMap) {
		auto jobOption = activeProfile.GetJobSkillOption(enName);
		if (jobOption.Name.empty() || !jobOption.IsHideAny()) continue;
		auto effectIdsForJobRecord = effectIdsForJobMap.find(enName);
		if (effectIdsForJobRecord == effectIdsForJobMap.end()) continue;
		auto& effectIdsForJob = effectIdsForJobRecord->second;
		if (jobOption.HideSpec1) {
			auto effectIdsForSpecRecord = effectIdsForJob.EffectIdsForSpec.find(1);
			if (effectIdsForSpecRecord != effectIdsForJob.EffectIdsForSpec.end()) {
				effectIdsToFilter.insert_range(effectIdsForSpecRecord->second);
			}
		}
		if (jobOption.HideSpec2) {
			auto effectIdsForSpecRecord = effectIdsForJob.EffectIdsForSpec.find(2);
			if (effectIdsForSpecRecord != effectIdsForJob.EffectIdsForSpec.end()) {
				effectIdsToFilter.insert_range(effectIdsForSpecRecord->second);
			}
		}
		if (jobOption.HideSpec3) {
			auto effectIdsForSpecRecord = effectIdsForJob.EffectIdsForSpec.find(3);
			if (effectIdsForSpecRecord != effectIdsForJob.EffectIdsForSpec.end()) {
				effectIdsToFilter.insert_range(effectIdsForSpecRecord->second);
			}
		}
	}
}

__int64 SkillIdManager::SkillShow3KeyHelper::BuildKey(__int32 id_, __int16 variation_id_, __int16 skillskin_id_) {
	Data::Skillshow3Record::Key key{};
	key.id = id_;
	key.variation_id = variation_id_;
	key.skillskin_id = skillskin_id_;
	return std::bit_cast<__int64>(key);
}

Data::Skillshow3Record::Key SkillIdManager::SkillShow3KeyHelper::ExtractKey(__int64 key) {
	Data::Skillshow3Record::Key parts{};
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
		auto effectRecord = (Data::EffectRecord*)record;
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
	}
	for (auto& [key, kvp] : effectRestoreList) {
		kvp.clear();
	}
	effectRestoreList.clear();
}

void SkillIdManager::RemoveAnimationsForEffect(Data::EffectRecord* effectRecord) {
	if (effectRestoreList.contains(effectRecord->key.key)) return;
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
	auto& effectFilters = g_PluginConfig.GetActiveProfile().EffectFilters;
	for (auto const& filter : effectFilters) {
		if (filter.IsAlias) continue; //TODO: add alias support
		auto record = table->__vftable->Find_b8(table, filter.Key);
		if (record == nullptr) continue;
		auto effectRecord = (Data::EffectRecord*)record;
		RemoveAnimationsForEffect(effectRecord);
	}
	for (auto const effectId : effectIdsToFilter) {
		auto record = table->__vftable->Find_b8(table, effectId);
		if (record == nullptr) continue;
		auto effectRecord = (Data::EffectRecord*)record;
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
	RemoveEffects();
}

bool SkillIdManager::IsCriticalFail() const {
	return CriticalFail;
}