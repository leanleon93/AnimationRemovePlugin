/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_control_point_Record : zoneenv2_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"manipulation_required_field_item") == 0) return manipulation_required_field_item;
			if (wcscmp(fieldName, L"manipulation_drop_field_item") == 0) return manipulation_drop_field_item;
			if (wcscmp(fieldName, L"occupation_zone_score") == 0) return occupation_zone_score;
			if (wcscmp(fieldName, L"occupation_bonus_zone_score_per_sec") == 0) return occupation_bonus_zone_score_per_sec;
			if (wcscmp(fieldName, L"friend_occupation_additive_effect") == 0) return friend_occupation_additive_effect;
			if (wcscmp(fieldName, L"enemy_occupation_additive_effect") == 0) return enemy_occupation_additive_effect;
			if (wcscmp(fieldName, L"friend_occupation_additive_sound") == 0) return friend_occupation_additive_sound;
			if (wcscmp(fieldName, L"enemy_occupation_additive_sound") == 0) return enemy_occupation_additive_sound;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"manipulation_required_field_item") == 0) return Data::AnyFieldToStringConverter::ToString(&manipulation_required_field_item);
			if (wcscmp(fieldName, L"manipulation_drop_field_item") == 0) return Data::AnyFieldToStringConverter::ToString(&manipulation_drop_field_item);
			if (wcscmp(fieldName, L"occupation_zone_score") == 0) return Data::AnyFieldToStringConverter::ToString(&occupation_zone_score);
			if (wcscmp(fieldName, L"occupation_bonus_zone_score_per_sec") == 0) return Data::AnyFieldToStringConverter::ToString(&occupation_bonus_zone_score_per_sec);
			if (wcscmp(fieldName, L"friend_occupation_additive_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_occupation_additive_effect);
			if (wcscmp(fieldName, L"enemy_occupation_additive_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_occupation_additive_effect);
			if (wcscmp(fieldName, L"friend_occupation_additive_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_occupation_additive_sound);
			if (wcscmp(fieldName, L"enemy_occupation_additive_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_occupation_additive_sound);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(friend_occupation_additive_effect) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_occupation_additive_effect = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_occupation_additive_effect));
			else return;
			if (reinterpret_cast<std::uintptr_t>(enemy_occupation_additive_effect) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_occupation_additive_effect = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_occupation_additive_effect));
			if (reinterpret_cast<std::uintptr_t>(friend_occupation_additive_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_occupation_additive_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_occupation_additive_sound));
			if (reinterpret_cast<std::uintptr_t>(enemy_occupation_additive_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_occupation_additive_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_occupation_additive_sound));
		}
		Data::TableRef manipulation_required_field_item;
int manipulation_required_field_item_tableId(){return 137;};
Data::TableRef manipulation_drop_field_item;
int manipulation_drop_field_item_tableId(){return 138;};
__int16 occupation_zone_score;
__int16 occupation_bonus_zone_score_per_sec;
wchar_t* friend_occupation_additive_effect;
wchar_t* enemy_occupation_additive_effect;
wchar_t* friend_occupation_additive_sound;
wchar_t* enemy_occupation_additive_sound;

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}