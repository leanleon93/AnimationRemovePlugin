/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class npctalkmessage_RecordSubType : __int32
    {
		npctalkmessage_record_sub_branch = 0,
		npctalkmessage_record_sub_questmessage = 1,
		npctalkmessage_record_sub_teleport = 2,
		npctalkmessage_record_sub_craft = 3,
		npctalkmessage_record_sub_faction_coin_exchange = 4,
		npctalkmessage_record_sub_store = 5,
		npctalkmessage_record_sub_warehouse = 6,
		npctalkmessage_record_sub_auction = 7,
		npctalkmessage_record_sub_delivery = 8,
		npctalkmessage_record_sub_make_summoned = 9,
		npctalkmessage_record_sub_summoned_beauty_shop = 10,
		npctalkmessage_record_sub_summoned_name_change = 11,
		npctalkmessage_record_sub_create_guild = 12,
		npctalkmessage_record_sub_join_faction = 13,
		npctalkmessage_record_sub_transfer_faction = 14,
		npctalkmessage_record_sub_contribute_guild_reputation = 15,
		npctalkmessage_record_sub_dungeon_progress = 16,
		npctalkmessage_record_sub_select_join_faction = 17,
		npctalkmessage_record_sub_guild_customize = 18,
		npctalkmessage_record_sub_job_change_join = 19,
		npctalkmessage_record_sub_job_change_show = 20,
		npctalkmessage_record_sub_count = 21,
    };
