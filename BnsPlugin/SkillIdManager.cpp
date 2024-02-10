#include "SkillIdManager.h"
#include "Records/Job/JobRecordBase.h"
#include "Records/Text/TextRecordBase.h"
#include "Records/SkillInheritance/SkillInheritanceBase.h"
#include <algorithm>
#include "Records/Skill3/Skill3RecordBase.h"
#include "Records/Skill3/Skill3ActiveSkillRecord.h"
#include "Records/Itemskill/ItemskillRecordBase.h"
#include "Records/Effect/EffectRecordBase.h"
#include "PluginConfig.h"

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
	const auto table = DataHelper::GetTable(manager, L"itemskill");
	if (table == nullptr) return {};
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	std::unordered_set<int> itemSkills;
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		auto record = (Data::ItemSkillRecord*)innerIter->_vtptr->Ptr(innerIter);
		if (record == nullptr) continue;
		if (record->skill_id != id) continue;
		auto itemSimSkillId = reinterpret_cast<int*>(&record->item_sim_skill);
		if (*itemSimSkillId == 0) continue;
		itemSkills.insert(*itemSimSkillId);
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

bool SkillIdManager::SetupAllSkillIds() {
	skillIdsForJobMap.clear();
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	for (auto const& [enName, krName] : jobNameMap) {
		SetupSkillIdsForJob(enName, krName);
	}
	return true;
}

bool SkillIdManager::SetupJobNameMap() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	jobNameMap.clear();
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
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
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return true;
}

bool SkillIdManager::Setup() {
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

void SkillIdManager::RemoveEffects() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return;
	}
	if (!g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile()) return;
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	const auto table = DataHelper::GetTable(manager, L"effect");
	if (table == nullptr) return;
	auto& effectFilters = g_PluginConfig.GetActiveProfile().EffectFilters;
	for (auto const& filter : effectFilters) {
		if (filter.IsAlias) continue; //TODO: add alias support
		auto record = table->__vftable->Find_b8(table, filter.Key);
		if (record == nullptr) continue;
		auto effectRecord = (Data::EffectRecord*)record;
		std::string attribute = "normal_component";
		if (effectRecord->normal_component != nullptr && effectRecord->normal_component[0] != L'\0') {
			effectRestoreList[filter.Key][attribute] = effectRecord->normal_component[0];
			*effectRecord->normal_component = L'\0';
		}
		if (effectRecord->critical_component != nullptr && effectRecord->critical_component[0] != L'\0') {
			attribute = "critical_component";
			effectRestoreList[filter.Key][attribute] = effectRecord->critical_component[0];
			*effectRecord->critical_component = L'\0';
		}
		if (effectRecord->back_normal_component != nullptr && effectRecord->back_normal_component[0] != L'\0') {
			attribute = "back_normal_component";
			effectRestoreList[filter.Key][attribute] = effectRecord->back_normal_component[0];
			*effectRecord->back_normal_component = L'\0';
		}
		if (effectRecord->back_critical_component != nullptr && effectRecord->back_critical_component[0] != L'\0') {
			attribute = "back_critical_component";
			effectRestoreList[filter.Key][attribute] = effectRecord->back_critical_component[0];
			*effectRecord->back_critical_component = L'\0';
		}
		if (effectRecord->buff_continuance_component != nullptr && effectRecord->buff_continuance_component[0] != L'\0') {
			attribute = "buff_continuance_component";
			effectRestoreList[filter.Key][attribute] = effectRecord->buff_continuance_component[0];
			*effectRecord->buff_continuance_component = L'\0';
		}
		if (effectRecord->immune_buff_component != nullptr && effectRecord->immune_buff_component[0] != L'\0') {
			attribute = "immune_buff_component";
			effectRestoreList[filter.Key][attribute] = effectRecord->immune_buff_component[0];
			*effectRecord->immune_buff_component = L'\0';
		}
		if (effectRecord->detach_show != nullptr && effectRecord->detach_show[0] != L'\0') {
			attribute = "detach_show";
			effectRestoreList[filter.Key][attribute] = effectRecord->detach_show[0];
			*effectRecord->detach_show = L'\0';
		}
	}
}

void SkillIdManager::ReapplyEffectFilters() {
	RestoreEffects();
	RemoveEffects();
}