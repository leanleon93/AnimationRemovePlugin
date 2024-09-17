/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_transform_item_Record : boast_event_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = boast_event_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boast_from_recipe") == 0) return boast_from_recipe;
			if (wcscmp(fieldName, L"boast_item") == 0) return boast_item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = boast_event_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boast_from_recipe") == 0) return Data::AnyFieldToStringConverter::ToString(&boast_from_recipe);
			if (wcscmp(fieldName, L"boast_item") == 0) return Data::AnyFieldToStringConverter::ToString(&boast_item);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			boast_event_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
Data::TableRef boast_from_recipe;
int boast_from_recipe_tableId(){return 212;};
Data::TableRef boast_item;
int boast_item_tableId(){return 189;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}