/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_guide_movie_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct guide_movie_dungeon_Record : guide_movie_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = guide_movie_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"cave") == 0) return cave;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return raid_dungeon;
			if (wcscmp(fieldName, L"boss_challenge") == 0) return boss_challenge;
			if (wcscmp(fieldName, L"duel_bot_challenge") == 0) return duel_bot_challenge;
			if (wcscmp(fieldName, L"duel_bot_training_room") == 0) return duel_bot_training_room;
			if (wcscmp(fieldName, L"tendency_field") == 0) return tendency_field;
			if (wcscmp(fieldName, L"simple_field") == 0) return simple_field;
			if (wcscmp(fieldName, L"time_limit_field") == 0) return time_limit_field;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = guide_movie_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"cave") == 0) return Data::AnyFieldToStringConverter::ToString(&cave);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&raid_dungeon);
			if (wcscmp(fieldName, L"boss_challenge") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_challenge);
			if (wcscmp(fieldName, L"duel_bot_challenge") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_challenge);
			if (wcscmp(fieldName, L"duel_bot_training_room") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_training_room);
			if (wcscmp(fieldName, L"tendency_field") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_field);
			if (wcscmp(fieldName, L"simple_field") == 0) return Data::AnyFieldToStringConverter::ToString(&simple_field);
			if (wcscmp(fieldName, L"time_limit_field") == 0) return Data::AnyFieldToStringConverter::ToString(&time_limit_field);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			guide_movie_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef cave;
int cave_tableId(){return 49;};
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef raid_dungeon;
int raid_dungeon_tableId(){return 289;};
Data::TableRef boss_challenge;
int boss_challenge_tableId(){return 44;};
Data::TableRef duel_bot_challenge;
int duel_bot_challenge_tableId(){return 101;};
Data::TableRef duel_bot_training_room;
int duel_bot_training_room_tableId(){return 104;};
Data::TableRef tendency_field;
int tendency_field_tableId(){return 403;};
Data::TableRef simple_field;
int simple_field_tableId(){return 323;};
Data::TableRef time_limit_field;
int time_limit_field_tableId(){return 406;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}