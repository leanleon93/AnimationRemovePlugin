/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_enter_zone_Record : guide_movie_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = guide_movie_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"zone") == 0) return zone;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = guide_movie_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			guide_movie_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef zone;
int zone_tableId(){return 443;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}