/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_quest_Record : guide_movie_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = guide_movie_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"acquire_quest_id") == 0) return acquire_quest_id;
			if (wcscmp(fieldName, L"complete_quest_id") == 0) return complete_quest_id;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = guide_movie_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"acquire_quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&acquire_quest_id);
			if (wcscmp(fieldName, L"complete_quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&complete_quest_id);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			guide_movie_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef acquire_quest_id;
int acquire_quest_id_tableId(){return 283;};
Data::TableRef complete_quest_id;
int complete_quest_id_tableId(){return 283;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}