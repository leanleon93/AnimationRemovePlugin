#include "EffectRemover.h"
#include "Hooks.h"

EffectRemover::EffectRemover(__int64 const* dataManagerPtr) : dataManagerPtr(dataManagerPtr) {
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

void EffectRemover::RestoreAllSkillShow3Records(DrDataTable const* table) {
	auto it = DataHelper::DrElIter_DrElIter();
	oDrElIter_DrElIter(it, table);
	do {
		auto record = (Data::Skillshow3Record*)it->_node->_vtptr->Ptr(it->_node);
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
	} while (it->_node->_vtptr->Next(it->_node));
	DataHelper::FreeDrElIter(it);
	for (auto& [attributeName, value] : skillShowRestorationMap) {
		value.clear();
	}
	skillShowRestorationMap.clear();
}

void EffectRemover::RemoveEffectEntriesFromSkillshow3(Data::Skillshow3Record* record) {
	TrySetWcharEmpty(record->key, record->exec_show_1, L"exec_show_1");
}

void EffectRemover::RemoveEffectsForIds(DrDataTable* table, const std::unordered_set<int>& ids) {
	auto it = DataHelper::DrElIter_DrElIter();
	oDrElIter_DrElIter(it, table);
	do {
		auto record = (Data::Skillshow3Record*)it->_node->_vtptr->Ptr(it->_node);
		if (record == nullptr) continue;
		if (ids.contains(record->key.id)) {
			RemoveEffectEntriesFromSkillshow3(record);
		}
	} while (it->_node->_vtptr->Next(it->_node));
	DataHelper::FreeDrElIter(it);
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
	RemoveEffectsForIds(table, ids);
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
	RestoreAllSkillShow3Records(table);
}