/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_level_Record : guide_movie_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = guide_movie_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"normal_level") == 0) return normal_level;
			if (wcscmp(fieldName, L"mastery_level") == 0) return mastery_level;
			if (wcscmp(fieldName, L"account_level") == 0) return account_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = guide_movie_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"normal_level") == 0) return Data::AnyFieldToStringConverter::ToString(&normal_level);
			if (wcscmp(fieldName, L"mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mastery_level);
			if (wcscmp(fieldName, L"account_level") == 0) return Data::AnyFieldToStringConverter::ToString(&account_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			guide_movie_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 normal_level;
__int8 mastery_level;
__int8 account_level;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}