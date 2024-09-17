/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct party_battle_field_zone_lead_the_ball_Record : party_battle_field_zone_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = party_battle_field_zone_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"arrow_control_point") == 0) return arrow_control_point;
			if (wcscmp(fieldName, L"arrow_control_point_1") == 0) return arrow_control_point[0];
			if (wcscmp(fieldName, L"arrow_control_point_2") == 0) return arrow_control_point[1];
			if (wcscmp(fieldName, L"arrow_control_point_3") == 0) return arrow_control_point[2];
			if (wcscmp(fieldName, L"arrow_control_point_4") == 0) return arrow_control_point[3];
			if (wcscmp(fieldName, L"arrow_control_point_5") == 0) return arrow_control_point[4];
			if (wcscmp(fieldName, L"arrow_control_point_6") == 0) return arrow_control_point[5];
			if (wcscmp(fieldName, L"opening_tip_off_control_point") == 0) return opening_tip_off_control_point;
			if (wcscmp(fieldName, L"alpha_goal_post") == 0) return alpha_goal_post;
			if (wcscmp(fieldName, L"beta_goal_post") == 0) return beta_goal_post;
			if (wcscmp(fieldName, L"goal_post_enable_delay_second") == 0) return goal_post_enable_delay_second;
			if (wcscmp(fieldName, L"ball_spawn_max_count") == 0) return ball_spawn_max_count;
			if (wcscmp(fieldName, L"init_ball_spawn_delay_second") == 0) return init_ball_spawn_delay_second;
			if (wcscmp(fieldName, L"ball_npc_id") == 0) return ball_npc_id;
			if (wcscmp(fieldName, L"play_section_duration_second") == 0) return play_section_duration_second;
			if (wcscmp(fieldName, L"play_section_duration_second_1") == 0) return play_section_duration_second[0];
			if (wcscmp(fieldName, L"play_section_duration_second_2") == 0) return play_section_duration_second[1];
			if (wcscmp(fieldName, L"ball_spawn_interval_second") == 0) return ball_spawn_interval_second;
			if (wcscmp(fieldName, L"ball_spawn_interval_second_1") == 0) return ball_spawn_interval_second[0];
			if (wcscmp(fieldName, L"ball_spawn_interval_second_2") == 0) return ball_spawn_interval_second[1];
			if (wcscmp(fieldName, L"ball_spawn_interval_second_3") == 0) return ball_spawn_interval_second[2];
			if (wcscmp(fieldName, L"ball_speed_effect") == 0) return ball_speed_effect;
			if (wcscmp(fieldName, L"ball_speed_effect_1") == 0) return ball_speed_effect[0];
			if (wcscmp(fieldName, L"ball_speed_effect_2") == 0) return ball_speed_effect[1];
			if (wcscmp(fieldName, L"ball_speed_effect_3") == 0) return ball_speed_effect[2];
			if (wcscmp(fieldName, L"goal_in_score") == 0) return goal_in_score;
			if (wcscmp(fieldName, L"goal_in_score_1") == 0) return goal_in_score[0];
			if (wcscmp(fieldName, L"goal_in_score_2") == 0) return goal_in_score[1];
			if (wcscmp(fieldName, L"goal_in_score_3") == 0) return goal_in_score[2];
			if (wcscmp(fieldName, L"consecutive_goal_bonus") == 0) return consecutive_goal_bonus;
			if (wcscmp(fieldName, L"consecutive_goal_bonus_1") == 0) return consecutive_goal_bonus[0];
			if (wcscmp(fieldName, L"consecutive_goal_bonus_2") == 0) return consecutive_goal_bonus[1];
			if (wcscmp(fieldName, L"consecutive_goal_bonus_3") == 0) return consecutive_goal_bonus[2];
			if (wcscmp(fieldName, L"consecutive_goal_bonus_duration_second") == 0) return consecutive_goal_bonus_duration_second;
			if (wcscmp(fieldName, L"goal_in_effect") == 0) return goal_in_effect;
			if (wcscmp(fieldName, L"goal_in_effect_1") == 0) return goal_in_effect[0];
			if (wcscmp(fieldName, L"goal_in_effect_2") == 0) return goal_in_effect[1];
			if (wcscmp(fieldName, L"friend_goal_in_kismet_name") == 0) return friend_goal_in_kismet_name;
			if (wcscmp(fieldName, L"enemy_goal_in_kismet_name") == 0) return enemy_goal_in_kismet_name;
			if (wcscmp(fieldName, L"friend_alpha_goal_post_kismet_name") == 0) return friend_alpha_goal_post_kismet_name;
			if (wcscmp(fieldName, L"friend_beta_goal_post_kismet_name") == 0) return friend_beta_goal_post_kismet_name;
			if (wcscmp(fieldName, L"enemy_alpha_goal_post_kismet_name") == 0) return enemy_alpha_goal_post_kismet_name;
			if (wcscmp(fieldName, L"enemy_beta_goal_post_kismet_name") == 0) return enemy_beta_goal_post_kismet_name;
			if (wcscmp(fieldName, L"friend_alpha_goal_post_goal_in_kismet_name") == 0) return friend_alpha_goal_post_goal_in_kismet_name;
			if (wcscmp(fieldName, L"friend_beta_goal_post_goal_in_kismet_name") == 0) return friend_beta_goal_post_goal_in_kismet_name;
			if (wcscmp(fieldName, L"enemy_alpha_goal_post_goal_in_kismet_name") == 0) return enemy_alpha_goal_post_goal_in_kismet_name;
			if (wcscmp(fieldName, L"enemy_beta_goal_post_goal_in_kismet_name") == 0) return enemy_beta_goal_post_goal_in_kismet_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = party_battle_field_zone_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"arrow_control_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(arrow_control_point[0]));
			if (wcscmp(fieldName, L"arrow_control_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(arrow_control_point[1]));
			if (wcscmp(fieldName, L"arrow_control_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(arrow_control_point[2]));
			if (wcscmp(fieldName, L"arrow_control_point_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(arrow_control_point[3]));
			if (wcscmp(fieldName, L"arrow_control_point_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(arrow_control_point[4]));
			if (wcscmp(fieldName, L"arrow_control_point_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(arrow_control_point[5]));
			if (wcscmp(fieldName, L"opening_tip_off_control_point") == 0) return Data::AnyFieldToStringConverter::ToString(&opening_tip_off_control_point);
			if (wcscmp(fieldName, L"alpha_goal_post") == 0) return Data::AnyFieldToStringConverter::ToString(&alpha_goal_post);
			if (wcscmp(fieldName, L"beta_goal_post") == 0) return Data::AnyFieldToStringConverter::ToString(&beta_goal_post);
			if (wcscmp(fieldName, L"goal_post_enable_delay_second") == 0) return Data::AnyFieldToStringConverter::ToString(&goal_post_enable_delay_second);
			if (wcscmp(fieldName, L"ball_spawn_max_count") == 0) return Data::AnyFieldToStringConverter::ToString(&ball_spawn_max_count);
			if (wcscmp(fieldName, L"init_ball_spawn_delay_second") == 0) return Data::AnyFieldToStringConverter::ToString(&init_ball_spawn_delay_second);
			if (wcscmp(fieldName, L"ball_npc_id") == 0) return Data::AnyFieldToStringConverter::ToString(&ball_npc_id);
			if (wcscmp(fieldName, L"play_section_duration_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(play_section_duration_second[0]));
			if (wcscmp(fieldName, L"play_section_duration_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(play_section_duration_second[1]));
			if (wcscmp(fieldName, L"ball_spawn_interval_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ball_spawn_interval_second[0]));
			if (wcscmp(fieldName, L"ball_spawn_interval_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ball_spawn_interval_second[1]));
			if (wcscmp(fieldName, L"ball_spawn_interval_second_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ball_spawn_interval_second[2]));
			if (wcscmp(fieldName, L"ball_speed_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ball_speed_effect[0]));
			if (wcscmp(fieldName, L"ball_speed_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ball_speed_effect[1]));
			if (wcscmp(fieldName, L"ball_speed_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ball_speed_effect[2]));
			if (wcscmp(fieldName, L"goal_in_score_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(goal_in_score[0]));
			if (wcscmp(fieldName, L"goal_in_score_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(goal_in_score[1]));
			if (wcscmp(fieldName, L"goal_in_score_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(goal_in_score[2]));
			if (wcscmp(fieldName, L"consecutive_goal_bonus_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(consecutive_goal_bonus[0]));
			if (wcscmp(fieldName, L"consecutive_goal_bonus_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(consecutive_goal_bonus[1]));
			if (wcscmp(fieldName, L"consecutive_goal_bonus_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(consecutive_goal_bonus[2]));
			if (wcscmp(fieldName, L"consecutive_goal_bonus_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&consecutive_goal_bonus_duration_second);
			if (wcscmp(fieldName, L"goal_in_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(goal_in_effect[0]));
			if (wcscmp(fieldName, L"goal_in_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(goal_in_effect[1]));
			if (wcscmp(fieldName, L"friend_goal_in_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_goal_in_kismet_name);
			if (wcscmp(fieldName, L"enemy_goal_in_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_goal_in_kismet_name);
			if (wcscmp(fieldName, L"friend_alpha_goal_post_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_alpha_goal_post_kismet_name);
			if (wcscmp(fieldName, L"friend_beta_goal_post_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_beta_goal_post_kismet_name);
			if (wcscmp(fieldName, L"enemy_alpha_goal_post_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_alpha_goal_post_kismet_name);
			if (wcscmp(fieldName, L"enemy_beta_goal_post_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_beta_goal_post_kismet_name);
			if (wcscmp(fieldName, L"friend_alpha_goal_post_goal_in_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_alpha_goal_post_goal_in_kismet_name);
			if (wcscmp(fieldName, L"friend_beta_goal_post_goal_in_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_beta_goal_post_goal_in_kismet_name);
			if (wcscmp(fieldName, L"enemy_alpha_goal_post_goal_in_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_alpha_goal_post_goal_in_kismet_name);
			if (wcscmp(fieldName, L"enemy_beta_goal_post_goal_in_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_beta_goal_post_goal_in_kismet_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			party_battle_field_zone_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(friend_goal_in_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_goal_in_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_goal_in_kismet_name));
			else return;
			if (reinterpret_cast<std::uintptr_t>(enemy_goal_in_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_goal_in_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_goal_in_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(friend_alpha_goal_post_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_alpha_goal_post_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_alpha_goal_post_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(friend_beta_goal_post_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_beta_goal_post_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_beta_goal_post_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(enemy_alpha_goal_post_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_alpha_goal_post_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_alpha_goal_post_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(enemy_beta_goal_post_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_beta_goal_post_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_beta_goal_post_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(friend_alpha_goal_post_goal_in_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_alpha_goal_post_goal_in_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_alpha_goal_post_goal_in_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(friend_beta_goal_post_goal_in_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_beta_goal_post_goal_in_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_beta_goal_post_goal_in_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(enemy_alpha_goal_post_goal_in_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_alpha_goal_post_goal_in_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_alpha_goal_post_goal_in_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(enemy_beta_goal_post_goal_in_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_beta_goal_post_goal_in_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_beta_goal_post_goal_in_kismet_name));
		}
		char Pad_sub_0[2];
Data::TableRef arrow_control_point[6];
int arrow_control_point_tableId(){return 446;};
Data::TableRef opening_tip_off_control_point;
int opening_tip_off_control_point_tableId(){return 446;};
Data::TableRef alpha_goal_post;
int alpha_goal_post_tableId(){return 446;};
Data::TableRef beta_goal_post;
int beta_goal_post_tableId(){return 446;};
__int16 goal_post_enable_delay_second;
__int8 ball_spawn_max_count;
char Pad_sub_1[1];
__int16 init_ball_spawn_delay_second;
char Pad_sub_2[2];
Data::TableRef ball_npc_id;
int ball_npc_id_tableId(){return 255;};
__int16 play_section_duration_second[2];
__int16 ball_spawn_interval_second[3];
char Pad_sub_3[2];
Data::TableRef ball_speed_effect[3];
int ball_speed_effect_tableId(){return 111;};
__int16 goal_in_score[3];
__int16 consecutive_goal_bonus[3];
__int16 consecutive_goal_bonus_duration_second;
char Pad_sub_4[2];
Data::TableRef goal_in_effect[2];
int goal_in_effect_tableId(){return 111;};
wchar_t* friend_goal_in_kismet_name;
wchar_t* enemy_goal_in_kismet_name;
wchar_t* friend_alpha_goal_post_kismet_name;
wchar_t* friend_beta_goal_post_kismet_name;
wchar_t* enemy_alpha_goal_post_kismet_name;
wchar_t* enemy_beta_goal_post_kismet_name;
wchar_t* friend_alpha_goal_post_goal_in_kismet_name;
wchar_t* friend_beta_goal_post_goal_in_kismet_name;
wchar_t* enemy_alpha_goal_post_goal_in_kismet_name;
wchar_t* enemy_beta_goal_post_goal_in_kismet_name;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}