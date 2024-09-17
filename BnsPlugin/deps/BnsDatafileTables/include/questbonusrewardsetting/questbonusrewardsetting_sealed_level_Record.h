/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_questbonusrewardsetting_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct questbonusrewardsetting_sealed_level_Record : questbonusrewardsetting_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = questbonusrewardsetting_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"sealed_level") == 0) return sealed_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = questbonusrewardsetting_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"sealed_level") == 0) return Data::AnyFieldToStringConverter::ToString(&sealed_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			questbonusrewardsetting_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 sealed_level;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}