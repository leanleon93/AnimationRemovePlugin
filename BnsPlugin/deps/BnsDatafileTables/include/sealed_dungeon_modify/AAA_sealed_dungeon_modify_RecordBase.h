/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct sealed_dungeon_modify_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"modify_npc_exp_percent") == 0) return modify_npc_exp_percent;
			if (wcscmp(fieldName, L"modify_npc_sealed_dungeon_exp_percent") == 0) return modify_npc_sealed_dungeon_exp_percent;
			if (wcscmp(fieldName, L"modify_clear_sealed_dungeon_exp_percent") == 0) return modify_clear_sealed_dungeon_exp_percent;
			if (wcscmp(fieldName, L"modify_npc_immune_breaker_count") == 0) return modify_npc_immune_breaker_count;
			if (wcscmp(fieldName, L"modify_npc_immune_breaker_init_duration") == 0) return modify_npc_immune_breaker_init_duration;
			if (wcscmp(fieldName, L"modify_skill_duration") == 0) return modify_skill_duration;
			if (wcscmp(fieldName, L"gimmick_option_fixed") == 0) return gimmick_option_fixed;
			if (wcscmp(fieldName, L"gimmick_option_fixed_1") == 0) return gimmick_option_fixed[0];
			if (wcscmp(fieldName, L"gimmick_option_fixed_2") == 0) return gimmick_option_fixed[1];
			if (wcscmp(fieldName, L"gimmick_option_fixed_3") == 0) return gimmick_option_fixed[2];
			if (wcscmp(fieldName, L"gimmick_option_fixed_4") == 0) return gimmick_option_fixed[3];
			if (wcscmp(fieldName, L"gimmick_option_fixed_5") == 0) return gimmick_option_fixed[4];
			if (wcscmp(fieldName, L"gimmick_option_week_1") == 0) return gimmick_option_week_1;
			if (wcscmp(fieldName, L"gimmick_option_week_1_1") == 0) return gimmick_option_week_1[0];
			if (wcscmp(fieldName, L"gimmick_option_week_1_2") == 0) return gimmick_option_week_1[1];
			if (wcscmp(fieldName, L"gimmick_option_week_2") == 0) return gimmick_option_week_2;
			if (wcscmp(fieldName, L"gimmick_option_week_2_1") == 0) return gimmick_option_week_2[0];
			if (wcscmp(fieldName, L"gimmick_option_week_2_2") == 0) return gimmick_option_week_2[1];
			if (wcscmp(fieldName, L"gimmick_option_week_3") == 0) return gimmick_option_week_3;
			if (wcscmp(fieldName, L"gimmick_option_week_3_1") == 0) return gimmick_option_week_3[0];
			if (wcscmp(fieldName, L"gimmick_option_week_3_2") == 0) return gimmick_option_week_3[1];
			if (wcscmp(fieldName, L"gimmick_option_week_4") == 0) return gimmick_option_week_4;
			if (wcscmp(fieldName, L"gimmick_option_week_4_1") == 0) return gimmick_option_week_4[0];
			if (wcscmp(fieldName, L"gimmick_option_week_4_2") == 0) return gimmick_option_week_4[1];
			if (wcscmp(fieldName, L"gimmick_option_week_5") == 0) return gimmick_option_week_5;
			if (wcscmp(fieldName, L"gimmick_option_week_5_1") == 0) return gimmick_option_week_5[0];
			if (wcscmp(fieldName, L"gimmick_option_week_5_2") == 0) return gimmick_option_week_5[1];
			if (wcscmp(fieldName, L"target_boss_npc") == 0) return target_boss_npc;
			if (wcscmp(fieldName, L"target_boss_npc_1") == 0) return target_boss_npc[0];
			if (wcscmp(fieldName, L"target_boss_npc_2") == 0) return target_boss_npc[1];
			if (wcscmp(fieldName, L"target_boss_npc_3") == 0) return target_boss_npc[2];
			if (wcscmp(fieldName, L"boss_npc_effect_week_1") == 0) return boss_npc_effect_week_1;
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_1") == 0) return boss_npc_effect_week_1[0];
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_2") == 0) return boss_npc_effect_week_1[1];
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_3") == 0) return boss_npc_effect_week_1[2];
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_4") == 0) return boss_npc_effect_week_1[3];
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_5") == 0) return boss_npc_effect_week_1[4];
			if (wcscmp(fieldName, L"boss_npc_effect_week_2") == 0) return boss_npc_effect_week_2;
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_1") == 0) return boss_npc_effect_week_2[0];
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_2") == 0) return boss_npc_effect_week_2[1];
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_3") == 0) return boss_npc_effect_week_2[2];
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_4") == 0) return boss_npc_effect_week_2[3];
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_5") == 0) return boss_npc_effect_week_2[4];
			if (wcscmp(fieldName, L"boss_npc_effect_week_3") == 0) return boss_npc_effect_week_3;
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_1") == 0) return boss_npc_effect_week_3[0];
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_2") == 0) return boss_npc_effect_week_3[1];
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_3") == 0) return boss_npc_effect_week_3[2];
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_4") == 0) return boss_npc_effect_week_3[3];
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_5") == 0) return boss_npc_effect_week_3[4];
			if (wcscmp(fieldName, L"boss_npc_effect_week_4") == 0) return boss_npc_effect_week_4;
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_1") == 0) return boss_npc_effect_week_4[0];
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_2") == 0) return boss_npc_effect_week_4[1];
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_3") == 0) return boss_npc_effect_week_4[2];
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_4") == 0) return boss_npc_effect_week_4[3];
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_5") == 0) return boss_npc_effect_week_4[4];
			if (wcscmp(fieldName, L"boss_npc_effect_week_5") == 0) return boss_npc_effect_week_5;
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_1") == 0) return boss_npc_effect_week_5[0];
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_2") == 0) return boss_npc_effect_week_5[1];
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_3") == 0) return boss_npc_effect_week_5[2];
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_4") == 0) return boss_npc_effect_week_5[3];
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_5") == 0) return boss_npc_effect_week_5[4];
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_1") == 0) return boss_npc_effect_tooltip_week_1;
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_2") == 0) return boss_npc_effect_tooltip_week_2;
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_3") == 0) return boss_npc_effect_tooltip_week_3;
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_4") == 0) return boss_npc_effect_tooltip_week_4;
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_5") == 0) return boss_npc_effect_tooltip_week_5;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_1") == 0) return boss_npc_effect_icon_week_1;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_2") == 0) return boss_npc_effect_icon_week_2;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_3") == 0) return boss_npc_effect_icon_week_3;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_4") == 0) return boss_npc_effect_icon_week_4;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_5") == 0) return boss_npc_effect_icon_week_5;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_1") == 0) return boss_npc_effect_icon_index_week_1;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_2") == 0) return boss_npc_effect_icon_index_week_2;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_3") == 0) return boss_npc_effect_icon_index_week_3;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_4") == 0) return boss_npc_effect_icon_index_week_4;
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_5") == 0) return boss_npc_effect_icon_index_week_5;
			if (wcscmp(fieldName, L"contents_reset") == 0) return contents_reset;
			if (wcscmp(fieldName, L"use_level_first_clear") == 0) return use_level_first_clear;
			if (wcscmp(fieldName, L"use_level_first_clear_next_level") == 0) return use_level_first_clear_next_level;
			if (wcscmp(fieldName, L"dungeon_id") == 0) return dungeon_id;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"scroll_boss_imageset") == 0) return scroll_boss_imageset;
			if (wcscmp(fieldName, L"scroll_boss_back_imageset") == 0) return scroll_boss_back_imageset;
			if (wcscmp(fieldName, L"recommend_attack_power_sealed_dungeon") == 0) return recommend_attack_power_sealed_dungeon;
			if (wcscmp(fieldName, L"recommend_alias_sealed_dungeon") == 0) return recommend_alias_sealed_dungeon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"modify_npc_exp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_npc_exp_percent);
			if (wcscmp(fieldName, L"modify_npc_sealed_dungeon_exp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_npc_sealed_dungeon_exp_percent);
			if (wcscmp(fieldName, L"modify_clear_sealed_dungeon_exp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_clear_sealed_dungeon_exp_percent);
			if (wcscmp(fieldName, L"modify_npc_immune_breaker_count") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_npc_immune_breaker_count);
			if (wcscmp(fieldName, L"modify_npc_immune_breaker_init_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_npc_immune_breaker_init_duration);
			if (wcscmp(fieldName, L"modify_skill_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_skill_duration);
			if (wcscmp(fieldName, L"gimmick_option_fixed_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_fixed[0]));
			if (wcscmp(fieldName, L"gimmick_option_fixed_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_fixed[1]));
			if (wcscmp(fieldName, L"gimmick_option_fixed_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_fixed[2]));
			if (wcscmp(fieldName, L"gimmick_option_fixed_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_fixed[3]));
			if (wcscmp(fieldName, L"gimmick_option_fixed_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_fixed[4]));
			if (wcscmp(fieldName, L"gimmick_option_week_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_1[0]));
			if (wcscmp(fieldName, L"gimmick_option_week_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_1[1]));
			if (wcscmp(fieldName, L"gimmick_option_week_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_2[0]));
			if (wcscmp(fieldName, L"gimmick_option_week_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_2[1]));
			if (wcscmp(fieldName, L"gimmick_option_week_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_3[0]));
			if (wcscmp(fieldName, L"gimmick_option_week_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_3[1]));
			if (wcscmp(fieldName, L"gimmick_option_week_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_4[0]));
			if (wcscmp(fieldName, L"gimmick_option_week_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_4[1]));
			if (wcscmp(fieldName, L"gimmick_option_week_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_5[0]));
			if (wcscmp(fieldName, L"gimmick_option_week_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gimmick_option_week_5[1]));
			if (wcscmp(fieldName, L"target_boss_npc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_boss_npc[0]));
			if (wcscmp(fieldName, L"target_boss_npc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_boss_npc[1]));
			if (wcscmp(fieldName, L"target_boss_npc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_boss_npc[2]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_1[0]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_1[1]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_1[2]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_1[3]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_1[4]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_2[0]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_2[1]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_2[2]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_2[3]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_2[4]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_3[0]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_3[1]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_3[2]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_3[3]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_3[4]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_4[0]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_4[1]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_4[2]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_4[3]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_4[4]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_5[0]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_5[1]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_5[2]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_5[3]));
			if (wcscmp(fieldName, L"boss_npc_effect_week_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_effect_week_5[4]));
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_1") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_tooltip_week_1);
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_2") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_tooltip_week_2);
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_3") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_tooltip_week_3);
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_4") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_tooltip_week_4);
			if (wcscmp(fieldName, L"boss_npc_effect_tooltip_week_5") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_tooltip_week_5);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_1") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_week_1);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_2") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_week_2);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_3") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_week_3);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_4") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_week_4);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_week_5") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_week_5);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_1") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_index_week_1);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_2") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_index_week_2);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_3") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_index_week_3);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_4") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_index_week_4);
			if (wcscmp(fieldName, L"boss_npc_effect_icon_index_week_5") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_effect_icon_index_week_5);
			if (wcscmp(fieldName, L"contents_reset") == 0) return Data::AnyFieldToStringConverter::ToString(&contents_reset);
			if (wcscmp(fieldName, L"use_level_first_clear") == 0) return Data::AnyFieldToStringConverter::ToString(&use_level_first_clear);
			if (wcscmp(fieldName, L"use_level_first_clear_next_level") == 0) return Data::AnyFieldToStringConverter::ToString(&use_level_first_clear_next_level);
			if (wcscmp(fieldName, L"dungeon_id") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_id);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"scroll_boss_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&scroll_boss_imageset);
			if (wcscmp(fieldName, L"scroll_boss_back_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&scroll_boss_back_imageset);
			if (wcscmp(fieldName, L"recommend_attack_power_sealed_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_attack_power_sealed_dungeon);
			if (wcscmp(fieldName, L"recommend_alias_sealed_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_alias_sealed_dungeon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_1) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_npc_effect_tooltip_week_1 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_1));
			if (reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_npc_effect_tooltip_week_2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_2));
			if (reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_3) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_npc_effect_tooltip_week_3 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_3));
			if (reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_4) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_npc_effect_tooltip_week_4 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_4));
			if (reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_5) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_npc_effect_tooltip_week_5 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_npc_effect_tooltip_week_5));
			if (reinterpret_cast<std::uintptr_t>(scroll_boss_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) scroll_boss_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(scroll_boss_imageset));
			if (reinterpret_cast<std::uintptr_t>(scroll_boss_back_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) scroll_boss_back_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(scroll_boss_back_imageset));
		}
		union Key
		{
            struct {
                __int16 id;
__int8 sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 modify_npc_exp_percent;
__int16 modify_npc_sealed_dungeon_exp_percent;
__int32 modify_clear_sealed_dungeon_exp_percent;
__int8 modify_npc_immune_breaker_count;
char Pad0[3];
__int32 modify_npc_immune_breaker_init_duration;
__int16 modify_skill_duration;
char Pad1[2];
Data::TableRef gimmick_option_fixed[5];
int gimmick_option_fixed_tableId(){return 314;};
Data::TableRef gimmick_option_week_1[2];
int gimmick_option_week_1_tableId(){return 314;};
Data::TableRef gimmick_option_week_2[2];
int gimmick_option_week_2_tableId(){return 314;};
Data::TableRef gimmick_option_week_3[2];
int gimmick_option_week_3_tableId(){return 314;};
Data::TableRef gimmick_option_week_4[2];
int gimmick_option_week_4_tableId(){return 314;};
Data::TableRef gimmick_option_week_5[2];
int gimmick_option_week_5_tableId(){return 314;};
Data::TableRef target_boss_npc[3];
int target_boss_npc_tableId(){return 255;};
Data::TableRef boss_npc_effect_week_1[5];
int boss_npc_effect_week_1_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_2[5];
int boss_npc_effect_week_2_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_3[5];
int boss_npc_effect_week_3_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_4[5];
int boss_npc_effect_week_4_tableId(){return 111;};
Data::TableRef boss_npc_effect_week_5[5];
int boss_npc_effect_week_5_tableId(){return 111;};
wchar_t* boss_npc_effect_tooltip_week_1;
wchar_t* boss_npc_effect_tooltip_week_2;
wchar_t* boss_npc_effect_tooltip_week_3;
wchar_t* boss_npc_effect_tooltip_week_4;
wchar_t* boss_npc_effect_tooltip_week_5;
Data::TableRef boss_npc_effect_icon_week_1;
int boss_npc_effect_icon_week_1_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_2;
int boss_npc_effect_icon_week_2_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_3;
int boss_npc_effect_icon_week_3_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_4;
int boss_npc_effect_icon_week_4_tableId(){return 178;};
Data::TableRef boss_npc_effect_icon_week_5;
int boss_npc_effect_icon_week_5_tableId(){return 178;};
__int16 boss_npc_effect_icon_index_week_1;
__int16 boss_npc_effect_icon_index_week_2;
__int16 boss_npc_effect_icon_index_week_3;
__int16 boss_npc_effect_icon_index_week_4;
__int16 boss_npc_effect_icon_index_week_5;
char Pad2[2];
Data::TableRef contents_reset;
int contents_reset_tableId(){return 72;};
bool use_level_first_clear;
__int8 use_level_first_clear_next_level;
char Pad3[2];
Data::TableRef dungeon_id;
int dungeon_id_tableId(){return 110;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
wchar_t* scroll_boss_imageset;
wchar_t* scroll_boss_back_imageset;
__int16 recommend_attack_power_sealed_dungeon;
char Pad4[2];
Data::TableRef recommend_alias_sealed_dungeon;
int recommend_alias_sealed_dungeon_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(6, 3); }
		static __int16 TableId() { return 316; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_modify_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_modify_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_modify_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}