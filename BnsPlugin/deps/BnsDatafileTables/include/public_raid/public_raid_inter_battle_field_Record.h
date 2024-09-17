/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct public_raid_inter_battle_field_Record : public_raid_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = public_raid_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"portal_ticket_item_info") == 0) return portal_ticket_item_info;
			if (wcscmp(fieldName, L"entrance_quota") == 0) return entrance_quota;
			if (wcscmp(fieldName, L"arena_portal") == 0) return arena_portal;
			if (wcscmp(fieldName, L"arena_move_max_party_member_count") == 0) return arena_move_max_party_member_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = public_raid_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"portal_ticket_item_info") == 0) return Data::AnyFieldToStringConverter::ToString(&portal_ticket_item_info);
			if (wcscmp(fieldName, L"entrance_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&entrance_quota);
			if (wcscmp(fieldName, L"arena_portal") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_portal);
			if (wcscmp(fieldName, L"arena_move_max_party_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_move_max_party_member_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			public_raid_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef portal_ticket_item_info;
int portal_ticket_item_info_tableId(){return 189;};
Data::TableRef entrance_quota;
int entrance_quota_tableId(){return 66;};
Data::TableRef arena_portal;
int arena_portal_tableId(){return 13;};
__int8 arena_move_max_party_member_count;

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}