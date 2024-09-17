/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_buy_random_store_item_Record : boast_event_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = boast_event_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boast_from_random_store") == 0) return boast_from_random_store;
			if (wcscmp(fieldName, L"boast_item") == 0) return boast_item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = boast_event_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boast_from_random_store") == 0) return Data::AnyFieldToStringConverter::ToString(&boast_from_random_store);
			if (wcscmp(fieldName, L"boast_item") == 0) return Data::AnyFieldToStringConverter::ToString(&boast_item);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			boast_event_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
Data::TableRef boast_from_random_store;
int boast_from_random_store_tableId(){return 292;};
Data::TableRef boast_item;
int boast_item_tableId(){return 189;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}