/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_contents_guide_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct contents_guide_boss_monster_Record : contents_guide_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = contents_guide_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boss_id") == 0) return boss_id;
			if (wcscmp(fieldName, L"linked_boss_id") == 0) return linked_boss_id;
			if (wcscmp(fieldName, L"boss_description") == 0) return boss_description;
			if (wcscmp(fieldName, L"boss_position_description") == 0) return boss_position_description;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = contents_guide_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boss_id") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_id);
			if (wcscmp(fieldName, L"linked_boss_id") == 0) return Data::AnyFieldToStringConverter::ToString(&linked_boss_id);
			if (wcscmp(fieldName, L"boss_description") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_description);
			if (wcscmp(fieldName, L"boss_position_description") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_position_description);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			contents_guide_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef boss_id;
int boss_id_tableId(){return 255;};
Data::TableRef linked_boss_id;
int linked_boss_id_tableId(){return 255;};
Data::TableRef boss_description;
int boss_description_tableId(){return 405;};
Data::TableRef boss_position_description;
int boss_position_description_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}