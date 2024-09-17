/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_content_quota_charge_Record : filter_Record
	{
	private:
		static std::wstring Get_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"content_quota") == 0) return content_quota;
			if (wcscmp(fieldName, L"op") == 0) return op;
			if (wcscmp(fieldName, L"charge_value") == 0) return charge_value;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"content_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&content_quota);
			if (wcscmp(fieldName, L"op") == 0) return Data::AnyFieldToStringConverter::ToString(&op);
			if (wcscmp(fieldName, L"charge_value") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_value);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef content_quota;
int content_quota_tableId(){return 66;};
__int8 op;
std::wstring op_EnumValue() const {return Get_op_EnumValue(op);};
char Pad_sub_0[3];
__int64 charge_value;

		static __int32 SubType() { return 42; }
	};
#pragma pack(pop)
}