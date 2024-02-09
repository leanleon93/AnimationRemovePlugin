#include "EffectRemover.h"
#include "Hooks.h"
#include <iostream>
#include "./Records/Job/JobRecordBase.h"
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <cstdlib>
#include "AnimFilterConfig.h"
#include "SkillIdJson.h"

using json = nlohmann::json;

EffectRemover::EffectRemover(__int64 const* dataManagerPtr) : dataManagerPtr(dataManagerPtr)
{
}

void EffectRemover::TrySetWcharEmpty(const Data::Skillshow3Record::Key& recordKey, wchar_t* attribute, std::wstring const& attributeName)
{
	if (attribute != nullptr && attribute[0] != L'\0') {
		if (auto outerIt = skillShowRestorationMap.find(recordKey.key); outerIt == skillShowRestorationMap.end()) {
			skillShowRestorationMap[recordKey.key][attributeName] = attribute[0];
		}
		else {
			auto& innerMap = outerIt->second;
			auto innerIt = innerMap.find(attributeName);
			if (innerIt == innerMap.end()) {
				innerMap[attributeName] = attribute[0];
			}
		}
		*attribute = L'\0';
	}
}

void EffectRemover::RestoreAllSkillShow3Records(DrDataTable* table) {
	auto it = table->__vftable->createInnerIter_d0(table);
	do {
		auto record = (Data::Skillshow3Record*)it->_vtptr->Ptr(it);
		if (record == nullptr) continue;
		auto outerIt = skillShowRestorationMap.find(record->key.key);
		if (outerIt != skillShowRestorationMap.end()) {
			for (auto const& [attributeName, value] : outerIt->second) {
				if (value != L'\0') {
					if (attributeName == L"exec_show_1") {
						record->exec_show_1[0] = value;
					}
				}
			}
		}
	} while (it->_vtptr->Next(it));
	table->__vftable->removeInnerIter(table, it);
	for (auto& [attributeName, value] : skillShowRestorationMap) {
		value.clear();
	}
	skillShowRestorationMap.clear();
}

void EffectRemover::RemoveEffectEntriesFromSkillshow3(Data::Skillshow3Record* record) {
	TrySetWcharEmpty(record->key, record->exec_show_1, L"exec_show_1");
}

void EffectRemover::RemoveEffectsForIds(DrDataTable* table, const std::unordered_set<int>& ids) {
	auto it = table->__vftable->createInnerIter_d0(table);
	do {
		auto record = (Data::Skillshow3Record*)it->_vtptr->Ptr(it);
		if (record == nullptr) continue;
		if (ids.contains(record->key.id)) {
			RemoveEffectEntriesFromSkillshow3(record);
		}
	} while (it->_vtptr->Next(it));
	table->__vftable->removeInnerIter(table, it);
}

__int64 EffectRemover::BuildKey(__int32 id_, __int16 variation_id_, __int16 skillskin_id_) {
	Data::Skillshow3Record::Key key{};
	key.id = id_;
	key.variation_id = variation_id_;
	key.skillskin_id = skillskin_id_;
	return std::bit_cast<__int64>(key);
}

Data::Skillshow3Record::Key EffectRemover::ExtractKey(__int64 key) {
	Data::Skillshow3Record::Key parts{};
	parts.key = key;
	return parts;
}

static bool RemoveTest(DrDataTable* const table, const std::unordered_set<int>& ids) {
	if (!table) return false;
	table->__vftable->SetUseLowMemory(table, false);
	auto builtKey = EffectRemover::BuildKey(190060, 1, 0);
	auto recordBase = table->__vftable->Find_b8(table, builtKey);
	auto record = (Data::Skillshow3Record*)recordBase;
	record->play_player_show = true;
	builtKey = EffectRemover::BuildKey(231240, 43, 0);
	recordBase = table->__vftable->Find_b8(table, builtKey);
	record = (Data::Skillshow3Record*)recordBase;
	*record->exec_show_1 = L'\0';
	auto innerIter = table->__vftable->createInnerIter_d0(table);
	do {
		if (!innerIter->_vtptr->IsValid(innerIter)) continue;
		if (auto record = (Data::Skillshow3Record*)innerIter->_vtptr->Ptr(innerIter); record == nullptr) continue;
		3;
	} while (innerIter->_vtptr->Next(innerIter));
	table->__vftable->removeInnerIter(table, innerIter);
	return true;
}

bool EffectRemover::RemoveEffects() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	const auto table = DataHelper::GetTable(manager, L"skillshow3");
	if (table == nullptr) {
		return false;
	}
	const std::unordered_set<int> ids = { 190060 }; //TODO: get for classes
	RemoveTest(table, ids);
	//RemoveEffectsForIds(table, ids);
	return true;
}

