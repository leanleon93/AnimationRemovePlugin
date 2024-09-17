/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct fielditemdrop_env_Record : fielditemdrop_Record
	{
	private:
		static std::wstring Get_drop_case_EnumValue(__int8 value);
		static std::wstring Get_drop_place_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = fielditemdrop_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"drop_case") == 0) return drop_case;
			if (wcscmp(fieldName, L"drop_place") == 0) return drop_place;
			if (wcscmp(fieldName, L"area") == 0) return area;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = fielditemdrop_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"drop_case") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_case);
			if (wcscmp(fieldName, L"drop_place") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_place);
			if (wcscmp(fieldName, L"area") == 0) return Data::AnyFieldToStringConverter::ToString(&area);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			fielditemdrop_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[1];
__int8 drop_case;
std::wstring drop_case_EnumValue() const {return Get_drop_case_EnumValue(drop_case);};
__int8 drop_place;
std::wstring drop_place_EnumValue() const {return Get_drop_place_EnumValue(drop_place);};
char Pad_sub_1[2];
Data::TableRef area;
int area_tableId(){return 438;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}