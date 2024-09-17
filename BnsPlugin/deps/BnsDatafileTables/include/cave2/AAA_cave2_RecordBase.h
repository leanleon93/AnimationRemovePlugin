/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct cave2_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"id") == 0) return id;
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"zone_1") == 0) return zone[0];
			if (wcscmp(fieldName, L"zone_2") == 0) return zone[1];
			if (wcscmp(fieldName, L"zone_3") == 0) return zone[2];
			if (wcscmp(fieldName, L"zone_4") == 0) return zone[3];
			if (wcscmp(fieldName, L"zone_5") == 0) return zone[4];
			if (wcscmp(fieldName, L"zone_6") == 0) return zone[5];
			if (wcscmp(fieldName, L"zone_7") == 0) return zone[6];
			if (wcscmp(fieldName, L"zone_8") == 0) return zone[7];
			if (wcscmp(fieldName, L"zone_9") == 0) return zone[8];
			if (wcscmp(fieldName, L"zone_10") == 0) return zone[9];
			if (wcscmp(fieldName, L"zone_11") == 0) return zone[10];
			if (wcscmp(fieldName, L"zone_12") == 0) return zone[11];
			if (wcscmp(fieldName, L"zone_13") == 0) return zone[12];
			if (wcscmp(fieldName, L"zone_14") == 0) return zone[13];
			if (wcscmp(fieldName, L"zone_15") == 0) return zone[14];
			if (wcscmp(fieldName, L"zone_16") == 0) return zone[15];
			if (wcscmp(fieldName, L"enable_heart_count") == 0) return enable_heart_count;
			if (wcscmp(fieldName, L"max_instant_heart_count") == 0) return max_instant_heart_count;
			if (wcscmp(fieldName, L"pc_max") == 0) return pc_max;
			if (wcscmp(fieldName, L"enable_skill_score") == 0) return enable_skill_score;
			if (wcscmp(fieldName, L"skill_score_recommend_gear_score") == 0) return skill_score_recommend_gear_score;
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step") == 0) return skill_score_recommend_clear_time_step;
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_1") == 0) return skill_score_recommend_clear_time_step[0];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_2") == 0) return skill_score_recommend_clear_time_step[1];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_3") == 0) return skill_score_recommend_clear_time_step[2];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_4") == 0) return skill_score_recommend_clear_time_step[3];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_5") == 0) return skill_score_recommend_clear_time_step[4];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus") == 0) return skill_score_recommend_clear_time_bonus;
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_1") == 0) return skill_score_recommend_clear_time_bonus[0];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_2") == 0) return skill_score_recommend_clear_time_bonus[1];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_3") == 0) return skill_score_recommend_clear_time_bonus[2];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_4") == 0) return skill_score_recommend_clear_time_bonus[3];
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_5") == 0) return skill_score_recommend_clear_time_bonus[4];
			if (wcscmp(fieldName, L"skill_score_recommand_party_member_count_bonus") == 0) return skill_score_recommand_party_member_count_bonus;
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step") == 0) return skill_score_recommend_hp_step;
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_1") == 0) return skill_score_recommend_hp_step[0];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_2") == 0) return skill_score_recommend_hp_step[1];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_3") == 0) return skill_score_recommend_hp_step[2];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_4") == 0) return skill_score_recommend_hp_step[3];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_5") == 0) return skill_score_recommend_hp_step[4];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus") == 0) return skill_score_recommend_hp_bonus;
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_1") == 0) return skill_score_recommend_hp_bonus[0];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_2") == 0) return skill_score_recommend_hp_bonus[1];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_3") == 0) return skill_score_recommend_hp_bonus[2];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_4") == 0) return skill_score_recommend_hp_bonus[3];
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_5") == 0) return skill_score_recommend_hp_bonus[4];
			if (wcscmp(fieldName, L"skill_score_recommend_use_heart_count") == 0) return skill_score_recommend_use_heart_count;
			if (wcscmp(fieldName, L"skill_score_recommend_use_heart_count_bonus") == 0) return skill_score_recommend_use_heart_count_bonus;
			if (wcscmp(fieldName, L"skill_score_recommend_use_item_point") == 0) return skill_score_recommend_use_item_point;
			if (wcscmp(fieldName, L"skill_score_recommend_use_item_bonus") == 0) return skill_score_recommend_use_item_bonus;
			if (wcscmp(fieldName, L"skill_score_boss_npc") == 0) return skill_score_boss_npc;
			if (wcscmp(fieldName, L"skill_score_boss_npc_bonus") == 0) return skill_score_boss_npc_bonus;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return respawn_confirm_text;
			if (wcscmp(fieldName, L"escape_cave_confirm_text") == 0) return escape_cave_confirm_text;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"cave2_name2") == 0) return cave2_name2;
			if (wcscmp(fieldName, L"cave2_desc") == 0) return cave2_desc;
			if (wcscmp(fieldName, L"arena_entrance_zone") == 0) return arena_entrance_zone;
			if (wcscmp(fieldName, L"arena_minimap") == 0) return arena_minimap;
			if (wcscmp(fieldName, L"arena_disable_zone_phase") == 0) return arena_disable_zone_phase;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"quest_for_ignoring_required_level") == 0) return quest_for_ignoring_required_level;
			if (wcscmp(fieldName, L"gs_item_blade_master") == 0) return gs_item_blade_master;
			if (wcscmp(fieldName, L"gs_item_kung_fu_fighter") == 0) return gs_item_kung_fu_fighter;
			if (wcscmp(fieldName, L"gs_item_force_master") == 0) return gs_item_force_master;
			if (wcscmp(fieldName, L"gs_item_destroyer") == 0) return gs_item_destroyer;
			if (wcscmp(fieldName, L"gs_item_summoner") == 0) return gs_item_summoner;
			if (wcscmp(fieldName, L"gs_item_assassin") == 0) return gs_item_assassin;
			if (wcscmp(fieldName, L"gs_item_sword_master") == 0) return gs_item_sword_master;
			if (wcscmp(fieldName, L"gs_item_warlock") == 0) return gs_item_warlock;
			if (wcscmp(fieldName, L"gs_item_soul_fighter") == 0) return gs_item_soul_fighter;
			if (wcscmp(fieldName, L"gs_item_shooter") == 0) return gs_item_shooter;
			if (wcscmp(fieldName, L"gs_item_warrior") == 0) return gs_item_warrior;
			if (wcscmp(fieldName, L"gs_item_archer") == 0) return gs_item_archer;
			if (wcscmp(fieldName, L"gs_item_spear_master") == 0) return gs_item_spear_master;
			if (wcscmp(fieldName, L"gs_item_thunderer") == 0) return gs_item_thunderer;
			if (wcscmp(fieldName, L"gs_item_dual_blader") == 0) return gs_item_dual_blader;
			if (wcscmp(fieldName, L"gs_item_bard") == 0) return gs_item_bard;
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return recommend_attack_power;
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return standard_gear_weapon;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
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
			if (wcscmp(fieldName, L"id") == 0) return Data::AnyFieldToStringConverter::ToString(&id);
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[0]));
			if (wcscmp(fieldName, L"zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[1]));
			if (wcscmp(fieldName, L"zone_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[2]));
			if (wcscmp(fieldName, L"zone_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[3]));
			if (wcscmp(fieldName, L"zone_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[4]));
			if (wcscmp(fieldName, L"zone_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[5]));
			if (wcscmp(fieldName, L"zone_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[6]));
			if (wcscmp(fieldName, L"zone_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[7]));
			if (wcscmp(fieldName, L"zone_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[8]));
			if (wcscmp(fieldName, L"zone_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[9]));
			if (wcscmp(fieldName, L"zone_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[10]));
			if (wcscmp(fieldName, L"zone_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[11]));
			if (wcscmp(fieldName, L"zone_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[12]));
			if (wcscmp(fieldName, L"zone_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[13]));
			if (wcscmp(fieldName, L"zone_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[14]));
			if (wcscmp(fieldName, L"zone_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[15]));
			if (wcscmp(fieldName, L"enable_heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_heart_count);
			if (wcscmp(fieldName, L"max_instant_heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_instant_heart_count);
			if (wcscmp(fieldName, L"pc_max") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_max);
			if (wcscmp(fieldName, L"enable_skill_score") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_skill_score);
			if (wcscmp(fieldName, L"skill_score_recommend_gear_score") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_recommend_gear_score);
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_step[0]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_step[1]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_step[2]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_step[3]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_step_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_step[4]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_bonus[0]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_bonus[1]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_bonus[2]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_bonus[3]));
			if (wcscmp(fieldName, L"skill_score_recommend_clear_time_bonus_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_clear_time_bonus[4]));
			if (wcscmp(fieldName, L"skill_score_recommand_party_member_count_bonus") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_recommand_party_member_count_bonus);
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_step[0]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_step[1]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_step[2]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_step[3]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_step_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_step[4]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_bonus[0]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_bonus[1]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_bonus[2]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_bonus[3]));
			if (wcscmp(fieldName, L"skill_score_recommend_hp_bonus_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score_recommend_hp_bonus[4]));
			if (wcscmp(fieldName, L"skill_score_recommend_use_heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_recommend_use_heart_count);
			if (wcscmp(fieldName, L"skill_score_recommend_use_heart_count_bonus") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_recommend_use_heart_count_bonus);
			if (wcscmp(fieldName, L"skill_score_recommend_use_item_point") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_recommend_use_item_point);
			if (wcscmp(fieldName, L"skill_score_recommend_use_item_bonus") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_recommend_use_item_bonus);
			if (wcscmp(fieldName, L"skill_score_boss_npc") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_boss_npc);
			if (wcscmp(fieldName, L"skill_score_boss_npc_bonus") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_score_boss_npc_bonus);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_confirm_text);
			if (wcscmp(fieldName, L"escape_cave_confirm_text") == 0) return Data::AnyFieldToStringConverter::ToString(&escape_cave_confirm_text);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"cave2_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&cave2_name2);
			if (wcscmp(fieldName, L"cave2_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&cave2_desc);
			if (wcscmp(fieldName, L"arena_entrance_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_entrance_zone);
			if (wcscmp(fieldName, L"arena_minimap") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_minimap);
			if (wcscmp(fieldName, L"arena_disable_zone_phase") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_disable_zone_phase);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"quest_for_ignoring_required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_for_ignoring_required_level);
			if (wcscmp(fieldName, L"gs_item_blade_master") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_blade_master);
			if (wcscmp(fieldName, L"gs_item_kung_fu_fighter") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_kung_fu_fighter);
			if (wcscmp(fieldName, L"gs_item_force_master") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_force_master);
			if (wcscmp(fieldName, L"gs_item_destroyer") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_destroyer);
			if (wcscmp(fieldName, L"gs_item_summoner") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_summoner);
			if (wcscmp(fieldName, L"gs_item_assassin") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_assassin);
			if (wcscmp(fieldName, L"gs_item_sword_master") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_sword_master);
			if (wcscmp(fieldName, L"gs_item_warlock") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_warlock);
			if (wcscmp(fieldName, L"gs_item_soul_fighter") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_soul_fighter);
			if (wcscmp(fieldName, L"gs_item_shooter") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_shooter);
			if (wcscmp(fieldName, L"gs_item_warrior") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_warrior);
			if (wcscmp(fieldName, L"gs_item_archer") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_archer);
			if (wcscmp(fieldName, L"gs_item_spear_master") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_spear_master);
			if (wcscmp(fieldName, L"gs_item_thunderer") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_thunderer);
			if (wcscmp(fieldName, L"gs_item_dual_blader") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_dual_blader);
			if (wcscmp(fieldName, L"gs_item_bard") == 0) return Data::AnyFieldToStringConverter::ToString(&gs_item_bard);
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_attack_power);
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&standard_gear_weapon);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
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
			if (reinterpret_cast<std::uintptr_t>(arena_minimap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) arena_minimap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(arena_minimap));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 id;
char Pad0[2];
wchar_t* alias;
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef zone[16];
int zone_tableId(){return 443;};
bool enable_heart_count;
__int8 max_instant_heart_count;
__int16 pc_max;
bool enable_skill_score;
char Pad1[3];
__int32 skill_score_recommend_gear_score;
__int32 skill_score_recommend_clear_time_step[5];
__int16 skill_score_recommend_clear_time_bonus[5];
__int16 skill_score_recommand_party_member_count_bonus;
__int32 skill_score_recommend_hp_step[5];
__int16 skill_score_recommend_hp_bonus[5];
__int16 skill_score_recommend_use_heart_count;
__int16 skill_score_recommend_use_heart_count_bonus;
char Pad2[2];
__int32 skill_score_recommend_use_item_point;
__int16 skill_score_recommend_use_item_bonus;
char Pad3[2];
Data::TableRef skill_score_boss_npc;
int skill_score_boss_npc_tableId(){return 255;};
__int16 skill_score_boss_npc_bonus;
char Pad4[2];
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad5[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId(){return 405;};
__int8 ui_text_grade;
char Pad6[3];
Data::TableRef cave2_name2;
int cave2_name2_tableId(){return 405;};
Data::TableRef cave2_desc;
int cave2_desc_tableId(){return 405;};
Data::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId(){return 443;};
wchar_t* arena_minimap;
bool arena_disable_zone_phase;
__int8 required_level;
__int8 required_mastery_level;
char Pad7[1];
Data::TableRef quest_for_ignoring_required_level;
int quest_for_ignoring_required_level_tableId(){return 283;};
Data::TableRef gs_item_blade_master;
int gs_item_blade_master_tableId(){return 189;};
Data::TableRef gs_item_kung_fu_fighter;
int gs_item_kung_fu_fighter_tableId(){return 189;};
Data::TableRef gs_item_force_master;
int gs_item_force_master_tableId(){return 189;};
Data::TableRef gs_item_destroyer;
int gs_item_destroyer_tableId(){return 189;};
Data::TableRef gs_item_summoner;
int gs_item_summoner_tableId(){return 189;};
Data::TableRef gs_item_assassin;
int gs_item_assassin_tableId(){return 189;};
Data::TableRef gs_item_sword_master;
int gs_item_sword_master_tableId(){return 189;};
Data::TableRef gs_item_warlock;
int gs_item_warlock_tableId(){return 189;};
Data::TableRef gs_item_soul_fighter;
int gs_item_soul_fighter_tableId(){return 189;};
Data::TableRef gs_item_shooter;
int gs_item_shooter_tableId(){return 189;};
Data::TableRef gs_item_warrior;
int gs_item_warrior_tableId(){return 189;};
Data::TableRef gs_item_archer;
int gs_item_archer_tableId(){return 189;};
Data::TableRef gs_item_spear_master;
int gs_item_spear_master_tableId(){return 189;};
Data::TableRef gs_item_thunderer;
int gs_item_thunderer_tableId(){return 189;};
Data::TableRef gs_item_dual_blader;
int gs_item_dual_blader_tableId(){return 189;};
Data::TableRef gs_item_bard;
int gs_item_bard_tableId(){return 189;};
__int16 recommend_attack_power;
char Pad8[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 37); }
		static __int16 TableId() { return 49; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cave2_RecordPtr // : DrRecordPtr
	{
		cave2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cave2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}