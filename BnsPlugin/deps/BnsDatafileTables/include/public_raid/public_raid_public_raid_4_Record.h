/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct public_raid_public_raid_4_Record : public_raid_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = public_raid_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return raid_dungeon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = public_raid_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&raid_dungeon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			public_raid_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef raid_dungeon;
int raid_dungeon_tableId(){return 289;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}