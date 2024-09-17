/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class achievement_register_RecordSubType : __int32
    {
		achievement_register_record_sub_null = 0,
		achievement_register_record_sub_kill_boss_npc = 1,
		achievement_register_record_sub_kill_npc = 2,
		achievement_register_record_sub_kill_pc = 3,
		achievement_register_record_sub_equip_item_brand_n = 4,
		achievement_register_record_sub_equip_item_n = 5,
		achievement_register_record_sub_use_grocery = 6,
		achievement_register_record_sub_use_grocery_n = 7,
		achievement_register_record_sub_use_grocery_brand_n = 8,
		achievement_register_record_sub_time = 9,
		achievement_register_record_sub_use_skill_to_npc = 10,
		achievement_register_record_sub_defend_npc_skill = 11,
		achievement_register_record_sub_pc_exhaustion = 12,
		achievement_register_record_sub_pc_dead = 13,
		achievement_register_record_sub_use_gadget_to_npc = 14,
		achievement_register_record_sub_quest_complete = 15,
		achievement_register_record_sub_quest_complete_count = 16,
		achievement_register_record_sub_tendency_quest_complete_count = 17,
		achievement_register_record_sub_duel_win_count = 18,
		achievement_register_record_sub_duel_grade = 19,
		achievement_register_record_sub_manipulate_env = 20,
		achievement_register_record_sub_exchange_faction_score_count = 21,
		achievement_register_record_sub_teleport_count = 22,
		achievement_register_record_sub_help_restoration = 23,
		achievement_register_record_sub_help_resurrect = 24,
		achievement_register_record_sub_get_contribution_count = 25,
		achievement_register_record_sub_get_contribution_score = 26,
		achievement_register_record_sub_give_faction_score_to_refiner = 27,
		achievement_register_record_sub_duel_bot_challenge_finished_floor = 28,
		achievement_register_record_sub_accumulate_field_play_point_by_simple_tendency_quest = 29,
		achievement_register_record_sub_accumulate_faction_score = 30,
		achievement_register_record_sub_growth_item = 31,
		achievement_register_record_sub_attach_equip_gem_piece = 32,
		achievement_register_record_sub_decompose_item = 33,
		achievement_register_record_sub_decompose_item_n = 34,
		achievement_register_record_sub_decompose_item_equip_type_n = 35,
		achievement_register_record_sub_decompose_item_weapon_gem_level_n = 36,
		achievement_register_record_sub_attach_gem_to_weapon = 37,
		achievement_register_record_sub_attach_gem_to_weapon_n = 38,
		achievement_register_record_sub_awakening_item = 39,
		achievement_register_record_sub_transform_item_brand = 40,
		achievement_register_record_sub_transform_item = 41,
		achievement_register_record_sub_zero_durability = 42,
		achievement_register_record_sub_repair_item = 43,
		achievement_register_record_sub_detach_post_attachment_count = 44,
		achievement_register_record_sub_detach_post_attachment_money = 45,
		achievement_register_record_sub_detach_post_attachment_item = 46,
		achievement_register_record_sub_detach_post_attachment_item_n = 47,
		achievement_register_record_sub_take_craft_count = 48,
		achievement_register_record_sub_take_craft_item = 49,
		achievement_register_record_sub_take_craft_item_n = 50,
		achievement_register_record_sub_inventory_size = 51,
		achievement_register_record_sub_wardrobe_size = 52,
		achievement_register_record_sub_depot_size = 53,
		achievement_register_record_sub_depository_2_size = 54,
		achievement_register_record_sub_pc_level = 55,
		achievement_register_record_sub_pc_mastery_level = 56,
		achievement_register_record_sub_client_only = 57,
		achievement_register_record_sub_party_battle_win_count = 58,
		achievement_register_record_sub_party_battle_challenge_count = 59,
		achievement_register_record_sub_party_battle_grade = 60,
		achievement_register_record_sub_lead_the_ball_goal_in_count = 61,
		achievement_register_record_sub_skill_training_subject_complete = 62,
		achievement_register_record_sub_dispose_item_buy_price_required_point = 63,
		achievement_register_record_sub_acquire_fish_count = 64,
		achievement_register_record_sub_acquire_specific_fish_count = 65,
		achievement_register_record_sub_acquire_fish_size_count = 66,
		achievement_register_record_sub_acquire_fish_grade_count = 67,
		achievement_register_record_sub_acquire_fish_size_grade_count = 68,
		achievement_register_record_sub_accumulate_life_contents_point_by_fishing = 69,
		achievement_register_record_sub_hyper_racing_game_participation = 70,
		achievement_register_record_sub_hyper_racing_game_finish = 71,
		achievement_register_record_sub_hyper_racing_game_record = 72,
		achievement_register_record_sub_count = 73,
    };
#pragma pack(push, 1)
	struct achievement_register_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"version") == 0) return version;
			if (wcscmp(fieldName, L"max_value") == 0) return max_value;
			if (wcscmp(fieldName, L"for_newbie_care") == 0) return for_newbie_care;
			if (wcscmp(fieldName, L"persistant") == 0) return persistant;
			if (wcscmp(fieldName, L"increment_from_client") == 0) return increment_from_client;
			if (wcscmp(fieldName, L"achievement") == 0) return achievement;
			if (wcscmp(fieldName, L"achievement_1") == 0) return achievement[0];
			if (wcscmp(fieldName, L"achievement_2") == 0) return achievement[1];
			if (wcscmp(fieldName, L"achievement_3") == 0) return achievement[2];
			if (wcscmp(fieldName, L"achievement_4") == 0) return achievement[3];
			if (wcscmp(fieldName, L"achievement_5") == 0) return achievement[4];
			if (wcscmp(fieldName, L"achievement_6") == 0) return achievement[5];
			if (wcscmp(fieldName, L"achievement_7") == 0) return achievement[6];
			if (wcscmp(fieldName, L"achievement_8") == 0) return achievement[7];
			if (wcscmp(fieldName, L"register_name") == 0) return register_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"version") == 0) return Data::AnyFieldToStringConverter::ToString(&version);
			if (wcscmp(fieldName, L"max_value") == 0) return Data::AnyFieldToStringConverter::ToString(&max_value);
			if (wcscmp(fieldName, L"for_newbie_care") == 0) return Data::AnyFieldToStringConverter::ToString(&for_newbie_care);
			if (wcscmp(fieldName, L"persistant") == 0) return Data::AnyFieldToStringConverter::ToString(&persistant);
			if (wcscmp(fieldName, L"increment_from_client") == 0) return Data::AnyFieldToStringConverter::ToString(&increment_from_client);
			if (wcscmp(fieldName, L"achievement_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[0]));
			if (wcscmp(fieldName, L"achievement_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[1]));
			if (wcscmp(fieldName, L"achievement_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[2]));
			if (wcscmp(fieldName, L"achievement_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[3]));
			if (wcscmp(fieldName, L"achievement_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[4]));
			if (wcscmp(fieldName, L"achievement_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[5]));
			if (wcscmp(fieldName, L"achievement_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[6]));
			if (wcscmp(fieldName, L"achievement_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[7]));
			if (wcscmp(fieldName, L"register_name") == 0) return Data::AnyFieldToStringConverter::ToString(&register_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 version;
char Pad0[2];
__int32 max_value;
bool for_newbie_care;
bool persistant;
bool increment_from_client;
char Pad1[1];
Data::TableRef achievement[8];
int achievement_tableId(){return 6;};
Data::TableRef register_name;
int register_name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 7; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) achievement_register_RecordPtr // : DrRecordPtr
	{
		achievement_register_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::achievement_register_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}