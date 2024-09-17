/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_prop_flag_Record : filter_Record
	{
	private:
		static std::wstring Get_field_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"field") == 0) return field;
			if (wcscmp(fieldName, L"flag") == 0) return flag;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"field") == 0) return Data::AnyFieldToStringConverter::ToString(&field);
			if (wcscmp(fieldName, L"flag") == 0) return Data::AnyFieldToStringConverter::ToString(&flag);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 field;
std::wstring field_EnumValue() const {return Get_field_EnumValue(field);};
bool flag;

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}