/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct level_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"exp") == 0) return exp;
			if (wcscmp(fieldName, L"exp_boost") == 0) return exp_boost;
			if (wcscmp(fieldName, L"exp_boost_1") == 0) return exp_boost[0];
			if (wcscmp(fieldName, L"exp_boost_2") == 0) return exp_boost[1];
			if (wcscmp(fieldName, L"exp_boost_3") == 0) return exp_boost[2];
			if (wcscmp(fieldName, L"exp_boost_recharge_time") == 0) return exp_boost_recharge_time;
			if (wcscmp(fieldName, L"exp_boost_recharge_time_1") == 0) return exp_boost_recharge_time[0];
			if (wcscmp(fieldName, L"exp_boost_recharge_time_2") == 0) return exp_boost_recharge_time[1];
			if (wcscmp(fieldName, L"exp_boost_recharge_time_3") == 0) return exp_boost_recharge_time[2];
			if (wcscmp(fieldName, L"default_faction_score_acquire_level") == 0) return default_faction_score_acquire_level;
			if (wcscmp(fieldName, L"half_faction_score_acquire_level") == 0) return half_faction_score_acquire_level;
			if (wcscmp(fieldName, L"duel_death_match_1vs1_win_exp") == 0) return duel_death_match_1vs1_win_exp;
			if (wcscmp(fieldName, L"duel_death_match_1vs1_lose_draw_exp") == 0) return duel_death_match_1vs1_lose_draw_exp;
			if (wcscmp(fieldName, L"duel_death_match_1vs1_win_duel_point") == 0) return duel_death_match_1vs1_win_duel_point;
			if (wcscmp(fieldName, L"duel_death_match_1vs1_lose_draw_duel_point") == 0) return duel_death_match_1vs1_lose_draw_duel_point;
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_win_exp") == 0) return duel_tag_match_3vs3_win_exp;
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_lose_draw_exp") == 0) return duel_tag_match_3vs3_lose_draw_exp;
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_win_duel_point") == 0) return duel_tag_match_3vs3_win_duel_point;
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_lose_draw_duel_point") == 0) return duel_tag_match_3vs3_lose_draw_duel_point;
			if (wcscmp(fieldName, L"party_battle_occupation_war_win_exp") == 0) return party_battle_occupation_war_win_exp;
			if (wcscmp(fieldName, L"party_battle_occupation_war_lose_draw_exp") == 0) return party_battle_occupation_war_lose_draw_exp;
			if (wcscmp(fieldName, L"party_battle_occupation_war_win_party_battle_point") == 0) return party_battle_occupation_war_win_party_battle_point;
			if (wcscmp(fieldName, L"party_battle_occupation_war_lose_draw_party_battle_point") == 0) return party_battle_occupation_war_lose_draw_party_battle_point;
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_win_exp") == 0) return party_battle_capture_the_flag_win_exp;
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_lose_draw_exp") == 0) return party_battle_capture_the_flag_lose_draw_exp;
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_win_party_battle_point") == 0) return party_battle_capture_the_flag_win_party_battle_point;
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_lose_draw_party_battle_point") == 0) return party_battle_capture_the_flag_lose_draw_party_battle_point;
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_win_exp") == 0) return party_battle_lead_the_ball_win_exp;
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_lose_draw_exp") == 0) return party_battle_lead_the_ball_lose_draw_exp;
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_win_party_battle_point") == 0) return party_battle_lead_the_ball_win_party_battle_point;
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_lose_draw_party_battle_point") == 0) return party_battle_lead_the_ball_lose_draw_party_battle_point;
			if (wcscmp(fieldName, L"exp_boost_sum") == 0) return exp_boost_sum;
			if (wcscmp(fieldName, L"exp_boost_sum_1") == 0) return exp_boost_sum[0];
			if (wcscmp(fieldName, L"exp_boost_sum_2") == 0) return exp_boost_sum[1];
			if (wcscmp(fieldName, L"exp_boost_sum_3") == 0) return exp_boost_sum[2];
			if (wcscmp(fieldName, L"express_cost") == 0) return express_cost;
			if (wcscmp(fieldName, L"tencent_vitality_max") == 0) return tencent_vitality_max;
			if (wcscmp(fieldName, L"tencent_vitality_max_1") == 0) return tencent_vitality_max[0];
			if (wcscmp(fieldName, L"tencent_vitality_max_2") == 0) return tencent_vitality_max[1];
			if (wcscmp(fieldName, L"tencent_vitality_max_3") == 0) return tencent_vitality_max[2];
			if (wcscmp(fieldName, L"tencent_vitality_max_4") == 0) return tencent_vitality_max[3];
			if (wcscmp(fieldName, L"level_guide_path") == 0) return level_guide_path;
			if (wcscmp(fieldName, L"exceed_level_quest") == 0) return exceed_level_quest;
			if (wcscmp(fieldName, L"exceed_level_next_level") == 0) return exceed_level_next_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"exp") == 0) return Data::AnyFieldToStringConverter::ToString(&exp);
			if (wcscmp(fieldName, L"exp_boost_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost[0]));
			if (wcscmp(fieldName, L"exp_boost_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost[1]));
			if (wcscmp(fieldName, L"exp_boost_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost[2]));
			if (wcscmp(fieldName, L"exp_boost_recharge_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost_recharge_time[0]));
			if (wcscmp(fieldName, L"exp_boost_recharge_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost_recharge_time[1]));
			if (wcscmp(fieldName, L"exp_boost_recharge_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost_recharge_time[2]));
			if (wcscmp(fieldName, L"default_faction_score_acquire_level") == 0) return Data::AnyFieldToStringConverter::ToString(&default_faction_score_acquire_level);
			if (wcscmp(fieldName, L"half_faction_score_acquire_level") == 0) return Data::AnyFieldToStringConverter::ToString(&half_faction_score_acquire_level);
			if (wcscmp(fieldName, L"duel_death_match_1vs1_win_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_death_match_1vs1_win_exp);
			if (wcscmp(fieldName, L"duel_death_match_1vs1_lose_draw_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_death_match_1vs1_lose_draw_exp);
			if (wcscmp(fieldName, L"duel_death_match_1vs1_win_duel_point") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_death_match_1vs1_win_duel_point);
			if (wcscmp(fieldName, L"duel_death_match_1vs1_lose_draw_duel_point") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_death_match_1vs1_lose_draw_duel_point);
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_win_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_tag_match_3vs3_win_exp);
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_lose_draw_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_tag_match_3vs3_lose_draw_exp);
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_win_duel_point") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_tag_match_3vs3_win_duel_point);
			if (wcscmp(fieldName, L"duel_tag_match_3vs3_lose_draw_duel_point") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_tag_match_3vs3_lose_draw_duel_point);
			if (wcscmp(fieldName, L"party_battle_occupation_war_win_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_occupation_war_win_exp);
			if (wcscmp(fieldName, L"party_battle_occupation_war_lose_draw_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_occupation_war_lose_draw_exp);
			if (wcscmp(fieldName, L"party_battle_occupation_war_win_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_occupation_war_win_party_battle_point);
			if (wcscmp(fieldName, L"party_battle_occupation_war_lose_draw_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_occupation_war_lose_draw_party_battle_point);
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_win_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_capture_the_flag_win_exp);
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_lose_draw_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_capture_the_flag_lose_draw_exp);
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_win_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_capture_the_flag_win_party_battle_point);
			if (wcscmp(fieldName, L"party_battle_capture_the_flag_lose_draw_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_capture_the_flag_lose_draw_party_battle_point);
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_win_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_lead_the_ball_win_exp);
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_lose_draw_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_lead_the_ball_lose_draw_exp);
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_win_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_lead_the_ball_win_party_battle_point);
			if (wcscmp(fieldName, L"party_battle_lead_the_ball_lose_draw_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_lead_the_ball_lose_draw_party_battle_point);
			if (wcscmp(fieldName, L"exp_boost_sum_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost_sum[0]));
			if (wcscmp(fieldName, L"exp_boost_sum_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost_sum[1]));
			if (wcscmp(fieldName, L"exp_boost_sum_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exp_boost_sum[2]));
			if (wcscmp(fieldName, L"express_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&express_cost);
			if (wcscmp(fieldName, L"tencent_vitality_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tencent_vitality_max[0]));
			if (wcscmp(fieldName, L"tencent_vitality_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tencent_vitality_max[1]));
			if (wcscmp(fieldName, L"tencent_vitality_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tencent_vitality_max[2]));
			if (wcscmp(fieldName, L"tencent_vitality_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tencent_vitality_max[3]));
			if (wcscmp(fieldName, L"level_guide_path") == 0) return Data::AnyFieldToStringConverter::ToString(&level_guide_path);
			if (wcscmp(fieldName, L"exceed_level_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&exceed_level_quest);
			if (wcscmp(fieldName, L"exceed_level_next_level") == 0) return Data::AnyFieldToStringConverter::ToString(&exceed_level_next_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(level_guide_path) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) level_guide_path = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(level_guide_path));
		}
		union Key
		{
            struct {
                __int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 exp;
__int32 exp_boost[3];
__int32 exp_boost_recharge_time[3];
__int8 default_faction_score_acquire_level;
__int8 half_faction_score_acquire_level;
char Pad0[2];
__int32 duel_death_match_1vs1_win_exp;
__int32 duel_death_match_1vs1_lose_draw_exp;
__int32 duel_death_match_1vs1_win_duel_point;
__int32 duel_death_match_1vs1_lose_draw_duel_point;
__int32 duel_tag_match_3vs3_win_exp;
__int32 duel_tag_match_3vs3_lose_draw_exp;
__int32 duel_tag_match_3vs3_win_duel_point;
__int32 duel_tag_match_3vs3_lose_draw_duel_point;
__int32 party_battle_occupation_war_win_exp;
__int32 party_battle_occupation_war_lose_draw_exp;
__int32 party_battle_occupation_war_win_party_battle_point;
__int32 party_battle_occupation_war_lose_draw_party_battle_point;
__int32 party_battle_capture_the_flag_win_exp;
__int32 party_battle_capture_the_flag_lose_draw_exp;
__int32 party_battle_capture_the_flag_win_party_battle_point;
__int32 party_battle_capture_the_flag_lose_draw_party_battle_point;
__int32 party_battle_lead_the_ball_win_exp;
__int32 party_battle_lead_the_ball_lose_draw_exp;
__int32 party_battle_lead_the_ball_win_party_battle_point;
__int32 party_battle_lead_the_ball_lose_draw_party_battle_point;
__int32 exp_boost_sum[3];
__int32 express_cost;
__int32 tencent_vitality_max[4];
wchar_t* level_guide_path;
Data::TableRef exceed_level_quest;
int exceed_level_quest_tableId(){return 283;};
__int8 exceed_level_next_level;

		static TableVersion Version() { return TableVersion(0, 17); }
		static __int16 TableId() { return 232; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) level_RecordPtr // : DrRecordPtr
	{
		level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}