/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct summonedmasterylevel_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"max_hp") == 0) return max_hp;
			if (wcscmp(fieldName, L"modify_cast_speed_percent") == 0) return modify_cast_speed_percent;
			if (wcscmp(fieldName, L"hp_regen") == 0) return hp_regen;
			if (wcscmp(fieldName, L"hp_regen_combat") == 0) return hp_regen_combat;
			if (wcscmp(fieldName, L"attack_hit_base_percent") == 0) return attack_hit_base_percent;
			if (wcscmp(fieldName, L"attack_hit_value") == 0) return attack_hit_value;
			if (wcscmp(fieldName, L"attack_pierce_value") == 0) return attack_pierce_value;
			if (wcscmp(fieldName, L"attack_concentrate_value") == 0) return attack_concentrate_value;
			if (wcscmp(fieldName, L"attack_critical_base_percent") == 0) return attack_critical_base_percent;
			if (wcscmp(fieldName, L"attack_critical_damage_percent") == 0) return attack_critical_damage_percent;
			if (wcscmp(fieldName, L"attack_critical_value") == 0) return attack_critical_value;
			if (wcscmp(fieldName, L"attack_critical_damage_value") == 0) return attack_critical_damage_value;
			if (wcscmp(fieldName, L"defend_critical_base_percent") == 0) return defend_critical_base_percent;
			if (wcscmp(fieldName, L"defend_critical_value") == 0) return defend_critical_value;
			if (wcscmp(fieldName, L"defend_bounce_percent") == 0) return defend_bounce_percent;
			if (wcscmp(fieldName, L"defend_dodge_base_percent") == 0) return defend_dodge_base_percent;
			if (wcscmp(fieldName, L"defend_dodge_value") == 0) return defend_dodge_value;
			if (wcscmp(fieldName, L"defend_parry_base_percent") == 0) return defend_parry_base_percent;
			if (wcscmp(fieldName, L"defend_parry_value") == 0) return defend_parry_value;
			if (wcscmp(fieldName, L"defend_parry_reduce_percent") == 0) return defend_parry_reduce_percent;
			if (wcscmp(fieldName, L"defend_parry_reduce_diff") == 0) return defend_parry_reduce_diff;
			if (wcscmp(fieldName, L"defend_perfect_parry_base_percent") == 0) return defend_perfect_parry_base_percent;
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_percent") == 0) return defend_perfect_parry_reduce_percent;
			if (wcscmp(fieldName, L"defend_counter_reduce_percent") == 0) return defend_counter_reduce_percent;
			if (wcscmp(fieldName, L"defend_immune_base_percent") == 0) return defend_immune_base_percent;
			if (wcscmp(fieldName, L"attack_power_creature_min") == 0) return attack_power_creature_min;
			if (wcscmp(fieldName, L"attack_power_creature_max") == 0) return attack_power_creature_max;
			if (wcscmp(fieldName, L"attack_power_equip_min") == 0) return attack_power_equip_min;
			if (wcscmp(fieldName, L"attack_power_equip_max") == 0) return attack_power_equip_max;
			if (wcscmp(fieldName, L"defend_power_creature_value") == 0) return defend_power_creature_value;
			if (wcscmp(fieldName, L"defend_power_equip_value") == 0) return defend_power_equip_value;
			if (wcscmp(fieldName, L"defend_resist_power_creature_value") == 0) return defend_resist_power_creature_value;
			if (wcscmp(fieldName, L"defend_resist_power_equip_value") == 0) return defend_resist_power_equip_value;
			if (wcscmp(fieldName, L"defend_physical_damage_reduce_percent") == 0) return defend_physical_damage_reduce_percent;
			if (wcscmp(fieldName, L"defend_force_damage_reduce_percent") == 0) return defend_force_damage_reduce_percent;
			if (wcscmp(fieldName, L"attack_damage_modify_percent") == 0) return attack_damage_modify_percent;
			if (wcscmp(fieldName, L"attack_damage_modify_diff") == 0) return attack_damage_modify_diff;
			if (wcscmp(fieldName, L"defend_damage_modify_percent") == 0) return defend_damage_modify_percent;
			if (wcscmp(fieldName, L"defend_damage_modify_diff") == 0) return defend_damage_modify_diff;
			if (wcscmp(fieldName, L"defend_miss_base_percent") == 0) return defend_miss_base_percent;
			if (wcscmp(fieldName, L"attack_stiff_duration_base_percent") == 0) return attack_stiff_duration_base_percent;
			if (wcscmp(fieldName, L"attack_stiff_duration_value") == 0) return attack_stiff_duration_value;
			if (wcscmp(fieldName, L"defend_stiff_duration_base_percent") == 0) return defend_stiff_duration_base_percent;
			if (wcscmp(fieldName, L"defend_stiff_duration_value") == 0) return defend_stiff_duration_value;
			if (wcscmp(fieldName, L"cast_duration_base_percent") == 0) return cast_duration_base_percent;
			if (wcscmp(fieldName, L"cast_duration_value") == 0) return cast_duration_value;
			if (wcscmp(fieldName, L"abnormal_attack_power_value") == 0) return abnormal_attack_power_value;
			if (wcscmp(fieldName, L"abnormal_attack_base_percent") == 0) return abnormal_attack_base_percent;
			if (wcscmp(fieldName, L"abnormal_defend_power_value") == 0) return abnormal_defend_power_value;
			if (wcscmp(fieldName, L"abnormal_defend_base_percent") == 0) return abnormal_defend_base_percent;
			if (wcscmp(fieldName, L"attack_hit_value_modify") == 0) return attack_hit_value_modify;
			if (wcscmp(fieldName, L"attack_critical_value_modify") == 0) return attack_critical_value_modify;
			if (wcscmp(fieldName, L"defend_critical_value_modify") == 0) return defend_critical_value_modify;
			if (wcscmp(fieldName, L"defend_dodge_value_modify") == 0) return defend_dodge_value_modify;
			if (wcscmp(fieldName, L"defend_parry_value_modify") == 0) return defend_parry_value_modify;
			if (wcscmp(fieldName, L"defend_physical_value_modify") == 0) return defend_physical_value_modify;
			if (wcscmp(fieldName, L"defend_force_value_modify") == 0) return defend_force_value_modify;
			if (wcscmp(fieldName, L"attack_stiff_duration_value_modify") == 0) return attack_stiff_duration_value_modify;
			if (wcscmp(fieldName, L"defend_stiff_duration_value_modify") == 0) return defend_stiff_duration_value_modify;
			if (wcscmp(fieldName, L"cast_duration_value_modify") == 0) return cast_duration_value_modify;
			if (wcscmp(fieldName, L"attack_critical_damage_modify") == 0) return attack_critical_damage_modify;
			if (wcscmp(fieldName, L"defend_critical_damage_modify") == 0) return defend_critical_damage_modify;
			if (wcscmp(fieldName, L"attack_pierce_modify") == 0) return attack_pierce_modify;
			if (wcscmp(fieldName, L"attack_parry_pierce_modify") == 0) return attack_parry_pierce_modify;
			if (wcscmp(fieldName, L"defend_parry_reduce_modify") == 0) return defend_parry_reduce_modify;
			if (wcscmp(fieldName, L"attack_perfect_parry_damage_modify") == 0) return attack_perfect_parry_damage_modify;
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_modify") == 0) return defend_perfect_parry_reduce_modify;
			if (wcscmp(fieldName, L"attack_counter_damage_modify") == 0) return attack_counter_damage_modify;
			if (wcscmp(fieldName, L"defend_counter_reduce_modify") == 0) return defend_counter_reduce_modify;
			if (wcscmp(fieldName, L"heal_power_base_percent") == 0) return heal_power_base_percent;
			if (wcscmp(fieldName, L"aoe_defend_base_percent") == 0) return aoe_defend_base_percent;
			if (wcscmp(fieldName, L"aoe_defend_power_value") == 0) return aoe_defend_power_value;
			if (wcscmp(fieldName, L"heal_power_modify") == 0) return heal_power_modify;
			if (wcscmp(fieldName, L"aoe_defend_power_modify") == 0) return aoe_defend_power_modify;
			if (wcscmp(fieldName, L"abnormal_attack_power_modify") == 0) return abnormal_attack_power_modify;
			if (wcscmp(fieldName, L"abnormal_defend_power_modify") == 0) return abnormal_defend_power_modify;
			if (wcscmp(fieldName, L"attack_attribute_value") == 0) return attack_attribute_value;
			if (wcscmp(fieldName, L"attack_attribute_base_percent") == 0) return attack_attribute_base_percent;
			if (wcscmp(fieldName, L"attack_attribute_modify") == 0) return attack_attribute_modify;
			if (wcscmp(fieldName, L"attack_pierce_base_percent") == 0) return attack_pierce_base_percent;
			if (wcscmp(fieldName, L"defend_critical_damage_percent") == 0) return defend_critical_damage_percent;
			if (wcscmp(fieldName, L"defend_strength_creature_value") == 0) return defend_strength_creature_value;
			if (wcscmp(fieldName, L"attack_precise_creature_value") == 0) return attack_precise_creature_value;
			if (wcscmp(fieldName, L"attack_aoe_pierce_value") == 0) return attack_aoe_pierce_value;
			if (wcscmp(fieldName, L"attack_abnormal_hit_base_percent") == 0) return attack_abnormal_hit_base_percent;
			if (wcscmp(fieldName, L"attack_abnormal_hit_value") == 0) return attack_abnormal_hit_value;
			if (wcscmp(fieldName, L"defend_abnormal_dodge_base_percent") == 0) return defend_abnormal_dodge_base_percent;
			if (wcscmp(fieldName, L"defend_abnormal_dodge_value") == 0) return defend_abnormal_dodge_value;
			if (wcscmp(fieldName, L"support_power_base_percent") == 0) return support_power_base_percent;
			if (wcscmp(fieldName, L"support_power_value") == 0) return support_power_value;
			if (wcscmp(fieldName, L"heal_power_value") == 0) return heal_power_value;
			if (wcscmp(fieldName, L"hypermove_power_value") == 0) return hypermove_power_value;
			if (wcscmp(fieldName, L"r_attack_aoe_pierce_modify") == 0) return r_attack_aoe_pierce_modify;
			if (wcscmp(fieldName, L"r_attack_abnormal_hit_modify") == 0) return r_attack_abnormal_hit_modify;
			if (wcscmp(fieldName, L"r_defend_abnormal_dodge_modify") == 0) return r_defend_abnormal_dodge_modify;
			if (wcscmp(fieldName, L"r_support_power_modify") == 0) return r_support_power_modify;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"max_hp") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hp);
			if (wcscmp(fieldName, L"modify_cast_speed_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_cast_speed_percent);
			if (wcscmp(fieldName, L"hp_regen") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_regen);
			if (wcscmp(fieldName, L"hp_regen_combat") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_regen_combat);
			if (wcscmp(fieldName, L"attack_hit_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_base_percent);
			if (wcscmp(fieldName, L"attack_hit_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_value);
			if (wcscmp(fieldName, L"attack_pierce_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_value);
			if (wcscmp(fieldName, L"attack_concentrate_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_concentrate_value);
			if (wcscmp(fieldName, L"attack_critical_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_base_percent);
			if (wcscmp(fieldName, L"attack_critical_damage_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_percent);
			if (wcscmp(fieldName, L"attack_critical_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_value);
			if (wcscmp(fieldName, L"attack_critical_damage_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_value);
			if (wcscmp(fieldName, L"defend_critical_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_base_percent);
			if (wcscmp(fieldName, L"defend_critical_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_value);
			if (wcscmp(fieldName, L"defend_bounce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_bounce_percent);
			if (wcscmp(fieldName, L"defend_dodge_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_base_percent);
			if (wcscmp(fieldName, L"defend_dodge_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_value);
			if (wcscmp(fieldName, L"defend_parry_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_base_percent);
			if (wcscmp(fieldName, L"defend_parry_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_value);
			if (wcscmp(fieldName, L"defend_parry_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_reduce_percent);
			if (wcscmp(fieldName, L"defend_parry_reduce_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_reduce_diff);
			if (wcscmp(fieldName, L"defend_perfect_parry_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_perfect_parry_base_percent);
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_perfect_parry_reduce_percent);
			if (wcscmp(fieldName, L"defend_counter_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_counter_reduce_percent);
			if (wcscmp(fieldName, L"defend_immune_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_immune_base_percent);
			if (wcscmp(fieldName, L"attack_power_creature_min") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_creature_min);
			if (wcscmp(fieldName, L"attack_power_creature_max") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_creature_max);
			if (wcscmp(fieldName, L"attack_power_equip_min") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_equip_min);
			if (wcscmp(fieldName, L"attack_power_equip_max") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_equip_max);
			if (wcscmp(fieldName, L"defend_power_creature_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_power_creature_value);
			if (wcscmp(fieldName, L"defend_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_power_equip_value);
			if (wcscmp(fieldName, L"defend_resist_power_creature_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_resist_power_creature_value);
			if (wcscmp(fieldName, L"defend_resist_power_equip_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_resist_power_equip_value);
			if (wcscmp(fieldName, L"defend_physical_damage_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_physical_damage_reduce_percent);
			if (wcscmp(fieldName, L"defend_force_damage_reduce_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_force_damage_reduce_percent);
			if (wcscmp(fieldName, L"attack_damage_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_damage_modify_percent);
			if (wcscmp(fieldName, L"attack_damage_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_damage_modify_diff);
			if (wcscmp(fieldName, L"defend_damage_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_damage_modify_percent);
			if (wcscmp(fieldName, L"defend_damage_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_damage_modify_diff);
			if (wcscmp(fieldName, L"defend_miss_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_miss_base_percent);
			if (wcscmp(fieldName, L"attack_stiff_duration_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_base_percent);
			if (wcscmp(fieldName, L"attack_stiff_duration_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_value);
			if (wcscmp(fieldName, L"defend_stiff_duration_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_base_percent);
			if (wcscmp(fieldName, L"defend_stiff_duration_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_value);
			if (wcscmp(fieldName, L"cast_duration_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_duration_base_percent);
			if (wcscmp(fieldName, L"cast_duration_value") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_duration_value);
			if (wcscmp(fieldName, L"abnormal_attack_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_power_value);
			if (wcscmp(fieldName, L"abnormal_attack_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_base_percent);
			if (wcscmp(fieldName, L"abnormal_defend_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_defend_power_value);
			if (wcscmp(fieldName, L"abnormal_defend_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_defend_base_percent);
			if (wcscmp(fieldName, L"attack_hit_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_value_modify);
			if (wcscmp(fieldName, L"attack_critical_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_value_modify);
			if (wcscmp(fieldName, L"defend_critical_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_value_modify);
			if (wcscmp(fieldName, L"defend_dodge_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_value_modify);
			if (wcscmp(fieldName, L"defend_parry_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_value_modify);
			if (wcscmp(fieldName, L"defend_physical_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_physical_value_modify);
			if (wcscmp(fieldName, L"defend_force_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_force_value_modify);
			if (wcscmp(fieldName, L"attack_stiff_duration_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_value_modify);
			if (wcscmp(fieldName, L"defend_stiff_duration_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_value_modify);
			if (wcscmp(fieldName, L"cast_duration_value_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_duration_value_modify);
			if (wcscmp(fieldName, L"attack_critical_damage_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_modify);
			if (wcscmp(fieldName, L"defend_critical_damage_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_damage_modify);
			if (wcscmp(fieldName, L"attack_pierce_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_modify);
			if (wcscmp(fieldName, L"attack_parry_pierce_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_parry_pierce_modify);
			if (wcscmp(fieldName, L"defend_parry_reduce_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_reduce_modify);
			if (wcscmp(fieldName, L"attack_perfect_parry_damage_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_perfect_parry_damage_modify);
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_perfect_parry_reduce_modify);
			if (wcscmp(fieldName, L"attack_counter_damage_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_counter_damage_modify);
			if (wcscmp(fieldName, L"defend_counter_reduce_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_counter_reduce_modify);
			if (wcscmp(fieldName, L"heal_power_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_base_percent);
			if (wcscmp(fieldName, L"aoe_defend_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_base_percent);
			if (wcscmp(fieldName, L"aoe_defend_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_power_value);
			if (wcscmp(fieldName, L"heal_power_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_modify);
			if (wcscmp(fieldName, L"aoe_defend_power_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_power_modify);
			if (wcscmp(fieldName, L"abnormal_attack_power_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_power_modify);
			if (wcscmp(fieldName, L"abnormal_defend_power_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_defend_power_modify);
			if (wcscmp(fieldName, L"attack_attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_value);
			if (wcscmp(fieldName, L"attack_attribute_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_base_percent);
			if (wcscmp(fieldName, L"attack_attribute_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_attribute_modify);
			if (wcscmp(fieldName, L"attack_pierce_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_base_percent);
			if (wcscmp(fieldName, L"defend_critical_damage_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_damage_percent);
			if (wcscmp(fieldName, L"defend_strength_creature_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_strength_creature_value);
			if (wcscmp(fieldName, L"attack_precise_creature_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_precise_creature_value);
			if (wcscmp(fieldName, L"attack_aoe_pierce_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_aoe_pierce_value);
			if (wcscmp(fieldName, L"attack_abnormal_hit_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_abnormal_hit_base_percent);
			if (wcscmp(fieldName, L"attack_abnormal_hit_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_abnormal_hit_value);
			if (wcscmp(fieldName, L"defend_abnormal_dodge_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_abnormal_dodge_base_percent);
			if (wcscmp(fieldName, L"defend_abnormal_dodge_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_abnormal_dodge_value);
			if (wcscmp(fieldName, L"support_power_base_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&support_power_base_percent);
			if (wcscmp(fieldName, L"support_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&support_power_value);
			if (wcscmp(fieldName, L"heal_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_value);
			if (wcscmp(fieldName, L"hypermove_power_value") == 0) return Data::AnyFieldToStringConverter::ToString(&hypermove_power_value);
			if (wcscmp(fieldName, L"r_attack_aoe_pierce_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&r_attack_aoe_pierce_modify);
			if (wcscmp(fieldName, L"r_attack_abnormal_hit_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&r_attack_abnormal_hit_modify);
			if (wcscmp(fieldName, L"r_defend_abnormal_dodge_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&r_defend_abnormal_dodge_modify);
			if (wcscmp(fieldName, L"r_support_power_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&r_support_power_modify);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int16 mastery_level;
bool is_duelbot_summoned;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 max_hp;
__int16 modify_cast_speed_percent;
char Pad0[2];
__int64 hp_regen;
__int32 hp_regen_combat;
__int16 attack_hit_base_percent;
__int16 attack_hit_value;
__int16 attack_pierce_value;
__int16 attack_concentrate_value;
__int16 attack_critical_base_percent;
__int16 attack_critical_damage_percent;
__int32 attack_critical_value;
__int32 attack_critical_damage_value;
__int16 defend_critical_base_percent;
char Pad1[2];
__int32 defend_critical_value;
__int16 defend_bounce_percent;
__int16 defend_dodge_base_percent;
__int16 defend_dodge_value;
__int16 defend_parry_base_percent;
__int16 defend_parry_value;
__int16 defend_parry_reduce_percent;
__int16 defend_parry_reduce_diff;
__int16 defend_perfect_parry_base_percent;
__int16 defend_perfect_parry_reduce_percent;
__int16 defend_counter_reduce_percent;
__int16 defend_immune_base_percent;
char Pad2[2];
__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int16 attack_power_equip_min;
__int16 attack_power_equip_max;
__int32 defend_power_creature_value;
__int32 defend_power_equip_value;
__int16 defend_resist_power_creature_value;
__int16 defend_resist_power_equip_value;
__int16 defend_physical_damage_reduce_percent;
__int16 defend_force_damage_reduce_percent;
__int16 attack_damage_modify_percent;
char Pad3[2];
__int32 attack_damage_modify_diff;
__int16 defend_damage_modify_percent;
char Pad4[2];
__int32 defend_damage_modify_diff;
__int16 defend_miss_base_percent;
__int16 attack_stiff_duration_base_percent;
__int16 attack_stiff_duration_value;
__int16 defend_stiff_duration_base_percent;
__int16 defend_stiff_duration_value;
__int16 cast_duration_base_percent;
__int16 cast_duration_value;
char Pad5[2];
__int32 abnormal_attack_power_value;
__int16 abnormal_attack_base_percent;
__int16 abnormal_defend_power_value;
__int16 abnormal_defend_base_percent;
__int16 attack_hit_value_modify;
__int16 attack_critical_value_modify;
__int16 defend_critical_value_modify;
__int16 defend_dodge_value_modify;
__int16 defend_parry_value_modify;
__int16 defend_physical_value_modify;
__int16 defend_force_value_modify;
__int16 attack_stiff_duration_value_modify;
__int16 defend_stiff_duration_value_modify;
__int16 cast_duration_value_modify;
__int16 attack_critical_damage_modify;
__int16 defend_critical_damage_modify;
__int16 attack_pierce_modify;
__int16 attack_parry_pierce_modify;
__int16 defend_parry_reduce_modify;
__int16 attack_perfect_parry_damage_modify;
__int16 defend_perfect_parry_reduce_modify;
__int16 attack_counter_damage_modify;
__int16 defend_counter_reduce_modify;
__int16 heal_power_base_percent;
__int16 aoe_defend_base_percent;
__int16 aoe_defend_power_value;
__int16 heal_power_modify;
__int16 aoe_defend_power_modify;
__int16 abnormal_attack_power_modify;
__int16 abnormal_defend_power_modify;
char Pad6[2];
__int32 attack_attribute_value;
__int16 attack_attribute_base_percent;
__int16 attack_attribute_modify;
__int16 attack_pierce_base_percent;
__int16 defend_critical_damage_percent;
__int32 defend_strength_creature_value;
__int32 attack_precise_creature_value;
__int16 attack_aoe_pierce_value;
__int16 attack_abnormal_hit_base_percent;
__int16 attack_abnormal_hit_value;
__int16 defend_abnormal_dodge_base_percent;
__int16 defend_abnormal_dodge_value;
__int16 support_power_base_percent;
__int16 support_power_value;
char Pad7[2];
__int32 heal_power_value;
__int16 hypermove_power_value;
__int16 r_attack_aoe_pierce_modify;
__int16 r_attack_abnormal_hit_modify;
__int16 r_defend_abnormal_dodge_modify;
__int16 r_support_power_modify;

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 392; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summonedmasterylevel_RecordPtr // : DrRecordPtr
	{
		summonedmasterylevel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summonedmasterylevel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}