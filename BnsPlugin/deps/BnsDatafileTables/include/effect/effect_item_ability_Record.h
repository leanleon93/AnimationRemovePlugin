/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_item_ability_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"attack_power_equip_min") == 0) return attack_power_equip_min;
			if (wcscmp(fieldName, L"attack_power_equip_max") == 0) return attack_power_equip_max;
			if (wcscmp(fieldName, L"defend_power_equip_value") == 0) return defend_power_equip_value;
			if (wcscmp(fieldName, L"defend_resist_power_equip_value") == 0) return defend_resist_power_equip_value;
			if (wcscmp(fieldName, L"attack_hit_base_percent") == 0) return attack_hit_base_percent;
			if (wcscmp(fieldName, L"attack_hit_value") == 0) return attack_hit_value;
			if (wcscmp(fieldName, L"attack_hit_value_equip") == 0) return attack_hit_value_equip;
			if (wcscmp(fieldName, L"attack_pierce_base_percent") == 0) return attack_pierce_base_percent;
			if (wcscmp(fieldName, L"attack_parry_pierce_percent") == 0) return attack_parry_pierce_percent;
			if (wcscmp(fieldName, L"attack_pierce_value") == 0) return attack_pierce_value;
			if (wcscmp(fieldName, L"attack_pierce_value_equip") == 0) return attack_pierce_value_equip;
			if (wcscmp(fieldName, L"attack_critical_base_percent") == 0) return attack_critical_base_percent;
			if (wcscmp(fieldName, L"attack_critical_damage_percent") == 0) return attack_critical_damage_percent;
			if (wcscmp(fieldName, L"attack_critical_value") == 0) return attack_critical_value;
			if (wcscmp(fieldName, L"attack_critical_value_equip") == 0) return attack_critical_value_equip;
			if (wcscmp(fieldName, L"attack_critical_damage_value") == 0) return attack_critical_damage_value;
			if (wcscmp(fieldName, L"attack_critical_damage_value_equip") == 0) return attack_critical_damage_value_equip;
			if (wcscmp(fieldName, L"defend_critical_base_percent") == 0) return defend_critical_base_percent;
			if (wcscmp(fieldName, L"defend_critical_damage_percent") == 0) return defend_critical_damage_percent;
			if (wcscmp(fieldName, L"defend_critical_value") == 0) return defend_critical_value;
			if (wcscmp(fieldName, L"defend_critical_value_equip") == 0) return defend_critical_value_equip;
			if (wcscmp(fieldName, L"defend_dodge_base_percent") == 0) return defend_dodge_base_percent;
			if (wcscmp(fieldName, L"defend_dodge_value") == 0) return defend_dodge_value;
			if (wcscmp(fieldName, L"defend_dodge_value_equip") == 0) return defend_dodge_value_equip;
			if (wcscmp(fieldName, L"defend_parry_base_percent") == 0) return defend_parry_base_percent;
			if (wcscmp(fieldName, L"defend_parry_value") == 0) return defend_parry_value;
			if (wcscmp(fieldName, L"defend_parry_value_equip") == 0) return defend_parry_value_equip;
			if (wcscmp(fieldName, L"attack_stiff_duration_base_percent") == 0) return attack_stiff_duration_base_percent;
			if (wcscmp(fieldName, L"attack_stiff_duration_value") == 0) return attack_stiff_duration_value;
			if (wcscmp(fieldName, L"defend_stiff_duration_base_percent") == 0) return defend_stiff_duration_base_percent;
			if (wcscmp(fieldName, L"defend_stiff_duration_value") == 0) return defend_stiff_duration_value;
			if (wcscmp(fieldName, L"cast_duration_base_percent") == 0) return cast_duration_base_percent;
			if (wcscmp(fieldName, L"cast_duration_value") == 0) return cast_duration_value;
			if (wcscmp(fieldName, L"defend_physical_damage_reduce_percent") == 0) return defend_physical_damage_reduce_percent;
			if (wcscmp(fieldName, L"defend_force_damage_reduce_percent") == 0) return defend_force_damage_reduce_percent;
			if (wcscmp(fieldName, L"attack_damage_modify_percent") == 0) return attack_damage_modify_percent;
			if (wcscmp(fieldName, L"attack_damage_modify_diff") == 0) return attack_damage_modify_diff;
			if (wcscmp(fieldName, L"defend_damage_modify_percent") == 0) return defend_damage_modify_percent;
			if (wcscmp(fieldName, L"defend_damage_modify_diff") == 0) return defend_damage_modify_diff;
			if (wcscmp(fieldName, L"max_hp") == 0) return max_hp;
			if (wcscmp(fieldName, L"max_hp_equip") == 0) return max_hp_equip;
			if (wcscmp(fieldName, L"max_guard_gauge") == 0) return max_guard_gauge;
			if (wcscmp(fieldName, L"max_guard_gauge_equip") == 0) return max_guard_gauge_equip;
			if (wcscmp(fieldName, L"hp_regen") == 0) return hp_regen;
			if (wcscmp(fieldName, L"hp_regen_equip") == 0) return hp_regen_equip;
			if (wcscmp(fieldName, L"hp_regen_combat") == 0) return hp_regen_combat;
			if (wcscmp(fieldName, L"hp_regen_combat_equip") == 0) return hp_regen_combat_equip;
			if (wcscmp(fieldName, L"job_ability_1") == 0) return job_ability_1;
			if (wcscmp(fieldName, L"job_ability_2") == 0) return job_ability_2;
			if (wcscmp(fieldName, L"heal_power_base_percent") == 0) return heal_power_base_percent;
			if (wcscmp(fieldName, L"heal_power_value") == 0) return heal_power_value;
			if (wcscmp(fieldName, L"heal_power_diff") == 0) return heal_power_diff;
			if (wcscmp(fieldName, L"aoe_defend_base_percent") == 0) return aoe_defend_base_percent;
			if (wcscmp(fieldName, L"aoe_defend_power_value") == 0) return aoe_defend_power_value;
			if (wcscmp(fieldName, L"abnormal_attack_base_percent") == 0) return abnormal_attack_base_percent;
			if (wcscmp(fieldName, L"abnormal_attack_power_value") == 0) return abnormal_attack_power_value;
			if (wcscmp(fieldName, L"abnormal_attack_power_value_equip") == 0) return abnormal_attack_power_value_equip;
			if (wcscmp(fieldName, L"abnormal_defend_base_percent") == 0) return abnormal_defend_base_percent;
			if (wcscmp(fieldName, L"abnormal_defend_power_value") == 0) return abnormal_defend_power_value;
			if (wcscmp(fieldName, L"hate_power_equip_value") == 0) return hate_power_equip_value;
			if (wcscmp(fieldName, L"additional_exp_diff_by_kill") == 0) return additional_exp_diff_by_kill;
			if (wcscmp(fieldName, L"additional_exp_percent_by_kill") == 0) return additional_exp_percent_by_kill;
			if (wcscmp(fieldName, L"attack_concentrate_value") == 0) return attack_concentrate_value;
			if (wcscmp(fieldName, L"attack_concentrate_value_equip") == 0) return attack_concentrate_value_equip;
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_percent") == 0) return defend_perfect_parry_reduce_percent;
			if (wcscmp(fieldName, L"defend_counter_reduce_percent") == 0) return defend_counter_reduce_percent;
			if (wcscmp(fieldName, L"attack_attribute_value") == 0) return attack_attribute_value;
			if (wcscmp(fieldName, L"attack_attribute_value_equip") == 0) return attack_attribute_value_equip;
			if (wcscmp(fieldName, L"attack_attribute_base_percent") == 0) return attack_attribute_base_percent;
			if (wcscmp(fieldName, L"pve_boss_level_npc_attack_power_equip_min") == 0) return pve_boss_level_npc_attack_power_equip_min;
			if (wcscmp(fieldName, L"pve_boss_level_npc_attack_power_equip_max") == 0) return pve_boss_level_npc_attack_power_equip_max;
			if (wcscmp(fieldName, L"pve_boss_level_npc_defend_power_equip_value") == 0) return pve_boss_level_npc_defend_power_equip_value;
			if (wcscmp(fieldName, L"pvp_attack_power_equip_min") == 0) return pvp_attack_power_equip_min;
			if (wcscmp(fieldName, L"pvp_attack_power_equip_max") == 0) return pvp_attack_power_equip_max;
			if (wcscmp(fieldName, L"pvp_defend_power_equip_value") == 0) return pvp_defend_power_equip_value;
			if (wcscmp(fieldName, L"r_attack_stiff_duration_equip_value") == 0) return r_attack_stiff_duration_equip_value;
			if (wcscmp(fieldName, L"r_defend_stiff_duration_equip_value") == 0) return r_defend_stiff_duration_equip_value;
			if (wcscmp(fieldName, L"r_aoe_defend_power_value_equip") == 0) return r_aoe_defend_power_value_equip;
			if (wcscmp(fieldName, L"r_heal_power_equip_value") == 0) return r_heal_power_equip_value;
			if (wcscmp(fieldName, L"r_defend_strength_equip_value") == 0) return r_defend_strength_equip_value;
			if (wcscmp(fieldName, L"r_attack_precise_equip_value") == 0) return r_attack_precise_equip_value;
			if (wcscmp(fieldName, L"r_attack_aoe_pierce_value_equip") == 0) return r_attack_aoe_pierce_value_equip;
			if (wcscmp(fieldName, L"r_attack_abnormal_hit_equip_value") == 0) return r_attack_abnormal_hit_equip_value;
			if (wcscmp(fieldName, L"r_defend_abnormal_dodge_equip_value") == 0) return r_defend_abnormal_dodge_equip_value;
			if (wcscmp(fieldName, L"r_support_power_equip_value") == 0) return r_support_power_equip_value;
			if (wcscmp(fieldName, L"r_hypermove_power_equip_value") == 0) return r_hypermove_power_equip_value;
			if (wcscmp(fieldName, L"defend_difficulty_type_damage_reduce_percent") == 0) return defend_difficulty_type_damage_reduce_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"attack_power_equip_min") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_equip_min);
			if (wcscmp(fieldName, L"attack_power_equip_max") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_equip_max);
			if (wcscmp(fieldName, L"defend_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_power_equip_value);
			if (wcscmp(fieldName, L"defend_resist_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_resist_power_equip_value);
			if (wcscmp(fieldName, L"attack_hit_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_base_percent);
			if (wcscmp(fieldName, L"attack_hit_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_value);
			if (wcscmp(fieldName, L"attack_hit_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_value_equip);
			if (wcscmp(fieldName, L"attack_pierce_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_base_percent);
			if (wcscmp(fieldName, L"attack_parry_pierce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_parry_pierce_percent);
			if (wcscmp(fieldName, L"attack_pierce_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_value);
			if (wcscmp(fieldName, L"attack_pierce_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_value_equip);
			if (wcscmp(fieldName, L"attack_critical_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_base_percent);
			if (wcscmp(fieldName, L"attack_critical_damage_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_percent);
			if (wcscmp(fieldName, L"attack_critical_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_value);
			if (wcscmp(fieldName, L"attack_critical_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_value_equip);
			if (wcscmp(fieldName, L"attack_critical_damage_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_value);
			if (wcscmp(fieldName, L"attack_critical_damage_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_value_equip);
			if (wcscmp(fieldName, L"defend_critical_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_base_percent);
			if (wcscmp(fieldName, L"defend_critical_damage_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_damage_percent);
			if (wcscmp(fieldName, L"defend_critical_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_value);
			if (wcscmp(fieldName, L"defend_critical_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_value_equip);
			if (wcscmp(fieldName, L"defend_dodge_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_base_percent);
			if (wcscmp(fieldName, L"defend_dodge_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_value);
			if (wcscmp(fieldName, L"defend_dodge_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_value_equip);
			if (wcscmp(fieldName, L"defend_parry_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_base_percent);
			if (wcscmp(fieldName, L"defend_parry_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_value);
			if (wcscmp(fieldName, L"defend_parry_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_value_equip);
			if (wcscmp(fieldName, L"attack_stiff_duration_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_base_percent);
			if (wcscmp(fieldName, L"attack_stiff_duration_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_value);
			if (wcscmp(fieldName, L"defend_stiff_duration_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_base_percent);
			if (wcscmp(fieldName, L"defend_stiff_duration_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_value);
			if (wcscmp(fieldName, L"cast_duration_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_duration_base_percent);
			if (wcscmp(fieldName, L"cast_duration_value") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_duration_value);
			if (wcscmp(fieldName, L"defend_physical_damage_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_physical_damage_reduce_percent);
			if (wcscmp(fieldName, L"defend_force_damage_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_force_damage_reduce_percent);
			if (wcscmp(fieldName, L"attack_damage_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_damage_modify_percent);
			if (wcscmp(fieldName, L"attack_damage_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_damage_modify_diff);
			if (wcscmp(fieldName, L"defend_damage_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_damage_modify_percent);
			if (wcscmp(fieldName, L"defend_damage_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_damage_modify_diff);
			if (wcscmp(fieldName, L"max_hp") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hp);
			if (wcscmp(fieldName, L"max_hp_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hp_equip);
			if (wcscmp(fieldName, L"max_guard_gauge") == 0) return Data::AnyFieldToStringConverter::ToString(&max_guard_gauge);
			if (wcscmp(fieldName, L"max_guard_gauge_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&max_guard_gauge_equip);
			if (wcscmp(fieldName, L"hp_regen") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_regen);
			if (wcscmp(fieldName, L"hp_regen_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_regen_equip);
			if (wcscmp(fieldName, L"hp_regen_combat") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_regen_combat);
			if (wcscmp(fieldName, L"hp_regen_combat_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_regen_combat_equip);
			if (wcscmp(fieldName, L"job_ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&job_ability_1);
			if (wcscmp(fieldName, L"job_ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&job_ability_2);
			if (wcscmp(fieldName, L"heal_power_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_base_percent);
			if (wcscmp(fieldName, L"heal_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_value);
			if (wcscmp(fieldName, L"heal_power_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_diff);
			if (wcscmp(fieldName, L"aoe_defend_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_base_percent);
			if (wcscmp(fieldName, L"aoe_defend_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_power_value);
			if (wcscmp(fieldName, L"abnormal_attack_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_base_percent);
			if (wcscmp(fieldName, L"abnormal_attack_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_power_value);
			if (wcscmp(fieldName, L"abnormal_attack_power_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_power_value_equip);
			if (wcscmp(fieldName, L"abnormal_defend_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_defend_base_percent);
			if (wcscmp(fieldName, L"abnormal_defend_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_defend_power_value);
			if (wcscmp(fieldName, L"hate_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_power_equip_value);
			if (wcscmp(fieldName, L"additional_exp_diff_by_kill") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_exp_diff_by_kill);
			if (wcscmp(fieldName, L"additional_exp_percent_by_kill") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_exp_percent_by_kill);
			if (wcscmp(fieldName, L"attack_concentrate_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_concentrate_value);
			if (wcscmp(fieldName, L"attack_concentrate_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_concentrate_value_equip);
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_perfect_parry_reduce_percent);
			if (wcscmp(fieldName, L"defend_counter_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_counter_reduce_percent);
			if (wcscmp(fieldName, L"attack_attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_value);
			if (wcscmp(fieldName, L"attack_attribute_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_value_equip);
			if (wcscmp(fieldName, L"attack_attribute_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_base_percent);
			if (wcscmp(fieldName, L"pve_boss_level_npc_attack_power_equip_min") == 0) return Data::AnyFieldToStringConverter::ToString(&pve_boss_level_npc_attack_power_equip_min);
			if (wcscmp(fieldName, L"pve_boss_level_npc_attack_power_equip_max") == 0) return Data::AnyFieldToStringConverter::ToString(&pve_boss_level_npc_attack_power_equip_max);
			if (wcscmp(fieldName, L"pve_boss_level_npc_defend_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&pve_boss_level_npc_defend_power_equip_value);
			if (wcscmp(fieldName, L"pvp_attack_power_equip_min") == 0) return Data::AnyFieldToStringConverter::ToString(&pvp_attack_power_equip_min);
			if (wcscmp(fieldName, L"pvp_attack_power_equip_max") == 0) return Data::AnyFieldToStringConverter::ToString(&pvp_attack_power_equip_max);
			if (wcscmp(fieldName, L"pvp_defend_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&pvp_defend_power_equip_value);
			if (wcscmp(fieldName, L"r_attack_stiff_duration_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_attack_stiff_duration_equip_value);
			if (wcscmp(fieldName, L"r_defend_stiff_duration_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_defend_stiff_duration_equip_value);
			if (wcscmp(fieldName, L"r_aoe_defend_power_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&r_aoe_defend_power_value_equip);
			if (wcscmp(fieldName, L"r_heal_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_heal_power_equip_value);
			if (wcscmp(fieldName, L"r_defend_strength_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_defend_strength_equip_value);
			if (wcscmp(fieldName, L"r_attack_precise_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_attack_precise_equip_value);
			if (wcscmp(fieldName, L"r_attack_aoe_pierce_value_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&r_attack_aoe_pierce_value_equip);
			if (wcscmp(fieldName, L"r_attack_abnormal_hit_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_attack_abnormal_hit_equip_value);
			if (wcscmp(fieldName, L"r_defend_abnormal_dodge_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_defend_abnormal_dodge_equip_value);
			if (wcscmp(fieldName, L"r_support_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_support_power_equip_value);
			if (wcscmp(fieldName, L"r_hypermove_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&r_hypermove_power_equip_value);
			if (wcscmp(fieldName, L"defend_difficulty_type_damage_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_difficulty_type_damage_reduce_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 attack_power_equip_min;
__int16 attack_power_equip_max;
__int16 defend_power_equip_value;
__int16 defend_resist_power_equip_value;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_hit_value_equip;
__int16 attack_pierce_base_percent;
__int16 attack_parry_pierce_percent;
__int16 attack_pierce_value;
__int16 attack_pierce_value_equip;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int16 attack_critical_value;
__int16 attack_critical_value_equip;
__int16 attack_critical_damage_value;
__int16 attack_critical_damage_value_equip;
__int16 defend_critical_base_percent;
__int16 defend_critical_damage_percent;
char Pad_sub_0[2];
__int32 defend_critical_value;
__int32 defend_critical_value_equip;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_dodge_value_equip;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_value_equip;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
__int16 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
__int16 defend_damage_modify_diff;
__int32 max_hp;
__int32 max_hp_equip;
__int32 max_guard_gauge;
__int32 max_guard_gauge_equip;
__int32 hp_regen;
__int32 hp_regen_equip;
__int32 hp_regen_combat;
__int32 hp_regen_combat_equip;
__int32 job_ability_1;
__int16 job_ability_2;
__int16 heal_power_base_percent;
__int16 heal_power_value;
char Pad_sub_1[2];
__int32 heal_power_diff;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 abnormal_attack_base_percent;
char Pad_sub_2[2];
__int32 abnormal_attack_power_value;
__int32 abnormal_attack_power_value_equip;
__int16 abnormal_defend_base_percent;
__int16 abnormal_defend_power_value;
__int16 hate_power_equip_value;
__int16 additional_exp_diff_by_kill;
__int16 additional_exp_percent_by_kill;
__int16 attack_concentrate_value;
__int16 attack_concentrate_value_equip;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 attack_attribute_value;
__int16 attack_attribute_value_equip;
__int16 attack_attribute_base_percent;
__int16 pve_boss_level_npc_attack_power_equip_min;
__int16 pve_boss_level_npc_attack_power_equip_max;
__int16 pve_boss_level_npc_defend_power_equip_value;
__int16 pvp_attack_power_equip_min;
__int16 pvp_attack_power_equip_max;
__int16 pvp_defend_power_equip_value;
__int16 r_attack_stiff_duration_equip_value;
__int16 r_defend_stiff_duration_equip_value;
__int16 r_aoe_defend_power_value_equip;
__int16 r_heal_power_equip_value;
__int32 r_defend_strength_equip_value;
__int32 r_attack_precise_equip_value;
__int16 r_attack_aoe_pierce_value_equip;
__int16 r_attack_abnormal_hit_equip_value;
__int16 r_defend_abnormal_dodge_equip_value;
__int16 r_support_power_equip_value;
__int16 r_hypermove_power_equip_value;
__int16 defend_difficulty_type_damage_reduce_percent;

		static __int32 SubType() { return 851; }
	};
#pragma pack(pop)
}