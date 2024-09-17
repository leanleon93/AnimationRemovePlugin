/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class public_raid_RecordSubType : __int32
    {
		public_raid_record_sub_public_raid_1 = 0,
		public_raid_record_sub_public_raid_2 = 1,
		public_raid_record_sub_public_raid_3 = 2,
		public_raid_record_sub_public_raid_4 = 3,
		public_raid_record_sub_public_raid_5 = 4,
		public_raid_record_sub_inter_battle_field = 5,
		public_raid_record_sub_guerrilla_event = 6,
		public_raid_record_sub_count = 7,
    };
#pragma pack(push, 1)
	struct public_raid_Record : DrEl
	{
	private:
		static std::wstring Get_required_preceding_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"max_pc_count") == 0) return max_pc_count;
			if (wcscmp(fieldName, L"max_party_count") == 0) return max_party_count;
			if (wcscmp(fieldName, L"round_id") == 0) return round_id;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return required_preceding_quest[2];
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return required_preceding_quest_check;
			if (wcscmp(fieldName, L"required_available_weekly_time") == 0) return required_available_weekly_time;
			if (wcscmp(fieldName, L"start_weekly_time") == 0) return start_weekly_time;
			if (wcscmp(fieldName, L"stand_by_duration_second") == 0) return stand_by_duration_second;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"arena_entrance_zone") == 0) return arena_entrance_zone;
			if (wcscmp(fieldName, L"enter_pc_spawn") == 0) return enter_pc_spawn;
			if (wcscmp(fieldName, L"publicraid_name2") == 0) return publicraid_name2;
			if (wcscmp(fieldName, L"publicraid_desc") == 0) return publicraid_desc;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"publicraid_icon") == 0) return publicraid_icon;
			if (wcscmp(fieldName, L"publicraid_image") == 0) return publicraid_image;
			if (wcscmp(fieldName, L"enable_reset_combat_mode") == 0) return enable_reset_combat_mode;
			if (wcscmp(fieldName, L"reset_combat_mode_recycle_duration") == 0) return reset_combat_mode_recycle_duration;
			if (wcscmp(fieldName, L"public_raid_kismet_name") == 0) return public_raid_kismet_name;
			if (wcscmp(fieldName, L"public_raid_kismet_name_1") == 0) return public_raid_kismet_name[0];
			if (wcscmp(fieldName, L"public_raid_kismet_name_2") == 0) return public_raid_kismet_name[1];
			if (wcscmp(fieldName, L"public_raid_kismet_name_3") == 0) return public_raid_kismet_name[2];
			if (wcscmp(fieldName, L"public_raid_kismet_name_4") == 0) return public_raid_kismet_name[3];
			if (wcscmp(fieldName, L"public_raid_kismet_name_5") == 0) return public_raid_kismet_name[4];
			if (wcscmp(fieldName, L"public_raid_kismet_name_6") == 0) return public_raid_kismet_name[5];
			if (wcscmp(fieldName, L"public_raid_kismet_name_7") == 0) return public_raid_kismet_name[6];
			if (wcscmp(fieldName, L"public_raid_kismet_name_8") == 0) return public_raid_kismet_name[7];
			if (wcscmp(fieldName, L"public_raid_kismet_name_9") == 0) return public_raid_kismet_name[8];
			if (wcscmp(fieldName, L"public_raid_kismet_name_10") == 0) return public_raid_kismet_name[9];
			if (wcscmp(fieldName, L"public_raid_kismet_name_11") == 0) return public_raid_kismet_name[10];
			if (wcscmp(fieldName, L"public_raid_kismet_name_12") == 0) return public_raid_kismet_name[11];
			if (wcscmp(fieldName, L"public_raid_kismet_name_13") == 0) return public_raid_kismet_name[12];
			if (wcscmp(fieldName, L"public_raid_kismet_name_14") == 0) return public_raid_kismet_name[13];
			if (wcscmp(fieldName, L"public_raid_kismet_name_15") == 0) return public_raid_kismet_name[14];
			if (wcscmp(fieldName, L"public_raid_kismet_name_16") == 0) return public_raid_kismet_name[15];
			if (wcscmp(fieldName, L"public_raid_kismet_name_17") == 0) return public_raid_kismet_name[16];
			if (wcscmp(fieldName, L"public_raid_kismet_name_18") == 0) return public_raid_kismet_name[17];
			if (wcscmp(fieldName, L"public_raid_kismet_name_19") == 0) return public_raid_kismet_name[18];
			if (wcscmp(fieldName, L"public_raid_kismet_name_20") == 0) return public_raid_kismet_name[19];
			if (wcscmp(fieldName, L"public_raid_kismet_name_21") == 0) return public_raid_kismet_name[20];
			if (wcscmp(fieldName, L"public_raid_kismet_name_22") == 0) return public_raid_kismet_name[21];
			if (wcscmp(fieldName, L"public_raid_kismet_name_23") == 0) return public_raid_kismet_name[22];
			if (wcscmp(fieldName, L"public_raid_kismet_name_24") == 0) return public_raid_kismet_name[23];
			if (wcscmp(fieldName, L"public_raid_kismet_name_25") == 0) return public_raid_kismet_name[24];
			if (wcscmp(fieldName, L"public_raid_kismet_name_26") == 0) return public_raid_kismet_name[25];
			if (wcscmp(fieldName, L"public_raid_kismet_name_27") == 0) return public_raid_kismet_name[26];
			if (wcscmp(fieldName, L"public_raid_kismet_name_28") == 0) return public_raid_kismet_name[27];
			if (wcscmp(fieldName, L"public_raid_kismet_name_29") == 0) return public_raid_kismet_name[28];
			if (wcscmp(fieldName, L"public_raid_kismet_name_30") == 0) return public_raid_kismet_name[29];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet") == 0) return public_raid_npc_for_kismet;
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_1") == 0) return public_raid_npc_for_kismet[0];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_2") == 0) return public_raid_npc_for_kismet[1];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_3") == 0) return public_raid_npc_for_kismet[2];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_4") == 0) return public_raid_npc_for_kismet[3];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_5") == 0) return public_raid_npc_for_kismet[4];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_6") == 0) return public_raid_npc_for_kismet[5];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_7") == 0) return public_raid_npc_for_kismet[6];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_8") == 0) return public_raid_npc_for_kismet[7];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_9") == 0) return public_raid_npc_for_kismet[8];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_10") == 0) return public_raid_npc_for_kismet[9];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_11") == 0) return public_raid_npc_for_kismet[10];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_12") == 0) return public_raid_npc_for_kismet[11];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_13") == 0) return public_raid_npc_for_kismet[12];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_14") == 0) return public_raid_npc_for_kismet[13];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_15") == 0) return public_raid_npc_for_kismet[14];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_16") == 0) return public_raid_npc_for_kismet[15];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_17") == 0) return public_raid_npc_for_kismet[16];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_18") == 0) return public_raid_npc_for_kismet[17];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_19") == 0) return public_raid_npc_for_kismet[18];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_20") == 0) return public_raid_npc_for_kismet[19];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_21") == 0) return public_raid_npc_for_kismet[20];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_22") == 0) return public_raid_npc_for_kismet[21];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_23") == 0) return public_raid_npc_for_kismet[22];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_24") == 0) return public_raid_npc_for_kismet[23];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_25") == 0) return public_raid_npc_for_kismet[24];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_26") == 0) return public_raid_npc_for_kismet[25];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_27") == 0) return public_raid_npc_for_kismet[26];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_28") == 0) return public_raid_npc_for_kismet[27];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_29") == 0) return public_raid_npc_for_kismet[28];
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_30") == 0) return public_raid_npc_for_kismet[29];
			if (wcscmp(fieldName, L"enable_custom_pouch_drop_position") == 0) return enable_custom_pouch_drop_position;
			if (wcscmp(fieldName, L"pouch_pos_x") == 0) return pouch_pos_x;
			if (wcscmp(fieldName, L"pouch_pos_y") == 0) return pouch_pos_y;
			if (wcscmp(fieldName, L"pouch_pos_z") == 0) return pouch_pos_z;
			if (wcscmp(fieldName, L"end_by_duration_second") == 0) return end_by_duration_second;
			if (wcscmp(fieldName, L"exit_env_name") == 0) return exit_env_name;
			if (wcscmp(fieldName, L"boss_npc_alias") == 0) return boss_npc_alias;
			if (wcscmp(fieldName, L"boss_npc_alias_1") == 0) return boss_npc_alias[0];
			if (wcscmp(fieldName, L"boss_npc_alias_2") == 0) return boss_npc_alias[1];
			if (wcscmp(fieldName, L"boss_npc_alias_3") == 0) return boss_npc_alias[2];
			if (wcscmp(fieldName, L"boss_npc_alias_4") == 0) return boss_npc_alias[3];
			if (wcscmp(fieldName, L"boss_npc_alias_5") == 0) return boss_npc_alias[4];
			if (wcscmp(fieldName, L"boss_npc_alias_6") == 0) return boss_npc_alias[5];
			if (wcscmp(fieldName, L"boss_npc_alias_7") == 0) return boss_npc_alias[6];
			if (wcscmp(fieldName, L"boss_npc_alias_8") == 0) return boss_npc_alias[7];
			if (wcscmp(fieldName, L"boss_npc_section") == 0) return boss_npc_section;
			if (wcscmp(fieldName, L"boss_npc_section_1") == 0) return boss_npc_section[0];
			if (wcscmp(fieldName, L"boss_npc_section_2") == 0) return boss_npc_section[1];
			if (wcscmp(fieldName, L"boss_npc_section_3") == 0) return boss_npc_section[2];
			if (wcscmp(fieldName, L"boss_npc_section_4") == 0) return boss_npc_section[3];
			if (wcscmp(fieldName, L"boss_npc_section_5") == 0) return boss_npc_section[4];
			if (wcscmp(fieldName, L"boss_npc_section_6") == 0) return boss_npc_section[5];
			if (wcscmp(fieldName, L"boss_npc_section_7") == 0) return boss_npc_section[6];
			if (wcscmp(fieldName, L"boss_npc_section_8") == 0) return boss_npc_section[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"max_pc_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_pc_count);
			if (wcscmp(fieldName, L"max_party_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_party_count);
			if (wcscmp(fieldName, L"round_id") == 0) return Data::AnyFieldToStringConverter::ToString(&round_id);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[2]));
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_quest_check);
			if (wcscmp(fieldName, L"required_available_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&required_available_weekly_time);
			if (wcscmp(fieldName, L"start_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&start_weekly_time);
			if (wcscmp(fieldName, L"stand_by_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&stand_by_duration_second);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"arena_entrance_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_entrance_zone);
			if (wcscmp(fieldName, L"enter_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&enter_pc_spawn);
			if (wcscmp(fieldName, L"publicraid_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&publicraid_name2);
			if (wcscmp(fieldName, L"publicraid_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&publicraid_desc);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"publicraid_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&publicraid_icon);
			if (wcscmp(fieldName, L"publicraid_image") == 0) return Data::AnyFieldToStringConverter::ToString(&publicraid_image);
			if (wcscmp(fieldName, L"enable_reset_combat_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_reset_combat_mode);
			if (wcscmp(fieldName, L"reset_combat_mode_recycle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_combat_mode_recycle_duration);
			if (wcscmp(fieldName, L"public_raid_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[0]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[1]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[2]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[3]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[4]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[5]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[6]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[7]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[8]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[9]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[10]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[11]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[12]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[13]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[14]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[15]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[16]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[17]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[18]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[19]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[20]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[21]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[22]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[23]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[24]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[25]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[26]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[27]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[28]));
			if (wcscmp(fieldName, L"public_raid_kismet_name_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_kismet_name[29]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[0]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[1]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[2]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[3]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[4]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[5]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[6]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[7]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[8]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[9]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[10]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[11]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[12]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[13]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[14]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[15]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[16]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[17]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[18]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[19]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[20]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[21]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[22]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[23]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[24]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[25]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[26]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[27]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[28]));
			if (wcscmp(fieldName, L"public_raid_npc_for_kismet_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(public_raid_npc_for_kismet[29]));
			if (wcscmp(fieldName, L"enable_custom_pouch_drop_position") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_custom_pouch_drop_position);
			if (wcscmp(fieldName, L"pouch_pos_x") == 0) return Data::AnyFieldToStringConverter::ToString(&pouch_pos_x);
			if (wcscmp(fieldName, L"pouch_pos_y") == 0) return Data::AnyFieldToStringConverter::ToString(&pouch_pos_y);
			if (wcscmp(fieldName, L"pouch_pos_z") == 0) return Data::AnyFieldToStringConverter::ToString(&pouch_pos_z);
			if (wcscmp(fieldName, L"end_by_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&end_by_duration_second);
			if (wcscmp(fieldName, L"exit_env_name") == 0) return Data::AnyFieldToStringConverter::ToString(&exit_env_name);
			if (wcscmp(fieldName, L"boss_npc_alias_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[0]));
			if (wcscmp(fieldName, L"boss_npc_alias_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[1]));
			if (wcscmp(fieldName, L"boss_npc_alias_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[2]));
			if (wcscmp(fieldName, L"boss_npc_alias_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[3]));
			if (wcscmp(fieldName, L"boss_npc_alias_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[4]));
			if (wcscmp(fieldName, L"boss_npc_alias_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[5]));
			if (wcscmp(fieldName, L"boss_npc_alias_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[6]));
			if (wcscmp(fieldName, L"boss_npc_alias_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_alias[7]));
			if (wcscmp(fieldName, L"boss_npc_section_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[0]));
			if (wcscmp(fieldName, L"boss_npc_section_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[1]));
			if (wcscmp(fieldName, L"boss_npc_section_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[2]));
			if (wcscmp(fieldName, L"boss_npc_section_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[3]));
			if (wcscmp(fieldName, L"boss_npc_section_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[4]));
			if (wcscmp(fieldName, L"boss_npc_section_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[5]));
			if (wcscmp(fieldName, L"boss_npc_section_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[6]));
			if (wcscmp(fieldName, L"boss_npc_section_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc_section[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(publicraid_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) publicraid_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(publicraid_icon));
			if (reinterpret_cast<std::uintptr_t>(publicraid_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) publicraid_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(publicraid_image));
			for (int i = 0; i < 30; i++) {
				if (reinterpret_cast<std::uintptr_t>(public_raid_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) public_raid_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(public_raid_kismet_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(exit_env_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exit_env_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exit_env_name));
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
Data::TableRef zone;
int zone_tableId(){return 443;};
__int8 max_pc_count;
__int8 max_party_count;
__int8 round_id;
__int8 required_level;
__int8 required_mastery_level;
char Pad0[3];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
std::wstring required_preceding_quest_check_EnumValue() const {return Get_required_preceding_quest_check_EnumValue(required_preceding_quest_check);};
char Pad1[3];
Data::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId(){return 431;};
Data::TableRef start_weekly_time;
int start_weekly_time_tableId(){return 431;};
__int16 stand_by_duration_second;
char Pad2[2];
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef arena_entrance_zone;
int arena_entrance_zone_tableId(){return 443;};
Data::TableRef enter_pc_spawn;
int enter_pc_spawn_tableId(){return 452;};
Data::TableRef publicraid_name2;
int publicraid_name2_tableId(){return 405;};
Data::TableRef publicraid_desc;
int publicraid_desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
wchar_t* publicraid_icon;
wchar_t* publicraid_image;
bool enable_reset_combat_mode;
char Pad3[3];
__int32 reset_combat_mode_recycle_duration;
wchar_t* public_raid_kismet_name[30];
Data::TableRef public_raid_npc_for_kismet[30];
int public_raid_npc_for_kismet_tableId(){return 255;};
bool enable_custom_pouch_drop_position;
char Pad4[3];
float pouch_pos_x;
float pouch_pos_y;
float pouch_pos_z;
__int16 end_by_duration_second;
char Pad5[2];
wchar_t* exit_env_name;
Data::TableRef boss_npc_alias[8];
int boss_npc_alias_tableId(){return 255;};
Data::TableRef boss_npc_section[8];
int boss_npc_section_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(5, 3); }
		static __int16 TableId() { return 279; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) public_raid_RecordPtr // : DrRecordPtr
	{
		public_raid_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::public_raid_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}