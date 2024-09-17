/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class party_battle_field_zone_RecordSubType : __int32
    {
		party_battle_field_zone_record_sub_occupation_war = 0,
		party_battle_field_zone_record_sub_capture_the_flag = 1,
		party_battle_field_zone_record_sub_lead_the_ball = 2,
		party_battle_field_zone_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct party_battle_field_zone_Record : DrEl
	{
	private:
		static std::wstring Get_set_env_operation_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"pc_max") == 0) return pc_max;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"enable_team_matching") == 0) return enable_team_matching;
			if (wcscmp(fieldName, L"enable_unrated_matching") == 0) return enable_unrated_matching;
			if (wcscmp(fieldName, L"enable_unrated_join") == 0) return enable_unrated_join;
			if (wcscmp(fieldName, L"required_member_count_team_matching") == 0) return required_member_count_team_matching;
			if (wcscmp(fieldName, L"available_solo_matching_weekly_time") == 0) return available_solo_matching_weekly_time;
			if (wcscmp(fieldName, L"available_team_matching_weekly_time") == 0) return available_team_matching_weekly_time;
			if (wcscmp(fieldName, L"available_random_matching_weekly_time") == 0) return available_random_matching_weekly_time;
			if (wcscmp(fieldName, L"disable_calc_rating_score_weekly_time") == 0) return disable_calc_rating_score_weekly_time;
			if (wcscmp(fieldName, L"time_effect_weekly_time") == 0) return time_effect_weekly_time;
			if (wcscmp(fieldName, L"time_effect_weekly_name") == 0) return time_effect_weekly_name;
			if (wcscmp(fieldName, L"ready_duration_second") == 0) return ready_duration_second;
			if (wcscmp(fieldName, L"play_duration_second") == 0) return play_duration_second;
			if (wcscmp(fieldName, L"no_game_decision_duration_second") == 0) return no_game_decision_duration_second;
			if (wcscmp(fieldName, L"enter_alpha_side_pc_spawn") == 0) return enter_alpha_side_pc_spawn;
			if (wcscmp(fieldName, L"enter_beta_side_pc_spawn") == 0) return enter_beta_side_pc_spawn;
			if (wcscmp(fieldName, L"start_alpha_side_pc_spawn") == 0) return start_alpha_side_pc_spawn;
			if (wcscmp(fieldName, L"start_beta_side_pc_spawn") == 0) return start_beta_side_pc_spawn;
			if (wcscmp(fieldName, L"respawn_delay") == 0) return respawn_delay;
			if (wcscmp(fieldName, L"alpha_side_respawn") == 0) return alpha_side_respawn;
			if (wcscmp(fieldName, L"beta_side_respawn") == 0) return beta_side_respawn;
			if (wcscmp(fieldName, L"set_env_time") == 0) return set_env_time;
			if (wcscmp(fieldName, L"set_env_time_1") == 0) return set_env_time[0];
			if (wcscmp(fieldName, L"set_env_time_2") == 0) return set_env_time[1];
			if (wcscmp(fieldName, L"set_env_time_3") == 0) return set_env_time[2];
			if (wcscmp(fieldName, L"set_env_time_4") == 0) return set_env_time[3];
			if (wcscmp(fieldName, L"set_env_time_5") == 0) return set_env_time[4];
			if (wcscmp(fieldName, L"set_env_time_6") == 0) return set_env_time[5];
			if (wcscmp(fieldName, L"set_env_time_7") == 0) return set_env_time[6];
			if (wcscmp(fieldName, L"set_env_time_8") == 0) return set_env_time[7];
			if (wcscmp(fieldName, L"set_env_time_9") == 0) return set_env_time[8];
			if (wcscmp(fieldName, L"set_env_time_10") == 0) return set_env_time[9];
			if (wcscmp(fieldName, L"set_env2_target") == 0) return set_env2_target;
			if (wcscmp(fieldName, L"set_env2_target_1") == 0) return set_env2_target[0];
			if (wcscmp(fieldName, L"set_env2_target_2") == 0) return set_env2_target[1];
			if (wcscmp(fieldName, L"set_env2_target_3") == 0) return set_env2_target[2];
			if (wcscmp(fieldName, L"set_env2_target_4") == 0) return set_env2_target[3];
			if (wcscmp(fieldName, L"set_env2_target_5") == 0) return set_env2_target[4];
			if (wcscmp(fieldName, L"set_env2_target_6") == 0) return set_env2_target[5];
			if (wcscmp(fieldName, L"set_env2_target_7") == 0) return set_env2_target[6];
			if (wcscmp(fieldName, L"set_env2_target_8") == 0) return set_env2_target[7];
			if (wcscmp(fieldName, L"set_env2_target_9") == 0) return set_env2_target[8];
			if (wcscmp(fieldName, L"set_env2_target_10") == 0) return set_env2_target[9];
			if (wcscmp(fieldName, L"set_env_operation") == 0) return set_env_operation;
			if (wcscmp(fieldName, L"set_env_operation_1") == 0) return set_env_operation[0];
			if (wcscmp(fieldName, L"set_env_operation_2") == 0) return set_env_operation[1];
			if (wcscmp(fieldName, L"set_env_operation_3") == 0) return set_env_operation[2];
			if (wcscmp(fieldName, L"set_env_operation_4") == 0) return set_env_operation[3];
			if (wcscmp(fieldName, L"set_env_operation_5") == 0) return set_env_operation[4];
			if (wcscmp(fieldName, L"set_env_operation_6") == 0) return set_env_operation[5];
			if (wcscmp(fieldName, L"set_env_operation_7") == 0) return set_env_operation[6];
			if (wcscmp(fieldName, L"set_env_operation_8") == 0) return set_env_operation[7];
			if (wcscmp(fieldName, L"set_env_operation_9") == 0) return set_env_operation[8];
			if (wcscmp(fieldName, L"set_env_operation_10") == 0) return set_env_operation[9];
			if (wcscmp(fieldName, L"set_env_operation_message") == 0) return set_env_operation_message;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"zone_name2") == 0) return zone_name2;
			if (wcscmp(fieldName, L"zone_desc") == 0) return zone_desc;
			if (wcscmp(fieldName, L"arena_minimap") == 0) return arena_minimap;
			if (wcscmp(fieldName, L"kill_score") == 0) return kill_score;
			if (wcscmp(fieldName, L"goal_score") == 0) return goal_score;
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return enable_infinite_hyper_energy;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"zone_sub_desc") == 0) return zone_sub_desc;
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward") == 0) return weekly_time_table_for_added_reward;
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_1") == 0) return weekly_time_table_for_added_reward[0];
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_2") == 0) return weekly_time_table_for_added_reward[1];
			if (wcscmp(fieldName, L"bonus_point_percent") == 0) return bonus_point_percent;
			if (wcscmp(fieldName, L"bonus_point_percent_1") == 0) return bonus_point_percent[0];
			if (wcscmp(fieldName, L"bonus_point_percent_2") == 0) return bonus_point_percent[1];
			if (wcscmp(fieldName, L"bonus_exp_percent") == 0) return bonus_exp_percent;
			if (wcscmp(fieldName, L"bonus_exp_percent_1") == 0) return bonus_exp_percent[0];
			if (wcscmp(fieldName, L"bonus_exp_percent_2") == 0) return bonus_exp_percent[1];
			if (wcscmp(fieldName, L"vote_duration_second") == 0) return vote_duration_second;
			if (wcscmp(fieldName, L"vote_reward_point") == 0) return vote_reward_point;
			if (wcscmp(fieldName, L"vote_reward_exp") == 0) return vote_reward_exp;
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name") == 0) return zone_enter_kismet_sequence_name;
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name_1") == 0) return zone_enter_kismet_sequence_name[0];
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name_2") == 0) return zone_enter_kismet_sequence_name[1];
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name_3") == 0) return zone_enter_kismet_sequence_name[2];
			if (wcscmp(fieldName, L"result_kismet_sequence_name") == 0) return result_kismet_sequence_name;
			if (wcscmp(fieldName, L"notify_msg_score_value") == 0) return notify_msg_score_value;
			if (wcscmp(fieldName, L"notify_msg_score_value_1") == 0) return notify_msg_score_value[0];
			if (wcscmp(fieldName, L"notify_msg_score_value_2") == 0) return notify_msg_score_value[1];
			if (wcscmp(fieldName, L"notify_msg_score_value_3") == 0) return notify_msg_score_value[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"pc_max") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_max);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"enable_team_matching") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_team_matching);
			if (wcscmp(fieldName, L"enable_unrated_matching") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_unrated_matching);
			if (wcscmp(fieldName, L"enable_unrated_join") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_unrated_join);
			if (wcscmp(fieldName, L"required_member_count_team_matching") == 0) return Data::AnyFieldToStringConverter::ToString(&required_member_count_team_matching);
			if (wcscmp(fieldName, L"available_solo_matching_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&available_solo_matching_weekly_time);
			if (wcscmp(fieldName, L"available_team_matching_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&available_team_matching_weekly_time);
			if (wcscmp(fieldName, L"available_random_matching_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&available_random_matching_weekly_time);
			if (wcscmp(fieldName, L"disable_calc_rating_score_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_calc_rating_score_weekly_time);
			if (wcscmp(fieldName, L"time_effect_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&time_effect_weekly_time);
			if (wcscmp(fieldName, L"time_effect_weekly_name") == 0) return Data::AnyFieldToStringConverter::ToString(&time_effect_weekly_name);
			if (wcscmp(fieldName, L"ready_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&ready_duration_second);
			if (wcscmp(fieldName, L"play_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&play_duration_second);
			if (wcscmp(fieldName, L"no_game_decision_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&no_game_decision_duration_second);
			if (wcscmp(fieldName, L"enter_alpha_side_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&enter_alpha_side_pc_spawn);
			if (wcscmp(fieldName, L"enter_beta_side_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&enter_beta_side_pc_spawn);
			if (wcscmp(fieldName, L"start_alpha_side_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&start_alpha_side_pc_spawn);
			if (wcscmp(fieldName, L"start_beta_side_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&start_beta_side_pc_spawn);
			if (wcscmp(fieldName, L"respawn_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_delay);
			if (wcscmp(fieldName, L"alpha_side_respawn") == 0) return Data::AnyFieldToStringConverter::ToString(&alpha_side_respawn);
			if (wcscmp(fieldName, L"beta_side_respawn") == 0) return Data::AnyFieldToStringConverter::ToString(&beta_side_respawn);
			if (wcscmp(fieldName, L"set_env_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[0]));
			if (wcscmp(fieldName, L"set_env_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[1]));
			if (wcscmp(fieldName, L"set_env_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[2]));
			if (wcscmp(fieldName, L"set_env_time_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[3]));
			if (wcscmp(fieldName, L"set_env_time_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[4]));
			if (wcscmp(fieldName, L"set_env_time_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[5]));
			if (wcscmp(fieldName, L"set_env_time_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[6]));
			if (wcscmp(fieldName, L"set_env_time_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[7]));
			if (wcscmp(fieldName, L"set_env_time_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[8]));
			if (wcscmp(fieldName, L"set_env_time_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_time[9]));
			if (wcscmp(fieldName, L"set_env2_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[0]));
			if (wcscmp(fieldName, L"set_env2_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[1]));
			if (wcscmp(fieldName, L"set_env2_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[2]));
			if (wcscmp(fieldName, L"set_env2_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[3]));
			if (wcscmp(fieldName, L"set_env2_target_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[4]));
			if (wcscmp(fieldName, L"set_env2_target_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[5]));
			if (wcscmp(fieldName, L"set_env2_target_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[6]));
			if (wcscmp(fieldName, L"set_env2_target_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[7]));
			if (wcscmp(fieldName, L"set_env2_target_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[8]));
			if (wcscmp(fieldName, L"set_env2_target_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env2_target[9]));
			if (wcscmp(fieldName, L"set_env_operation_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[0]));
			if (wcscmp(fieldName, L"set_env_operation_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[1]));
			if (wcscmp(fieldName, L"set_env_operation_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[2]));
			if (wcscmp(fieldName, L"set_env_operation_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[3]));
			if (wcscmp(fieldName, L"set_env_operation_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[4]));
			if (wcscmp(fieldName, L"set_env_operation_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[5]));
			if (wcscmp(fieldName, L"set_env_operation_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[6]));
			if (wcscmp(fieldName, L"set_env_operation_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[7]));
			if (wcscmp(fieldName, L"set_env_operation_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[8]));
			if (wcscmp(fieldName, L"set_env_operation_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_env_operation[9]));
			if (wcscmp(fieldName, L"set_env_operation_message") == 0) return Data::AnyFieldToStringConverter::ToString(&set_env_operation_message);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"zone_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_name2);
			if (wcscmp(fieldName, L"zone_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_desc);
			if (wcscmp(fieldName, L"arena_minimap") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_minimap);
			if (wcscmp(fieldName, L"kill_score") == 0) return Data::AnyFieldToStringConverter::ToString(&kill_score);
			if (wcscmp(fieldName, L"goal_score") == 0) return Data::AnyFieldToStringConverter::ToString(&goal_score);
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_infinite_hyper_energy);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"zone_sub_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_sub_desc);
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_time_table_for_added_reward[0]));
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_time_table_for_added_reward[1]));
			if (wcscmp(fieldName, L"bonus_point_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_point_percent[0]));
			if (wcscmp(fieldName, L"bonus_point_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_point_percent[1]));
			if (wcscmp(fieldName, L"bonus_exp_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_exp_percent[0]));
			if (wcscmp(fieldName, L"bonus_exp_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_exp_percent[1]));
			if (wcscmp(fieldName, L"vote_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&vote_duration_second);
			if (wcscmp(fieldName, L"vote_reward_point") == 0) return Data::AnyFieldToStringConverter::ToString(&vote_reward_point);
			if (wcscmp(fieldName, L"vote_reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&vote_reward_exp);
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone_enter_kismet_sequence_name[0]));
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone_enter_kismet_sequence_name[1]));
			if (wcscmp(fieldName, L"zone_enter_kismet_sequence_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone_enter_kismet_sequence_name[2]));
			if (wcscmp(fieldName, L"result_kismet_sequence_name") == 0) return Data::AnyFieldToStringConverter::ToString(&result_kismet_sequence_name);
			if (wcscmp(fieldName, L"notify_msg_score_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(notify_msg_score_value[0]));
			if (wcscmp(fieldName, L"notify_msg_score_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(notify_msg_score_value[1]));
			if (wcscmp(fieldName, L"notify_msg_score_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(notify_msg_score_value[2]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(arena_minimap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) arena_minimap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(arena_minimap));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(zone_enter_kismet_sequence_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) zone_enter_kismet_sequence_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(zone_enter_kismet_sequence_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(result_kismet_sequence_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_kismet_sequence_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_kismet_sequence_name));
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
__int16 pc_max;
__int8 required_level;
__int8 required_mastery_level;
bool enable_team_matching;
bool enable_unrated_matching;
bool enable_unrated_join;
__int8 required_member_count_team_matching;
Data::TableRef available_solo_matching_weekly_time;
int available_solo_matching_weekly_time_tableId(){return 431;};
Data::TableRef available_team_matching_weekly_time;
int available_team_matching_weekly_time_tableId(){return 431;};
Data::TableRef available_random_matching_weekly_time;
int available_random_matching_weekly_time_tableId(){return 431;};
Data::TableRef disable_calc_rating_score_weekly_time;
int disable_calc_rating_score_weekly_time_tableId(){return 431;};
Data::TableRef time_effect_weekly_time;
int time_effect_weekly_time_tableId(){return 431;};
Data::TableRef time_effect_weekly_name;
int time_effect_weekly_name_tableId(){return 405;};
__int16 ready_duration_second;
__int16 play_duration_second;
__int16 no_game_decision_duration_second;
char Pad0[2];
Data::TableRef enter_alpha_side_pc_spawn;
int enter_alpha_side_pc_spawn_tableId(){return 452;};
Data::TableRef enter_beta_side_pc_spawn;
int enter_beta_side_pc_spawn_tableId(){return 452;};
Data::TableRef start_alpha_side_pc_spawn;
int start_alpha_side_pc_spawn_tableId(){return 452;};
Data::TableRef start_beta_side_pc_spawn;
int start_beta_side_pc_spawn_tableId(){return 452;};
__int32 respawn_delay;
Data::TableRef alpha_side_respawn;
int alpha_side_respawn_tableId(){return 453;};
Data::TableRef beta_side_respawn;
int beta_side_respawn_tableId(){return 453;};
__int16 set_env_time[10];
Data::TableRef set_env2_target[10];
int set_env2_target_tableId(){return 446;};
__int8 set_env_operation[10];
std::wstring set_env_operation_EnumValue(int index) const {return Get_set_env_operation_EnumValue(set_env_operation[index]);};
char Pad1[2];
Data::TableRef set_env_operation_message;
int set_env_operation_message_tableId(){return 151;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef zone_name2;
int zone_name2_tableId(){return 405;};
Data::TableRef zone_desc;
int zone_desc_tableId(){return 405;};
wchar_t* arena_minimap;
__int16 kill_score;
__int16 goal_score;
bool enable_infinite_hyper_energy;
char Pad2[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
bool ui_filter_attraction_quest_only;
char Pad3[3];
Data::TableRef zone_sub_desc;
int zone_sub_desc_tableId(){return 405;};
Data::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 431;};
__int32 bonus_point_percent[2];
__int32 bonus_exp_percent[2];
__int16 vote_duration_second;
char Pad4[2];
__int32 vote_reward_point;
__int32 vote_reward_exp;
wchar_t* zone_enter_kismet_sequence_name[3];
wchar_t* result_kismet_sequence_name;
__int16 notify_msg_score_value[3];

		static TableVersion Version() { return TableVersion(1, 22); }
		static __int16 TableId() { return 261; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) party_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		party_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::party_battle_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}