void EffectRemover::RestoreEffects() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return;
	}
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	const auto table = DataHelper::GetTable(manager, L"skillshow3");
	if (table == nullptr) {
		return;
	}
	//RestoreAllSkillShow3Records(table);
}

//std::unordered_set<Data::JobRecord> EffectRemover::GetJobRecords() {
//	std::unordered_set<Data::JobRecord> records;
//	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
//	const auto jobTable = DataHelper::GetTable(manager, L"job");
//	if (jobTable == nullptr) {
//		return records;
//	}
//	auto it = jobTable->__vftable->createInnerIter_d0(jobTable);
//	do {
//		auto record = (Data::JobRecord*)it->_vtptr->Ptr(it);
//		if (record == nullptr) continue;
//		records.insert(*record);
//	} while (it->_vtptr->Next(it));
//	return records;
//}

static std::string GetDocumentsDirectory() {
	if (const char* userProfile = std::getenv("USERPROFILE"); userProfile != nullptr) {
		return std::string(userProfile) + "\\Documents";
	}
	return "";
}

//static AnimFilterConfig LoadAnimFilterConfig() {
//	const auto documentsDirectory = GetDocumentsDirectory();
//	const auto configPath = documentsDirectory + "\\BnS\\anim_filter_config.json";
//	std::ifstream file(configPath);
//	if (!file.is_open()) {
//		return AnimFilterConfig();
//	}
//	json jsonData;
//	file >> jsonData;
//
//	AnimFilterConfig config;
//
//	// Iterate over the array of job filters
//	for (const auto& filter : jsonData["JobFilters"]) {
//		AnimFilterJobConfig jobConfig;
//		jobConfig.TechnicalJobName = filter["TechnicalJobName"];
//		jobConfig.Specs = filter["Specs"].get<std::vector<int>>();
//		config.JobFilters.push_back(jobConfig);
//	}
//
//	return config;
//}
//
//std::unordered_set<int> GetIdsForSpec(const std::string& technicalName, int specIndex) {
//}
//
//std::unordered_set<int> GetIdsForJob(const AnimFilterJobConfig& jobConfig) {
//	std::unordered_set<int> ids;
//	for (const auto& spec : jobConfig.Specs) {
//		auto specIds = GetIdsForSpec(jobConfig.TechnicalJobName, spec);
//		ids.insert(specIds.begin(), specIds.end());
//	}
//	return ids;
//}

static SkillIdJson ParseSkillIdJson(const std::string& filename) {
	std::ifstream file(filename);
	if (!file.is_open()) {
		throw std::runtime_error("Failed to open JSON file");
	}

	json jsonData;
	file >> jsonData;

	// Parse the json data and populate the SkillIdJson struct
	SkillIdJson skillIdJson;
	skillIdJson.Ids = jsonData["Ids"].get<std::vector<int>>();

	return skillIdJson;
}

const std::vector<int> idExclusionList = {
	66104,
	66105,
	66106,
	66022,
	66020,
	66021,
	66023,
	66024,
	66050
};

bool EffectRemover::SetupIdsToFilter() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return false;
	}
	const auto manager = reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
	const auto table = DataHelper::GetTable(manager, L"skillshow3");
	if (table == nullptr) {
		return false;
	}
	auto multikeytable = (DrMultiKeyTable*)table;
	const auto tableId = DataHelper::GetTableId(manager, L"skillshow3");
	if (tableId == 0) {
		return false;
	}
	this->skillshowTableId = tableId;
	/*for (auto animFilterConfig = LoadAnimFilterConfig(); const auto & jobConfig : animFilterConfig.JobFilters) {
		auto ids = GetIdsForJob(jobConfig);
		this->idsToFilter.insert(ids.begin(), ids.end());
	}*/
	const auto documentsDirectory = GetDocumentsDirectory();
	const auto configPath = documentsDirectory + "\\BnS\\binPatches\\out\\skillIds_Zen_Archer.json";

	for (auto skillIdJson = ParseSkillIdJson(configPath); const auto & id : skillIdJson.Ids) {
		if (std::ranges::find(idExclusionList, id) == idExclusionList.end()) {
			this->idsToFilter.insert(id);
		}
	}
	return true;
}

std::unordered_set<int> EffectRemover::GetIdsToFilter() const {
	return this->idsToFilter;
}

Data::DataManager* EffectRemover::GetDataManager() {
	if (this->dataManagerPtr == nullptr || *this->dataManagerPtr == NULL) {
		return nullptr;
	}
	return reinterpret_cast<Data::DataManager*>(*this->dataManagerPtr);
}