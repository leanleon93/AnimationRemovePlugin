/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_constellation_star_option_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct constellation_star_option_ability_Record : constellation_star_option_Record
	{
	private:
		static std::wstring Get_modify_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = constellation_star_option_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"modify_ability") == 0) return modify_ability;
			if (wcscmp(fieldName, L"modify_ability_value_min") == 0) return modify_ability_value_min;
			if (wcscmp(fieldName, L"modify_ability_value_max") == 0) return modify_ability_value_max;
			if (wcscmp(fieldName, L"modify_ability_base_value_min") == 0) return modify_ability_base_value_min;
			if (wcscmp(fieldName, L"modify_ability_base_value_max") == 0) return modify_ability_base_value_max;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = constellation_star_option_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"modify_ability") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_ability);
			if (wcscmp(fieldName, L"modify_ability_value_min") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_ability_value_min);
			if (wcscmp(fieldName, L"modify_ability_value_max") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_ability_value_max);
			if (wcscmp(fieldName, L"modify_ability_base_value_min") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_ability_base_value_min);
			if (wcscmp(fieldName, L"modify_ability_base_value_max") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_ability_base_value_max);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			constellation_star_option_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 modify_ability;
std::wstring modify_ability_EnumValue() const {return Get_modify_ability_EnumValue(modify_ability);};
char Pad_sub_0[3];
__int32 modify_ability_value_min;
__int32 modify_ability_value_max;
__int32 modify_ability_base_value_min;
__int32 modify_ability_base_value_max;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}