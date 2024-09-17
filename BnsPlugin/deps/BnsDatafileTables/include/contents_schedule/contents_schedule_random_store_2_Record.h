/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_contents_schedule_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct contents_schedule_random_store_2_Record : contents_schedule_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = contents_schedule_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = contents_schedule_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			contents_schedule_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		
		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}