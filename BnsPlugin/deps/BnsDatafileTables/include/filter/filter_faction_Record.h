/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_faction_Record : filter_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"value") == 0) return value;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"value") == 0) return Data::AnyFieldToStringConverter::ToString(&value);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef value;
int value_tableId(){return 130;};

		static __int32 SubType() { return 9; }
	};
#pragma pack(pop)
}