/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct stance_Record : DrEl
	{
	private:
		static std::wstring Get_stance_type_EnumValue(__int8 value);
		static std::wstring Get_secondgauge_name_EnumValue(__int8 value);
		static std::wstring Get_secondgauge_use_type_EnumValue(__int8 value);
		static std::wstring Get_sp_gauge_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"initialize") == 0) return initialize;
			if (wcscmp(fieldName, L"default_sp") == 0) return default_sp;
			if (wcscmp(fieldName, L"max_sp") == 0) return max_sp;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_1") == 0) return effect[0];
			if (wcscmp(fieldName, L"effect_2") == 0) return effect[1];
			if (wcscmp(fieldName, L"effect_3") == 0) return effect[2];
			if (wcscmp(fieldName, L"effect_4") == 0) return effect[3];
			if (wcscmp(fieldName, L"impossible_equip") == 0) return impossible_equip;
			if (wcscmp(fieldName, L"hide_weapon") == 0) return hide_weapon;
			if (wcscmp(fieldName, L"clone_weapon_appearance_to_left") == 0) return clone_weapon_appearance_to_left;
			if (wcscmp(fieldName, L"target_angle") == 0) return target_angle;
			if (wcscmp(fieldName, L"target_angle_1") == 0) return target_angle[0];
			if (wcscmp(fieldName, L"target_angle_2") == 0) return target_angle[1];
			if (wcscmp(fieldName, L"target_angle_3") == 0) return target_angle[2];
			if (wcscmp(fieldName, L"target_angle_4") == 0) return target_angle[3];
			if (wcscmp(fieldName, L"target_beam_width") == 0) return target_beam_width;
			if (wcscmp(fieldName, L"target_beam_width_1") == 0) return target_beam_width[0];
			if (wcscmp(fieldName, L"target_beam_width_2") == 0) return target_beam_width[1];
			if (wcscmp(fieldName, L"target_beam_width_3") == 0) return target_beam_width[2];
			if (wcscmp(fieldName, L"target_beam_width_4") == 0) return target_beam_width[3];
			if (wcscmp(fieldName, L"target_band_first") == 0) return target_band_first;
			if (wcscmp(fieldName, L"target_band_first_1") == 0) return target_band_first[0];
			if (wcscmp(fieldName, L"target_band_first_2") == 0) return target_band_first[1];
			if (wcscmp(fieldName, L"target_band_first_3") == 0) return target_band_first[2];
			if (wcscmp(fieldName, L"target_band_first_4") == 0) return target_band_first[3];
			if (wcscmp(fieldName, L"target_band_second") == 0) return target_band_second;
			if (wcscmp(fieldName, L"target_band_second_1") == 0) return target_band_second[0];
			if (wcscmp(fieldName, L"target_band_second_2") == 0) return target_band_second[1];
			if (wcscmp(fieldName, L"target_band_second_3") == 0) return target_band_second[2];
			if (wcscmp(fieldName, L"target_band_second_4") == 0) return target_band_second[3];
			if (wcscmp(fieldName, L"band_check_limit") == 0) return band_check_limit;
			if (wcscmp(fieldName, L"band_check_limit_1") == 0) return band_check_limit[0];
			if (wcscmp(fieldName, L"band_check_limit_2") == 0) return band_check_limit[1];
			if (wcscmp(fieldName, L"band_check_limit_3") == 0) return band_check_limit[2];
			if (wcscmp(fieldName, L"band_check_limit_4") == 0) return band_check_limit[3];
			if (wcscmp(fieldName, L"target_change_delay") == 0) return target_change_delay;
			if (wcscmp(fieldName, L"target_change_delay_1") == 0) return target_change_delay[0];
			if (wcscmp(fieldName, L"target_change_delay_2") == 0) return target_change_delay[1];
			if (wcscmp(fieldName, L"target_change_delay_3") == 0) return target_change_delay[2];
			if (wcscmp(fieldName, L"target_change_delay_4") == 0) return target_change_delay[3];
			if (wcscmp(fieldName, L"threshold_min") == 0) return threshold_min;
			if (wcscmp(fieldName, L"threshold_min_1") == 0) return threshold_min[0];
			if (wcscmp(fieldName, L"threshold_min_2") == 0) return threshold_min[1];
			if (wcscmp(fieldName, L"threshold_min_3") == 0) return threshold_min[2];
			if (wcscmp(fieldName, L"threshold_min_4") == 0) return threshold_min[3];
			if (wcscmp(fieldName, L"threshold_max") == 0) return threshold_max;
			if (wcscmp(fieldName, L"threshold_max_1") == 0) return threshold_max[0];
			if (wcscmp(fieldName, L"threshold_max_2") == 0) return threshold_max[1];
			if (wcscmp(fieldName, L"threshold_max_3") == 0) return threshold_max[2];
			if (wcscmp(fieldName, L"threshold_max_4") == 0) return threshold_max[3];
			if (wcscmp(fieldName, L"empty_delay") == 0) return empty_delay;
			if (wcscmp(fieldName, L"empty_delay_1") == 0) return empty_delay[0];
			if (wcscmp(fieldName, L"empty_delay_2") == 0) return empty_delay[1];
			if (wcscmp(fieldName, L"empty_delay_3") == 0) return empty_delay[2];
			if (wcscmp(fieldName, L"empty_delay_4") == 0) return empty_delay[3];
			if (wcscmp(fieldName, L"target_gather_angle") == 0) return target_gather_angle;
			if (wcscmp(fieldName, L"stun_delay") == 0) return stun_delay;
			if (wcscmp(fieldName, L"kneel_delay") == 0) return kneel_delay;
			if (wcscmp(fieldName, L"down_delay") == 0) return down_delay;
			if (wcscmp(fieldName, L"mid_air_delay") == 0) return mid_air_delay;
			if (wcscmp(fieldName, L"swoon_delay") == 0) return swoon_delay;
			if (wcscmp(fieldName, L"secondgauge_name") == 0) return secondgauge_name;
			if (wcscmp(fieldName, L"secondgauge_use_type") == 0) return secondgauge_use_type;
			if (wcscmp(fieldName, L"combat_mode_particle") == 0) return combat_mode_particle;
			if (wcscmp(fieldName, L"combat_mode_particle_followup_time_min") == 0) return combat_mode_particle_followup_time_min;
			if (wcscmp(fieldName, L"combat_mode_particle_followup_time_max") == 0) return combat_mode_particle_followup_time_max;
			if (wcscmp(fieldName, L"combat_mode_particle_release_show") == 0) return combat_mode_particle_release_show;
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle") == 0) return soul_fighter_weapon_particle;
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle_followup_time_min") == 0) return soul_fighter_weapon_particle_followup_time_min;
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle_followup_time_max") == 0) return soul_fighter_weapon_particle_followup_time_max;
			if (wcscmp(fieldName, L"soul_fighter_weapon_buff_particle") == 0) return soul_fighter_weapon_buff_particle;
			if (wcscmp(fieldName, L"soul_fighter_weapon_buff_particle_followup_time_min") == 0) return soul_fighter_weapon_buff_particle_followup_time_min;
			if (wcscmp(fieldName, L"soul_fighter_weapon_buff_particle_followup_time_max") == 0) return soul_fighter_weapon_buff_particle_followup_time_max;
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle_release_show") == 0) return soul_fighter_weapon_particle_release_show;
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle") == 0) return phantom_not_combat_mode_particle;
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle_followup_time_min") == 0) return phantom_not_combat_mode_particle_followup_time_min;
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle_followup_time_max") == 0) return phantom_not_combat_mode_particle_followup_time_max;
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle_release_show") == 0) return phantom_not_combat_mode_particle_release_show;
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_id") == 0) return kungfu_fighter_weapon_mesh_id;
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col") == 0) return kungfu_fighter_weapon_mesh_col;
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col_1") == 0) return kungfu_fighter_weapon_mesh_col[0];
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col_2") == 0) return kungfu_fighter_weapon_mesh_col[1];
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col_3") == 0) return kungfu_fighter_weapon_mesh_col[2];
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle") == 0) return kungfu_fighter_weapon_particle;
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle_followup_time_min") == 0) return kungfu_fighter_weapon_particle_followup_time_min;
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle_followup_time_max") == 0) return kungfu_fighter_weapon_particle_followup_time_max;
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle_release_show") == 0) return kungfu_fighter_weapon_particle_release_show;
			if (wcscmp(fieldName, L"sp_gauge_style") == 0) return sp_gauge_style;
			if (wcscmp(fieldName, L"sp_gauge_numeric_visible") == 0) return sp_gauge_numeric_visible;
			if (wcscmp(fieldName, L"sp_gauge_full_particle_ref") == 0) return sp_gauge_full_particle_ref;
			if (wcscmp(fieldName, L"sp_gauge_full_particle_scale") == 0) return sp_gauge_full_particle_scale;
			if (wcscmp(fieldName, L"sp_gauge_charge_particle_ref") == 0) return sp_gauge_charge_particle_ref;
			if (wcscmp(fieldName, L"sp_gauge_charge_particle_scale") == 0) return sp_gauge_charge_particle_scale;
			if (wcscmp(fieldName, L"sp_gauge_consume_particle_ref") == 0) return sp_gauge_consume_particle_ref;
			if (wcscmp(fieldName, L"sp_gauge_consume_particle_scale") == 0) return sp_gauge_consume_particle_scale;
			if (wcscmp(fieldName, L"sp_gauge_charge_observer_particle_ref") == 0) return sp_gauge_charge_observer_particle_ref;
			if (wcscmp(fieldName, L"sp_gauge_charge_observer_particle_scale") == 0) return sp_gauge_charge_observer_particle_scale;
			if (wcscmp(fieldName, L"sp_gauge_consume_observer_particle_ref") == 0) return sp_gauge_consume_observer_particle_ref;
			if (wcscmp(fieldName, L"sp_gauge_consume_observer_particle_scale") == 0) return sp_gauge_consume_observer_particle_scale;
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_id") == 0) return summoned_flyingship_attachment_mesh_id;
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col") == 0) return summoned_flyingship_attachment_mesh_col;
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col_1") == 0) return summoned_flyingship_attachment_mesh_col[0];
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col_2") == 0) return summoned_flyingship_attachment_mesh_col[1];
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col_3") == 0) return summoned_flyingship_attachment_mesh_col[2];
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_animset") == 0) return summoned_flyingship_attachment_mesh_animset;
			if (wcscmp(fieldName, L"summoned_preset_body_shape_part_value") == 0) return summoned_preset_body_shape_part_value;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"initialize") == 0) return Data::AnyFieldToStringConverter::ToString(&initialize);
			if (wcscmp(fieldName, L"default_sp") == 0) return Data::AnyFieldToStringConverter::ToString(&default_sp);
			if (wcscmp(fieldName, L"max_sp") == 0) return Data::AnyFieldToStringConverter::ToString(&max_sp);
			if (wcscmp(fieldName, L"effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[0]));
			if (wcscmp(fieldName, L"effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[1]));
			if (wcscmp(fieldName, L"effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[2]));
			if (wcscmp(fieldName, L"effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[3]));
			if (wcscmp(fieldName, L"impossible_equip") == 0) return Data::AnyFieldToStringConverter::ToString(&impossible_equip);
			if (wcscmp(fieldName, L"hide_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&hide_weapon);
			if (wcscmp(fieldName, L"clone_weapon_appearance_to_left") == 0) return Data::AnyFieldToStringConverter::ToString(&clone_weapon_appearance_to_left);
			if (wcscmp(fieldName, L"target_angle_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[0]));
			if (wcscmp(fieldName, L"target_angle_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[1]));
			if (wcscmp(fieldName, L"target_angle_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[2]));
			if (wcscmp(fieldName, L"target_angle_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[3]));
			if (wcscmp(fieldName, L"target_beam_width_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[0]));
			if (wcscmp(fieldName, L"target_beam_width_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[1]));
			if (wcscmp(fieldName, L"target_beam_width_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[2]));
			if (wcscmp(fieldName, L"target_beam_width_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[3]));
			if (wcscmp(fieldName, L"target_band_first_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[0]));
			if (wcscmp(fieldName, L"target_band_first_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[1]));
			if (wcscmp(fieldName, L"target_band_first_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[2]));
			if (wcscmp(fieldName, L"target_band_first_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[3]));
			if (wcscmp(fieldName, L"target_band_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[0]));
			if (wcscmp(fieldName, L"target_band_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[1]));
			if (wcscmp(fieldName, L"target_band_second_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[2]));
			if (wcscmp(fieldName, L"target_band_second_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[3]));
			if (wcscmp(fieldName, L"band_check_limit_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[0]));
			if (wcscmp(fieldName, L"band_check_limit_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[1]));
			if (wcscmp(fieldName, L"band_check_limit_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[2]));
			if (wcscmp(fieldName, L"band_check_limit_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[3]));
			if (wcscmp(fieldName, L"target_change_delay_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[0]));
			if (wcscmp(fieldName, L"target_change_delay_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[1]));
			if (wcscmp(fieldName, L"target_change_delay_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[2]));
			if (wcscmp(fieldName, L"target_change_delay_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[3]));
			if (wcscmp(fieldName, L"threshold_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[0]));
			if (wcscmp(fieldName, L"threshold_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[1]));
			if (wcscmp(fieldName, L"threshold_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[2]));
			if (wcscmp(fieldName, L"threshold_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[3]));
			if (wcscmp(fieldName, L"threshold_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[0]));
			if (wcscmp(fieldName, L"threshold_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[1]));
			if (wcscmp(fieldName, L"threshold_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[2]));
			if (wcscmp(fieldName, L"threshold_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[3]));
			if (wcscmp(fieldName, L"empty_delay_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[0]));
			if (wcscmp(fieldName, L"empty_delay_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[1]));
			if (wcscmp(fieldName, L"empty_delay_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[2]));
			if (wcscmp(fieldName, L"empty_delay_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[3]));
			if (wcscmp(fieldName, L"target_gather_angle") == 0) return Data::AnyFieldToStringConverter::ToString(&target_gather_angle);
			if (wcscmp(fieldName, L"stun_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&stun_delay);
			if (wcscmp(fieldName, L"kneel_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&kneel_delay);
			if (wcscmp(fieldName, L"down_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&down_delay);
			if (wcscmp(fieldName, L"mid_air_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&mid_air_delay);
			if (wcscmp(fieldName, L"swoon_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&swoon_delay);
			if (wcscmp(fieldName, L"secondgauge_name") == 0) return Data::AnyFieldToStringConverter::ToString(&secondgauge_name);
			if (wcscmp(fieldName, L"secondgauge_use_type") == 0) return Data::AnyFieldToStringConverter::ToString(&secondgauge_use_type);
			if (wcscmp(fieldName, L"combat_mode_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_mode_particle);
			if (wcscmp(fieldName, L"combat_mode_particle_followup_time_min") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_mode_particle_followup_time_min);
			if (wcscmp(fieldName, L"combat_mode_particle_followup_time_max") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_mode_particle_followup_time_max);
			if (wcscmp(fieldName, L"combat_mode_particle_release_show") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_mode_particle_release_show);
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_particle);
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle_followup_time_min") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_particle_followup_time_min);
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle_followup_time_max") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_particle_followup_time_max);
			if (wcscmp(fieldName, L"soul_fighter_weapon_buff_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_buff_particle);
			if (wcscmp(fieldName, L"soul_fighter_weapon_buff_particle_followup_time_min") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_buff_particle_followup_time_min);
			if (wcscmp(fieldName, L"soul_fighter_weapon_buff_particle_followup_time_max") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_buff_particle_followup_time_max);
			if (wcscmp(fieldName, L"soul_fighter_weapon_particle_release_show") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_fighter_weapon_particle_release_show);
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&phantom_not_combat_mode_particle);
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle_followup_time_min") == 0) return Data::AnyFieldToStringConverter::ToString(&phantom_not_combat_mode_particle_followup_time_min);
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle_followup_time_max") == 0) return Data::AnyFieldToStringConverter::ToString(&phantom_not_combat_mode_particle_followup_time_max);
			if (wcscmp(fieldName, L"phantom_not_combat_mode_particle_release_show") == 0) return Data::AnyFieldToStringConverter::ToString(&phantom_not_combat_mode_particle_release_show);
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_id") == 0) return Data::AnyFieldToStringConverter::ToString(&kungfu_fighter_weapon_mesh_id);
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(kungfu_fighter_weapon_mesh_col[0]));
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(kungfu_fighter_weapon_mesh_col[1]));
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(kungfu_fighter_weapon_mesh_col[2]));
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&kungfu_fighter_weapon_particle);
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle_followup_time_min") == 0) return Data::AnyFieldToStringConverter::ToString(&kungfu_fighter_weapon_particle_followup_time_min);
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle_followup_time_max") == 0) return Data::AnyFieldToStringConverter::ToString(&kungfu_fighter_weapon_particle_followup_time_max);
			if (wcscmp(fieldName, L"kungfu_fighter_weapon_particle_release_show") == 0) return Data::AnyFieldToStringConverter::ToString(&kungfu_fighter_weapon_particle_release_show);
			if (wcscmp(fieldName, L"sp_gauge_style") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_style);
			if (wcscmp(fieldName, L"sp_gauge_numeric_visible") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_numeric_visible);
			if (wcscmp(fieldName, L"sp_gauge_full_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_full_particle_ref);
			if (wcscmp(fieldName, L"sp_gauge_full_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_full_particle_scale);
			if (wcscmp(fieldName, L"sp_gauge_charge_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_charge_particle_ref);
			if (wcscmp(fieldName, L"sp_gauge_charge_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_charge_particle_scale);
			if (wcscmp(fieldName, L"sp_gauge_consume_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_consume_particle_ref);
			if (wcscmp(fieldName, L"sp_gauge_consume_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_consume_particle_scale);
			if (wcscmp(fieldName, L"sp_gauge_charge_observer_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_charge_observer_particle_ref);
			if (wcscmp(fieldName, L"sp_gauge_charge_observer_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_charge_observer_particle_scale);
			if (wcscmp(fieldName, L"sp_gauge_consume_observer_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_consume_observer_particle_ref);
			if (wcscmp(fieldName, L"sp_gauge_consume_observer_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sp_gauge_consume_observer_particle_scale);
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_id") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_flyingship_attachment_mesh_id);
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(summoned_flyingship_attachment_mesh_col[0]));
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(summoned_flyingship_attachment_mesh_col[1]));
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(summoned_flyingship_attachment_mesh_col[2]));
			if (wcscmp(fieldName, L"summoned_flyingship_attachment_mesh_animset") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_flyingship_attachment_mesh_animset);
			if (wcscmp(fieldName, L"summoned_preset_body_shape_part_value") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_preset_body_shape_part_value);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(combat_mode_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_mode_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_mode_particle));
			else return;
			if (reinterpret_cast<std::uintptr_t>(combat_mode_particle_release_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_mode_particle_release_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_mode_particle_release_show));
			if (reinterpret_cast<std::uintptr_t>(soul_fighter_weapon_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) soul_fighter_weapon_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(soul_fighter_weapon_particle));
			if (reinterpret_cast<std::uintptr_t>(soul_fighter_weapon_buff_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) soul_fighter_weapon_buff_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(soul_fighter_weapon_buff_particle));
			if (reinterpret_cast<std::uintptr_t>(soul_fighter_weapon_particle_release_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) soul_fighter_weapon_particle_release_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(soul_fighter_weapon_particle_release_show));
			if (reinterpret_cast<std::uintptr_t>(phantom_not_combat_mode_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) phantom_not_combat_mode_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(phantom_not_combat_mode_particle));
			if (reinterpret_cast<std::uintptr_t>(phantom_not_combat_mode_particle_release_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) phantom_not_combat_mode_particle_release_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(phantom_not_combat_mode_particle_release_show));
			if (reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_mesh_id) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kungfu_fighter_weapon_mesh_id = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_mesh_id));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kungfu_fighter_weapon_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_mesh_col[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kungfu_fighter_weapon_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_particle));
			if (reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_particle_release_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kungfu_fighter_weapon_particle_release_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kungfu_fighter_weapon_particle_release_show));
			if (reinterpret_cast<std::uintptr_t>(sp_gauge_full_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sp_gauge_full_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sp_gauge_full_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(sp_gauge_charge_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sp_gauge_charge_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sp_gauge_charge_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(sp_gauge_consume_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sp_gauge_consume_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sp_gauge_consume_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(sp_gauge_charge_observer_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sp_gauge_charge_observer_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sp_gauge_charge_observer_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(sp_gauge_consume_observer_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sp_gauge_consume_observer_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sp_gauge_consume_observer_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(summoned_flyingship_attachment_mesh_id) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoned_flyingship_attachment_mesh_id = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoned_flyingship_attachment_mesh_id));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(summoned_flyingship_attachment_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoned_flyingship_attachment_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoned_flyingship_attachment_mesh_col[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(summoned_flyingship_attachment_mesh_animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoned_flyingship_attachment_mesh_animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoned_flyingship_attachment_mesh_animset));
		}
		union Key
		{
            struct {
                __int8 stance_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name2;
int name2_tableId(){return 405;};
bool initialize;
char Pad0[1];
__int16 default_sp;
__int16 max_sp;
char Pad1[2];
Data::TableRef effect[4];
int effect_tableId(){return 111;};
bool impossible_equip;
bool hide_weapon;
bool clone_weapon_appearance_to_left;
char Pad2[1];
float target_angle[4];
float target_beam_width[4];
float target_band_first[4];
float target_band_second[4];
__int16 band_check_limit[4];
float target_change_delay[4];
float threshold_min[4];
float threshold_max[4];
float empty_delay[4];
float target_gather_angle;
float stun_delay;
float kneel_delay;
float down_delay;
float mid_air_delay;
float swoon_delay;
__int8 secondgauge_name;
std::wstring secondgauge_name_EnumValue() const {return Get_secondgauge_name_EnumValue(secondgauge_name);};
__int8 secondgauge_use_type;
std::wstring secondgauge_use_type_EnumValue() const {return Get_secondgauge_use_type_EnumValue(secondgauge_use_type);};
char Pad3[2];
wchar_t* combat_mode_particle;
float combat_mode_particle_followup_time_min;
float combat_mode_particle_followup_time_max;
wchar_t* combat_mode_particle_release_show;
wchar_t* soul_fighter_weapon_particle;
float soul_fighter_weapon_particle_followup_time_min;
float soul_fighter_weapon_particle_followup_time_max;
wchar_t* soul_fighter_weapon_buff_particle;
float soul_fighter_weapon_buff_particle_followup_time_min;
float soul_fighter_weapon_buff_particle_followup_time_max;
wchar_t* soul_fighter_weapon_particle_release_show;
wchar_t* phantom_not_combat_mode_particle;
float phantom_not_combat_mode_particle_followup_time_min;
float phantom_not_combat_mode_particle_followup_time_max;
wchar_t* phantom_not_combat_mode_particle_release_show;
wchar_t* kungfu_fighter_weapon_mesh_id;
wchar_t* kungfu_fighter_weapon_mesh_col[3];
wchar_t* kungfu_fighter_weapon_particle;
float kungfu_fighter_weapon_particle_followup_time_min;
float kungfu_fighter_weapon_particle_followup_time_max;
wchar_t* kungfu_fighter_weapon_particle_release_show;
__int8 sp_gauge_style;
std::wstring sp_gauge_style_EnumValue() const {return Get_sp_gauge_style_EnumValue(sp_gauge_style);};
bool sp_gauge_numeric_visible;
char Pad4[2];
wchar_t* sp_gauge_full_particle_ref;
float sp_gauge_full_particle_scale;
wchar_t* sp_gauge_charge_particle_ref;
float sp_gauge_charge_particle_scale;
wchar_t* sp_gauge_consume_particle_ref;
float sp_gauge_consume_particle_scale;
wchar_t* sp_gauge_charge_observer_particle_ref;
float sp_gauge_charge_observer_particle_scale;
wchar_t* sp_gauge_consume_observer_particle_ref;
float sp_gauge_consume_observer_particle_scale;
wchar_t* summoned_flyingship_attachment_mesh_id;
wchar_t* summoned_flyingship_attachment_mesh_col[3];
wchar_t* summoned_flyingship_attachment_mesh_animset;
__int8 summoned_preset_body_shape_part_value;

		static TableVersion Version() { return TableVersion(0, 295); }
		static __int16 TableId() { return 377; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) stance_RecordPtr // : DrRecordPtr
	{
		stance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::stance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}