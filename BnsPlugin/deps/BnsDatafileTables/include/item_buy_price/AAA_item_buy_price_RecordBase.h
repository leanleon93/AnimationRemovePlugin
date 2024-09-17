/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_buy_price_Record : DrEl
	{
	private:
		static std::wstring Get_required_itembrand_condition_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"required_itembrand") == 0) return required_itembrand;
			if (wcscmp(fieldName, L"required_itembrand_condition_type") == 0) return required_itembrand_condition_type;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_4") == 0) return required_item[3];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return required_item_count[2];
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return required_item_count[3];
			if (wcscmp(fieldName, L"required_faction_score") == 0) return required_faction_score;
			if (wcscmp(fieldName, L"required_duel_point") == 0) return required_duel_point;
			if (wcscmp(fieldName, L"required_party_battle_point") == 0) return required_party_battle_point;
			if (wcscmp(fieldName, L"required_field_play_point") == 0) return required_field_play_point;
			if (wcscmp(fieldName, L"required_life_contents_point") == 0) return required_life_contents_point;
			if (wcscmp(fieldName, L"required_achievement_score") == 0) return required_achievement_score;
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return required_achievement_id;
			if (wcscmp(fieldName, L"required_achievement_step_min") == 0) return required_achievement_step_min;
			if (wcscmp(fieldName, L"faction_level") == 0) return faction_level;
			if (wcscmp(fieldName, L"check_solo_duel_grade") == 0) return check_solo_duel_grade;
			if (wcscmp(fieldName, L"check_team_duel_grade") == 0) return check_team_duel_grade;
			if (wcscmp(fieldName, L"check_battle_field_grade_occupation_war") == 0) return check_battle_field_grade_occupation_war;
			if (wcscmp(fieldName, L"check_battle_field_grade_capture_the_flag") == 0) return check_battle_field_grade_capture_the_flag;
			if (wcscmp(fieldName, L"check_battle_field_grade_lead_the_ball") == 0) return check_battle_field_grade_lead_the_ball;
			if (wcscmp(fieldName, L"check_closet_collecting_grade") == 0) return check_closet_collecting_grade;
			if (wcscmp(fieldName, L"check_content_quota") == 0) return check_content_quota;
			if (wcscmp(fieldName, L"check_soul_boost_season_bm") == 0) return check_soul_boost_season_bm;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_account_level") == 0) return required_account_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"required_itembrand") == 0) return Data::AnyFieldToStringConverter::ToString(&required_itembrand);
			if (wcscmp(fieldName, L"required_itembrand_condition_type") == 0) return Data::AnyFieldToStringConverter::ToString(&required_itembrand_condition_type);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[3]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[2]));
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[3]));
			if (wcscmp(fieldName, L"required_faction_score") == 0) return Data::AnyFieldToStringConverter::ToString(&required_faction_score);
			if (wcscmp(fieldName, L"required_duel_point") == 0) return Data::AnyFieldToStringConverter::ToString(&required_duel_point);
			if (wcscmp(fieldName, L"required_party_battle_point") == 0) return Data::AnyFieldToStringConverter::ToString(&required_party_battle_point);
			if (wcscmp(fieldName, L"required_field_play_point") == 0) return Data::AnyFieldToStringConverter::ToString(&required_field_play_point);
			if (wcscmp(fieldName, L"required_life_contents_point") == 0) return Data::AnyFieldToStringConverter::ToString(&required_life_contents_point);
			if (wcscmp(fieldName, L"required_achievement_score") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_score);
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_id);
			if (wcscmp(fieldName, L"required_achievement_step_min") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_step_min);
			if (wcscmp(fieldName, L"faction_level") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_level);
			if (wcscmp(fieldName, L"check_solo_duel_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&check_solo_duel_grade);
			if (wcscmp(fieldName, L"check_team_duel_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&check_team_duel_grade);
			if (wcscmp(fieldName, L"check_battle_field_grade_occupation_war") == 0) return Data::AnyFieldToStringConverter::ToString(&check_battle_field_grade_occupation_war);
			if (wcscmp(fieldName, L"check_battle_field_grade_capture_the_flag") == 0) return Data::AnyFieldToStringConverter::ToString(&check_battle_field_grade_capture_the_flag);
			if (wcscmp(fieldName, L"check_battle_field_grade_lead_the_ball") == 0) return Data::AnyFieldToStringConverter::ToString(&check_battle_field_grade_lead_the_ball);
			if (wcscmp(fieldName, L"check_closet_collecting_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&check_closet_collecting_grade);
			if (wcscmp(fieldName, L"check_content_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&check_content_quota);
			if (wcscmp(fieldName, L"check_soul_boost_season_bm") == 0) return Data::AnyFieldToStringConverter::ToString(&check_soul_boost_season_bm);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_account_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_account_level);

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
__int32 money;
Data::TableRef required_itembrand;
int required_itembrand_tableId(){return 183;};
__int8 required_itembrand_condition_type;
std::wstring required_itembrand_condition_type_EnumValue() const {return Get_required_itembrand_condition_type_EnumValue(required_itembrand_condition_type);};
char Pad0[3];
Data::TableRef required_item[4];
int required_item_tableId(){return 189;};
__int16 required_item_count[4];
__int32 required_faction_score;
__int32 required_duel_point;
__int32 required_party_battle_point;
__int32 required_field_play_point;
__int32 required_life_contents_point;
__int32 required_achievement_score;
__int32 required_achievement_id;
__int16 required_achievement_step_min;
__int16 faction_level;
__int8 check_solo_duel_grade;
__int8 check_team_duel_grade;
__int8 check_battle_field_grade_occupation_war;
__int8 check_battle_field_grade_capture_the_flag;
__int8 check_battle_field_grade_lead_the_ball;
char Pad1[1];
__int16 check_closet_collecting_grade;
Data::TableRef check_content_quota;
int check_content_quota_tableId(){return 66;};
__int32 check_soul_boost_season_bm;
__int8 required_level;
__int8 required_mastery_level;
__int16 required_account_level;

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 185; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_buy_price_RecordPtr // : DrRecordPtr
	{
		item_buy_price_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_buy_price_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}