/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class skill3_RecordSubType : __int32
    {
		skill3_record_sub_active_skill = 0,
		skill3_record_sub_passive_skill = 1,
		skill3_record_sub_action = 2,
		skill3_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill3_Record : DrEl
	{
	private:
		static std::wstring Get_ui_stance_EnumValue(__int8 value);
		static std::wstring Get_short_cut_key_EnumValue(__int16 value);
		static std::wstring Get_short_cut_key_classic_EnumValue(__int16 value);
		static std::wstring Get_short_cut_key_bns_simple_context_EnumValue(__int16 value);
		static std::wstring Get_ui_category_EnumValue(__int8 value);
		static std::wstring Get_ui_category_display_type_EnumValue(__int8 value);
		static std::wstring Get_bullet_effect_start_skill_flow_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"revised_event_probability_in_exec") == 0) return revised_event_probability_in_exec;
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_1") == 0) return revised_event_probability_in_exec[0];
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_2") == 0) return revised_event_probability_in_exec[1];
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_3") == 0) return revised_event_probability_in_exec[2];
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_4") == 0) return revised_event_probability_in_exec[3];
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_5") == 0) return revised_event_probability_in_exec[4];
			if (wcscmp(fieldName, L"skill_modify_limit") == 0) return skill_modify_limit;
			if (wcscmp(fieldName, L"is_ego_skill") == 0) return is_ego_skill;
			if (wcscmp(fieldName, L"use_ego_skill_training_sequence") == 0) return use_ego_skill_training_sequence;
			if (wcscmp(fieldName, L"systematization") == 0) return systematization;
			if (wcscmp(fieldName, L"systematization_1") == 0) return systematization[0];
			if (wcscmp(fieldName, L"systematization_2") == 0) return systematization[1];
			if (wcscmp(fieldName, L"systematization_3") == 0) return systematization[2];
			if (wcscmp(fieldName, L"systematization_4") == 0) return systematization[3];
			if (wcscmp(fieldName, L"systematization_5") == 0) return systematization[4];
			if (wcscmp(fieldName, L"systematization_6") == 0) return systematization[5];
			if (wcscmp(fieldName, L"systematization_7") == 0) return systematization[6];
			if (wcscmp(fieldName, L"systematization_8") == 0) return systematization[7];
			if (wcscmp(fieldName, L"systematization_9") == 0) return systematization[8];
			if (wcscmp(fieldName, L"systematization_10") == 0) return systematization[9];
			if (wcscmp(fieldName, L"systematization_11") == 0) return systematization[10];
			if (wcscmp(fieldName, L"systematization_12") == 0) return systematization[11];
			if (wcscmp(fieldName, L"systematization_13") == 0) return systematization[12];
			if (wcscmp(fieldName, L"systematization_14") == 0) return systematization[13];
			if (wcscmp(fieldName, L"systematization_15") == 0) return systematization[14];
			if (wcscmp(fieldName, L"systematization_16") == 0) return systematization[15];
			if (wcscmp(fieldName, L"damage_rate_pvp") == 0) return damage_rate_pvp;
			if (wcscmp(fieldName, L"damage_rate_standard_stats") == 0) return damage_rate_standard_stats;
			if (wcscmp(fieldName, L"quest") == 0) return quest;
			if (wcscmp(fieldName, L"mission") == 0) return mission;
			if (wcscmp(fieldName, L"caseindex") == 0) return caseindex;
			if (wcscmp(fieldName, L"forwardingtype") == 0) return forwardingtype;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"ui_stance") == 0) return ui_stance;
			if (wcscmp(fieldName, L"ui_stance_1") == 0) return ui_stance[0];
			if (wcscmp(fieldName, L"ui_stance_2") == 0) return ui_stance[1];
			if (wcscmp(fieldName, L"ui_stance_3") == 0) return ui_stance[2];
			if (wcscmp(fieldName, L"short_cut_key") == 0) return short_cut_key;
			if (wcscmp(fieldName, L"short_cut_key_classic") == 0) return short_cut_key_classic;
			if (wcscmp(fieldName, L"short_cut_key_bns_simple_context") == 0) return short_cut_key_bns_simple_context;
			if (wcscmp(fieldName, L"ui_category") == 0) return ui_category;
			if (wcscmp(fieldName, L"ui_is_show_context_combo") == 0) return ui_is_show_context_combo;
			if (wcscmp(fieldName, L"ui_is_show_context_key_change") == 0) return ui_is_show_context_key_change;
			if (wcscmp(fieldName, L"ui_is_show_context_immune_break") == 0) return ui_is_show_context_immune_break;
			if (wcscmp(fieldName, L"ui_is_show_context_combo_highlight") == 0) return ui_is_show_context_combo_highlight;
			if (wcscmp(fieldName, L"use_duel_observer_history") == 0) return use_duel_observer_history;
			if (wcscmp(fieldName, L"cast_decal_component") == 0) return cast_decal_component;
			if (wcscmp(fieldName, L"decal_component") == 0) return decal_component;
			if (wcscmp(fieldName, L"invoke_fx_msg") == 0) return invoke_fx_msg;
			if (wcscmp(fieldName, L"stop_exec_show") == 0) return stop_exec_show;
			if (wcscmp(fieldName, L"weapon_property") == 0) return weapon_property;
			if (wcscmp(fieldName, L"auto_casting") == 0) return auto_casting;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"main_info1") == 0) return main_info1;
			if (wcscmp(fieldName, L"main_info2") == 0) return main_info2;
			if (wcscmp(fieldName, L"sub_info") == 0) return sub_info;
			if (wcscmp(fieldName, L"main_info1_diff") == 0) return main_info1_diff;
			if (wcscmp(fieldName, L"main_info2_diff") == 0) return main_info2_diff;
			if (wcscmp(fieldName, L"sub_info_diff") == 0) return sub_info_diff;
			if (wcscmp(fieldName, L"main_tooltip_1") == 0) return main_tooltip_1;
			if (wcscmp(fieldName, L"main_tooltip_1_1") == 0) return main_tooltip_1[0];
			if (wcscmp(fieldName, L"main_tooltip_1_2") == 0) return main_tooltip_1[1];
			if (wcscmp(fieldName, L"main_tooltip_1_3") == 0) return main_tooltip_1[2];
			if (wcscmp(fieldName, L"main_tooltip_1_4") == 0) return main_tooltip_1[3];
			if (wcscmp(fieldName, L"main_tooltip_1_5") == 0) return main_tooltip_1[4];
			if (wcscmp(fieldName, L"main_tooltip_2") == 0) return main_tooltip_2;
			if (wcscmp(fieldName, L"main_tooltip_2_1") == 0) return main_tooltip_2[0];
			if (wcscmp(fieldName, L"main_tooltip_2_2") == 0) return main_tooltip_2[1];
			if (wcscmp(fieldName, L"main_tooltip_2_3") == 0) return main_tooltip_2[2];
			if (wcscmp(fieldName, L"main_tooltip_2_4") == 0) return main_tooltip_2[3];
			if (wcscmp(fieldName, L"main_tooltip_2_5") == 0) return main_tooltip_2[4];
			if (wcscmp(fieldName, L"sub_tooltip") == 0) return sub_tooltip;
			if (wcscmp(fieldName, L"sub_tooltip_1") == 0) return sub_tooltip[0];
			if (wcscmp(fieldName, L"sub_tooltip_2") == 0) return sub_tooltip[1];
			if (wcscmp(fieldName, L"sub_tooltip_3") == 0) return sub_tooltip[2];
			if (wcscmp(fieldName, L"sub_tooltip_4") == 0) return sub_tooltip[3];
			if (wcscmp(fieldName, L"sub_tooltip_5") == 0) return sub_tooltip[4];
			if (wcscmp(fieldName, L"sub_tooltip_6") == 0) return sub_tooltip[5];
			if (wcscmp(fieldName, L"sub_tooltip_7") == 0) return sub_tooltip[6];
			if (wcscmp(fieldName, L"sub_tooltip_8") == 0) return sub_tooltip[7];
			if (wcscmp(fieldName, L"sub_tooltip_9") == 0) return sub_tooltip[8];
			if (wcscmp(fieldName, L"sub_tooltip_10") == 0) return sub_tooltip[9];
			if (wcscmp(fieldName, L"stance_tooltip") == 0) return stance_tooltip;
			if (wcscmp(fieldName, L"stance_tooltip_1") == 0) return stance_tooltip[0];
			if (wcscmp(fieldName, L"stance_tooltip_2") == 0) return stance_tooltip[1];
			if (wcscmp(fieldName, L"stance_tooltip_3") == 0) return stance_tooltip[2];
			if (wcscmp(fieldName, L"stance_tooltip_4") == 0) return stance_tooltip[3];
			if (wcscmp(fieldName, L"stance_tooltip_5") == 0) return stance_tooltip[4];
			if (wcscmp(fieldName, L"condition_tooltip") == 0) return condition_tooltip;
			if (wcscmp(fieldName, L"condition_tooltip_1") == 0) return condition_tooltip[0];
			if (wcscmp(fieldName, L"condition_tooltip_2") == 0) return condition_tooltip[1];
			if (wcscmp(fieldName, L"condition_tooltip_3") == 0) return condition_tooltip[2];
			if (wcscmp(fieldName, L"condition_tooltip_4") == 0) return condition_tooltip[3];
			if (wcscmp(fieldName, L"condition_tooltip_5") == 0) return condition_tooltip[4];
			if (wcscmp(fieldName, L"ui_combo") == 0) return ui_combo;
			if (wcscmp(fieldName, L"ui_category_display_type") == 0) return ui_category_display_type;
			if (wcscmp(fieldName, L"ui_main_buff") == 0) return ui_main_buff;
			if (wcscmp(fieldName, L"show_cast_bar") == 0) return show_cast_bar;
			if (wcscmp(fieldName, L"show_exec_bar") == 0) return show_exec_bar;
			if (wcscmp(fieldName, L"show_repeat_bar") == 0) return show_repeat_bar;
			if (wcscmp(fieldName, L"skill_attack_power_min") == 0) return skill_attack_power_min;
			if (wcscmp(fieldName, L"skill_attack_power_max") == 0) return skill_attack_power_max;
			if (wcscmp(fieldName, L"skill_attack_sub_power_min") == 0) return skill_attack_sub_power_min;
			if (wcscmp(fieldName, L"skill_attack_sub_power_max") == 0) return skill_attack_sub_power_max;
			if (wcscmp(fieldName, L"ignore_parent_tooltip") == 0) return ignore_parent_tooltip;
			if (wcscmp(fieldName, L"die_knockback") == 0) return die_knockback;
			if (wcscmp(fieldName, L"cast_last_anim_pause") == 0) return cast_last_anim_pause;
			if (wcscmp(fieldName, L"filter_group_1") == 0) return filter_group_1;
			if (wcscmp(fieldName, L"filter_group_2") == 0) return filter_group_2;
			if (wcscmp(fieldName, L"filter_group_3") == 0) return filter_group_3;
			if (wcscmp(fieldName, L"play_extra_sound") == 0) return play_extra_sound;
			if (wcscmp(fieldName, L"extra_sound_show") == 0) return extra_sound_show;
			if (wcscmp(fieldName, L"extra_sound_show_lmittime") == 0) return extra_sound_show_lmittime;
			if (wcscmp(fieldName, L"bullet_effect_start_skill_flow") == 0) return bullet_effect_start_skill_flow;
			if (wcscmp(fieldName, L"bullet_effect_show_offset") == 0) return bullet_effect_show_offset;
			if (wcscmp(fieldName, L"bullet_effect_duration") == 0) return bullet_effect_duration;
			if (wcscmp(fieldName, L"description_weapon_soul_gem") == 0) return description_weapon_soul_gem;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(revised_event_probability_in_exec[0]));
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(revised_event_probability_in_exec[1]));
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(revised_event_probability_in_exec[2]));
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(revised_event_probability_in_exec[3]));
			if (wcscmp(fieldName, L"revised_event_probability_in_exec_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(revised_event_probability_in_exec[4]));
			if (wcscmp(fieldName, L"skill_modify_limit") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_modify_limit);
			if (wcscmp(fieldName, L"is_ego_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&is_ego_skill);
			if (wcscmp(fieldName, L"use_ego_skill_training_sequence") == 0) return Data::AnyFieldToStringConverter::ToString(&use_ego_skill_training_sequence);
			if (wcscmp(fieldName, L"systematization_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[0]));
			if (wcscmp(fieldName, L"systematization_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[1]));
			if (wcscmp(fieldName, L"systematization_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[2]));
			if (wcscmp(fieldName, L"systematization_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[3]));
			if (wcscmp(fieldName, L"systematization_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[4]));
			if (wcscmp(fieldName, L"systematization_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[5]));
			if (wcscmp(fieldName, L"systematization_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[6]));
			if (wcscmp(fieldName, L"systematization_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[7]));
			if (wcscmp(fieldName, L"systematization_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[8]));
			if (wcscmp(fieldName, L"systematization_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[9]));
			if (wcscmp(fieldName, L"systematization_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[10]));
			if (wcscmp(fieldName, L"systematization_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[11]));
			if (wcscmp(fieldName, L"systematization_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[12]));
			if (wcscmp(fieldName, L"systematization_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[13]));
			if (wcscmp(fieldName, L"systematization_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[14]));
			if (wcscmp(fieldName, L"systematization_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(systematization[15]));
			if (wcscmp(fieldName, L"damage_rate_pvp") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_rate_pvp);
			if (wcscmp(fieldName, L"damage_rate_standard_stats") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_rate_standard_stats);
			if (wcscmp(fieldName, L"quest") == 0) return Data::AnyFieldToStringConverter::ToString(&quest);
			if (wcscmp(fieldName, L"mission") == 0) return Data::AnyFieldToStringConverter::ToString(&mission);
			if (wcscmp(fieldName, L"caseindex") == 0) return Data::AnyFieldToStringConverter::ToString(&caseindex);
			if (wcscmp(fieldName, L"forwardingtype") == 0) return Data::AnyFieldToStringConverter::ToString(&forwardingtype);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"ui_stance_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_stance[0]));
			if (wcscmp(fieldName, L"ui_stance_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_stance[1]));
			if (wcscmp(fieldName, L"ui_stance_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_stance[2]));
			if (wcscmp(fieldName, L"short_cut_key") == 0) return Data::AnyFieldToStringConverter::ToString(&short_cut_key);
			if (wcscmp(fieldName, L"short_cut_key_classic") == 0) return Data::AnyFieldToStringConverter::ToString(&short_cut_key_classic);
			if (wcscmp(fieldName, L"short_cut_key_bns_simple_context") == 0) return Data::AnyFieldToStringConverter::ToString(&short_cut_key_bns_simple_context);
			if (wcscmp(fieldName, L"ui_category") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_category);
			if (wcscmp(fieldName, L"ui_is_show_context_combo") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_is_show_context_combo);
			if (wcscmp(fieldName, L"ui_is_show_context_key_change") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_is_show_context_key_change);
			if (wcscmp(fieldName, L"ui_is_show_context_immune_break") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_is_show_context_immune_break);
			if (wcscmp(fieldName, L"ui_is_show_context_combo_highlight") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_is_show_context_combo_highlight);
			if (wcscmp(fieldName, L"use_duel_observer_history") == 0) return Data::AnyFieldToStringConverter::ToString(&use_duel_observer_history);
			if (wcscmp(fieldName, L"cast_decal_component") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_decal_component);
			if (wcscmp(fieldName, L"decal_component") == 0) return Data::AnyFieldToStringConverter::ToString(&decal_component);
			if (wcscmp(fieldName, L"invoke_fx_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&invoke_fx_msg);
			if (wcscmp(fieldName, L"stop_exec_show") == 0) return Data::AnyFieldToStringConverter::ToString(&stop_exec_show);
			if (wcscmp(fieldName, L"weapon_property") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_property);
			if (wcscmp(fieldName, L"auto_casting") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_casting);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"main_info1") == 0) return Data::AnyFieldToStringConverter::ToString(&main_info1);
			if (wcscmp(fieldName, L"main_info2") == 0) return Data::AnyFieldToStringConverter::ToString(&main_info2);
			if (wcscmp(fieldName, L"sub_info") == 0) return Data::AnyFieldToStringConverter::ToString(&sub_info);
			if (wcscmp(fieldName, L"main_info1_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&main_info1_diff);
			if (wcscmp(fieldName, L"main_info2_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&main_info2_diff);
			if (wcscmp(fieldName, L"sub_info_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&sub_info_diff);
			if (wcscmp(fieldName, L"main_tooltip_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_1[0]));
			if (wcscmp(fieldName, L"main_tooltip_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_1[1]));
			if (wcscmp(fieldName, L"main_tooltip_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_1[2]));
			if (wcscmp(fieldName, L"main_tooltip_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_1[3]));
			if (wcscmp(fieldName, L"main_tooltip_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_1[4]));
			if (wcscmp(fieldName, L"main_tooltip_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_2[0]));
			if (wcscmp(fieldName, L"main_tooltip_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_2[1]));
			if (wcscmp(fieldName, L"main_tooltip_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_2[2]));
			if (wcscmp(fieldName, L"main_tooltip_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_2[3]));
			if (wcscmp(fieldName, L"main_tooltip_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(main_tooltip_2[4]));
			if (wcscmp(fieldName, L"sub_tooltip_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[0]));
			if (wcscmp(fieldName, L"sub_tooltip_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[1]));
			if (wcscmp(fieldName, L"sub_tooltip_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[2]));
			if (wcscmp(fieldName, L"sub_tooltip_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[3]));
			if (wcscmp(fieldName, L"sub_tooltip_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[4]));
			if (wcscmp(fieldName, L"sub_tooltip_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[5]));
			if (wcscmp(fieldName, L"sub_tooltip_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[6]));
			if (wcscmp(fieldName, L"sub_tooltip_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[7]));
			if (wcscmp(fieldName, L"sub_tooltip_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[8]));
			if (wcscmp(fieldName, L"sub_tooltip_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_tooltip[9]));
			if (wcscmp(fieldName, L"stance_tooltip_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(stance_tooltip[0]));
			if (wcscmp(fieldName, L"stance_tooltip_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(stance_tooltip[1]));
			if (wcscmp(fieldName, L"stance_tooltip_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(stance_tooltip[2]));
			if (wcscmp(fieldName, L"stance_tooltip_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(stance_tooltip[3]));
			if (wcscmp(fieldName, L"stance_tooltip_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(stance_tooltip[4]));
			if (wcscmp(fieldName, L"condition_tooltip_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip[0]));
			if (wcscmp(fieldName, L"condition_tooltip_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip[1]));
			if (wcscmp(fieldName, L"condition_tooltip_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip[2]));
			if (wcscmp(fieldName, L"condition_tooltip_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip[3]));
			if (wcscmp(fieldName, L"condition_tooltip_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip[4]));
			if (wcscmp(fieldName, L"ui_combo") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_combo);
			if (wcscmp(fieldName, L"ui_category_display_type") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_category_display_type);
			if (wcscmp(fieldName, L"ui_main_buff") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_main_buff);
			if (wcscmp(fieldName, L"show_cast_bar") == 0) return Data::AnyFieldToStringConverter::ToString(&show_cast_bar);
			if (wcscmp(fieldName, L"show_exec_bar") == 0) return Data::AnyFieldToStringConverter::ToString(&show_exec_bar);
			if (wcscmp(fieldName, L"show_repeat_bar") == 0) return Data::AnyFieldToStringConverter::ToString(&show_repeat_bar);
			if (wcscmp(fieldName, L"skill_attack_power_min") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_attack_power_min);
			if (wcscmp(fieldName, L"skill_attack_power_max") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_attack_power_max);
			if (wcscmp(fieldName, L"skill_attack_sub_power_min") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_attack_sub_power_min);
			if (wcscmp(fieldName, L"skill_attack_sub_power_max") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_attack_sub_power_max);
			if (wcscmp(fieldName, L"ignore_parent_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&ignore_parent_tooltip);
			if (wcscmp(fieldName, L"die_knockback") == 0) return Data::AnyFieldToStringConverter::ToString(&die_knockback);
			if (wcscmp(fieldName, L"cast_last_anim_pause") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_last_anim_pause);
			if (wcscmp(fieldName, L"filter_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&filter_group_1);
			if (wcscmp(fieldName, L"filter_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&filter_group_2);
			if (wcscmp(fieldName, L"filter_group_3") == 0) return Data::AnyFieldToStringConverter::ToString(&filter_group_3);
			if (wcscmp(fieldName, L"play_extra_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&play_extra_sound);
			if (wcscmp(fieldName, L"extra_sound_show") == 0) return Data::AnyFieldToStringConverter::ToString(&extra_sound_show);
			if (wcscmp(fieldName, L"extra_sound_show_lmittime") == 0) return Data::AnyFieldToStringConverter::ToString(&extra_sound_show_lmittime);
			if (wcscmp(fieldName, L"bullet_effect_start_skill_flow") == 0) return Data::AnyFieldToStringConverter::ToString(&bullet_effect_start_skill_flow);
			if (wcscmp(fieldName, L"bullet_effect_show_offset") == 0) return Data::AnyFieldToStringConverter::ToString(&bullet_effect_show_offset);
			if (wcscmp(fieldName, L"bullet_effect_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&bullet_effect_duration);
			if (wcscmp(fieldName, L"description_weapon_soul_gem") == 0) return Data::AnyFieldToStringConverter::ToString(&description_weapon_soul_gem);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
			if (reinterpret_cast<std::uintptr_t>(cast_decal_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) cast_decal_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(cast_decal_component));
			if (reinterpret_cast<std::uintptr_t>(decal_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) decal_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(decal_component));
			if (reinterpret_cast<std::uintptr_t>(extra_sound_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) extra_sound_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(extra_sound_show));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 revised_event_probability_in_exec[5];
char Pad0[2];
Data::TableRef skill_modify_limit;
int skill_modify_limit_tableId(){return 341;};
bool is_ego_skill;
bool use_ego_skill_training_sequence;
char Pad1[2];
Data::TableRef systematization[16];
int systematization_tableId(){return 346;};
__int16 damage_rate_pvp;
__int16 damage_rate_standard_stats;
Data::TableRef quest;
int quest_tableId(){return 283;};
__int8 mission;
__int8 caseindex;
__int8 forwardingtype;
char Pad2[1];
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 ui_stance[3];
std::wstring ui_stance_EnumValue(int index) const {return Get_ui_stance_EnumValue(ui_stance[index]);};
char Pad3[1];
__int16 short_cut_key;
std::wstring short_cut_key_EnumValue() const {return Get_short_cut_key_EnumValue(short_cut_key);};
__int16 short_cut_key_classic;
std::wstring short_cut_key_classic_EnumValue() const {return Get_short_cut_key_classic_EnumValue(short_cut_key_classic);};
__int16 short_cut_key_bns_simple_context;
std::wstring short_cut_key_bns_simple_context_EnumValue() const {return Get_short_cut_key_bns_simple_context_EnumValue(short_cut_key_bns_simple_context);};
__int8 ui_category;
std::wstring ui_category_EnumValue() const {return Get_ui_category_EnumValue(ui_category);};
bool ui_is_show_context_combo;
bool ui_is_show_context_key_change;
bool ui_is_show_context_immune_break;
bool ui_is_show_context_combo_highlight;
bool use_duel_observer_history;
wchar_t* cast_decal_component;
wchar_t* decal_component;
bool invoke_fx_msg;
bool stop_exec_show;
bool weapon_property;
bool auto_casting;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad4[2];
Data::IconRef icon;
Data::TableRef main_info1;
int main_info1_tableId(){return 405;};
Data::TableRef main_info2;
int main_info2_tableId(){return 405;};
Data::TableRef sub_info;
int sub_info_tableId(){return 405;};
Data::TableRef main_info1_diff;
int main_info1_diff_tableId(){return 405;};
Data::TableRef main_info2_diff;
int main_info2_diff_tableId(){return 405;};
Data::TableRef sub_info_diff;
int sub_info_diff_tableId(){return 405;};
Data::TableRef main_tooltip_1[5];
int main_tooltip_1_tableId(){return 351;};
Data::TableRef main_tooltip_2[5];
int main_tooltip_2_tableId(){return 351;};
Data::TableRef sub_tooltip[10];
int sub_tooltip_tableId(){return 351;};
Data::TableRef stance_tooltip[5];
int stance_tooltip_tableId(){return 351;};
Data::TableRef condition_tooltip[5];
int condition_tooltip_tableId(){return 351;};
Data::TableRef ui_combo;
int ui_combo_tableId(){return 332;};
__int8 ui_category_display_type;
std::wstring ui_category_display_type_EnumValue() const {return Get_ui_category_display_type_EnumValue(ui_category_display_type);};
char Pad5[3];
Data::TableRef ui_main_buff;
int ui_main_buff_tableId(){return 111;};
bool show_cast_bar;
bool show_exec_bar;
bool show_repeat_bar;
char Pad6[1];
__int32 skill_attack_power_min;
__int32 skill_attack_power_max;
__int32 skill_attack_sub_power_min;
__int32 skill_attack_sub_power_max;
bool ignore_parent_tooltip;
bool die_knockback;
bool cast_last_anim_pause;
bool filter_group_1;
bool filter_group_2;
bool filter_group_3;
bool play_extra_sound;
char Pad7[1];
wchar_t* extra_sound_show;
float extra_sound_show_lmittime;
__int8 bullet_effect_start_skill_flow;
std::wstring bullet_effect_start_skill_flow_EnumValue() const {return Get_bullet_effect_start_skill_flow_EnumValue(bullet_effect_start_skill_flow);};
char Pad8[3];
float bullet_effect_show_offset;
float bullet_effect_duration;
Data::TableRef description_weapon_soul_gem;
int description_weapon_soul_gem_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(10, 1); }
		static __int16 TableId() { return 324; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill3_RecordPtr // : DrRecordPtr
	{
		skill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}