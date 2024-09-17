/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contentsjournal_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"cave") == 0) return cave;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"dungeon_solo") == 0) return dungeon_solo;
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return raid_dungeon;
			if (wcscmp(fieldName, L"sealed_dungeon_modify") == 0) return sealed_dungeon_modify;
			if (wcscmp(fieldName, L"boss_challenge") == 0) return boss_challenge;
			if (wcscmp(fieldName, L"duel_bot_challenge") == 0) return duel_bot_challenge;
			if (wcscmp(fieldName, L"duel_bot_training_room") == 0) return duel_bot_training_room;
			if (wcscmp(fieldName, L"tendency_field") == 0) return tendency_field;
			if (wcscmp(fieldName, L"simple_field") == 0) return simple_field;
			if (wcscmp(fieldName, L"classic_field_zone") == 0) return classic_field_zone;
			if (wcscmp(fieldName, L"time_limit_field_zone") == 0) return time_limit_field_zone;
			if (wcscmp(fieldName, L"teleport") == 0) return teleport;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"event") == 0) return event;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"cave") == 0) return Data::AnyFieldToStringConverter::ToString(&cave);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"dungeon_solo") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_solo);
			if (wcscmp(fieldName, L"raid_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&raid_dungeon);
			if (wcscmp(fieldName, L"sealed_dungeon_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&sealed_dungeon_modify);
			if (wcscmp(fieldName, L"boss_challenge") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_challenge);
			if (wcscmp(fieldName, L"duel_bot_challenge") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_challenge);
			if (wcscmp(fieldName, L"duel_bot_training_room") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_training_room);
			if (wcscmp(fieldName, L"tendency_field") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_field);
			if (wcscmp(fieldName, L"simple_field") == 0) return Data::AnyFieldToStringConverter::ToString(&simple_field);
			if (wcscmp(fieldName, L"classic_field_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&classic_field_zone);
			if (wcscmp(fieldName, L"time_limit_field_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&time_limit_field_zone);
			if (wcscmp(fieldName, L"teleport") == 0) return Data::AnyFieldToStringConverter::ToString(&teleport);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"event") == 0) return Data::AnyFieldToStringConverter::ToString(&event);

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
Data::TableRef cave;
int cave_tableId(){return 49;};
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef dungeon_solo;
int dungeon_solo_tableId(){return 110;};
Data::TableRef raid_dungeon;
int raid_dungeon_tableId(){return 289;};
Data::TableRef sealed_dungeon_modify;
int sealed_dungeon_modify_tableId(){return 316;};
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
Data::TableRef classic_field_zone;
int classic_field_zone_tableId(){return 57;};
Data::TableRef time_limit_field_zone;
int time_limit_field_zone_tableId(){return 406;};
Data::TableRef teleport;
int teleport_tableId(){return 401;};
__int8 sort_no;
bool event;

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 70; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournal_RecordPtr // : DrRecordPtr
	{
		contentsjournal_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contentsjournal_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}