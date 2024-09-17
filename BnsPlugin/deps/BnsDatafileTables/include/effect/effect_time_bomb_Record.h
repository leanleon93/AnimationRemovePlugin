/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_time_bomb_Record : effect_Record
	{
	private:
		static std::wstring Get_dispel_attribute_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"dispel_attribute") == 0) return dispel_attribute;
			if (wcscmp(fieldName, L"dispel_attribute_1") == 0) return dispel_attribute[0];
			if (wcscmp(fieldName, L"dispel_attribute_2") == 0) return dispel_attribute[1];
			if (wcscmp(fieldName, L"dispel_attribute_3") == 0) return dispel_attribute[2];
			if (wcscmp(fieldName, L"dispel_attribute_4") == 0) return dispel_attribute[3];
			if (wcscmp(fieldName, L"dispel_attribute_value") == 0) return dispel_attribute_value;
			if (wcscmp(fieldName, L"dispel_attribute_value_2") == 0) return dispel_attribute_value_2;
			if (wcscmp(fieldName, L"dispel_attribute_value_3") == 0) return dispel_attribute_value_3;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"dispel_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(dispel_attribute[0]));
			if (wcscmp(fieldName, L"dispel_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(dispel_attribute[1]));
			if (wcscmp(fieldName, L"dispel_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(dispel_attribute[2]));
			if (wcscmp(fieldName, L"dispel_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(dispel_attribute[3]));
			if (wcscmp(fieldName, L"dispel_attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&dispel_attribute_value);
			if (wcscmp(fieldName, L"dispel_attribute_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&dispel_attribute_value_2);
			if (wcscmp(fieldName, L"dispel_attribute_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&dispel_attribute_value_3);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 dispel_attribute[4];
std::wstring dispel_attribute_EnumValue(int index) const {return Get_dispel_attribute_EnumValue(dispel_attribute[index]);};
__int64 dispel_attribute_value;
__int64 dispel_attribute_value_2;
__int64 dispel_attribute_value_3;

		static __int32 SubType() { return 830; }
	};
#pragma pack(pop)
}