#pragma pack(push, 1)
	struct npctalkmessage_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"required_faction") == 0) return required_faction;
			if (wcscmp(fieldName, L"required_complete_quest") == 0) return required_complete_quest;
			if (wcscmp(fieldName, L"step_text") == 0) return step_text;
			if (wcscmp(fieldName, L"step_text_1") == 0) return step_text[0];
			if (wcscmp(fieldName, L"step_text_2") == 0) return step_text[1];
			if (wcscmp(fieldName, L"step_text_3") == 0) return step_text[2];
			if (wcscmp(fieldName, L"step_text_4") == 0) return step_text[3];
			if (wcscmp(fieldName, L"step_text_5") == 0) return step_text[4];
			if (wcscmp(fieldName, L"step_text_6") == 0) return step_text[5];
			if (wcscmp(fieldName, L"step_text_7") == 0) return step_text[6];
			if (wcscmp(fieldName, L"step_text_8") == 0) return step_text[7];
			if (wcscmp(fieldName, L"step_text_9") == 0) return step_text[8];
			if (wcscmp(fieldName, L"step_text_10") == 0) return step_text[9];
			if (wcscmp(fieldName, L"step_text_11") == 0) return step_text[10];
			if (wcscmp(fieldName, L"step_text_12") == 0) return step_text[11];
			if (wcscmp(fieldName, L"step_text_13") == 0) return step_text[12];
			if (wcscmp(fieldName, L"step_text_14") == 0) return step_text[13];
			if (wcscmp(fieldName, L"step_text_15") == 0) return step_text[14];
			if (wcscmp(fieldName, L"step_text_16") == 0) return step_text[15];
			if (wcscmp(fieldName, L"step_text_17") == 0) return step_text[16];
			if (wcscmp(fieldName, L"step_text_18") == 0) return step_text[17];
			if (wcscmp(fieldName, L"step_text_19") == 0) return step_text[18];
			if (wcscmp(fieldName, L"step_text_20") == 0) return step_text[19];
			if (wcscmp(fieldName, L"step_text_21") == 0) return step_text[20];
			if (wcscmp(fieldName, L"step_text_22") == 0) return step_text[21];
			if (wcscmp(fieldName, L"step_text_23") == 0) return step_text[22];
			if (wcscmp(fieldName, L"step_text_24") == 0) return step_text[23];
			if (wcscmp(fieldName, L"step_text_25") == 0) return step_text[24];
			if (wcscmp(fieldName, L"step_text_26") == 0) return step_text[25];
			if (wcscmp(fieldName, L"step_text_27") == 0) return step_text[26];
			if (wcscmp(fieldName, L"step_text_28") == 0) return step_text[27];
			if (wcscmp(fieldName, L"step_text_29") == 0) return step_text[28];
			if (wcscmp(fieldName, L"step_text_30") == 0) return step_text[29];
			if (wcscmp(fieldName, L"step_subtext") == 0) return step_subtext;
			if (wcscmp(fieldName, L"step_subtext_1") == 0) return step_subtext[0];
			if (wcscmp(fieldName, L"step_subtext_2") == 0) return step_subtext[1];
			if (wcscmp(fieldName, L"step_subtext_3") == 0) return step_subtext[2];
			if (wcscmp(fieldName, L"step_subtext_4") == 0) return step_subtext[3];
			if (wcscmp(fieldName, L"step_subtext_5") == 0) return step_subtext[4];
			if (wcscmp(fieldName, L"step_subtext_6") == 0) return step_subtext[5];
			if (wcscmp(fieldName, L"step_subtext_7") == 0) return step_subtext[6];
			if (wcscmp(fieldName, L"step_subtext_8") == 0) return step_subtext[7];
			if (wcscmp(fieldName, L"step_subtext_9") == 0) return step_subtext[8];
			if (wcscmp(fieldName, L"step_subtext_10") == 0) return step_subtext[9];
			if (wcscmp(fieldName, L"step_subtext_11") == 0) return step_subtext[10];
			if (wcscmp(fieldName, L"step_subtext_12") == 0) return step_subtext[11];
			if (wcscmp(fieldName, L"step_subtext_13") == 0) return step_subtext[12];
			if (wcscmp(fieldName, L"step_subtext_14") == 0) return step_subtext[13];
			if (wcscmp(fieldName, L"step_subtext_15") == 0) return step_subtext[14];
			if (wcscmp(fieldName, L"step_subtext_16") == 0) return step_subtext[15];
			if (wcscmp(fieldName, L"step_subtext_17") == 0) return step_subtext[16];
			if (wcscmp(fieldName, L"step_subtext_18") == 0) return step_subtext[17];
			if (wcscmp(fieldName, L"step_subtext_19") == 0) return step_subtext[18];
			if (wcscmp(fieldName, L"step_subtext_20") == 0) return step_subtext[19];
			if (wcscmp(fieldName, L"step_subtext_21") == 0) return step_subtext[20];
			if (wcscmp(fieldName, L"step_subtext_22") == 0) return step_subtext[21];
			if (wcscmp(fieldName, L"step_subtext_23") == 0) return step_subtext[22];
			if (wcscmp(fieldName, L"step_subtext_24") == 0) return step_subtext[23];
			if (wcscmp(fieldName, L"step_subtext_25") == 0) return step_subtext[24];
			if (wcscmp(fieldName, L"step_subtext_26") == 0) return step_subtext[25];
			if (wcscmp(fieldName, L"step_subtext_27") == 0) return step_subtext[26];
			if (wcscmp(fieldName, L"step_subtext_28") == 0) return step_subtext[27];
			if (wcscmp(fieldName, L"step_subtext_29") == 0) return step_subtext[28];
			if (wcscmp(fieldName, L"step_subtext_30") == 0) return step_subtext[29];
			if (wcscmp(fieldName, L"step_next") == 0) return step_next;
			if (wcscmp(fieldName, L"step_next_1") == 0) return step_next[0];
			if (wcscmp(fieldName, L"step_next_2") == 0) return step_next[1];
			if (wcscmp(fieldName, L"step_next_3") == 0) return step_next[2];
			if (wcscmp(fieldName, L"step_next_4") == 0) return step_next[3];
			if (wcscmp(fieldName, L"step_next_5") == 0) return step_next[4];
			if (wcscmp(fieldName, L"step_next_6") == 0) return step_next[5];
			if (wcscmp(fieldName, L"step_next_7") == 0) return step_next[6];
			if (wcscmp(fieldName, L"step_next_8") == 0) return step_next[7];
			if (wcscmp(fieldName, L"step_next_9") == 0) return step_next[8];
			if (wcscmp(fieldName, L"step_next_10") == 0) return step_next[9];
			if (wcscmp(fieldName, L"step_next_11") == 0) return step_next[10];
			if (wcscmp(fieldName, L"step_next_12") == 0) return step_next[11];
			if (wcscmp(fieldName, L"step_next_13") == 0) return step_next[12];
			if (wcscmp(fieldName, L"step_next_14") == 0) return step_next[13];
			if (wcscmp(fieldName, L"step_next_15") == 0) return step_next[14];
			if (wcscmp(fieldName, L"step_next_16") == 0) return step_next[15];
			if (wcscmp(fieldName, L"step_next_17") == 0) return step_next[16];
			if (wcscmp(fieldName, L"step_next_18") == 0) return step_next[17];
			if (wcscmp(fieldName, L"step_next_19") == 0) return step_next[18];
			if (wcscmp(fieldName, L"step_next_20") == 0) return step_next[19];
			if (wcscmp(fieldName, L"step_next_21") == 0) return step_next[20];
			if (wcscmp(fieldName, L"step_next_22") == 0) return step_next[21];
			if (wcscmp(fieldName, L"step_next_23") == 0) return step_next[22];
			if (wcscmp(fieldName, L"step_next_24") == 0) return step_next[23];
			if (wcscmp(fieldName, L"step_next_25") == 0) return step_next[24];
			if (wcscmp(fieldName, L"step_next_26") == 0) return step_next[25];
			if (wcscmp(fieldName, L"step_next_27") == 0) return step_next[26];
			if (wcscmp(fieldName, L"step_next_28") == 0) return step_next[27];
			if (wcscmp(fieldName, L"step_next_29") == 0) return step_next[28];
			if (wcscmp(fieldName, L"step_next_30") == 0) return step_next[29];
			if (wcscmp(fieldName, L"step_kismet") == 0) return step_kismet;
			if (wcscmp(fieldName, L"step_kismet_1") == 0) return step_kismet[0];
			if (wcscmp(fieldName, L"step_kismet_2") == 0) return step_kismet[1];
			if (wcscmp(fieldName, L"step_kismet_3") == 0) return step_kismet[2];
			if (wcscmp(fieldName, L"step_kismet_4") == 0) return step_kismet[3];
			if (wcscmp(fieldName, L"step_kismet_5") == 0) return step_kismet[4];
			if (wcscmp(fieldName, L"step_kismet_6") == 0) return step_kismet[5];
			if (wcscmp(fieldName, L"step_kismet_7") == 0) return step_kismet[6];
			if (wcscmp(fieldName, L"step_kismet_8") == 0) return step_kismet[7];
			if (wcscmp(fieldName, L"step_kismet_9") == 0) return step_kismet[8];
			if (wcscmp(fieldName, L"step_kismet_10") == 0) return step_kismet[9];
			if (wcscmp(fieldName, L"step_kismet_11") == 0) return step_kismet[10];
			if (wcscmp(fieldName, L"step_kismet_12") == 0) return step_kismet[11];
			if (wcscmp(fieldName, L"step_kismet_13") == 0) return step_kismet[12];
			if (wcscmp(fieldName, L"step_kismet_14") == 0) return step_kismet[13];
			if (wcscmp(fieldName, L"step_kismet_15") == 0) return step_kismet[14];
			if (wcscmp(fieldName, L"step_kismet_16") == 0) return step_kismet[15];
			if (wcscmp(fieldName, L"step_kismet_17") == 0) return step_kismet[16];
			if (wcscmp(fieldName, L"step_kismet_18") == 0) return step_kismet[17];
			if (wcscmp(fieldName, L"step_kismet_19") == 0) return step_kismet[18];
			if (wcscmp(fieldName, L"step_kismet_20") == 0) return step_kismet[19];
			if (wcscmp(fieldName, L"step_kismet_21") == 0) return step_kismet[20];
			if (wcscmp(fieldName, L"step_kismet_22") == 0) return step_kismet[21];
			if (wcscmp(fieldName, L"step_kismet_23") == 0) return step_kismet[22];
			if (wcscmp(fieldName, L"step_kismet_24") == 0) return step_kismet[23];
			if (wcscmp(fieldName, L"step_kismet_25") == 0) return step_kismet[24];
			if (wcscmp(fieldName, L"step_kismet_26") == 0) return step_kismet[25];
			if (wcscmp(fieldName, L"step_kismet_27") == 0) return step_kismet[26];
			if (wcscmp(fieldName, L"step_kismet_28") == 0) return step_kismet[27];
			if (wcscmp(fieldName, L"step_kismet_29") == 0) return step_kismet[28];
			if (wcscmp(fieldName, L"step_kismet_30") == 0) return step_kismet[29];
			if (wcscmp(fieldName, L"step_cinematic") == 0) return step_cinematic;
			if (wcscmp(fieldName, L"step_cinematic_1") == 0) return step_cinematic[0];
			if (wcscmp(fieldName, L"step_cinematic_2") == 0) return step_cinematic[1];
			if (wcscmp(fieldName, L"step_cinematic_3") == 0) return step_cinematic[2];
			if (wcscmp(fieldName, L"step_cinematic_4") == 0) return step_cinematic[3];
			if (wcscmp(fieldName, L"step_cinematic_5") == 0) return step_cinematic[4];
			if (wcscmp(fieldName, L"step_cinematic_6") == 0) return step_cinematic[5];
			if (wcscmp(fieldName, L"step_cinematic_7") == 0) return step_cinematic[6];
			if (wcscmp(fieldName, L"step_cinematic_8") == 0) return step_cinematic[7];
			if (wcscmp(fieldName, L"step_cinematic_9") == 0) return step_cinematic[8];
			if (wcscmp(fieldName, L"step_cinematic_10") == 0) return step_cinematic[9];
			if (wcscmp(fieldName, L"step_cinematic_11") == 0) return step_cinematic[10];
			if (wcscmp(fieldName, L"step_cinematic_12") == 0) return step_cinematic[11];
			if (wcscmp(fieldName, L"step_cinematic_13") == 0) return step_cinematic[12];
			if (wcscmp(fieldName, L"step_cinematic_14") == 0) return step_cinematic[13];
			if (wcscmp(fieldName, L"step_cinematic_15") == 0) return step_cinematic[14];
			if (wcscmp(fieldName, L"step_cinematic_16") == 0) return step_cinematic[15];
			if (wcscmp(fieldName, L"step_cinematic_17") == 0) return step_cinematic[16];
			if (wcscmp(fieldName, L"step_cinematic_18") == 0) return step_cinematic[17];
			if (wcscmp(fieldName, L"step_cinematic_19") == 0) return step_cinematic[18];
			if (wcscmp(fieldName, L"step_cinematic_20") == 0) return step_cinematic[19];
			if (wcscmp(fieldName, L"step_cinematic_21") == 0) return step_cinematic[20];
			if (wcscmp(fieldName, L"step_cinematic_22") == 0) return step_cinematic[21];
			if (wcscmp(fieldName, L"step_cinematic_23") == 0) return step_cinematic[22];
			if (wcscmp(fieldName, L"step_cinematic_24") == 0) return step_cinematic[23];
			if (wcscmp(fieldName, L"step_cinematic_25") == 0) return step_cinematic[24];
			if (wcscmp(fieldName, L"step_cinematic_26") == 0) return step_cinematic[25];
			if (wcscmp(fieldName, L"step_cinematic_27") == 0) return step_cinematic[26];
			if (wcscmp(fieldName, L"step_cinematic_28") == 0) return step_cinematic[27];
			if (wcscmp(fieldName, L"step_cinematic_29") == 0) return step_cinematic[28];
			if (wcscmp(fieldName, L"step_cinematic_30") == 0) return step_cinematic[29];
			if (wcscmp(fieldName, L"step_show") == 0) return step_show;
			if (wcscmp(fieldName, L"step_show_1") == 0) return step_show[0];
			if (wcscmp(fieldName, L"step_show_2") == 0) return step_show[1];
			if (wcscmp(fieldName, L"step_show_3") == 0) return step_show[2];
			if (wcscmp(fieldName, L"step_show_4") == 0) return step_show[3];
			if (wcscmp(fieldName, L"step_show_5") == 0) return step_show[4];
			if (wcscmp(fieldName, L"step_show_6") == 0) return step_show[5];
			if (wcscmp(fieldName, L"step_show_7") == 0) return step_show[6];
			if (wcscmp(fieldName, L"step_show_8") == 0) return step_show[7];
			if (wcscmp(fieldName, L"step_show_9") == 0) return step_show[8];
			if (wcscmp(fieldName, L"step_show_10") == 0) return step_show[9];
			if (wcscmp(fieldName, L"step_show_11") == 0) return step_show[10];
			if (wcscmp(fieldName, L"step_show_12") == 0) return step_show[11];
			if (wcscmp(fieldName, L"step_show_13") == 0) return step_show[12];
			if (wcscmp(fieldName, L"step_show_14") == 0) return step_show[13];
			if (wcscmp(fieldName, L"step_show_15") == 0) return step_show[14];
			if (wcscmp(fieldName, L"step_show_16") == 0) return step_show[15];
			if (wcscmp(fieldName, L"step_show_17") == 0) return step_show[16];
			if (wcscmp(fieldName, L"step_show_18") == 0) return step_show[17];
			if (wcscmp(fieldName, L"step_show_19") == 0) return step_show[18];
			if (wcscmp(fieldName, L"step_show_20") == 0) return step_show[19];
			if (wcscmp(fieldName, L"step_show_21") == 0) return step_show[20];
			if (wcscmp(fieldName, L"step_show_22") == 0) return step_show[21];
			if (wcscmp(fieldName, L"step_show_23") == 0) return step_show[22];
			if (wcscmp(fieldName, L"step_show_24") == 0) return step_show[23];
			if (wcscmp(fieldName, L"step_show_25") == 0) return step_show[24];
			if (wcscmp(fieldName, L"step_show_26") == 0) return step_show[25];
			if (wcscmp(fieldName, L"step_show_27") == 0) return step_show[26];
			if (wcscmp(fieldName, L"step_show_28") == 0) return step_show[27];
			if (wcscmp(fieldName, L"step_show_29") == 0) return step_show[28];
			if (wcscmp(fieldName, L"step_show_30") == 0) return step_show[29];
			if (wcscmp(fieldName, L"step_camera_show") == 0) return step_camera_show;
			if (wcscmp(fieldName, L"step_camera_show_1") == 0) return step_camera_show[0];
			if (wcscmp(fieldName, L"step_camera_show_2") == 0) return step_camera_show[1];
			if (wcscmp(fieldName, L"step_camera_show_3") == 0) return step_camera_show[2];
			if (wcscmp(fieldName, L"step_camera_show_4") == 0) return step_camera_show[3];
			if (wcscmp(fieldName, L"step_camera_show_5") == 0) return step_camera_show[4];
			if (wcscmp(fieldName, L"step_camera_show_6") == 0) return step_camera_show[5];
			if (wcscmp(fieldName, L"step_camera_show_7") == 0) return step_camera_show[6];
			if (wcscmp(fieldName, L"step_camera_show_8") == 0) return step_camera_show[7];
			if (wcscmp(fieldName, L"step_camera_show_9") == 0) return step_camera_show[8];
			if (wcscmp(fieldName, L"step_camera_show_10") == 0) return step_camera_show[9];
			if (wcscmp(fieldName, L"step_camera_show_11") == 0) return step_camera_show[10];
			if (wcscmp(fieldName, L"step_camera_show_12") == 0) return step_camera_show[11];
			if (wcscmp(fieldName, L"step_camera_show_13") == 0) return step_camera_show[12];
			if (wcscmp(fieldName, L"step_camera_show_14") == 0) return step_camera_show[13];
			if (wcscmp(fieldName, L"step_camera_show_15") == 0) return step_camera_show[14];
			if (wcscmp(fieldName, L"step_camera_show_16") == 0) return step_camera_show[15];
			if (wcscmp(fieldName, L"step_camera_show_17") == 0) return step_camera_show[16];
			if (wcscmp(fieldName, L"step_camera_show_18") == 0) return step_camera_show[17];
			if (wcscmp(fieldName, L"step_camera_show_19") == 0) return step_camera_show[18];
			if (wcscmp(fieldName, L"step_camera_show_20") == 0) return step_camera_show[19];
			if (wcscmp(fieldName, L"step_camera_show_21") == 0) return step_camera_show[20];
			if (wcscmp(fieldName, L"step_camera_show_22") == 0) return step_camera_show[21];
			if (wcscmp(fieldName, L"step_camera_show_23") == 0) return step_camera_show[22];
			if (wcscmp(fieldName, L"step_camera_show_24") == 0) return step_camera_show[23];
			if (wcscmp(fieldName, L"step_camera_show_25") == 0) return step_camera_show[24];
			if (wcscmp(fieldName, L"step_camera_show_26") == 0) return step_camera_show[25];
			if (wcscmp(fieldName, L"step_camera_show_27") == 0) return step_camera_show[26];
			if (wcscmp(fieldName, L"step_camera_show_28") == 0) return step_camera_show[27];
			if (wcscmp(fieldName, L"step_camera_show_29") == 0) return step_camera_show[28];
			if (wcscmp(fieldName, L"step_camera_show_30") == 0) return step_camera_show[29];
			if (wcscmp(fieldName, L"function_step") == 0) return function_step;
			if (wcscmp(fieldName, L"end_talk_social") == 0) return end_talk_social;
			if (wcscmp(fieldName, L"end_talk_sound") == 0) return end_talk_sound;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"required_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&required_faction);
			if (wcscmp(fieldName, L"required_complete_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&required_complete_quest);
			if (wcscmp(fieldName, L"step_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[0]));
			if (wcscmp(fieldName, L"step_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[1]));
			if (wcscmp(fieldName, L"step_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[2]));
			if (wcscmp(fieldName, L"step_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[3]));
			if (wcscmp(fieldName, L"step_text_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[4]));
			if (wcscmp(fieldName, L"step_text_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[5]));
			if (wcscmp(fieldName, L"step_text_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[6]));
			if (wcscmp(fieldName, L"step_text_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[7]));
			if (wcscmp(fieldName, L"step_text_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[8]));
			if (wcscmp(fieldName, L"step_text_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[9]));
			if (wcscmp(fieldName, L"step_text_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[10]));
			if (wcscmp(fieldName, L"step_text_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[11]));
			if (wcscmp(fieldName, L"step_text_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[12]));
			if (wcscmp(fieldName, L"step_text_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[13]));
			if (wcscmp(fieldName, L"step_text_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[14]));
			if (wcscmp(fieldName, L"step_text_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[15]));
			if (wcscmp(fieldName, L"step_text_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[16]));
			if (wcscmp(fieldName, L"step_text_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[17]));
			if (wcscmp(fieldName, L"step_text_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[18]));
			if (wcscmp(fieldName, L"step_text_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[19]));
			if (wcscmp(fieldName, L"step_text_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[20]));
			if (wcscmp(fieldName, L"step_text_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[21]));
			if (wcscmp(fieldName, L"step_text_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[22]));
			if (wcscmp(fieldName, L"step_text_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[23]));
			if (wcscmp(fieldName, L"step_text_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[24]));
			if (wcscmp(fieldName, L"step_text_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[25]));
			if (wcscmp(fieldName, L"step_text_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[26]));
			if (wcscmp(fieldName, L"step_text_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[27]));
			if (wcscmp(fieldName, L"step_text_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[28]));
			if (wcscmp(fieldName, L"step_text_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_text[29]));
			if (wcscmp(fieldName, L"step_subtext_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[0]));
			if (wcscmp(fieldName, L"step_subtext_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[1]));
			if (wcscmp(fieldName, L"step_subtext_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[2]));
			if (wcscmp(fieldName, L"step_subtext_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[3]));
			if (wcscmp(fieldName, L"step_subtext_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[4]));
			if (wcscmp(fieldName, L"step_subtext_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[5]));
			if (wcscmp(fieldName, L"step_subtext_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[6]));
			if (wcscmp(fieldName, L"step_subtext_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[7]));
			if (wcscmp(fieldName, L"step_subtext_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[8]));
			if (wcscmp(fieldName, L"step_subtext_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[9]));
			if (wcscmp(fieldName, L"step_subtext_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[10]));
			if (wcscmp(fieldName, L"step_subtext_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[11]));
			if (wcscmp(fieldName, L"step_subtext_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[12]));
			if (wcscmp(fieldName, L"step_subtext_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[13]));
			if (wcscmp(fieldName, L"step_subtext_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[14]));
			if (wcscmp(fieldName, L"step_subtext_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[15]));
			if (wcscmp(fieldName, L"step_subtext_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[16]));
			if (wcscmp(fieldName, L"step_subtext_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[17]));
			if (wcscmp(fieldName, L"step_subtext_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[18]));
			if (wcscmp(fieldName, L"step_subtext_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[19]));
			if (wcscmp(fieldName, L"step_subtext_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[20]));
			if (wcscmp(fieldName, L"step_subtext_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[21]));
			if (wcscmp(fieldName, L"step_subtext_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[22]));
			if (wcscmp(fieldName, L"step_subtext_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[23]));
			if (wcscmp(fieldName, L"step_subtext_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[24]));
			if (wcscmp(fieldName, L"step_subtext_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[25]));
			if (wcscmp(fieldName, L"step_subtext_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[26]));
			if (wcscmp(fieldName, L"step_subtext_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[27]));
			if (wcscmp(fieldName, L"step_subtext_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[28]));
			if (wcscmp(fieldName, L"step_subtext_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_subtext[29]));
			if (wcscmp(fieldName, L"step_next_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[0]));
			if (wcscmp(fieldName, L"step_next_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[1]));
			if (wcscmp(fieldName, L"step_next_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[2]));
			if (wcscmp(fieldName, L"step_next_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[3]));
			if (wcscmp(fieldName, L"step_next_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[4]));
			if (wcscmp(fieldName, L"step_next_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[5]));
			if (wcscmp(fieldName, L"step_next_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[6]));
			if (wcscmp(fieldName, L"step_next_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[7]));
			if (wcscmp(fieldName, L"step_next_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[8]));
			if (wcscmp(fieldName, L"step_next_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[9]));
			if (wcscmp(fieldName, L"step_next_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[10]));
			if (wcscmp(fieldName, L"step_next_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[11]));
			if (wcscmp(fieldName, L"step_next_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[12]));
			if (wcscmp(fieldName, L"step_next_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[13]));
			if (wcscmp(fieldName, L"step_next_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[14]));
			if (wcscmp(fieldName, L"step_next_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[15]));
			if (wcscmp(fieldName, L"step_next_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[16]));
			if (wcscmp(fieldName, L"step_next_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[17]));
			if (wcscmp(fieldName, L"step_next_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[18]));
			if (wcscmp(fieldName, L"step_next_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[19]));
			if (wcscmp(fieldName, L"step_next_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[20]));
			if (wcscmp(fieldName, L"step_next_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[21]));
			if (wcscmp(fieldName, L"step_next_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[22]));
			if (wcscmp(fieldName, L"step_next_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[23]));
			if (wcscmp(fieldName, L"step_next_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[24]));
			if (wcscmp(fieldName, L"step_next_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[25]));
			if (wcscmp(fieldName, L"step_next_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[26]));
			if (wcscmp(fieldName, L"step_next_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[27]));
			if (wcscmp(fieldName, L"step_next_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[28]));
			if (wcscmp(fieldName, L"step_next_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_next[29]));
			if (wcscmp(fieldName, L"step_kismet_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[0]));
			if (wcscmp(fieldName, L"step_kismet_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[1]));
			if (wcscmp(fieldName, L"step_kismet_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[2]));
			if (wcscmp(fieldName, L"step_kismet_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[3]));
			if (wcscmp(fieldName, L"step_kismet_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[4]));
			if (wcscmp(fieldName, L"step_kismet_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[5]));
			if (wcscmp(fieldName, L"step_kismet_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[6]));
			if (wcscmp(fieldName, L"step_kismet_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[7]));
			if (wcscmp(fieldName, L"step_kismet_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[8]));
			if (wcscmp(fieldName, L"step_kismet_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[9]));
			if (wcscmp(fieldName, L"step_kismet_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[10]));
			if (wcscmp(fieldName, L"step_kismet_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[11]));
			if (wcscmp(fieldName, L"step_kismet_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[12]));
			if (wcscmp(fieldName, L"step_kismet_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[13]));
			if (wcscmp(fieldName, L"step_kismet_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[14]));
			if (wcscmp(fieldName, L"step_kismet_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[15]));
			if (wcscmp(fieldName, L"step_kismet_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[16]));
			if (wcscmp(fieldName, L"step_kismet_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[17]));
			if (wcscmp(fieldName, L"step_kismet_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[18]));
			if (wcscmp(fieldName, L"step_kismet_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[19]));
			if (wcscmp(fieldName, L"step_kismet_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[20]));
			if (wcscmp(fieldName, L"step_kismet_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[21]));
			if (wcscmp(fieldName, L"step_kismet_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[22]));
			if (wcscmp(fieldName, L"step_kismet_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[23]));
			if (wcscmp(fieldName, L"step_kismet_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[24]));
			if (wcscmp(fieldName, L"step_kismet_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[25]));
			if (wcscmp(fieldName, L"step_kismet_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[26]));
			if (wcscmp(fieldName, L"step_kismet_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[27]));
			if (wcscmp(fieldName, L"step_kismet_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[28]));
			if (wcscmp(fieldName, L"step_kismet_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_kismet[29]));
			if (wcscmp(fieldName, L"step_cinematic_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[0]));
			if (wcscmp(fieldName, L"step_cinematic_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[1]));
			if (wcscmp(fieldName, L"step_cinematic_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[2]));
			if (wcscmp(fieldName, L"step_cinematic_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[3]));
			if (wcscmp(fieldName, L"step_cinematic_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[4]));
			if (wcscmp(fieldName, L"step_cinematic_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[5]));
			if (wcscmp(fieldName, L"step_cinematic_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[6]));
			if (wcscmp(fieldName, L"step_cinematic_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[7]));
			if (wcscmp(fieldName, L"step_cinematic_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[8]));
			if (wcscmp(fieldName, L"step_cinematic_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[9]));
			if (wcscmp(fieldName, L"step_cinematic_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[10]));
			if (wcscmp(fieldName, L"step_cinematic_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[11]));
			if (wcscmp(fieldName, L"step_cinematic_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[12]));
			if (wcscmp(fieldName, L"step_cinematic_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[13]));
			if (wcscmp(fieldName, L"step_cinematic_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[14]));
			if (wcscmp(fieldName, L"step_cinematic_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[15]));
			if (wcscmp(fieldName, L"step_cinematic_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[16]));
			if (wcscmp(fieldName, L"step_cinematic_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[17]));
			if (wcscmp(fieldName, L"step_cinematic_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[18]));
			if (wcscmp(fieldName, L"step_cinematic_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[19]));
			if (wcscmp(fieldName, L"step_cinematic_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[20]));
			if (wcscmp(fieldName, L"step_cinematic_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[21]));
			if (wcscmp(fieldName, L"step_cinematic_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[22]));
			if (wcscmp(fieldName, L"step_cinematic_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[23]));
			if (wcscmp(fieldName, L"step_cinematic_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[24]));
			if (wcscmp(fieldName, L"step_cinematic_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[25]));
			if (wcscmp(fieldName, L"step_cinematic_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[26]));
			if (wcscmp(fieldName, L"step_cinematic_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[27]));
			if (wcscmp(fieldName, L"step_cinematic_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[28]));
			if (wcscmp(fieldName, L"step_cinematic_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_cinematic[29]));
			if (wcscmp(fieldName, L"step_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[0]));
			if (wcscmp(fieldName, L"step_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[1]));
			if (wcscmp(fieldName, L"step_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[2]));
			if (wcscmp(fieldName, L"step_show_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[3]));
			if (wcscmp(fieldName, L"step_show_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[4]));
			if (wcscmp(fieldName, L"step_show_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[5]));
			if (wcscmp(fieldName, L"step_show_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[6]));
			if (wcscmp(fieldName, L"step_show_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[7]));
			if (wcscmp(fieldName, L"step_show_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[8]));
			if (wcscmp(fieldName, L"step_show_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[9]));
			if (wcscmp(fieldName, L"step_show_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[10]));
			if (wcscmp(fieldName, L"step_show_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[11]));
			if (wcscmp(fieldName, L"step_show_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[12]));
			if (wcscmp(fieldName, L"step_show_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[13]));
			if (wcscmp(fieldName, L"step_show_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[14]));
			if (wcscmp(fieldName, L"step_show_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[15]));
			if (wcscmp(fieldName, L"step_show_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[16]));
			if (wcscmp(fieldName, L"step_show_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[17]));
			if (wcscmp(fieldName, L"step_show_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[18]));
			if (wcscmp(fieldName, L"step_show_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[19]));
			if (wcscmp(fieldName, L"step_show_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[20]));
			if (wcscmp(fieldName, L"step_show_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[21]));
			if (wcscmp(fieldName, L"step_show_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[22]));
			if (wcscmp(fieldName, L"step_show_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[23]));
			if (wcscmp(fieldName, L"step_show_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[24]));
			if (wcscmp(fieldName, L"step_show_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[25]));
			if (wcscmp(fieldName, L"step_show_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[26]));
			if (wcscmp(fieldName, L"step_show_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[27]));
			if (wcscmp(fieldName, L"step_show_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[28]));
			if (wcscmp(fieldName, L"step_show_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_show[29]));
			if (wcscmp(fieldName, L"step_camera_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[0]));
			if (wcscmp(fieldName, L"step_camera_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[1]));
			if (wcscmp(fieldName, L"step_camera_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[2]));
			if (wcscmp(fieldName, L"step_camera_show_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[3]));
			if (wcscmp(fieldName, L"step_camera_show_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[4]));
			if (wcscmp(fieldName, L"step_camera_show_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[5]));
			if (wcscmp(fieldName, L"step_camera_show_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[6]));
			if (wcscmp(fieldName, L"step_camera_show_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[7]));
			if (wcscmp(fieldName, L"step_camera_show_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[8]));
			if (wcscmp(fieldName, L"step_camera_show_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[9]));
			if (wcscmp(fieldName, L"step_camera_show_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[10]));
			if (wcscmp(fieldName, L"step_camera_show_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[11]));
			if (wcscmp(fieldName, L"step_camera_show_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[12]));
			if (wcscmp(fieldName, L"step_camera_show_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[13]));
			if (wcscmp(fieldName, L"step_camera_show_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[14]));
			if (wcscmp(fieldName, L"step_camera_show_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[15]));
			if (wcscmp(fieldName, L"step_camera_show_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[16]));
			if (wcscmp(fieldName, L"step_camera_show_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[17]));
			if (wcscmp(fieldName, L"step_camera_show_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[18]));
			if (wcscmp(fieldName, L"step_camera_show_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[19]));
			if (wcscmp(fieldName, L"step_camera_show_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[20]));
			if (wcscmp(fieldName, L"step_camera_show_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[21]));
			if (wcscmp(fieldName, L"step_camera_show_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[22]));
			if (wcscmp(fieldName, L"step_camera_show_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[23]));
			if (wcscmp(fieldName, L"step_camera_show_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[24]));
			if (wcscmp(fieldName, L"step_camera_show_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[25]));
			if (wcscmp(fieldName, L"step_camera_show_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[26]));
			if (wcscmp(fieldName, L"step_camera_show_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[27]));
			if (wcscmp(fieldName, L"step_camera_show_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[28]));
			if (wcscmp(fieldName, L"step_camera_show_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_camera_show[29]));
			if (wcscmp(fieldName, L"function_step") == 0) return Data::AnyFieldToStringConverter::ToString(&function_step);
			if (wcscmp(fieldName, L"end_talk_social") == 0) return Data::AnyFieldToStringConverter::ToString(&end_talk_social);
			if (wcscmp(fieldName, L"end_talk_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&end_talk_sound);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 30; i++) {
				if (reinterpret_cast<std::uintptr_t>(step_kismet[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) step_kismet[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(step_kismet[i]));
			}
			for (int i = 0; i < 30; i++) {
				if (reinterpret_cast<std::uintptr_t>(step_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) step_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(step_show[i]));
			}
			for (int i = 0; i < 30; i++) {
				if (reinterpret_cast<std::uintptr_t>(step_camera_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) step_camera_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(step_camera_show[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(end_talk_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_talk_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_talk_sound));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef required_faction;
int required_faction_tableId(){return 130;};
Data::TableRef required_complete_quest;
int required_complete_quest_tableId(){return 283;};
Data::TableRef step_text[30];
int step_text_tableId(){return 405;};
Data::TableRef step_subtext[30];
int step_subtext_tableId(){return 405;};
Data::TableRef step_next[30];
int step_next_tableId(){return 405;};
wchar_t* step_kismet[30];
Data::TableRef step_cinematic[30];
int step_cinematic_tableId(){return 56;};
wchar_t* step_show[30];
wchar_t* step_camera_show[30];
__int8 function_step;
char Pad0[3];
Data::TableRef end_talk_social;
int end_talk_social_tableId(){return 367;};
wchar_t* end_talk_sound;

		static TableVersion Version() { return TableVersion(0, 60); }
		static __int16 TableId() { return 260; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npctalkmessage_RecordPtr // : DrRecordPtr
	{
		npctalkmessage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::npctalkmessage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}