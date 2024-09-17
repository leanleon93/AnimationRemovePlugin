/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_training_room_Record : DrEl
	{
	private:
		static std::wstring Get_required_preceding_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return required_preceding_quest[2];
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return required_preceding_quest_check;
			if (wcscmp(fieldName, L"match_select_delay_duration") == 0) return match_select_delay_duration;
			if (wcscmp(fieldName, L"spawn_kismet_delay_duration") == 0) return spawn_kismet_delay_duration;
			if (wcscmp(fieldName, L"finish_delay_duration") == 0) return finish_delay_duration;
			if (wcscmp(fieldName, L"blade_master_spawn_kismet_name") == 0) return blade_master_spawn_kismet_name;
			if (wcscmp(fieldName, L"kung_fu_fighter_spawn_kismet_name") == 0) return kung_fu_fighter_spawn_kismet_name;
			if (wcscmp(fieldName, L"force_master_spawn_kismet_name") == 0) return force_master_spawn_kismet_name;
			if (wcscmp(fieldName, L"destroyer_spawn_kismet_name") == 0) return destroyer_spawn_kismet_name;
			if (wcscmp(fieldName, L"summoner_spawn_kismet_name") == 0) return summoner_spawn_kismet_name;
			if (wcscmp(fieldName, L"assassin_spawn_kismet_name") == 0) return assassin_spawn_kismet_name;
			if (wcscmp(fieldName, L"sword_master_spawn_kismet_name") == 0) return sword_master_spawn_kismet_name;
			if (wcscmp(fieldName, L"warlock_spawn_kismet_name") == 0) return warlock_spawn_kismet_name;
			if (wcscmp(fieldName, L"soul_fighter_spawn_kismet_name") == 0) return soul_fighter_spawn_kismet_name;
			if (wcscmp(fieldName, L"shooter_spawn_kismet_name") == 0) return shooter_spawn_kismet_name;
			if (wcscmp(fieldName, L"warrior_spawn_kismet_name") == 0) return warrior_spawn_kismet_name;
			if (wcscmp(fieldName, L"archer_spawn_kismet_name") == 0) return archer_spawn_kismet_name;
			if (wcscmp(fieldName, L"spear_master_spawn_kismet_name") == 0) return spear_master_spawn_kismet_name;
			if (wcscmp(fieldName, L"thunderer_spawn_kismet_name") == 0) return thunderer_spawn_kismet_name;
			if (wcscmp(fieldName, L"dual_blader_spawn_kismet_name") == 0) return dual_blader_spawn_kismet_name;
			if (wcscmp(fieldName, L"bard_spawn_kismet_name") == 0) return bard_spawn_kismet_name;
			if (wcscmp(fieldName, L"timeout_duration_second") == 0) return timeout_duration_second;
			if (wcscmp(fieldName, L"achievement_time_limit_second") == 0) return achievement_time_limit_second;
			if (wcscmp(fieldName, L"achievement_time_limit_second_1") == 0) return achievement_time_limit_second[0];
			if (wcscmp(fieldName, L"achievement_time_limit_second_2") == 0) return achievement_time_limit_second[1];
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"dungeon_name2") == 0) return dungeon_name2;
			if (wcscmp(fieldName, L"dungeon_desc") == 0) return dungeon_desc;
			if (wcscmp(fieldName, L"arena_minimap") == 0) return arena_minimap;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"recommand_level_min") == 0) return recommand_level_min;
			if (wcscmp(fieldName, L"recommand_level_max") == 0) return recommand_level_max;
			if (wcscmp(fieldName, L"recommand_mastery_level_min") == 0) return recommand_mastery_level_min;
			if (wcscmp(fieldName, L"recommand_mastery_level_max") == 0) return recommand_mastery_level_max;
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return recommend_attack_power;
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return standard_gear_weapon;
			if (wcscmp(fieldName, L"display_quests") == 0) return display_quests;
			if (wcscmp(fieldName, L"display_quests_1") == 0) return display_quests[0];
			if (wcscmp(fieldName, L"display_quests_2") == 0) return display_quests[1];
			if (wcscmp(fieldName, L"display_quests_3") == 0) return display_quests[2];
			if (wcscmp(fieldName, L"display_quests_4") == 0) return display_quests[3];
			if (wcscmp(fieldName, L"display_quests_5") == 0) return display_quests[4];
			if (wcscmp(fieldName, L"display_quests_6") == 0) return display_quests[5];
			if (wcscmp(fieldName, L"display_quests_7") == 0) return display_quests[6];
			if (wcscmp(fieldName, L"display_quests_8") == 0) return display_quests[7];
			if (wcscmp(fieldName, L"display_quests_9") == 0) return display_quests[8];
			if (wcscmp(fieldName, L"display_quests_10") == 0) return display_quests[9];
			if (wcscmp(fieldName, L"display_quests_11") == 0) return display_quests[10];
			if (wcscmp(fieldName, L"display_quests_12") == 0) return display_quests[11];
			if (wcscmp(fieldName, L"tactic") == 0) return tactic;
			if (wcscmp(fieldName, L"recommend_alias") == 0) return recommend_alias;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[2]));
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_quest_check);
			if (wcscmp(fieldName, L"match_select_delay_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&match_select_delay_duration);
			if (wcscmp(fieldName, L"spawn_kismet_delay_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_kismet_delay_duration);
			if (wcscmp(fieldName, L"finish_delay_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&finish_delay_duration);
			if (wcscmp(fieldName, L"blade_master_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&blade_master_spawn_kismet_name);
			if (wcscmp(fieldName, L"kung_fu_fighter_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&kung_fu_fighter_spawn_kismet_name);
			if (wcscmp(fieldName, L"force_master_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&force_master_spawn_kismet_name);
			if (wcscmp(fieldName, L"destroyer_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&destroyer_spawn_kismet_name);
			if (wcscmp(fieldName, L"summoner_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&summoner_spawn_kismet_name);
			if (wcscmp(fieldName, L"assassin_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&assassin_spawn_kismet_name);
			if (wcscmp(fieldName, L"sword_master_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&sword_master_spawn_kismet_name);
			if (wcscmp(fieldName, L"warlock_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&warlock_spawn_kismet_name);
			if (wcscmp(fieldName, L"soul_fighter_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_spawn_kismet_name);
			if (wcscmp(fieldName, L"shooter_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&shooter_spawn_kismet_name);
			if (wcscmp(fieldName, L"warrior_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&warrior_spawn_kismet_name);
			if (wcscmp(fieldName, L"archer_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&archer_spawn_kismet_name);
			if (wcscmp(fieldName, L"spear_master_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&spear_master_spawn_kismet_name);
			if (wcscmp(fieldName, L"thunderer_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&thunderer_spawn_kismet_name);
			if (wcscmp(fieldName, L"dual_blader_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&dual_blader_spawn_kismet_name);
			if (wcscmp(fieldName, L"bard_spawn_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&bard_spawn_kismet_name);
			if (wcscmp(fieldName, L"timeout_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&timeout_duration_second);
			if (wcscmp(fieldName, L"achievement_time_limit_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement_time_limit_second[0]));
			if (wcscmp(fieldName, L"achievement_time_limit_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement_time_limit_second[1]));
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"dungeon_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_name2);
			if (wcscmp(fieldName, L"dungeon_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_desc);
			if (wcscmp(fieldName, L"arena_minimap") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_minimap);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"recommand_level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_level_min);
			if (wcscmp(fieldName, L"recommand_level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_level_max);
			if (wcscmp(fieldName, L"recommand_mastery_level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_mastery_level_min);
			if (wcscmp(fieldName, L"recommand_mastery_level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_mastery_level_max);
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_attack_power);
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&standard_gear_weapon);
			if (wcscmp(fieldName, L"display_quests_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[0]));
			if (wcscmp(fieldName, L"display_quests_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[1]));
			if (wcscmp(fieldName, L"display_quests_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[2]));
			if (wcscmp(fieldName, L"display_quests_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[3]));
			if (wcscmp(fieldName, L"display_quests_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[4]));
			if (wcscmp(fieldName, L"display_quests_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[5]));
			if (wcscmp(fieldName, L"display_quests_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[6]));
			if (wcscmp(fieldName, L"display_quests_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[7]));
			if (wcscmp(fieldName, L"display_quests_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[8]));
			if (wcscmp(fieldName, L"display_quests_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[9]));
			if (wcscmp(fieldName, L"display_quests_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[10]));
			if (wcscmp(fieldName, L"display_quests_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_quests[11]));
			if (wcscmp(fieldName, L"tactic") == 0) return Data::AnyFieldToStringConverter::ToString(&tactic);
			if (wcscmp(fieldName, L"recommend_alias") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_alias);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(blade_master_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) blade_master_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(blade_master_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(kung_fu_fighter_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kung_fu_fighter_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kung_fu_fighter_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(force_master_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) force_master_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(force_master_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(destroyer_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) destroyer_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(destroyer_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(summoner_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoner_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoner_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(assassin_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) assassin_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(assassin_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(sword_master_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sword_master_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sword_master_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(warlock_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) warlock_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(warlock_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(soul_fighter_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) soul_fighter_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(soul_fighter_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(shooter_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) shooter_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(shooter_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(warrior_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) warrior_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(warrior_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(archer_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) archer_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(archer_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(spear_master_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spear_master_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spear_master_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(thunderer_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) thunderer_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(thunderer_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(dual_blader_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) dual_blader_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(dual_blader_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(bard_spawn_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) bard_spawn_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(bard_spawn_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(arena_minimap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) arena_minimap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(arena_minimap));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef zone;
int zone_tableId(){return 443;};
wchar_t* alias;
Data::TableRef group;
int group_tableId(){return 16;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
std::wstring required_preceding_quest_check_EnumValue() const {return Get_required_preceding_quest_check_EnumValue(required_preceding_quest_check);};
char Pad1[3];
__int32 match_select_delay_duration;
__int32 spawn_kismet_delay_duration;
__int32 finish_delay_duration;
wchar_t* blade_master_spawn_kismet_name;
wchar_t* kung_fu_fighter_spawn_kismet_name;
wchar_t* force_master_spawn_kismet_name;
wchar_t* destroyer_spawn_kismet_name;
wchar_t* summoner_spawn_kismet_name;
wchar_t* assassin_spawn_kismet_name;
wchar_t* sword_master_spawn_kismet_name;
wchar_t* warlock_spawn_kismet_name;
wchar_t* soul_fighter_spawn_kismet_name;
wchar_t* shooter_spawn_kismet_name;
wchar_t* warrior_spawn_kismet_name;
wchar_t* archer_spawn_kismet_name;
wchar_t* spear_master_spawn_kismet_name;
wchar_t* thunderer_spawn_kismet_name;
wchar_t* dual_blader_spawn_kismet_name;
wchar_t* bard_spawn_kismet_name;
__int16 timeout_duration_second;
__int16 achievement_time_limit_second[2];
__int8 ui_text_grade;
char Pad2[1];
Data::TableRef dungeon_name2;
int dungeon_name2_tableId(){return 405;};
Data::TableRef dungeon_desc;
int dungeon_desc_tableId(){return 405;};
wchar_t* arena_minimap;
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad3[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 104; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_training_room_RecordPtr // : DrRecordPtr
	{
		duel_bot_training_room_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_training_room_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}