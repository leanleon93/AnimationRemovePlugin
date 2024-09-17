/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct boss_challenge_Record : DrEl
	{
	private:
		static std::wstring Get_required_preceding_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"require_score") == 0) return require_score;
			if (wcscmp(fieldName, L"last_round") == 0) return last_round;
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"enable_heart_count") == 0) return enable_heart_count;
			if (wcscmp(fieldName, L"max_instant_heart_count") == 0) return max_instant_heart_count;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return required_preceding_quest[2];
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return required_preceding_quest_check;
			if (wcscmp(fieldName, L"boss_challenge_name2") == 0) return boss_challenge_name2;
			if (wcscmp(fieldName, L"boss_challenge_desc") == 0) return boss_challenge_desc;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
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
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return enable_infinite_hyper_energy;
			if (wcscmp(fieldName, L"tactic") == 0) return tactic;
			if (wcscmp(fieldName, L"recommend_alias") == 0) return recommend_alias;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"require_score") == 0) return Data::AnyFieldToStringConverter::ToString(&require_score);
			if (wcscmp(fieldName, L"last_round") == 0) return Data::AnyFieldToStringConverter::ToString(&last_round);
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"enable_heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_heart_count);
			if (wcscmp(fieldName, L"max_instant_heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_instant_heart_count);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[2]));
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_quest_check);
			if (wcscmp(fieldName, L"boss_challenge_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_challenge_name2);
			if (wcscmp(fieldName, L"boss_challenge_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_challenge_desc);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
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
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_infinite_hyper_energy);
			if (wcscmp(fieldName, L"tactic") == 0) return Data::AnyFieldToStringConverter::ToString(&tactic);
			if (wcscmp(fieldName, L"recommend_alias") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_alias);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
__int16 require_score;
__int16 last_round;
wchar_t* alias;
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool enable_heart_count;
__int8 max_instant_heart_count;
__int8 required_level;
__int8 required_mastery_level;
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
std::wstring required_preceding_quest_check_EnumValue() const {return Get_required_preceding_quest_check_EnumValue(required_preceding_quest_check);};
char Pad0[3];
Data::TableRef boss_challenge_name2;
int boss_challenge_name2_tableId(){return 405;};
Data::TableRef boss_challenge_desc;
int boss_challenge_desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad1[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 recommand_level_min;
__int8 recommand_level_max;
__int8 recommand_mastery_level_min;
__int8 recommand_mastery_level_max;
__int16 recommend_attack_power;
char Pad2[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef display_quests[12];
int display_quests_tableId(){return 283;};
bool enable_infinite_hyper_energy;
char Pad3[3];
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 44; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boss_challenge_RecordPtr // : DrRecordPtr
	{
		boss_challenge_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::boss_challenge_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}