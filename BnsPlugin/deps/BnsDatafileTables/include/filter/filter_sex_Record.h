/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_sex_Record : filter_Record
	{
	private:
		static std::wstring Get_value_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"value") == 0) return value;
			if (wcscmp(fieldName, L"value_1") == 0) return value[0];
			if (wcscmp(fieldName, L"value_2") == 0) return value[1];
			if (wcscmp(fieldName, L"value_3") == 0) return value[2];
			if (wcscmp(fieldName, L"value_4") == 0) return value[3];
			if (wcscmp(fieldName, L"either") == 0) return either;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[0]));
			if (wcscmp(fieldName, L"value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[1]));
			if (wcscmp(fieldName, L"value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[2]));
			if (wcscmp(fieldName, L"value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[3]));
			if (wcscmp(fieldName, L"either") == 0) return Data::AnyFieldToStringConverter::ToString(&either);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 value[4];
std::wstring value_EnumValue(int index) const {return Get_value_EnumValue(value[index]);};
bool either;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}