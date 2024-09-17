/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_process_item_fusion_Record : boast_event_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = boast_event_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_grade") == 0) return item_grade;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = boast_event_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&item_grade);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			boast_event_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
__int8 item_grade;

		static __int32 SubType() { return 9; }
	};
#pragma pack(pop)
}