/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct jackpot_boss_zone_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"transfer_jackpot_percent") == 0) return transfer_jackpot_percent;
			if (wcscmp(fieldName, L"boss_max_faction_score") == 0) return boss_max_faction_score;
			if (wcscmp(fieldName, L"spawn_boss_faction_score") == 0) return spawn_boss_faction_score;
			if (wcscmp(fieldName, L"boss_npc_faction_1") == 0) return boss_npc_faction_1;
			if (wcscmp(fieldName, L"boss_npc_faction_2") == 0) return boss_npc_faction_2;
			if (wcscmp(fieldName, L"despawn_force_faction_1") == 0) return despawn_force_faction_1;
			if (wcscmp(fieldName, L"respawn_after_despawn_faction_1") == 0) return respawn_after_despawn_faction_1;
			if (wcscmp(fieldName, L"spawn_delay_faction_1") == 0) return spawn_delay_faction_1;
			if (wcscmp(fieldName, L"despawn_force_faction_2") == 0) return despawn_force_faction_2;
			if (wcscmp(fieldName, L"respawn_after_despawn_faction_2") == 0) return respawn_after_despawn_faction_2;
			if (wcscmp(fieldName, L"spawn_delay_faction_2") == 0) return spawn_delay_faction_2;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"transfer_jackpot_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&transfer_jackpot_percent);
			if (wcscmp(fieldName, L"boss_max_faction_score") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_max_faction_score);
			if (wcscmp(fieldName, L"spawn_boss_faction_score") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_boss_faction_score);
			if (wcscmp(fieldName, L"boss_npc_faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_faction_1);
			if (wcscmp(fieldName, L"boss_npc_faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_faction_2);
			if (wcscmp(fieldName, L"despawn_force_faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_force_faction_1);
			if (wcscmp(fieldName, L"respawn_after_despawn_faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_after_despawn_faction_1);
			if (wcscmp(fieldName, L"spawn_delay_faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_delay_faction_1);
			if (wcscmp(fieldName, L"despawn_force_faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_force_faction_2);
			if (wcscmp(fieldName, L"respawn_after_despawn_faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_after_despawn_faction_2);
			if (wcscmp(fieldName, L"spawn_delay_faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_delay_faction_2);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
__int16 transfer_jackpot_percent;
char Pad0[2];
__int32 boss_max_faction_score;
__int32 spawn_boss_faction_score;
Data::TableRef boss_npc_faction_1;
int boss_npc_faction_1_tableId(){return 255;};
Data::TableRef boss_npc_faction_2;
int boss_npc_faction_2_tableId(){return 255;};
bool despawn_force_faction_1;
bool respawn_after_despawn_faction_1;
char Pad1[2];
__int32 spawn_delay_faction_1;
bool despawn_force_faction_2;
bool respawn_after_despawn_faction_2;
char Pad2[2];
__int32 spawn_delay_faction_2;
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad3[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad4[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 217; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jackpot_boss_zone_RecordPtr // : DrRecordPtr
	{
		jackpot_boss_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jackpot_boss_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}