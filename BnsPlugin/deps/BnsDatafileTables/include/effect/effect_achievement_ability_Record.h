/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_achievement_ability_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"attack_power_creature_min") == 0) return attack_power_creature_min;
			if (wcscmp(fieldName, L"attack_power_creature_max") == 0) return attack_power_creature_max;
			if (wcscmp(fieldName, L"attack_hit_value") == 0) return attack_hit_value;
			if (wcscmp(fieldName, L"attack_pierce_value") == 0) return attack_pierce_value;
			if (wcscmp(fieldName, L"attack_damage_modify_diff") == 0) return attack_damage_modify_diff;
			if (wcscmp(fieldName, L"max_hp") == 0) return max_hp;
			if (wcscmp(fieldName, L"defend_power_creature_value") == 0) return defend_power_creature_value;
			if (wcscmp(fieldName, L"defend_dodge_value") == 0) return defend_dodge_value;
			if (wcscmp(fieldName, L"defend_parry_value") == 0) return defend_parry_value;
			if (wcscmp(fieldName, L"defend_damage_modify_diff") == 0) return defend_damage_modify_diff;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"attack_power_creature_min") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_creature_min);
			if (wcscmp(fieldName, L"attack_power_creature_max") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_power_creature_max);
			if (wcscmp(fieldName, L"attack_hit_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_hit_value);
			if (wcscmp(fieldName, L"attack_pierce_value") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_pierce_value);
			if (wcscmp(fieldName, L"attack_damage_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_damage_modify_diff);
			if (wcscmp(fieldName, L"max_hp") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hp);
			if (wcscmp(fieldName, L"defend_power_creature_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_power_creature_value);
			if (wcscmp(fieldName, L"defend_dodge_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_dodge_value);
			if (wcscmp(fieldName, L"defend_parry_value") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_parry_value);
			if (wcscmp(fieldName, L"defend_damage_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_damage_modify_diff);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 attack_power_creature_min;
__int32 attack_power_creature_max;
__int16 attack_hit_value;
__int16 attack_pierce_value;
__int16 attack_damage_modify_diff;
char Pad_sub_0[2];
__int32 max_hp;
__int16 defend_power_creature_value;
__int16 defend_dodge_value;
__int16 defend_parry_value;
__int16 defend_damage_modify_diff;

		static __int32 SubType() { return 852; }
	};
#pragma pack(pop)
}