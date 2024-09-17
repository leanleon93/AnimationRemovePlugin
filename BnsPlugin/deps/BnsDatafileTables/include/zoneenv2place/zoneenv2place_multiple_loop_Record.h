/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2place_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2place_multiple_loop_Record : zoneenv2place_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2place_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2place_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2place_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		
		static __int32 SubType() { return 14; }
	};
#pragma pack(pop)
}