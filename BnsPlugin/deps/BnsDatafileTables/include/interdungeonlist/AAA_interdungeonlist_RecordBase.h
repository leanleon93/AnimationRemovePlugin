/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct interdungeonlist_Record : DrEl
	{
	private:
		static std::wstring Get_required_complete_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"cave") == 0) return cave;
			if (wcscmp(fieldName, L"party_battle_field") == 0) return party_battle_field;
			if (wcscmp(fieldName, L"public_raid") == 0) return public_raid;
			if (wcscmp(fieldName, L"battle_royal_field") == 0) return battle_royal_field;
			if (wcscmp(fieldName, L"sealed_dungeon") == 0) return sealed_dungeon;
			if (wcscmp(fieldName, L"required_complete_quest") == 0) return required_complete_quest;
			if (wcscmp(fieldName, L"required_complete_quest_1") == 0) return required_complete_quest[0];
			if (wcscmp(fieldName, L"required_complete_quest_2") == 0) return required_complete_quest[1];
			if (wcscmp(fieldName, L"required_complete_quest_check") == 0) return required_complete_quest_check;
			if (wcscmp(fieldName, L"use_difficulty_type") == 0) return use_difficulty_type;
			if (wcscmp(fieldName, L"use_difficulty_type_1") == 0) return use_difficulty_type[0];
			if (wcscmp(fieldName, L"use_difficulty_type_2") == 0) return use_difficulty_type[1];
			if (wcscmp(fieldName, L"use_difficulty_type_3") == 0) return use_difficulty_type[2];
			if (wcscmp(fieldName, L"use_chat_filter") == 0) return use_chat_filter;
			if (wcscmp(fieldName, L"quest_mission_step") == 0) return quest_mission_step;
			if (wcscmp(fieldName, L"use_guild_combat") == 0) return use_guild_combat;
			if (wcscmp(fieldName, L"use_pc_contents_type_dungeon") == 0) return use_pc_contents_type_dungeon;
			if (wcscmp(fieldName, L"skip_match_required_member_count") == 0) return skip_match_required_member_count;
			if (wcscmp(fieldName, L"representative_small_imageset") == 0) return representative_small_imageset;
			if (wcscmp(fieldName, L"representative_large_imageset") == 0) return representative_large_imageset;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"cave") == 0) return Data::AnyFieldToStringConverter::ToString(&cave);
			if (wcscmp(fieldName, L"party_battle_field") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_field);
			if (wcscmp(fieldName, L"public_raid") == 0) return Data::AnyFieldToStringConverter::ToString(&public_raid);
			if (wcscmp(fieldName, L"battle_royal_field") == 0) return Data::AnyFieldToStringConverter::ToString(&battle_royal_field);
			if (wcscmp(fieldName, L"sealed_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&sealed_dungeon);
			if (wcscmp(fieldName, L"required_complete_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_complete_quest[0]));
			if (wcscmp(fieldName, L"required_complete_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_complete_quest[1]));
			if (wcscmp(fieldName, L"required_complete_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_complete_quest_check);
			if (wcscmp(fieldName, L"use_difficulty_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_difficulty_type[0]));
			if (wcscmp(fieldName, L"use_difficulty_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_difficulty_type[1]));
			if (wcscmp(fieldName, L"use_difficulty_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_difficulty_type[2]));
			if (wcscmp(fieldName, L"use_chat_filter") == 0) return Data::AnyFieldToStringConverter::ToString(&use_chat_filter);
			if (wcscmp(fieldName, L"quest_mission_step") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_mission_step);
			if (wcscmp(fieldName, L"use_guild_combat") == 0) return Data::AnyFieldToStringConverter::ToString(&use_guild_combat);
			if (wcscmp(fieldName, L"use_pc_contents_type_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&use_pc_contents_type_dungeon);
			if (wcscmp(fieldName, L"skip_match_required_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&skip_match_required_member_count);
			if (wcscmp(fieldName, L"representative_small_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&representative_small_imageset);
			if (wcscmp(fieldName, L"representative_large_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&representative_large_imageset);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(representative_small_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) representative_small_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(representative_small_imageset));
			if (reinterpret_cast<std::uintptr_t>(representative_large_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) representative_large_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(representative_large_imageset));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef cave;
int cave_tableId(){return 49;};
Data::TableRef party_battle_field;
int party_battle_field_tableId(){return 261;};
Data::TableRef public_raid;
int public_raid_tableId(){return 279;};
Data::TableRef battle_royal_field;
int battle_royal_field_tableId(){return 32;};
Data::TableRef sealed_dungeon;
int sealed_dungeon_tableId(){return 110;};
Data::TableRef required_complete_quest[2];
int required_complete_quest_tableId(){return 283;};
__int8 required_complete_quest_check;
std::wstring required_complete_quest_check_EnumValue() const {return Get_required_complete_quest_check_EnumValue(required_complete_quest_check);};
bool use_difficulty_type[3];
bool use_chat_filter;
__int8 quest_mission_step;
bool use_guild_combat;
bool use_pc_contents_type_dungeon;
__int8 skip_match_required_member_count;
char Pad0[3];
wchar_t* representative_small_imageset;
wchar_t* representative_large_imageset;

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 182; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) interdungeonlist_RecordPtr // : DrRecordPtr
	{
		interdungeonlist_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::interdungeonlist_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}