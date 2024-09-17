/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct fielditemdrop_npc_Record : fielditemdrop_Record
	{
	private:
		static std::wstring Get_drop_case_EnumValue(__int8 value);
		static std::wstring Get_effect_attribute_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = fielditemdrop_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"drop_case") == 0) return drop_case;
			if (wcscmp(fieldName, L"effect_attribute") == 0) return effect_attribute;
			if (wcscmp(fieldName, L"effect_attribute_1") == 0) return effect_attribute[0];
			if (wcscmp(fieldName, L"effect_attribute_2") == 0) return effect_attribute[1];
			if (wcscmp(fieldName, L"effect_attribute_3") == 0) return effect_attribute[2];
			if (wcscmp(fieldName, L"effect_attribute_4") == 0) return effect_attribute[3];
			if (wcscmp(fieldName, L"effect_attribute_value") == 0) return effect_attribute_value;
			if (wcscmp(fieldName, L"effect_attribute_value_2") == 0) return effect_attribute_value_2;
			if (wcscmp(fieldName, L"effect_attribute_value_3") == 0) return effect_attribute_value_3;
			if (wcscmp(fieldName, L"hp_percent") == 0) return hp_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = fielditemdrop_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"drop_case") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_case);
			if (wcscmp(fieldName, L"effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_attribute[0]));
			if (wcscmp(fieldName, L"effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_attribute[1]));
			if (wcscmp(fieldName, L"effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_attribute[2]));
			if (wcscmp(fieldName, L"effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_attribute[3]));
			if (wcscmp(fieldName, L"effect_attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_attribute_value);
			if (wcscmp(fieldName, L"effect_attribute_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_attribute_value_2);
			if (wcscmp(fieldName, L"effect_attribute_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_attribute_value_3);
			if (wcscmp(fieldName, L"hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			fielditemdrop_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[1];
__int8 drop_case;
std::wstring drop_case_EnumValue() const {return Get_drop_case_EnumValue(drop_case);};
char Pad_sub_1[1];
__int16 effect_attribute[4];
std::wstring effect_attribute_EnumValue(int index) const {return Get_effect_attribute_EnumValue(effect_attribute[index]);};
char Pad_sub_2[2];
__int64 effect_attribute_value;
__int64 effect_attribute_value_2;
__int64 effect_attribute_value_3;
__int8 hp_percent;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}