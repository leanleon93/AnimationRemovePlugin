/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_challengelist_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct challengelist_dayofweek_Record : challengelist_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = challengelist_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = challengelist_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			challengelist_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}