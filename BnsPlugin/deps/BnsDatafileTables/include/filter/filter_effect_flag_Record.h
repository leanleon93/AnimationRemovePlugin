/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_effect_flag_Record : filter_Record
	{
	private:
		static std::wstring Get_flagtype_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"flagtype") == 0) return flagtype;
			if (wcscmp(fieldName, L"flag") == 0) return flag;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"flagtype") == 0) return Data::AnyFieldToStringConverter::ToString(&flagtype);
			if (wcscmp(fieldName, L"flag") == 0) return Data::AnyFieldToStringConverter::ToString(&flag);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 flagtype;
std::wstring flagtype_EnumValue() const {return Get_flagtype_EnumValue(flagtype);};
bool flag;

		static __int32 SubType() { return 8; }
	};
#pragma pack(pop)
}