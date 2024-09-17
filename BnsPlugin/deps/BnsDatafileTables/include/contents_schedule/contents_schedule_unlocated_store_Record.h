/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_contents_schedule_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct contents_schedule_unlocated_store_Record : contents_schedule_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = contents_schedule_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"unlocated_store") == 0) return unlocated_store;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = contents_schedule_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"unlocated_store") == 0) return Data::AnyFieldToStringConverter::ToString(&unlocated_store);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			contents_schedule_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef unlocated_store;
int unlocated_store_tableId(){return 415;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}