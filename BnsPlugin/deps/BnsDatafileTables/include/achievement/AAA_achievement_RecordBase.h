/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct achievement_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_register_type_EnumValue(__int8 value);
		static std::wstring Get_step_complete_reward_type_EnumValue(__int8 value);
		static std::wstring Get_ability_EnumValue(__int8 value);
		static std::wstring Get_completed_effect_category_EnumValue(__int8 value);
		static std::wstring Get_category_1_EnumValue(__int8 value);
		static std::wstring Get_category_2_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"deprecated") == 0) return deprecated;
			if (wcscmp(fieldName, L"complete_from_client") == 0) return complete_from_client;
			if (wcscmp(fieldName, L"register_ref") == 0) return register_ref;
			if (wcscmp(fieldName, L"register_ref_1") == 0) return register_ref[0];
			if (wcscmp(fieldName, L"register_ref_2") == 0) return register_ref[1];
			if (wcscmp(fieldName, L"register_ref_3") == 0) return register_ref[2];
			if (wcscmp(fieldName, L"register_ref_4") == 0) return register_ref[3];
			if (wcscmp(fieldName, L"register_ref_5") == 0) return register_ref[4];
			if (wcscmp(fieldName, L"register_type") == 0) return register_type;
			if (wcscmp(fieldName, L"register_type_1") == 0) return register_type[0];
			if (wcscmp(fieldName, L"register_type_2") == 0) return register_type[1];
			if (wcscmp(fieldName, L"register_type_3") == 0) return register_type[2];
			if (wcscmp(fieldName, L"register_type_4") == 0) return register_type[3];
			if (wcscmp(fieldName, L"register_type_5") == 0) return register_type[4];
			if (wcscmp(fieldName, L"register_value") == 0) return register_value;
			if (wcscmp(fieldName, L"register_value_1") == 0) return register_value[0];
			if (wcscmp(fieldName, L"register_value_2") == 0) return register_value[1];
			if (wcscmp(fieldName, L"register_value_3") == 0) return register_value[2];
			if (wcscmp(fieldName, L"register_value_4") == 0) return register_value[3];
			if (wcscmp(fieldName, L"register_value_5") == 0) return register_value[4];
			if (wcscmp(fieldName, L"progress_show") == 0) return progress_show;
			if (wcscmp(fieldName, L"step_complete_reward_item") == 0) return step_complete_reward_item;
			if (wcscmp(fieldName, L"step_complete_reward_item_1") == 0) return step_complete_reward_item[0];
			if (wcscmp(fieldName, L"step_complete_reward_item_2") == 0) return step_complete_reward_item[1];
			if (wcscmp(fieldName, L"step_complete_reward_item_3") == 0) return step_complete_reward_item[2];
			if (wcscmp(fieldName, L"step_complete_reward_item_4") == 0) return step_complete_reward_item[3];
			if (wcscmp(fieldName, L"step_complete_reward_item_5") == 0) return step_complete_reward_item[4];
			if (wcscmp(fieldName, L"step_complete_reward_item_count") == 0) return step_complete_reward_item_count;
			if (wcscmp(fieldName, L"step_complete_reward_item_count_1") == 0) return step_complete_reward_item_count[0];
			if (wcscmp(fieldName, L"step_complete_reward_item_count_2") == 0) return step_complete_reward_item_count[1];
			if (wcscmp(fieldName, L"step_complete_reward_item_count_3") == 0) return step_complete_reward_item_count[2];
			if (wcscmp(fieldName, L"step_complete_reward_item_count_4") == 0) return step_complete_reward_item_count[3];
			if (wcscmp(fieldName, L"step_complete_reward_item_count_5") == 0) return step_complete_reward_item_count[4];
			if (wcscmp(fieldName, L"step_complete_reward_game_cash") == 0) return step_complete_reward_game_cash;
			if (wcscmp(fieldName, L"step_complete_reward_skill_build_up_point") == 0) return step_complete_reward_skill_build_up_point;
			if (wcscmp(fieldName, L"step_complete_reward_type") == 0) return step_complete_reward_type;
			if (wcscmp(fieldName, L"step_complete_reward_final_item") == 0) return step_complete_reward_final_item;
			if (wcscmp(fieldName, L"step_complete_reward_final_item_1") == 0) return step_complete_reward_final_item[0];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_2") == 0) return step_complete_reward_final_item[1];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_3") == 0) return step_complete_reward_final_item[2];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_4") == 0) return step_complete_reward_final_item[3];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_5") == 0) return step_complete_reward_final_item[4];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count") == 0) return step_complete_reward_final_item_count;
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_1") == 0) return step_complete_reward_final_item_count[0];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_2") == 0) return step_complete_reward_final_item_count[1];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_3") == 0) return step_complete_reward_final_item_count[2];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_4") == 0) return step_complete_reward_final_item_count[3];
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_5") == 0) return step_complete_reward_final_item_count[4];
			if (wcscmp(fieldName, L"current_step_score") == 0) return current_step_score;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"completed_effect") == 0) return completed_effect;
			if (wcscmp(fieldName, L"completed_effect_category") == 0) return completed_effect_category;
			if (wcscmp(fieldName, L"completed_effect_order") == 0) return completed_effect_order;
			if (wcscmp(fieldName, L"title_fontset") == 0) return title_fontset;
			if (wcscmp(fieldName, L"title_background_image") == 0) return title_background_image;
			if (wcscmp(fieldName, L"title_background_image_pos_x") == 0) return title_background_image_pos_x;
			if (wcscmp(fieldName, L"title_background_image_pos_y") == 0) return title_background_image_pos_y;
			if (wcscmp(fieldName, L"category_1") == 0) return category_1;
			if (wcscmp(fieldName, L"category_2") == 0) return category_2;
			if (wcscmp(fieldName, L"map_group_1") == 0) return map_group_1;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"title_name") == 0) return title_name;
			if (wcscmp(fieldName, L"title_image_text") == 0) return title_image_text;
			if (wcscmp(fieldName, L"title_thumbnail_icon_text") == 0) return title_thumbnail_icon_text;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"completed_game_message") == 0) return completed_game_message;
			if (wcscmp(fieldName, L"talk_social") == 0) return talk_social;
			if (wcscmp(fieldName, L"title_chat_ui_icon") == 0) return title_chat_ui_icon;
			if (wcscmp(fieldName, L"title_thumbnail_frame_fx") == 0) return title_thumbnail_frame_fx;
			if (wcscmp(fieldName, L"title_grade") == 0) return title_grade;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"deprecated") == 0) return Data::AnyFieldToStringConverter::ToString(&deprecated);
			if (wcscmp(fieldName, L"complete_from_client") == 0) return Data::AnyFieldToStringConverter::ToString(&complete_from_client);
			if (wcscmp(fieldName, L"register_ref_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_ref[0]));
			if (wcscmp(fieldName, L"register_ref_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_ref[1]));
			if (wcscmp(fieldName, L"register_ref_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_ref[2]));
			if (wcscmp(fieldName, L"register_ref_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_ref[3]));
			if (wcscmp(fieldName, L"register_ref_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_ref[4]));
			if (wcscmp(fieldName, L"register_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_type[0]));
			if (wcscmp(fieldName, L"register_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_type[1]));
			if (wcscmp(fieldName, L"register_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_type[2]));
			if (wcscmp(fieldName, L"register_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_type[3]));
			if (wcscmp(fieldName, L"register_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_type[4]));
			if (wcscmp(fieldName, L"register_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_value[0]));
			if (wcscmp(fieldName, L"register_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_value[1]));
			if (wcscmp(fieldName, L"register_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_value[2]));
			if (wcscmp(fieldName, L"register_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_value[3]));
			if (wcscmp(fieldName, L"register_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(register_value[4]));
			if (wcscmp(fieldName, L"progress_show") == 0) return Data::AnyFieldToStringConverter::ToString(&progress_show);
			if (wcscmp(fieldName, L"step_complete_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item[0]));
			if (wcscmp(fieldName, L"step_complete_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item[1]));
			if (wcscmp(fieldName, L"step_complete_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item[2]));
			if (wcscmp(fieldName, L"step_complete_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item[3]));
			if (wcscmp(fieldName, L"step_complete_reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item[4]));
			if (wcscmp(fieldName, L"step_complete_reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item_count[0]));
			if (wcscmp(fieldName, L"step_complete_reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item_count[1]));
			if (wcscmp(fieldName, L"step_complete_reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item_count[2]));
			if (wcscmp(fieldName, L"step_complete_reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item_count[3]));
			if (wcscmp(fieldName, L"step_complete_reward_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_item_count[4]));
			if (wcscmp(fieldName, L"step_complete_reward_game_cash") == 0) return Data::AnyFieldToStringConverter::ToString(&step_complete_reward_game_cash);
			if (wcscmp(fieldName, L"step_complete_reward_skill_build_up_point") == 0) return Data::AnyFieldToStringConverter::ToString(&step_complete_reward_skill_build_up_point);
			if (wcscmp(fieldName, L"step_complete_reward_type") == 0) return Data::AnyFieldToStringConverter::ToString(&step_complete_reward_type);
			if (wcscmp(fieldName, L"step_complete_reward_final_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item[0]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item[1]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item[2]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item[3]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item[4]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item_count[0]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item_count[1]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item_count[2]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item_count[3]));
			if (wcscmp(fieldName, L"step_complete_reward_final_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(step_complete_reward_final_item_count[4]));
			if (wcscmp(fieldName, L"current_step_score") == 0) return Data::AnyFieldToStringConverter::ToString(&current_step_score);
			if (wcscmp(fieldName, L"ability") == 0) return Data::AnyFieldToStringConverter::ToString(&ability);
			if (wcscmp(fieldName, L"ability_value") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_value);
			if (wcscmp(fieldName, L"completed_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&completed_effect);
			if (wcscmp(fieldName, L"completed_effect_category") == 0) return Data::AnyFieldToStringConverter::ToString(&completed_effect_category);
			if (wcscmp(fieldName, L"completed_effect_order") == 0) return Data::AnyFieldToStringConverter::ToString(&completed_effect_order);
			if (wcscmp(fieldName, L"title_fontset") == 0) return Data::AnyFieldToStringConverter::ToString(&title_fontset);
			if (wcscmp(fieldName, L"title_background_image") == 0) return Data::AnyFieldToStringConverter::ToString(&title_background_image);
			if (wcscmp(fieldName, L"title_background_image_pos_x") == 0) return Data::AnyFieldToStringConverter::ToString(&title_background_image_pos_x);
			if (wcscmp(fieldName, L"title_background_image_pos_y") == 0) return Data::AnyFieldToStringConverter::ToString(&title_background_image_pos_y);
			if (wcscmp(fieldName, L"category_1") == 0) return Data::AnyFieldToStringConverter::ToString(&category_1);
			if (wcscmp(fieldName, L"category_2") == 0) return Data::AnyFieldToStringConverter::ToString(&category_2);
			if (wcscmp(fieldName, L"map_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&map_group_1);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"title_name") == 0) return Data::AnyFieldToStringConverter::ToString(&title_name);
			if (wcscmp(fieldName, L"title_image_text") == 0) return Data::AnyFieldToStringConverter::ToString(&title_image_text);
			if (wcscmp(fieldName, L"title_thumbnail_icon_text") == 0) return Data::AnyFieldToStringConverter::ToString(&title_thumbnail_icon_text);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"completed_game_message") == 0) return Data::AnyFieldToStringConverter::ToString(&completed_game_message);
			if (wcscmp(fieldName, L"talk_social") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_social);
			if (wcscmp(fieldName, L"title_chat_ui_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&title_chat_ui_icon);
			if (wcscmp(fieldName, L"title_thumbnail_frame_fx") == 0) return Data::AnyFieldToStringConverter::ToString(&title_thumbnail_frame_fx);
			if (wcscmp(fieldName, L"title_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&title_grade);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(title_fontset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title_fontset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title_fontset));
			if (reinterpret_cast<std::uintptr_t>(title_background_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title_background_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title_background_image));
			if (reinterpret_cast<std::uintptr_t>(title_thumbnail_frame_fx) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title_thumbnail_frame_fx = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title_thumbnail_frame_fx));
		}
		union Key
		{
            struct {
                __int16 id;
__int16 step;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool deprecated;
bool complete_from_client;
char Pad0[2];
Data::TableRef register_ref[5];
int register_ref_tableId(){return 7;};
__int8 register_type[5];
std::wstring register_type_EnumValue(int index) const {return Get_register_type_EnumValue(register_type[index]);};
char Pad1[3];
__int32 register_value[5];
bool progress_show;
char Pad2[3];
Data::TableRef step_complete_reward_item[5];
int step_complete_reward_item_tableId(){return 189;};
__int16 step_complete_reward_item_count[5];
char Pad3[2];
__int64 step_complete_reward_game_cash;
__int16 step_complete_reward_skill_build_up_point;
__int8 step_complete_reward_type;
std::wstring step_complete_reward_type_EnumValue() const {return Get_step_complete_reward_type_EnumValue(step_complete_reward_type);};
char Pad4[1];
Data::TableRef step_complete_reward_final_item[5];
int step_complete_reward_final_item_tableId(){return 189;};
__int16 step_complete_reward_final_item_count[5];
__int16 current_step_score;
__int8 ability;
std::wstring ability_EnumValue() const {return Get_ability_EnumValue(ability);};
char Pad5[1];
__int16 ability_value;
Data::TableRef completed_effect;
int completed_effect_tableId(){return 111;};
__int8 completed_effect_category;
std::wstring completed_effect_category_EnumValue() const {return Get_completed_effect_category_EnumValue(completed_effect_category);};
char Pad6[1];
__int16 completed_effect_order;
wchar_t* title_fontset;
wchar_t* title_background_image;
float title_background_image_pos_x;
float title_background_image_pos_y;
__int8 category_1;
std::wstring category_1_EnumValue() const {return Get_category_1_EnumValue(category_1);};
__int8 category_2;
std::wstring category_2_EnumValue() const {return Get_category_2_EnumValue(category_2);};
char Pad7[2];
Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
Data::IconRef icon;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef title_name;
int title_name_tableId(){return 405;};
Data::TableRef title_image_text;
int title_image_text_tableId(){return 405;};
Data::TableRef title_thumbnail_icon_text;
int title_thumbnail_icon_text_tableId(){return 405;};
__int16 sort_no;
char Pad8[2];
Data::TableRef completed_game_message;
int completed_game_message_tableId(){return 151;};
Data::TableRef talk_social;
int talk_social_tableId(){return 399;};
Data::IconRef title_chat_ui_icon;
wchar_t* title_thumbnail_frame_fx;
__int8 title_grade;

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 6; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) achievement_RecordPtr // : DrRecordPtr
	{
		achievement_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::achievement_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}