#include "EffectRemover.h"
#include "Hooks.h"
#include <iostream>

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

__int32* counterIdPtr = nullptr;

static bool RemoveTest(const DrDataTable* const table, const std::unordered_set<int>& ids) {
	if (!table) return false;
	auto it = DataHelper::DrElIter_DrElIter();
	oDrElIter_DrElIter(it, table);
	/*do {
		(Data::Skillshow3Record*)it->_node->_vtptr->Ptr(it->_node)->_el;
	} while (it->_node->_vtptr->Next(it->_node));
	oDrElIter_DrElIter(it, table);*/
	while (it->_node->_vtptr->IsValid(it->_node)) {
		auto recordBase = it->_node->_vtptr->Ptr(it->_node);
		if (recordBase == nullptr) continue;
		std::wcout << L"Found record: " << recordBase << std::endl;
		it->_node->_vtptr->Next(it->_node);
	}
	/*do {
		if (it->_node->_vtptr->IsValid(it->_node) == false) {
			continue;
		}
		auto baseRecord = it->_node->_vtptr->Ptr(it->_node);
		if (counterIdPtr != nullptr && *counterIdPtr != 190060) {
			std::wcout << L"Found the fucker: " << *counterIdPtr << std::endl;
		}
		if (baseRecord == nullptr) continue;
		auto record = (Data::Skillshow3Record*)baseRecord;
		if (record == nullptr) continue;
		if (ids.contains(record->key.id)) {
			uintptr_t uintptr = reinterpret_cast<uintptr_t>(record);
			counterIdPtr = reinterpret_cast<__int32*>(uintptr + 8);
			std::wcout << L"Found record: " << record->key.id << std::endl;
			printf("Address of %s is %p\n", "record", (void*)record);
			std::cout << std::endl;
			if (record->exec_show_1 != nullptr) {
				*record->exec_show_1 = L'\0';
			}
		}
		if (record->key.id == 5902271) {
			std::wcout << L"Found record: " << record->key.id << std::endl;
		}
	} while (it->_node->_vtptr->Next(it->_node));*/
	DataHelper::FreeDrElIter(it);
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