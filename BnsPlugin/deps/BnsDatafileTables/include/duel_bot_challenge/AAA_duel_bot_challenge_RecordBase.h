/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class duel_bot_challenge_RecordSubType : __int32
    {
		duel_bot_challenge_record_sub_time_attack_mode = 0,
		duel_bot_challenge_record_sub_round_mode = 1,
		duel_bot_challenge_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct duel_bot_challenge_Record : DrEl
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
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return recommend_attack_power;
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return standard_gear_weapon;
			if (wcscmp(fieldName, L"duel_bot_spawn_delay") == 0) return duel_bot_spawn_delay;
			if (wcscmp(fieldName, L"ready_duration") == 0) return ready_duration;
			if (wcscmp(fieldName, L"floor_timeout_duration_second") == 0) return floor_timeout_duration_second;
			if (wcscmp(fieldName, L"finish_time_section") == 0) return finish_time_section;
			if (wcscmp(fieldName, L"finish_time_section_1") == 0) return finish_time_section[0];
			if (wcscmp(fieldName, L"finish_time_section_2") == 0) return finish_time_section[1];
			if (wcscmp(fieldName, L"finish_time_section_3") == 0) return finish_time_section[2];
			if (wcscmp(fieldName, L"finish_time_section_4") == 0) return finish_time_section[3];
			if (wcscmp(fieldName, L"finish_time_section_5") == 0) return finish_time_section[4];
			if (wcscmp(fieldName, L"finish_time_section_6") == 0) return finish_time_section[5];
			if (wcscmp(fieldName, L"finish_time_section_7") == 0) return finish_time_section[6];
			if (wcscmp(fieldName, L"finish_time_section_8") == 0) return finish_time_section[7];
			if (wcscmp(fieldName, L"finish_time_section_9") == 0) return finish_time_section[8];
			if (wcscmp(fieldName, L"finish_time_section_10") == 0) return finish_time_section[9];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup") == 0) return finish_time_section_floor_setup;
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_1") == 0) return finish_time_section_floor_setup[0];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_2") == 0) return finish_time_section_floor_setup[1];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_3") == 0) return finish_time_section_floor_setup[2];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_4") == 0) return finish_time_section_floor_setup[3];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_5") == 0) return finish_time_section_floor_setup[4];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_6") == 0) return finish_time_section_floor_setup[5];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_7") == 0) return finish_time_section_floor_setup[6];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_8") == 0) return finish_time_section_floor_setup[7];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_9") == 0) return finish_time_section_floor_setup[8];
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_10") == 0) return finish_time_section_floor_setup[9];
			if (wcscmp(fieldName, L"max_floor") == 0) return max_floor;
			if (wcscmp(fieldName, L"card_select_delay_duration") == 0) return card_select_delay_duration;
			if (wcscmp(fieldName, L"change_floor_delay_duration") == 0) return change_floor_delay_duration;
			if (wcscmp(fieldName, L"change_floor_kismet_name") == 0) return change_floor_kismet_name;
			if (wcscmp(fieldName, L"change_floor_kismet_name_1") == 0) return change_floor_kismet_name[0];
			if (wcscmp(fieldName, L"change_floor_kismet_name_2") == 0) return change_floor_kismet_name[1];
			if (wcscmp(fieldName, L"change_floor_kismet_name_3") == 0) return change_floor_kismet_name[2];
			if (wcscmp(fieldName, L"change_floor_kismet_name_4") == 0) return change_floor_kismet_name[3];
			if (wcscmp(fieldName, L"change_floor_kismet_name_5") == 0) return change_floor_kismet_name[4];
			if (wcscmp(fieldName, L"change_floor_kismet_name_6") == 0) return change_floor_kismet_name[5];
			if (wcscmp(fieldName, L"change_floor_kismet_name_7") == 0) return change_floor_kismet_name[6];
			if (wcscmp(fieldName, L"change_floor_kismet_name_8") == 0) return change_floor_kismet_name[7];
			if (wcscmp(fieldName, L"change_floor_kismet_name_9") == 0) return change_floor_kismet_name[8];
			if (wcscmp(fieldName, L"change_floor_kismet_name_10") == 0) return change_floor_kismet_name[9];
			if (wcscmp(fieldName, L"change_floor_show_name") == 0) return change_floor_show_name;
			if (wcscmp(fieldName, L"change_floor_show_name_1") == 0) return change_floor_show_name[0];
			if (wcscmp(fieldName, L"change_floor_show_name_2") == 0) return change_floor_show_name[1];
			if (wcscmp(fieldName, L"change_floor_show_name_3") == 0) return change_floor_show_name[2];
			if (wcscmp(fieldName, L"change_floor_show_name_4") == 0) return change_floor_show_name[3];
			if (wcscmp(fieldName, L"change_floor_show_name_5") == 0) return change_floor_show_name[4];
			if (wcscmp(fieldName, L"change_floor_show_name_6") == 0) return change_floor_show_name[5];
			if (wcscmp(fieldName, L"change_floor_show_name_7") == 0) return change_floor_show_name[6];
			if (wcscmp(fieldName, L"change_floor_show_name_8") == 0) return change_floor_show_name[7];
			if (wcscmp(fieldName, L"change_floor_show_name_9") == 0) return change_floor_show_name[8];
			if (wcscmp(fieldName, L"change_floor_show_name_10") == 0) return change_floor_show_name[9];
			if (wcscmp(fieldName, L"result_show_delay_duration") == 0) return result_show_delay_duration;
			if (wcscmp(fieldName, L"blade_master_floor_kismet_name") == 0) return blade_master_floor_kismet_name;
			if (wcscmp(fieldName, L"kung_fu_fighter_floor_kismet_name") == 0) return kung_fu_fighter_floor_kismet_name;
			if (wcscmp(fieldName, L"force_master_floor_kismet_name") == 0) return force_master_floor_kismet_name;
			if (wcscmp(fieldName, L"destroyer_floor_kismet_name") == 0) return destroyer_floor_kismet_name;
			if (wcscmp(fieldName, L"summoner_floor_kismet_name") == 0) return summoner_floor_kismet_name;
			if (wcscmp(fieldName, L"assassin_floor_kismet_name") == 0) return assassin_floor_kismet_name;
			if (wcscmp(fieldName, L"sword_master_floor_kismet_name") == 0) return sword_master_floor_kismet_name;
			if (wcscmp(fieldName, L"warlock_floor_kismet_name") == 0) return warlock_floor_kismet_name;
			if (wcscmp(fieldName, L"soul_fighter_floor_kismet_name") == 0) return soul_fighter_floor_kismet_name;
			if (wcscmp(fieldName, L"shooter_floor_kismet_name") == 0) return shooter_floor_kismet_name;
			if (wcscmp(fieldName, L"warrior_floor_kismet_name") == 0) return warrior_floor_kismet_name;
			if (wcscmp(fieldName, L"archer_floor_kismet_name") == 0) return archer_floor_kismet_name;
			if (wcscmp(fieldName, L"spear_master_floor_kismet_name") == 0) return spear_master_floor_kismet_name;
			if (wcscmp(fieldName, L"thunderer_floor_kismet_name") == 0) return thunderer_floor_kismet_name;
			if (wcscmp(fieldName, L"dual_blader_floor_kismet_name") == 0) return dual_blader_floor_kismet_name;
			if (wcscmp(fieldName, L"bard_floor_kismet_name") == 0) return bard_floor_kismet_name;
			if (wcscmp(fieldName, L"countdown_sound_name") == 0) return countdown_sound_name;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"dungeon_name2") == 0) return dungeon_name2;
			if (wcscmp(fieldName, L"dungeon_desc") == 0) return dungeon_desc;
			if (wcscmp(fieldName, L"arena_minimap") == 0) return arena_minimap;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"recommand_level_min") == 0) return recommand_level_min;
			if (wcscmp(fieldName, L"recommand_level_max") == 0) return recommand_level_max;
			if (wcscmp(fieldName, L"recommand_mastery_level_min") == 0) return recommand_mastery_level_min;
			if (wcscmp(fieldName, L"recommand_mastery_level_max") == 0) return recommand_mastery_level_max;
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
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_attack_power);
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&standard_gear_weapon);
			if (wcscmp(fieldName, L"duel_bot_spawn_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_bot_spawn_delay);
			if (wcscmp(fieldName, L"ready_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&ready_duration);
			if (wcscmp(fieldName, L"floor_timeout_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&floor_timeout_duration_second);
			if (wcscmp(fieldName, L"finish_time_section_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[0]));
			if (wcscmp(fieldName, L"finish_time_section_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[1]));
			if (wcscmp(fieldName, L"finish_time_section_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[2]));
			if (wcscmp(fieldName, L"finish_time_section_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[3]));
			if (wcscmp(fieldName, L"finish_time_section_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[4]));
			if (wcscmp(fieldName, L"finish_time_section_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[5]));
			if (wcscmp(fieldName, L"finish_time_section_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[6]));
			if (wcscmp(fieldName, L"finish_time_section_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[7]));
			if (wcscmp(fieldName, L"finish_time_section_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[8]));
			if (wcscmp(fieldName, L"finish_time_section_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section[9]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[0]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[1]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[2]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[3]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[4]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[5]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[6]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[7]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[8]));
			if (wcscmp(fieldName, L"finish_time_section_floor_setup_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(finish_time_section_floor_setup[9]));
			if (wcscmp(fieldName, L"max_floor") == 0) return Data::AnyFieldToStringConverter::ToString(&max_floor);
			if (wcscmp(fieldName, L"card_select_delay_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&card_select_delay_duration);
			if (wcscmp(fieldName, L"change_floor_delay_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&change_floor_delay_duration);
			if (wcscmp(fieldName, L"change_floor_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[0]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[1]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[2]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[3]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[4]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[5]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[6]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[7]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[8]));
			if (wcscmp(fieldName, L"change_floor_kismet_name_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_kismet_name[9]));
			if (wcscmp(fieldName, L"change_floor_show_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[0]));
			if (wcscmp(fieldName, L"change_floor_show_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[1]));
			if (wcscmp(fieldName, L"change_floor_show_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[2]));
			if (wcscmp(fieldName, L"change_floor_show_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[3]));
			if (wcscmp(fieldName, L"change_floor_show_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[4]));
			if (wcscmp(fieldName, L"change_floor_show_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[5]));
			if (wcscmp(fieldName, L"change_floor_show_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[6]));
			if (wcscmp(fieldName, L"change_floor_show_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[7]));
			if (wcscmp(fieldName, L"change_floor_show_name_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[8]));
			if (wcscmp(fieldName, L"change_floor_show_name_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_floor_show_name[9]));
			if (wcscmp(fieldName, L"result_show_delay_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&result_show_delay_duration);
			if (wcscmp(fieldName, L"blade_master_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&blade_master_floor_kismet_name);
			if (wcscmp(fieldName, L"kung_fu_fighter_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&kung_fu_fighter_floor_kismet_name);
			if (wcscmp(fieldName, L"force_master_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&force_master_floor_kismet_name);
			if (wcscmp(fieldName, L"destroyer_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&destroyer_floor_kismet_name);
			if (wcscmp(fieldName, L"summoner_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&summoner_floor_kismet_name);
			if (wcscmp(fieldName, L"assassin_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&assassin_floor_kismet_name);
			if (wcscmp(fieldName, L"sword_master_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&sword_master_floor_kismet_name);
			if (wcscmp(fieldName, L"warlock_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&warlock_floor_kismet_name);
			if (wcscmp(fieldName, L"soul_fighter_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_floor_kismet_name);
			if (wcscmp(fieldName, L"shooter_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&shooter_floor_kismet_name);
			if (wcscmp(fieldName, L"warrior_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&warrior_floor_kismet_name);
			if (wcscmp(fieldName, L"archer_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&archer_floor_kismet_name);
			if (wcscmp(fieldName, L"spear_master_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&spear_master_floor_kismet_name);
			if (wcscmp(fieldName, L"thunderer_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&thunderer_floor_kismet_name);
			if (wcscmp(fieldName, L"dual_blader_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&dual_blader_floor_kismet_name);
			if (wcscmp(fieldName, L"bard_floor_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&bard_floor_kismet_name);
			if (wcscmp(fieldName, L"countdown_sound_name") == 0) return Data::AnyFieldToStringConverter::ToString(&countdown_sound_name);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"dungeon_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_name2);
			if (wcscmp(fieldName, L"dungeon_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_desc);
			if (wcscmp(fieldName, L"arena_minimap") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_minimap);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"recommand_level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_level_min);
			if (wcscmp(fieldName, L"recommand_level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_level_max);
			if (wcscmp(fieldName, L"recommand_mastery_level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_mastery_level_min);
			if (wcscmp(fieldName, L"recommand_mastery_level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&recommand_mastery_level_max);
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
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(change_floor_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) change_floor_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(change_floor_kismet_name[i]));
			}
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(change_floor_show_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) change_floor_show_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(change_floor_show_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(blade_master_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) blade_master_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(blade_master_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(kung_fu_fighter_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kung_fu_fighter_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kung_fu_fighter_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(force_master_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) force_master_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(force_master_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(destroyer_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) destroyer_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(destroyer_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(summoner_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoner_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoner_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(assassin_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) assassin_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(assassin_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(sword_master_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sword_master_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sword_master_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(warlock_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) warlock_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(warlock_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(soul_fighter_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) soul_fighter_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(soul_fighter_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(shooter_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) shooter_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(shooter_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(warrior_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) warrior_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(warrior_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(archer_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) archer_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(archer_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(spear_master_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spear_master_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spear_master_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(thunderer_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) thunderer_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(thunderer_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(dual_blader_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) dual_blader_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(dual_blader_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(bard_floor_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) bard_floor_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(bard_floor_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(countdown_sound_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) countdown_sound_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(countdown_sound_name));
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
char Pad1[1];
__int16 recommend_attack_power;
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
__int32 duel_bot_spawn_delay;
__int32 ready_duration;
__int16 floor_timeout_duration_second;
__int16 finish_time_section[10];
__int16 finish_time_section_floor_setup[10];
__int16 max_floor;
__int32 card_select_delay_duration;
__int32 change_floor_delay_duration;
wchar_t* change_floor_kismet_name[10];
wchar_t* change_floor_show_name[10];
__int32 result_show_delay_duration;
wchar_t* blade_master_floor_kismet_name;
wchar_t* kung_fu_fighter_floor_kismet_name;
wchar_t* force_master_floor_kismet_name;
wchar_t* destroyer_floor_kismet_name;
wchar_t* summoner_floor_kismet_name;
wchar_t* assassin_floor_kismet_name;
wchar_t* sword_master_floor_kismet_name;
wchar_t* warlock_floor_kismet_name;
wchar_t* soul_fighter_floor_kismet_name;
wchar_t* shooter_floor_kismet_name;
wchar_t* warrior_floor_kismet_name;
wchar_t* archer_floor_kismet_name;
wchar_t* spear_master_floor_kismet_name;
wchar_t* thunderer_floor_kismet_name;
wchar_t* dual_blader_floor_kismet_name;
wchar_t* bard_floor_kismet_name;
wchar_t* countdown_sound_name;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef dungeon_name2;
int dungeon_name2_tableId(){return 405;};
Data::TableRef dungeon_desc;
int dungeon_desc_tableId(){return 405;};
wchar_t* arena_minimap;
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
char Pad2[3];
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 41); }
		static __int16 TableId() { return 101; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_challenge_RecordPtr // : DrRecordPtr
	{
		duel_bot_challenge_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_challenge_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}