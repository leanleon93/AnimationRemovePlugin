/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct party_battle_field_zone_occupation_war_Record : party_battle_field_zone_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = party_battle_field_zone_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"control_point") == 0) return control_point;
			if (wcscmp(fieldName, L"control_point_1") == 0) return control_point[0];
			if (wcscmp(fieldName, L"control_point_2") == 0) return control_point[1];
			if (wcscmp(fieldName, L"control_point_3") == 0) return control_point[2];
			if (wcscmp(fieldName, L"control_point_4") == 0) return control_point[3];
			if (wcscmp(fieldName, L"control_point_5") == 0) return control_point[4];
			if (wcscmp(fieldName, L"whole_occupation_bonus_score") == 0) return whole_occupation_bonus_score;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = party_battle_field_zone_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"control_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(control_point[0]));
			if (wcscmp(fieldName, L"control_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(control_point[1]));
			if (wcscmp(fieldName, L"control_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(control_point[2]));
			if (wcscmp(fieldName, L"control_point_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(control_point[3]));
			if (wcscmp(fieldName, L"control_point_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(control_point[4]));
			if (wcscmp(fieldName, L"whole_occupation_bonus_score") == 0) return Data::AnyFieldToStringConverter::ToString(&whole_occupation_bonus_score);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			party_battle_field_zone_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[2];
Data::TableRef control_point[5];
int control_point_tableId(){return 446;};
__int16 whole_occupation_bonus_score;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}