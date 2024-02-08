#include "Hooks.h";
#include "PluginConfig.h"
#include <iostream>
#include <unordered_map>
#include "Records/Effect/EffectRecordBase.h"
#include "Records/Skillshow3/SkillShow3Base.h"
#include "Data.h"
#include "EffectRemover.h"

extern const std::unique_ptr<PluginConfig> pluginConfig;

const void* (__fastcall* oDrElIter_DrElIter)(DrElIter* thisptr, const DrDataTable* table);

const DrDataTable* (__fastcall* oData_DataManager_Effect)();

template <typename Callable>
void handleKeyEvent(EInputKeyEvent* InputKeyEvent, int vKeyTarget, const Callable& onPress) {
	static std::unordered_map<int, bool> toggleKeys;

	if (InputKeyEvent->_vKey == vKeyTarget) {
		bool& toggleKey = toggleKeys[vKeyTarget];
		if (!toggleKey && InputKeyEvent->KeyState == EngineKeyStateType::EKS_PRESSED) {
			toggleKey = true;
			onPress();
		}
		else if (toggleKey && InputKeyEvent->KeyState == EngineKeyStateType::EKS_RELEASED) {
			toggleKey = false;
		}
	}
}
#ifdef _DEBUG
static std::wostream& operator<<(std::wostream& os, const Data::EffectRecord& effectRecord)
{
	os << L"Key: " << effectRecord.key.key << L"\n"
		<< L"Alias: " << effectRecord.alias << L"\n"
		<< L"Name2: " << effectRecord.name2 << L"\n"
		<< L"Name3: " << effectRecord.name3 << L"\n"
		<< L"Level: " << effectRecord.level;

	return os;
}
#endif // _DEBUG

static void EffectTableTest()
{
	const auto table = oData_DataManager_Effect();
	if (table) {
		auto it = DataHelper::DrElIter_DrElIter();
		oDrElIter_DrElIter(it, table);
		do {
			auto record = (Data::EffectRecord*)it->_node->_vtptr->Ptr(it->_node);
			if (record->key.id == 23500437) {
#ifdef _DEBUG
				std::wcout << *record << std::endl;
				printf("Address of %s is %p\n", "record", (void*)record);
#endif // _DEBUG
				record->name2 = 0;
			}
		} while (it->_node->_vtptr->Next(it->_node));
		std::wcout << L"Done" << std::endl;
		DataHelper::FreeDrElIter(it);
	}
}

extern EffectRemover effectRemover;

bool toggle = true;
static void SkillShow3TableTest() {
	if (toggle) {
		effectRemover.RestoreEffects();
	}
	else {
		effectRemover.RemoveEffects();
	}
	toggle = !toggle;
}

bool(__fastcall* oBInputKey)(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);
bool __fastcall hkBInputKey(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent) {
	if (InputKeyEvent->bAltPressed) {
		handleKeyEvent(InputKeyEvent, 0x50, []() {
			EffectTableTest();
			SkillShow3TableTest();
			});
	}
	return oBInputKey(thisptr, InputKeyEvent);
}

World* (__fastcall* BNSClient_GetWorld)();
World* __fastcall hkBNSClient_GetWorld() {
	World* world = BNSClient_GetWorld();
	return world;
}