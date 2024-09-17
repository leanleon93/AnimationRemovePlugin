/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class tendency_field_RecordSubType : __int32
    {
		tendency_field_record_sub_normal = 0,
		tendency_field_record_sub_buyudo = 1,
		tendency_field_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct tendency_field_Record : DrEl
	{
	private:
		static std::wstring Get_required_preceding_quest_check_EnumValue(__int8 value);
		static std::wstring Get_tendency_1_reset_score_type_EnumValue(__int8 value);
		static std::wstring Get_tendency_2_reset_score_type_EnumValue(__int8 value);
		static std::wstring Get_tendency_3_reset_score_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"main_zone") == 0) return main_zone;
			if (wcscmp(fieldName, L"sub_zone") == 0) return sub_zone;
			if (wcscmp(fieldName, L"sub_zone_1") == 0) return sub_zone[0];
			if (wcscmp(fieldName, L"sub_zone_2") == 0) return sub_zone[1];
			if (wcscmp(fieldName, L"sub_zone_3") == 0) return sub_zone[2];
			if (wcscmp(fieldName, L"sub_zone_4") == 0) return sub_zone[3];
			if (wcscmp(fieldName, L"sub_zone_5") == 0) return sub_zone[4];
			if (wcscmp(fieldName, L"sub_zone_6") == 0) return sub_zone[5];
			if (wcscmp(fieldName, L"sub_zone_7") == 0) return sub_zone[6];
			if (wcscmp(fieldName, L"enable_change_channel") == 0) return enable_change_channel;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return required_preceding_quest[2];
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return required_preceding_quest_check;
			if (wcscmp(fieldName, L"required_activated_main_faction") == 0) return required_activated_main_faction;
			if (wcscmp(fieldName, L"restrict_enter_zone_when_manifest_tendency") == 0) return restrict_enter_zone_when_manifest_tendency;
			if (wcscmp(fieldName, L"stand_by_duration_minute") == 0) return stand_by_duration_minute;
			if (wcscmp(fieldName, L"in_progress_duration_minute") == 0) return in_progress_duration_minute;
			if (wcscmp(fieldName, L"tendency_1_max_play_value") == 0) return tendency_1_max_play_value;
			if (wcscmp(fieldName, L"tendency_2_max_play_value") == 0) return tendency_2_max_play_value;
			if (wcscmp(fieldName, L"tendency_3_max_play_value") == 0) return tendency_3_max_play_value;
			if (wcscmp(fieldName, L"tendency_1_reset_score_type") == 0) return tendency_1_reset_score_type;
			if (wcscmp(fieldName, L"tendency_2_reset_score_type") == 0) return tendency_2_reset_score_type;
			if (wcscmp(fieldName, L"tendency_3_reset_score_type") == 0) return tendency_3_reset_score_type;
			if (wcscmp(fieldName, L"quest_pack_simple_quest_refresh_money") == 0) return quest_pack_simple_quest_refresh_money;
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward") == 0) return weekly_time_table_for_added_reward;
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_1") == 0) return weekly_time_table_for_added_reward[0];
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_2") == 0) return weekly_time_table_for_added_reward[1];
			if (wcscmp(fieldName, L"weekly_bonus_point_percent") == 0) return weekly_bonus_point_percent;
			if (wcscmp(fieldName, L"weekly_bonus_point_percent_1") == 0) return weekly_bonus_point_percent[0];
			if (wcscmp(fieldName, L"weekly_bonus_point_percent_2") == 0) return weekly_bonus_point_percent[1];
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return enable_infinite_hyper_energy;
			if (wcscmp(fieldName, L"disable_move_to_arena") == 0) return disable_move_to_arena;
			if (wcscmp(fieldName, L"disable_move_to_skill_training_room") == 0) return disable_move_to_skill_training_room;
			if (wcscmp(fieldName, L"enable_change_faction_costume") == 0) return enable_change_faction_costume;
			if (wcscmp(fieldName, L"enable_set_guild_meeting_place") == 0) return enable_set_guild_meeting_place;
			if (wcscmp(fieldName, L"enable_warp_to_guild_member") == 0) return enable_warp_to_guild_member;
			if (wcscmp(fieldName, L"enable_warp_to_pvp_result_opponent") == 0) return enable_warp_to_pvp_result_opponent;
			if (wcscmp(fieldName, L"tendency_start_kismet_name") == 0) return tendency_start_kismet_name;
			if (wcscmp(fieldName, L"tendency_start_kismet_name_1") == 0) return tendency_start_kismet_name[0];
			if (wcscmp(fieldName, L"tendency_start_kismet_name_2") == 0) return tendency_start_kismet_name[1];
			if (wcscmp(fieldName, L"tendency_start_kismet_name_3") == 0) return tendency_start_kismet_name[2];
			if (wcscmp(fieldName, L"tendency_end_kismet_name") == 0) return tendency_end_kismet_name;
			if (wcscmp(fieldName, L"tendency_end_kismet_name_1") == 0) return tendency_end_kismet_name[0];
			if (wcscmp(fieldName, L"tendency_end_kismet_name_2") == 0) return tendency_end_kismet_name[1];
			if (wcscmp(fieldName, L"tendency_end_kismet_name_3") == 0) return tendency_end_kismet_name[2];
			if (wcscmp(fieldName, L"tendency_field_name2") == 0) return tendency_field_name2;
			if (wcscmp(fieldName, L"tendency_field_desc") == 0) return tendency_field_desc;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"tendency_standby_msg") == 0) return tendency_standby_msg;
			if (wcscmp(fieldName, L"tendency_standby_msg_1") == 0) return tendency_standby_msg[0];
			if (wcscmp(fieldName, L"tendency_standby_msg_2") == 0) return tendency_standby_msg[1];
			if (wcscmp(fieldName, L"tendency_standby_msg_3") == 0) return tendency_standby_msg[2];
			if (wcscmp(fieldName, L"tendency_start_msg") == 0) return tendency_start_msg;
			if (wcscmp(fieldName, L"tendency_start_msg_1") == 0) return tendency_start_msg[0];
			if (wcscmp(fieldName, L"tendency_start_msg_2") == 0) return tendency_start_msg[1];
			if (wcscmp(fieldName, L"tendency_start_msg_3") == 0) return tendency_start_msg[2];
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg") == 0) return tendency_timeup_alarm_msg;
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg_1") == 0) return tendency_timeup_alarm_msg[0];
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg_2") == 0) return tendency_timeup_alarm_msg[1];
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg_3") == 0) return tendency_timeup_alarm_msg[2];
			if (wcscmp(fieldName, L"tendency_end_msg") == 0) return tendency_end_msg;
			if (wcscmp(fieldName, L"tendency_end_msg_1") == 0) return tendency_end_msg[0];
			if (wcscmp(fieldName, L"tendency_end_msg_2") == 0) return tendency_end_msg[1];
			if (wcscmp(fieldName, L"tendency_end_msg_3") == 0) return tendency_end_msg[2];
			if (wcscmp(fieldName, L"guide_standby_msg") == 0) return guide_standby_msg;
			if (wcscmp(fieldName, L"guide_standby_msg_1") == 0) return guide_standby_msg[0];
			if (wcscmp(fieldName, L"guide_standby_msg_2") == 0) return guide_standby_msg[1];
			if (wcscmp(fieldName, L"guide_standby_msg_3") == 0) return guide_standby_msg[2];
			if (wcscmp(fieldName, L"guide_start_msg") == 0) return guide_start_msg;
			if (wcscmp(fieldName, L"guide_start_msg_1") == 0) return guide_start_msg[0];
			if (wcscmp(fieldName, L"guide_start_msg_2") == 0) return guide_start_msg[1];
			if (wcscmp(fieldName, L"guide_start_msg_3") == 0) return guide_start_msg[2];
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg") == 0) return guide_timeup_alarm_msg;
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg_1") == 0) return guide_timeup_alarm_msg[0];
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg_2") == 0) return guide_timeup_alarm_msg[1];
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg_3") == 0) return guide_timeup_alarm_msg[2];
			if (wcscmp(fieldName, L"guide_end_msg") == 0) return guide_end_msg;
			if (wcscmp(fieldName, L"guide_end_msg_1") == 0) return guide_end_msg[0];
			if (wcscmp(fieldName, L"guide_end_msg_2") == 0) return guide_end_msg[1];
			if (wcscmp(fieldName, L"guide_end_msg_3") == 0) return guide_end_msg[2];
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
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"main_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&main_zone);
			if (wcscmp(fieldName, L"sub_zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[0]));
			if (wcscmp(fieldName, L"sub_zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[1]));
			if (wcscmp(fieldName, L"sub_zone_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[2]));
			if (wcscmp(fieldName, L"sub_zone_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[3]));
			if (wcscmp(fieldName, L"sub_zone_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[4]));
			if (wcscmp(fieldName, L"sub_zone_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[5]));
			if (wcscmp(fieldName, L"sub_zone_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_zone[6]));
			if (wcscmp(fieldName, L"enable_change_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_change_channel);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[2]));
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_quest_check);
			if (wcscmp(fieldName, L"required_activated_main_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&required_activated_main_faction);
			if (wcscmp(fieldName, L"restrict_enter_zone_when_manifest_tendency") == 0) return Data::AnyFieldToStringConverter::ToString(&restrict_enter_zone_when_manifest_tendency);
			if (wcscmp(fieldName, L"stand_by_duration_minute") == 0) return Data::AnyFieldToStringConverter::ToString(&stand_by_duration_minute);
			if (wcscmp(fieldName, L"in_progress_duration_minute") == 0) return Data::AnyFieldToStringConverter::ToString(&in_progress_duration_minute);
			if (wcscmp(fieldName, L"tendency_1_max_play_value") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_1_max_play_value);
			if (wcscmp(fieldName, L"tendency_2_max_play_value") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_2_max_play_value);
			if (wcscmp(fieldName, L"tendency_3_max_play_value") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_3_max_play_value);
			if (wcscmp(fieldName, L"tendency_1_reset_score_type") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_1_reset_score_type);
			if (wcscmp(fieldName, L"tendency_2_reset_score_type") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_2_reset_score_type);
			if (wcscmp(fieldName, L"tendency_3_reset_score_type") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_3_reset_score_type);
			if (wcscmp(fieldName, L"quest_pack_simple_quest_refresh_money") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_pack_simple_quest_refresh_money);
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_time_table_for_added_reward[0]));
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_time_table_for_added_reward[1]));
			if (wcscmp(fieldName, L"weekly_bonus_point_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_bonus_point_percent[0]));
			if (wcscmp(fieldName, L"weekly_bonus_point_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_bonus_point_percent[1]));
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_infinite_hyper_energy);
			if (wcscmp(fieldName, L"disable_move_to_arena") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_move_to_arena);
			if (wcscmp(fieldName, L"disable_move_to_skill_training_room") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_move_to_skill_training_room);
			if (wcscmp(fieldName, L"enable_change_faction_costume") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_change_faction_costume);
			if (wcscmp(fieldName, L"enable_set_guild_meeting_place") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_set_guild_meeting_place);
			if (wcscmp(fieldName, L"enable_warp_to_guild_member") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_warp_to_guild_member);
			if (wcscmp(fieldName, L"enable_warp_to_pvp_result_opponent") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_warp_to_pvp_result_opponent);
			if (wcscmp(fieldName, L"tendency_start_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_start_kismet_name[0]));
			if (wcscmp(fieldName, L"tendency_start_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_start_kismet_name[1]));
			if (wcscmp(fieldName, L"tendency_start_kismet_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_start_kismet_name[2]));
			if (wcscmp(fieldName, L"tendency_end_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_end_kismet_name[0]));
			if (wcscmp(fieldName, L"tendency_end_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_end_kismet_name[1]));
			if (wcscmp(fieldName, L"tendency_end_kismet_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_end_kismet_name[2]));
			if (wcscmp(fieldName, L"tendency_field_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_field_name2);
			if (wcscmp(fieldName, L"tendency_field_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_field_desc);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"tendency_standby_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_standby_msg[0]));
			if (wcscmp(fieldName, L"tendency_standby_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_standby_msg[1]));
			if (wcscmp(fieldName, L"tendency_standby_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_standby_msg[2]));
			if (wcscmp(fieldName, L"tendency_start_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_start_msg[0]));
			if (wcscmp(fieldName, L"tendency_start_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_start_msg[1]));
			if (wcscmp(fieldName, L"tendency_start_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_start_msg[2]));
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_timeup_alarm_msg[0]));
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_timeup_alarm_msg[1]));
			if (wcscmp(fieldName, L"tendency_timeup_alarm_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_timeup_alarm_msg[2]));
			if (wcscmp(fieldName, L"tendency_end_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_end_msg[0]));
			if (wcscmp(fieldName, L"tendency_end_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_end_msg[1]));
			if (wcscmp(fieldName, L"tendency_end_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_end_msg[2]));
			if (wcscmp(fieldName, L"guide_standby_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_standby_msg[0]));
			if (wcscmp(fieldName, L"guide_standby_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_standby_msg[1]));
			if (wcscmp(fieldName, L"guide_standby_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_standby_msg[2]));
			if (wcscmp(fieldName, L"guide_start_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_start_msg[0]));
			if (wcscmp(fieldName, L"guide_start_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_start_msg[1]));
			if (wcscmp(fieldName, L"guide_start_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_start_msg[2]));
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_timeup_alarm_msg[0]));
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_timeup_alarm_msg[1]));
			if (wcscmp(fieldName, L"guide_timeup_alarm_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_timeup_alarm_msg[2]));
			if (wcscmp(fieldName, L"guide_end_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_end_msg[0]));
			if (wcscmp(fieldName, L"guide_end_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_end_msg[1]));
			if (wcscmp(fieldName, L"guide_end_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(guide_end_msg[2]));
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
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(tendency_start_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) tendency_start_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(tendency_start_kismet_name[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(tendency_end_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) tendency_end_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(tendency_end_kismet_name[i]));
			}
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef main_zone;
int main_zone_tableId(){return 443;};
Data::TableRef sub_zone[7];
int sub_zone_tableId(){return 443;};
bool enable_change_channel;
__int8 required_level;
__int8 required_mastery_level;
char Pad0[1];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
std::wstring required_preceding_quest_check_EnumValue() const {return Get_required_preceding_quest_check_EnumValue(required_preceding_quest_check);};
bool required_activated_main_faction;
bool restrict_enter_zone_when_manifest_tendency;
char Pad1[1];
__int16 stand_by_duration_minute;
char Pad2[2];
__int32 in_progress_duration_minute;
__int8 tendency_1_max_play_value;
__int8 tendency_2_max_play_value;
__int8 tendency_3_max_play_value;
__int8 tendency_1_reset_score_type;
std::wstring tendency_1_reset_score_type_EnumValue() const {return Get_tendency_1_reset_score_type_EnumValue(tendency_1_reset_score_type);};
__int8 tendency_2_reset_score_type;
std::wstring tendency_2_reset_score_type_EnumValue() const {return Get_tendency_2_reset_score_type_EnumValue(tendency_2_reset_score_type);};
__int8 tendency_3_reset_score_type;
std::wstring tendency_3_reset_score_type_EnumValue() const {return Get_tendency_3_reset_score_type_EnumValue(tendency_3_reset_score_type);};
char Pad3[2];
__int64 quest_pack_simple_quest_refresh_money;
Data::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 431;};
__int32 weekly_bonus_point_percent[2];
Data::TableRef group;
int group_tableId(){return 16;};
bool enable_infinite_hyper_energy;
bool disable_move_to_arena;
bool disable_move_to_skill_training_room;
bool enable_change_faction_costume;
bool enable_set_guild_meeting_place;
bool enable_warp_to_guild_member;
bool enable_warp_to_pvp_result_opponent;
char Pad4[1];
wchar_t* tendency_start_kismet_name[3];
wchar_t* tendency_end_kismet_name[3];
Data::TableRef tendency_field_name2;
int tendency_field_name2_tableId(){return 405;};
Data::TableRef tendency_field_desc;
int tendency_field_desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
char Pad5[3];
Data::TableRef tendency_standby_msg[3];
int tendency_standby_msg_tableId(){return 151;};
Data::TableRef tendency_start_msg[3];
int tendency_start_msg_tableId(){return 151;};
Data::TableRef tendency_timeup_alarm_msg[3];
int tendency_timeup_alarm_msg_tableId(){return 151;};
Data::TableRef tendency_end_msg[3];
int tendency_end_msg_tableId(){return 151;};
Data::TableRef guide_standby_msg[3];
int guide_standby_msg_tableId(){return 151;};
Data::TableRef guide_start_msg[3];
int guide_start_msg_tableId(){return 151;};
Data::TableRef guide_timeup_alarm_msg[3];
int guide_timeup_alarm_msg_tableId(){return 151;};
Data::TableRef guide_end_msg[3];
int guide_end_msg_tableId(){return 151;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad6[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 22); }
		static __int16 TableId() { return 403; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tendency_field_RecordPtr // : DrRecordPtr
	{
		tendency_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::tendency_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}