/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contentsjournal2noti_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"noti_quest_id") == 0) return noti_quest_id;
			if (wcscmp(fieldName, L"noti_level") == 0) return noti_level;
			if (wcscmp(fieldName, L"noti_mastery_level") == 0) return noti_mastery_level;
			if (wcscmp(fieldName, L"cave") == 0) return cave;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return raid_dungeon;
			if (wcscmp(fieldName, L"boss_challenge") == 0) return boss_challenge;
			if (wcscmp(fieldName, L"duel_bot_challenge") == 0) return duel_bot_challenge;
			if (wcscmp(fieldName, L"duel_bot_training_room") == 0) return duel_bot_training_room;
			if (wcscmp(fieldName, L"tendency_field") == 0) return tendency_field;
			if (wcscmp(fieldName, L"event") == 0) return event;
			if (wcscmp(fieldName, L"simple_field") == 0) return simple_field;
			if (wcscmp(fieldName, L"classic_field_zone") == 0) return classic_field_zone;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"noti_quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&noti_quest_id);
			if (wcscmp(fieldName, L"noti_level") == 0) return Data::AnyFieldToStringConverter::ToString(&noti_level);
			if (wcscmp(fieldName, L"noti_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&noti_mastery_level);
			if (wcscmp(fieldName, L"cave") == 0) return Data::AnyFieldToStringConverter::ToString(&cave);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&raid_dungeon);
			if (wcscmp(fieldName, L"boss_challenge") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_challenge);
			if (wcscmp(fieldName, L"duel_bot_challenge") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_challenge);
			if (wcscmp(fieldName, L"duel_bot_training_room") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_training_room);
			if (wcscmp(fieldName, L"tendency_field") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_field);
			if (wcscmp(fieldName, L"event") == 0) return Data::AnyFieldToStringConverter::ToString(&event);
			if (wcscmp(fieldName, L"simple_field") == 0) return Data::AnyFieldToStringConverter::ToString(&simple_field);
			if (wcscmp(fieldName, L"classic_field_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&classic_field_zone);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef description;
int description_tableId(){return 405;};
Data::TableRef noti_quest_id;
int noti_quest_id_tableId(){return 283;};
__int8 noti_level;
__int8 noti_mastery_level;
char Pad0[2];
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
bool event;
char Pad1[3];
Data::TableRef simple_field;
int simple_field_tableId(){return 323;};
Data::TableRef classic_field_zone;
int classic_field_zone_tableId(){return 57;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 69; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournal2noti_RecordPtr // : DrRecordPtr
	{
		contentsjournal2noti_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contentsjournal2noti_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}