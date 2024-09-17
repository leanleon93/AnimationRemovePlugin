/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_Record : DrEl
	{
	private:
		static std::wstring Get_duel_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"duel_type") == 0) return duel_type;
			if (wcscmp(fieldName, L"max_round_count") == 0) return max_round_count;
			if (wcscmp(fieldName, L"round_win_count") == 0) return round_win_count;
			if (wcscmp(fieldName, L"round_count") == 0) return round_count;
			if (wcscmp(fieldName, L"round_start_countdown_duration") == 0) return round_start_countdown_duration;
			if (wcscmp(fieldName, L"round_preparation_duration") == 0) return round_preparation_duration;
			if (wcscmp(fieldName, L"round_duration") == 0) return round_duration;
			if (wcscmp(fieldName, L"round_restart_duration") == 0) return round_restart_duration;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn") == 0) return arena_outside_alpha_side_pc_spawn;
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn_1") == 0) return arena_outside_alpha_side_pc_spawn[0];
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn_2") == 0) return arena_outside_alpha_side_pc_spawn[1];
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn_3") == 0) return arena_outside_alpha_side_pc_spawn[2];
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn") == 0) return arena_outside_beta_side_pc_spawn;
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn_1") == 0) return arena_outside_beta_side_pc_spawn[0];
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn_2") == 0) return arena_outside_beta_side_pc_spawn[1];
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn_3") == 0) return arena_outside_beta_side_pc_spawn[2];
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"is_unrated_match") == 0) return is_unrated_match;
			if (wcscmp(fieldName, L"loading_description_1") == 0) return loading_description_1;
			if (wcscmp(fieldName, L"loading_description_2") == 0) return loading_description_2;
			if (wcscmp(fieldName, L"loading_icon") == 0) return loading_icon;
			if (wcscmp(fieldName, L"boast") == 0) return boast;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"duel_name2") == 0) return duel_name2;
			if (wcscmp(fieldName, L"duel_desc") == 0) return duel_desc;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward") == 0) return weekly_time_table_for_added_reward;
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_1") == 0) return weekly_time_table_for_added_reward[0];
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_2") == 0) return weekly_time_table_for_added_reward[1];
			if (wcscmp(fieldName, L"bonus_point_percent") == 0) return bonus_point_percent;
			if (wcscmp(fieldName, L"bonus_point_percent_1") == 0) return bonus_point_percent[0];
			if (wcscmp(fieldName, L"bonus_point_percent_2") == 0) return bonus_point_percent[1];
			if (wcscmp(fieldName, L"bonus_exp_percent") == 0) return bonus_exp_percent;
			if (wcscmp(fieldName, L"bonus_exp_percent_1") == 0) return bonus_exp_percent[0];
			if (wcscmp(fieldName, L"bonus_exp_percent_2") == 0) return bonus_exp_percent[1];
			if (wcscmp(fieldName, L"camera_world_pos_index") == 0) return camera_world_pos_index;
			if (wcscmp(fieldName, L"disable_calc_rating_score_weekly_time") == 0) return disable_calc_rating_score_weekly_time;
			if (wcscmp(fieldName, L"available_normal_matching_weekly_time") == 0) return available_normal_matching_weekly_time;
			if (wcscmp(fieldName, L"available_ingame_championship_matching_weekly_time") == 0) return available_ingame_championship_matching_weekly_time;
			if (wcscmp(fieldName, L"is_championship") == 0) return is_championship;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"duel_type") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_type);
			if (wcscmp(fieldName, L"max_round_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_round_count);
			if (wcscmp(fieldName, L"round_win_count") == 0) return Data::AnyFieldToStringConverter::ToString(&round_win_count);
			if (wcscmp(fieldName, L"round_count") == 0) return Data::AnyFieldToStringConverter::ToString(&round_count);
			if (wcscmp(fieldName, L"round_start_countdown_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&round_start_countdown_duration);
			if (wcscmp(fieldName, L"round_preparation_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&round_preparation_duration);
			if (wcscmp(fieldName, L"round_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&round_duration);
			if (wcscmp(fieldName, L"round_restart_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&round_restart_duration);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(arena_outside_alpha_side_pc_spawn[0]));
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(arena_outside_alpha_side_pc_spawn[1]));
			if (wcscmp(fieldName, L"arena_outside_alpha_side_pc_spawn_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(arena_outside_alpha_side_pc_spawn[2]));
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(arena_outside_beta_side_pc_spawn[0]));
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(arena_outside_beta_side_pc_spawn[1]));
			if (wcscmp(fieldName, L"arena_outside_beta_side_pc_spawn_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(arena_outside_beta_side_pc_spawn[2]));
			if (wcscmp(fieldName, L"effect") == 0) return Data::AnyFieldToStringConverter::ToString(&effect);
			if (wcscmp(fieldName, L"is_unrated_match") == 0) return Data::AnyFieldToStringConverter::ToString(&is_unrated_match);
			if (wcscmp(fieldName, L"loading_description_1") == 0) return Data::AnyFieldToStringConverter::ToString(&loading_description_1);
			if (wcscmp(fieldName, L"loading_description_2") == 0) return Data::AnyFieldToStringConverter::ToString(&loading_description_2);
			if (wcscmp(fieldName, L"loading_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&loading_icon);
			if (wcscmp(fieldName, L"boast") == 0) return Data::AnyFieldToStringConverter::ToString(&boast);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"duel_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_name2);
			if (wcscmp(fieldName, L"duel_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_desc);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_time_table_for_added_reward[0]));
			if (wcscmp(fieldName, L"weekly_time_table_for_added_reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(weekly_time_table_for_added_reward[1]));
			if (wcscmp(fieldName, L"bonus_point_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_point_percent[0]));
			if (wcscmp(fieldName, L"bonus_point_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_point_percent[1]));
			if (wcscmp(fieldName, L"bonus_exp_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_exp_percent[0]));
			if (wcscmp(fieldName, L"bonus_exp_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(bonus_exp_percent[1]));
			if (wcscmp(fieldName, L"camera_world_pos_index") == 0) return Data::AnyFieldToStringConverter::ToString(&camera_world_pos_index);
			if (wcscmp(fieldName, L"disable_calc_rating_score_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_calc_rating_score_weekly_time);
			if (wcscmp(fieldName, L"available_normal_matching_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&available_normal_matching_weekly_time);
			if (wcscmp(fieldName, L"available_ingame_championship_matching_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&available_ingame_championship_matching_weekly_time);
			if (wcscmp(fieldName, L"is_championship") == 0) return Data::AnyFieldToStringConverter::ToString(&is_championship);

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
Data::TableRef group;
int group_tableId(){return 16;};
__int8 duel_type;
std::wstring duel_type_EnumValue() const {return Get_duel_type_EnumValue(duel_type);};
__int8 max_round_count;
__int8 round_win_count;
__int8 round_count;
__int32 round_start_countdown_duration;
__int32 round_preparation_duration;
__int32 round_duration;
__int32 round_restart_duration;
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef arena_outside_alpha_side_pc_spawn[3];
int arena_outside_alpha_side_pc_spawn_tableId(){return 452;};
Data::TableRef arena_outside_beta_side_pc_spawn[3];
int arena_outside_beta_side_pc_spawn_tableId(){return 452;};
Data::TableRef effect;
int effect_tableId(){return 111;};
bool is_unrated_match;
char Pad0[3];
Data::TableRef loading_description_1;
int loading_description_1_tableId(){return 405;};
Data::TableRef loading_description_2;
int loading_description_2_tableId(){return 405;};
Data::IconRef loading_icon;
Data::TableRef boast;
int boast_tableId(){return 42;};
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad1[3];
Data::TableRef duel_name2;
int duel_name2_tableId(){return 405;};
Data::TableRef duel_desc;
int duel_desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
Data::TableRef weekly_time_table_for_added_reward[2];
int weekly_time_table_for_added_reward_tableId(){return 431;};
__int32 bonus_point_percent[2];
__int32 bonus_exp_percent[2];
__int8 camera_world_pos_index;
char Pad2[3];
Data::TableRef disable_calc_rating_score_weekly_time;
int disable_calc_rating_score_weekly_time_tableId(){return 431;};
Data::TableRef available_normal_matching_weekly_time;
int available_normal_matching_weekly_time_tableId(){return 431;};
Data::TableRef available_ingame_championship_matching_weekly_time;
int available_ingame_championship_matching_weekly_time_tableId(){return 431;};
bool is_championship;

		static TableVersion Version() { return TableVersion(0, 35); }
		static __int16 TableId() { return 107; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_RecordPtr // : DrRecordPtr
	{
		duel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}