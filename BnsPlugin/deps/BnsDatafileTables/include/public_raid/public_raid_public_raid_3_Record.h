/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct public_raid_public_raid_3_Record : public_raid_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = public_raid_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = public_raid_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			public_raid_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		
		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}