#include "BSFunctions.h"
#include "Data.h"
#include "DrEl.h"
#include "Hooks.h"
#include "PluginConfig.h"
#include "EU/skillshow3/AAA_skillshow3_RecordBase.h"
#include "KR/skillshow3/AAA_skillshow3_RecordBase.h"
#include "SkillIdManager.h"
#include <cstdint>
#include <format>
#include <string>
#include <unordered_map>
#ifdef _DEBUG
#include <iostream>
#endif
DrDataTable* (__fastcall* oData_DataManager_Effect)();

template <typename Callable>
void handleKeyEvent(EInputKeyEvent const* InputKeyEvent, int vKeyTarget, const Callable& onPress) {
	static std::unordered_map<int, bool> toggleKeys;
	if (vKeyTarget == 0)  return;
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

template <typename Callable>
void handleKeyEventWithModifiers(
	EInputKeyEvent const* InputKeyEvent,
	int vKeyTarget,
	bool alt,
	bool shift,
	bool ctrl,
	const Callable& onPress
) {
	static std::unordered_map<int, bool> toggleKeys;
	if (vKeyTarget == 0)  return;
	if (InputKeyEvent->_vKey == vKeyTarget) {
		bool& toggleKey = toggleKeys[vKeyTarget];
		if (!toggleKey && InputKeyEvent->KeyState == EngineKeyStateType::EKS_PRESSED) {
			// Check for Alt, Shift, and Ctrl modifiers
			if ((alt == InputKeyEvent->bAltPressed) &&
				(shift == InputKeyEvent->bShiftPressed) &&
				(ctrl == InputKeyEvent->bCtrlPressed)) {
				toggleKey = true;
				onPress();
			}
		}
		else if (toggleKey && InputKeyEvent->KeyState == EngineKeyStateType::EKS_RELEASED) {
			toggleKey = false;
		}
	}
}

bool reloadRequired = false;

static void ReloadSkillShow3OnHotkeyPress() {
	if (reloadRequired) {
		auto table = DataHelper::GetTable(g_SkillIdManager.GetDataManager(), L"skillshow3");
		if (table != nullptr) {
			if (g_PluginConfig.GetAnimFilterConfig().ExperimentalMemoryLoading) {
				table->__vftable->SetUseLowMemory(table, false);
			}
			auto it = table->__vftable->createInnerIter_d0(table);
			//cycle the cache
			do {
				if (!it->_vtptr->IsValid(it)) continue;
#ifdef _BNSEU
				if (auto record = (BnsTables::EU::skillshow3_Record*)it->_vtptr->Ptr(it); record == nullptr) continue;
#elif _BNSKR
				if (auto record = (BnsTables::KR::skillshow3_Record*)it->_vtptr->Ptr(it); record == nullptr) continue;
#endif
			} while (it->_vtptr->Next(it));
			reloadRequired = false;
		}
	}
}

extern _AddInstantNotification oAddInstantNotification;

static void ReloadConfigOnHotkeyPress() {
	g_PluginConfig.ReloadFromConfig();
	g_SkillIdManager.ResetIdsToFilter();
	g_SkillIdManager.ReapplyEffectFilters();
	ReloadSkillShow3OnHotkeyPress();
	auto message = LR"(AnimFilter Config Reloaded)";
	auto gameWorld = BNSClient_GetWorld();
	BSMessaging::DisplaySystemChatMessage(gameWorld, &oAddInstantNotification, message, false);
	if (g_PluginConfig.AnimFilterEnabled() && g_PluginConfig.GetActiveProfile().Text != L"") {
		BSMessaging::DisplaySystemChatMessage(gameWorld, &oAddInstantNotification, g_PluginConfig.GetActiveProfile().Text.c_str(), false);
	}
}

static void SetProfileOnHotkeyPress(int profileId) {
	g_PluginConfig.SetActiveFilter(profileId);
	g_SkillIdManager.ResetIdsToFilter();
	g_SkillIdManager.ReapplyEffectFilters();
	ReloadSkillShow3OnHotkeyPress();
	if (!g_PluginConfig.AnimFilterEnabled()) return;
	std::wstring message = std::format(LR"(AnimFilter Using Profile {})", profileId);
	auto gameWorld = BNSClient_GetWorld();
	BSMessaging::DisplaySystemChatMessage(gameWorld, &oAddInstantNotification, message.c_str(), false);
	if (g_PluginConfig.GetActiveProfile().Text != L"") {
		BSMessaging::DisplaySystemChatMessage(gameWorld, &oAddInstantNotification, g_PluginConfig.GetActiveProfile().Text.c_str(), false);
	}
}

bool(__fastcall* oBUIWorld_ProcessEvent)(uintptr_t* This, EInputKeyEvent* InputKeyEvent);
bool __fastcall hkBUIWorld_ProcessEvent(uintptr_t* This, EInputKeyEvent* InputKeyEvent) {
	if (!InputKeyEvent)
		return false;
	if (!g_PluginConfig.IsLoaded()) return oBUIWorld_ProcessEvent(This, InputKeyEvent);
	if (InputKeyEvent->vfptr->Id(InputKeyEvent) == 2) {
		auto& animFilterConfig = g_PluginConfig.GetAnimFilterConfig();
		handleKeyEventWithModifiers(InputKeyEvent, animFilterConfig.ReloadKey.KeyCode, animFilterConfig.ReloadKey.Alt, animFilterConfig.ReloadKey.Shift, animFilterConfig.ReloadKey.Ctrl, ReloadConfigOnHotkeyPress);
		handleKeyEventWithModifiers(InputKeyEvent, animFilterConfig.Profile1.KeyCode, animFilterConfig.Profile1.Alt, animFilterConfig.Profile1.Shift, animFilterConfig.Profile1.Ctrl, []() {
			SetProfileOnHotkeyPress(1);
			});
		handleKeyEventWithModifiers(InputKeyEvent, animFilterConfig.Profile2.KeyCode, animFilterConfig.Profile2.Alt, animFilterConfig.Profile2.Shift, animFilterConfig.Profile2.Ctrl, []() {
			SetProfileOnHotkeyPress(2);
			});
		handleKeyEventWithModifiers(InputKeyEvent, animFilterConfig.Profile3.KeyCode, animFilterConfig.Profile3.Alt, animFilterConfig.Profile3.Shift, animFilterConfig.Profile3.Ctrl, []() {
			SetProfileOnHotkeyPress(3);
			});
		handleKeyEventWithModifiers(InputKeyEvent, animFilterConfig.Profile4.KeyCode, animFilterConfig.Profile4.Alt, animFilterConfig.Profile4.Shift, animFilterConfig.Profile4.Ctrl, []() {
			SetProfileOnHotkeyPress(4);
			});
		handleKeyEventWithModifiers(InputKeyEvent, animFilterConfig.Profile5.KeyCode, animFilterConfig.Profile5.Alt, animFilterConfig.Profile5.Shift, animFilterConfig.Profile5.Ctrl, []() {
			SetProfileOnHotkeyPress(5);
			});
	}
	return oBUIWorld_ProcessEvent(This, InputKeyEvent);
}
#ifdef _BNSEU
void RemoveAnimationsForRecord(BnsTables::EU::skillshow3_Record* record)
#elif _BNSKR
void RemoveAnimationsForRecord(BnsTables::KR::skillshow3_Record* record)
#endif
{
	auto setToNull = [](wchar_t* member) {
		*member = L'\0';
		};

	// Iterate over the member variables of the record and set them to L'\0'
	for (wchar_t* member : {
		record->player_cast_show, record->player_exec_show_1, record->player_exec_show_2,
		record->player_exec_show_3, record->player_exec_show_4, record->player_exec_show_5,
		record->player_fire_show_1, record->player_fire_show_2, record->player_fire_show_3,
		record->player_fire_show_4, record->player_fire_show_5, record->player_stop_show,
		record->cast_show, record->decal_show_1, record->fire_show_1, record->fire_miss_show_1,
		record->exec_show_1, record->exec_hit_show_1, record->exec_immune_show_1,
		record->exec_dodge_show_1, record->exec_parry_show_1, record->exec_bounce_show_1,
		record->exec_bounce_caster_show_1, record->exec_counter_show_1, record->exec_critical_show_1,
		record->return_show_1, record->decal_show_2, record->fire_show_2, record->fire_miss_show_2,
		record->exec_show_2, record->exec_hit_show_2, record->exec_immune_show_2,
		record->exec_dodge_show_2, record->exec_parry_show_2, record->exec_bounce_show_2,
		record->exec_bounce_caster_show_2, record->exec_counter_show_2, record->exec_critical_show_2,
		record->return_show_2, record->decal_show_3, record->fire_show_3, record->fire_miss_show_3,
		record->exec_show_3, record->exec_hit_show_3, record->exec_immune_show_3,
		record->exec_dodge_show_3, record->exec_parry_show_3, record->exec_bounce_show_3,
		record->exec_bounce_caster_show_3, record->exec_counter_show_3, record->exec_critical_show_3,
		record->return_show_3, record->decal_show_4, record->fire_show_4, record->fire_miss_show_4,
		record->exec_show_4, record->exec_hit_show_4, record->exec_immune_show_4,
		record->exec_dodge_show_4, record->exec_parry_show_4, record->exec_bounce_show_4,
		record->exec_bounce_caster_show_4, record->exec_counter_show_4, record->exec_critical_show_4,
		record->return_show_4, record->decal_show_5, record->fire_show_5, record->fire_miss_show_5,
		record->exec_show_5, record->exec_hit_show_5, record->exec_immune_show_5,
		record->exec_dodge_show_5, record->exec_parry_show_5, record->exec_bounce_show_5,
		record->exec_bounce_caster_show_5, record->exec_counter_show_5, record->exec_critical_show_5,
		record->return_show_5, record->finish_show, record->bomb_show, record->cancel_show,
		record->stop_show, record->triggered_show, record->trigger_cast_show,
		record->triggered_enemy_show, record->trigger_show, record->trigger_hit_show,
		record->trigger_immune_show, record->trigger_dodge_show, record->trigger_parry_show,
		record->trigger_bounce_show, record->trigger_counter_show, record->trigger_critical_show
		}) {
		setToNull(member);
	}
}

BnsTables::Shared::DrEl* (__fastcall* oFind_b8)(DrMultiKeyTable* thisptr, unsigned __int64 key);
BnsTables::Shared::DrEl* __fastcall hkFind_b8(DrMultiKeyTable* thisptr, unsigned __int64 key) {
	if (!g_PluginConfig.AnimFilterEnabled() || !g_PluginConfig.IsLoaded() || !g_PluginConfig.HasActiveProfile()) {
		return oFind_b8(thisptr, key);
	}
	if (thisptr->_tabledef->type != g_SkillIdManager.GetSkillshowTableId()) return oFind_b8(thisptr, key);
	const auto& ids = g_SkillIdManager.GetIdsToFilter();
	const auto skillId = static_cast<int32_t>(key);
#ifdef _DEBUG
	//print the skill id and variation id from record_d
	auto skillshowKey_d = SkillIdManager::SkillShow3KeyHelper::ExtractKey(key);
	std::wcout << std::format(L"Skill Id: {}, Variation Id: {}\n", skillshowKey_d.id, skillshowKey_d.variation_id);
#endif //_DEBUG
	if (!ids.contains(skillId)) return oFind_b8(thisptr, key);
	if (const auto& taxiIds = g_SkillIdManager.GetTaxiSkillIds(); taxiIds.contains(skillId)) {
		const auto& taxiIdVariations = g_SkillIdManager.GetTaxiExclusionIdVariations();
		const auto skillshowKey = SkillIdManager::SkillShow3KeyHelper::ExtractKey(key);
		if (taxiIdVariations.at(skillId) == skillshowKey.variation_id) return oFind_b8(thisptr, key);
	}
	auto recordBase = oFind_b8(thisptr, key);
	if (recordBase == nullptr) return oFind_b8(thisptr, key);
#ifdef _BNSEU
	auto record = (BnsTables::EU::skillshow3_Record*)recordBase;
#elif _BNSKR
	auto record = (BnsTables::KR::skillshow3_Record*)recordBase;
#endif
	RemoveAnimationsForRecord(record);
	reloadRequired = true;
	return recordBase;
}

void* (__fastcall* BNSClient_GetWorld)();
