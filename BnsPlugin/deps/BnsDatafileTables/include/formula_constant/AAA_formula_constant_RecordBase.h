/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct formula_constant_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"dodge_percent") == 0) return dodge_percent;
			if (wcscmp(fieldName, L"critical_percent") == 0) return critical_percent;
			if (wcscmp(fieldName, L"defend_percent") == 0) return defend_percent;
			if (wcscmp(fieldName, L"parry_percent") == 0) return parry_percent;
			if (wcscmp(fieldName, L"perfect_parry_constant") == 0) return perfect_parry_constant;
			if (wcscmp(fieldName, L"counter_constant") == 0) return counter_constant;
			if (wcscmp(fieldName, L"hit_percent") == 0) return hit_percent;
			if (wcscmp(fieldName, L"attribute_percent") == 0) return attribute_percent;
			if (wcscmp(fieldName, L"abnormal_attack_percent") == 0) return abnormal_attack_percent;
			if (wcscmp(fieldName, L"abnormal_attack_rate_min_permile") == 0) return abnormal_attack_rate_min_permile;
			if (wcscmp(fieldName, L"abnormal_defend_percent") == 0) return abnormal_defend_percent;
			if (wcscmp(fieldName, L"hate_power_percent") == 0) return hate_power_percent;
			if (wcscmp(fieldName, L"critical_damage_rate_min_permile") == 0) return critical_damage_rate_min_permile;
			if (wcscmp(fieldName, L"attribute_damage_rate_min_permile") == 0) return attribute_damage_rate_min_permile;
			if (wcscmp(fieldName, L"max_hp_support_percent") == 0) return max_hp_support_percent;
			if (wcscmp(fieldName, L"speed_support_percent") == 0) return speed_support_percent;
			if (wcscmp(fieldName, L"attack_pierce_value_support_percent") == 0) return attack_pierce_value_support_percent;
			if (wcscmp(fieldName, L"attack_concentrate_value_support_percent") == 0) return attack_concentrate_value_support_percent;
			if (wcscmp(fieldName, L"attack_critical_base_percent_support_percent") == 0) return attack_critical_base_percent_support_percent;
			if (wcscmp(fieldName, L"attack_critical_damage_percent_support_percent") == 0) return attack_critical_damage_percent_support_percent;
			if (wcscmp(fieldName, L"attack_critical_value_support_percent") == 0) return attack_critical_value_support_percent;
			if (wcscmp(fieldName, L"attack_critical_damage_value_support_percent") == 0) return attack_critical_damage_value_support_percent;
			if (wcscmp(fieldName, L"defend_critical_base_percent_support_percent") == 0) return defend_critical_base_percent_support_percent;
			if (wcscmp(fieldName, L"defend_critical_value_support_percent") == 0) return defend_critical_value_support_percent;
			if (wcscmp(fieldName, L"defend_parry_value_support_percent") == 0) return defend_parry_value_support_percent;
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_percent_support_percent") == 0) return defend_perfect_parry_reduce_percent_support_percent;
			if (wcscmp(fieldName, L"defend_counter_reduce_percent_support_percent") == 0) return defend_counter_reduce_percent_support_percent;
			if (wcscmp(fieldName, L"attack_power_creature_min_support_percent") == 0) return attack_power_creature_min_support_percent;
			if (wcscmp(fieldName, L"attack_power_creature_max_support_percent") == 0) return attack_power_creature_max_support_percent;
			if (wcscmp(fieldName, L"defend_power_creature_value_support_percent") == 0) return defend_power_creature_value_support_percent;
			if (wcscmp(fieldName, L"defend_physical_damage_reduce_percent_support_percent") == 0) return defend_physical_damage_reduce_percent_support_percent;
			if (wcscmp(fieldName, L"attack_stiff_duration_base_percent_support_percent") == 0) return attack_stiff_duration_base_percent_support_percent;
			if (wcscmp(fieldName, L"attack_stiff_duration_value_support_percent") == 0) return attack_stiff_duration_value_support_percent;
			if (wcscmp(fieldName, L"defend_stiff_duration_base_percent_support_percent") == 0) return defend_stiff_duration_base_percent_support_percent;
			if (wcscmp(fieldName, L"defend_stiff_duration_value_support_percent") == 0) return defend_stiff_duration_value_support_percent;
			if (wcscmp(fieldName, L"aoe_defend_base_percent_support_percent") == 0) return aoe_defend_base_percent_support_percent;
			if (wcscmp(fieldName, L"aoe_defend_power_value_support_percent") == 0) return aoe_defend_power_value_support_percent;
			if (wcscmp(fieldName, L"hate_base_percent_support_percent") == 0) return hate_base_percent_support_percent;
			if (wcscmp(fieldName, L"hate_power_creature_value_support_percent") == 0) return hate_power_creature_value_support_percent;
			if (wcscmp(fieldName, L"abnormal_attack_power_value_support_percent") == 0) return abnormal_attack_power_value_support_percent;
			if (wcscmp(fieldName, L"abnormal_attack_base_percent_support_percent") == 0) return abnormal_attack_base_percent_support_percent;
			if (wcscmp(fieldName, L"heal_power_value_support_percent") == 0) return heal_power_value_support_percent;
			if (wcscmp(fieldName, L"max_guard_gauge_support_percent") == 0) return max_guard_gauge_support_percent;
			if (wcscmp(fieldName, L"defend_strength_creature_value_support_percent") == 0) return defend_strength_creature_value_support_percent;
			if (wcscmp(fieldName, L"attack_precise_creature_value_support_percent") == 0) return attack_precise_creature_value_support_percent;
			if (wcscmp(fieldName, L"attack_pierce_base_percent_support_percent") == 0) return attack_pierce_base_percent_support_percent;
			if (wcscmp(fieldName, L"attack_aoe_pierce_value_support_percent") == 0) return attack_aoe_pierce_value_support_percent;
			if (wcscmp(fieldName, L"defend_critical_damage_percent_support_percent") == 0) return defend_critical_damage_percent_support_percent;
			if (wcscmp(fieldName, L"attack_abnormal_hit_base_percent_support_percent") == 0) return attack_abnormal_hit_base_percent_support_percent;
			if (wcscmp(fieldName, L"attack_abnormal_hit_value_support_percent") == 0) return attack_abnormal_hit_value_support_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"dodge_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&dodge_percent);
			if (wcscmp(fieldName, L"critical_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&critical_percent);
			if (wcscmp(fieldName, L"defend_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_percent);
			if (wcscmp(fieldName, L"parry_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&parry_percent);
			if (wcscmp(fieldName, L"perfect_parry_constant") == 0) return Data::AnyFieldToStringConverter::ToString(&perfect_parry_constant);
			if (wcscmp(fieldName, L"counter_constant") == 0) return Data::AnyFieldToStringConverter::ToString(&counter_constant);
			if (wcscmp(fieldName, L"hit_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hit_percent);
			if (wcscmp(fieldName, L"attribute_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_percent);
			if (wcscmp(fieldName, L"abnormal_attack_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_percent);
			if (wcscmp(fieldName, L"abnormal_attack_rate_min_permile") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_rate_min_permile);
			if (wcscmp(fieldName, L"abnormal_defend_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_defend_percent);
			if (wcscmp(fieldName, L"hate_power_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_power_percent);
			if (wcscmp(fieldName, L"critical_damage_rate_min_permile") == 0) return Data::AnyFieldToStringConverter::ToString(&critical_damage_rate_min_permile);
			if (wcscmp(fieldName, L"attribute_damage_rate_min_permile") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_damage_rate_min_permile);
			if (wcscmp(fieldName, L"max_hp_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hp_support_percent);
			if (wcscmp(fieldName, L"speed_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&speed_support_percent);
			if (wcscmp(fieldName, L"attack_pierce_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_value_support_percent);
			if (wcscmp(fieldName, L"attack_concentrate_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_concentrate_value_support_percent);
			if (wcscmp(fieldName, L"attack_critical_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_base_percent_support_percent);
			if (wcscmp(fieldName, L"attack_critical_damage_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_percent_support_percent);
			if (wcscmp(fieldName, L"attack_critical_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_value_support_percent);
			if (wcscmp(fieldName, L"attack_critical_damage_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_critical_damage_value_support_percent);
			if (wcscmp(fieldName, L"defend_critical_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_base_percent_support_percent);
			if (wcscmp(fieldName, L"defend_critical_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_value_support_percent);
			if (wcscmp(fieldName, L"defend_parry_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_value_support_percent);
			if (wcscmp(fieldName, L"defend_perfect_parry_reduce_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_perfect_parry_reduce_percent_support_percent);
			if (wcscmp(fieldName, L"defend_counter_reduce_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_counter_reduce_percent_support_percent);
			if (wcscmp(fieldName, L"attack_power_creature_min_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_creature_min_support_percent);
			if (wcscmp(fieldName, L"attack_power_creature_max_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_creature_max_support_percent);
			if (wcscmp(fieldName, L"defend_power_creature_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_power_creature_value_support_percent);
			if (wcscmp(fieldName, L"defend_physical_damage_reduce_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_physical_damage_reduce_percent_support_percent);
			if (wcscmp(fieldName, L"attack_stiff_duration_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_base_percent_support_percent);
			if (wcscmp(fieldName, L"attack_stiff_duration_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_stiff_duration_value_support_percent);
			if (wcscmp(fieldName, L"defend_stiff_duration_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_base_percent_support_percent);
			if (wcscmp(fieldName, L"defend_stiff_duration_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_stiff_duration_value_support_percent);
			if (wcscmp(fieldName, L"aoe_defend_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_base_percent_support_percent);
			if (wcscmp(fieldName, L"aoe_defend_power_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&aoe_defend_power_value_support_percent);
			if (wcscmp(fieldName, L"hate_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_base_percent_support_percent);
			if (wcscmp(fieldName, L"hate_power_creature_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_power_creature_value_support_percent);
			if (wcscmp(fieldName, L"abnormal_attack_power_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_power_value_support_percent);
			if (wcscmp(fieldName, L"abnormal_attack_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&abnormal_attack_base_percent_support_percent);
			if (wcscmp(fieldName, L"heal_power_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_power_value_support_percent);
			if (wcscmp(fieldName, L"max_guard_gauge_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&max_guard_gauge_support_percent);
			if (wcscmp(fieldName, L"defend_strength_creature_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_strength_creature_value_support_percent);
			if (wcscmp(fieldName, L"attack_precise_creature_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_precise_creature_value_support_percent);
			if (wcscmp(fieldName, L"attack_pierce_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_base_percent_support_percent);
			if (wcscmp(fieldName, L"attack_aoe_pierce_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_aoe_pierce_value_support_percent);
			if (wcscmp(fieldName, L"defend_critical_damage_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_critical_damage_percent_support_percent);
			if (wcscmp(fieldName, L"attack_abnormal_hit_base_percent_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_abnormal_hit_base_percent_support_percent);
			if (wcscmp(fieldName, L"attack_abnormal_hit_value_support_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_abnormal_hit_value_support_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 dodge_percent;
__int16 critical_percent;
__int16 defend_percent;
__int16 parry_percent;
__int16 perfect_parry_constant;
__int16 counter_constant;
__int16 hit_percent;
__int16 attribute_percent;
__int16 abnormal_attack_percent;
__int16 abnormal_attack_rate_min_permile;
__int16 abnormal_defend_percent;
__int16 hate_power_percent;
__int16 critical_damage_rate_min_permile;
__int16 attribute_damage_rate_min_permile;
__int16 max_hp_support_percent;
__int16 speed_support_percent;
__int16 attack_pierce_value_support_percent;
__int16 attack_concentrate_value_support_percent;
__int16 attack_critical_base_percent_support_percent;
__int16 attack_critical_damage_percent_support_percent;
__int16 attack_critical_value_support_percent;
__int16 attack_critical_damage_value_support_percent;
__int16 defend_critical_base_percent_support_percent;
__int16 defend_critical_value_support_percent;
__int16 defend_parry_value_support_percent;
__int16 defend_perfect_parry_reduce_percent_support_percent;
__int16 defend_counter_reduce_percent_support_percent;
__int16 attack_power_creature_min_support_percent;
__int16 attack_power_creature_max_support_percent;
__int16 defend_power_creature_value_support_percent;
__int16 defend_physical_damage_reduce_percent_support_percent;
__int16 attack_stiff_duration_base_percent_support_percent;
__int16 attack_stiff_duration_value_support_percent;
__int16 defend_stiff_duration_base_percent_support_percent;
__int16 defend_stiff_duration_value_support_percent;
__int16 aoe_defend_base_percent_support_percent;
__int16 aoe_defend_power_value_support_percent;
__int16 hate_base_percent_support_percent;
__int16 hate_power_creature_value_support_percent;
__int16 abnormal_attack_power_value_support_percent;
__int16 abnormal_attack_base_percent_support_percent;
__int16 heal_power_value_support_percent;
__int16 max_guard_gauge_support_percent;
__int16 defend_strength_creature_value_support_percent;
__int16 attack_precise_creature_value_support_percent;
__int16 attack_pierce_base_percent_support_percent;
__int16 attack_aoe_pierce_value_support_percent;
__int16 defend_critical_damage_percent_support_percent;
__int16 attack_abnormal_hit_base_percent_support_percent;
__int16 attack_abnormal_hit_value_support_percent;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 149; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) formula_constant_RecordPtr // : DrRecordPtr
	{
		formula_constant_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::formula_constant_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}