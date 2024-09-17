/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct auto_combat_skill_cast_condition_Record : DrEl
	{
	private:
		static std::wstring Get_check_hp_percent_target_type_EnumValue(__int8 value);
		static std::wstring Get_check_hp_percent_op_EnumValue(__int8 value);
		static std::wstring Get_check_caster_success_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_caster_success_effect_flag_op_EnumValue(__int8 value);
		static std::wstring Get_check_caster_fail_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_caster_fail_effect_flag_op_EnumValue(__int8 value);
		static std::wstring Get_check_caster_success_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_caster_success_effect_attribute_op_EnumValue(__int8 value);
		static std::wstring Get_check_caster_fail_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_caster_fail_effect_attribute_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_success_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_target_success_effect_flag_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_fail_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_target_fail_effect_flag_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_success_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_target_success_effect_attribute_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_fail_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_target_fail_effect_attribute_op_EnumValue(__int8 value);
		static std::wstring Get_check_summoned_success_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_summoned_success_effect_flag_op_EnumValue(__int8 value);
		static std::wstring Get_check_summoned_fail_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_summoned_fail_effect_flag_op_EnumValue(__int8 value);
		static std::wstring Get_check_summoned_success_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_summoned_success_effect_attribute_op_EnumValue(__int8 value);
		static std::wstring Get_check_summoned_fail_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_summoned_fail_effect_attribute_op_EnumValue(__int8 value);
		static std::wstring Get_check_caster_recycle_skill_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_npc_grade2_EnumValue(__int8 value);
		static std::wstring Get_check_target_npc_grade2_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_distance_target_type_EnumValue(__int8 value);
		static std::wstring Get_check_target_distance_op_EnumValue(__int8 value);
		static std::wstring Get_check_around_target_type_EnumValue(__int8 value);
		static std::wstring Get_check_around_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"check_hp_percent_target_type") == 0) return check_hp_percent_target_type;
			if (wcscmp(fieldName, L"check_hp_percent") == 0) return check_hp_percent;
			if (wcscmp(fieldName, L"check_hp_percent_op") == 0) return check_hp_percent_op;
			if (wcscmp(fieldName, L"check_caster_success_effect_flag") == 0) return check_caster_success_effect_flag;
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_1") == 0) return check_caster_success_effect_flag[0];
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_2") == 0) return check_caster_success_effect_flag[1];
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_3") == 0) return check_caster_success_effect_flag[2];
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_4") == 0) return check_caster_success_effect_flag[3];
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_op") == 0) return check_caster_success_effect_flag_op;
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag") == 0) return check_caster_fail_effect_flag;
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_1") == 0) return check_caster_fail_effect_flag[0];
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_2") == 0) return check_caster_fail_effect_flag[1];
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_3") == 0) return check_caster_fail_effect_flag[2];
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_4") == 0) return check_caster_fail_effect_flag[3];
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_op") == 0) return check_caster_fail_effect_flag_op;
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute") == 0) return check_caster_success_effect_attribute;
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_1") == 0) return check_caster_success_effect_attribute[0];
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_2") == 0) return check_caster_success_effect_attribute[1];
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_3") == 0) return check_caster_success_effect_attribute[2];
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_4") == 0) return check_caster_success_effect_attribute[3];
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_op") == 0) return check_caster_success_effect_attribute_op;
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute") == 0) return check_caster_fail_effect_attribute;
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_1") == 0) return check_caster_fail_effect_attribute[0];
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_2") == 0) return check_caster_fail_effect_attribute[1];
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_3") == 0) return check_caster_fail_effect_attribute[2];
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_4") == 0) return check_caster_fail_effect_attribute[3];
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_op") == 0) return check_caster_fail_effect_attribute_op;
			if (wcscmp(fieldName, L"check_target_success_effect_flag") == 0) return check_target_success_effect_flag;
			if (wcscmp(fieldName, L"check_target_success_effect_flag_1") == 0) return check_target_success_effect_flag[0];
			if (wcscmp(fieldName, L"check_target_success_effect_flag_2") == 0) return check_target_success_effect_flag[1];
			if (wcscmp(fieldName, L"check_target_success_effect_flag_3") == 0) return check_target_success_effect_flag[2];
			if (wcscmp(fieldName, L"check_target_success_effect_flag_4") == 0) return check_target_success_effect_flag[3];
			if (wcscmp(fieldName, L"check_target_success_effect_flag_op") == 0) return check_target_success_effect_flag_op;
			if (wcscmp(fieldName, L"check_target_fail_effect_flag") == 0) return check_target_fail_effect_flag;
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_1") == 0) return check_target_fail_effect_flag[0];
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_2") == 0) return check_target_fail_effect_flag[1];
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_3") == 0) return check_target_fail_effect_flag[2];
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_4") == 0) return check_target_fail_effect_flag[3];
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_op") == 0) return check_target_fail_effect_flag_op;
			if (wcscmp(fieldName, L"check_target_success_effect_attribute") == 0) return check_target_success_effect_attribute;
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_1") == 0) return check_target_success_effect_attribute[0];
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_2") == 0) return check_target_success_effect_attribute[1];
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_3") == 0) return check_target_success_effect_attribute[2];
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_4") == 0) return check_target_success_effect_attribute[3];
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_op") == 0) return check_target_success_effect_attribute_op;
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute") == 0) return check_target_fail_effect_attribute;
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_1") == 0) return check_target_fail_effect_attribute[0];
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_2") == 0) return check_target_fail_effect_attribute[1];
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_3") == 0) return check_target_fail_effect_attribute[2];
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_4") == 0) return check_target_fail_effect_attribute[3];
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_op") == 0) return check_target_fail_effect_attribute_op;
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag") == 0) return check_summoned_success_effect_flag;
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_1") == 0) return check_summoned_success_effect_flag[0];
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_2") == 0) return check_summoned_success_effect_flag[1];
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_3") == 0) return check_summoned_success_effect_flag[2];
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_4") == 0) return check_summoned_success_effect_flag[3];
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_op") == 0) return check_summoned_success_effect_flag_op;
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag") == 0) return check_summoned_fail_effect_flag;
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_1") == 0) return check_summoned_fail_effect_flag[0];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_2") == 0) return check_summoned_fail_effect_flag[1];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_3") == 0) return check_summoned_fail_effect_flag[2];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_4") == 0) return check_summoned_fail_effect_flag[3];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_op") == 0) return check_summoned_fail_effect_flag_op;
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute") == 0) return check_summoned_success_effect_attribute;
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_1") == 0) return check_summoned_success_effect_attribute[0];
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_2") == 0) return check_summoned_success_effect_attribute[1];
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_3") == 0) return check_summoned_success_effect_attribute[2];
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_4") == 0) return check_summoned_success_effect_attribute[3];
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_op") == 0) return check_summoned_success_effect_attribute_op;
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute") == 0) return check_summoned_fail_effect_attribute;
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_1") == 0) return check_summoned_fail_effect_attribute[0];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_2") == 0) return check_summoned_fail_effect_attribute[1];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_3") == 0) return check_summoned_fail_effect_attribute[2];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_4") == 0) return check_summoned_fail_effect_attribute[3];
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_op") == 0) return check_summoned_fail_effect_attribute_op;
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id") == 0) return check_caster_recycle_skill_id;
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_1") == 0) return check_caster_recycle_skill_id[0];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_2") == 0) return check_caster_recycle_skill_id[1];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_3") == 0) return check_caster_recycle_skill_id[2];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_4") == 0) return check_caster_recycle_skill_id[3];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id") == 0) return check_caster_recycle_skill_variation_id;
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_1") == 0) return check_caster_recycle_skill_variation_id[0];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_2") == 0) return check_caster_recycle_skill_variation_id[1];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_3") == 0) return check_caster_recycle_skill_variation_id[2];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_4") == 0) return check_caster_recycle_skill_variation_id[3];
			if (wcscmp(fieldName, L"check_caster_recycle_skill_op") == 0) return check_caster_recycle_skill_op;
			if (wcscmp(fieldName, L"check_target_npc_grade2") == 0) return check_target_npc_grade2;
			if (wcscmp(fieldName, L"check_target_npc_grade2_op") == 0) return check_target_npc_grade2_op;
			if (wcscmp(fieldName, L"check_target_distance_target_type") == 0) return check_target_distance_target_type;
			if (wcscmp(fieldName, L"check_target_distance") == 0) return check_target_distance;
			if (wcscmp(fieldName, L"check_target_distance_op") == 0) return check_target_distance_op;
			if (wcscmp(fieldName, L"check_around_target_type") == 0) return check_around_target_type;
			if (wcscmp(fieldName, L"check_around_enemy_count") == 0) return check_around_enemy_count;
			if (wcscmp(fieldName, L"check_around_enemy_targeting") == 0) return check_around_enemy_targeting;
			if (wcscmp(fieldName, L"check_around_range") == 0) return check_around_range;
			if (wcscmp(fieldName, L"check_around_op") == 0) return check_around_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"check_hp_percent_target_type") == 0) return Data::AnyFieldToStringConverter::ToString(&check_hp_percent_target_type);
			if (wcscmp(fieldName, L"check_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&check_hp_percent);
			if (wcscmp(fieldName, L"check_hp_percent_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_hp_percent_op);
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_flag[0]));
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_flag[1]));
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_flag[2]));
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_flag[3]));
			if (wcscmp(fieldName, L"check_caster_success_effect_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_caster_success_effect_flag_op);
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_flag[0]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_flag[1]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_flag[2]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_flag[3]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_caster_fail_effect_flag_op);
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_attribute[0]));
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_attribute[1]));
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_attribute[2]));
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_success_effect_attribute[3]));
			if (wcscmp(fieldName, L"check_caster_success_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_caster_success_effect_attribute_op);
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_attribute[0]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_attribute[1]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_attribute[2]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_fail_effect_attribute[3]));
			if (wcscmp(fieldName, L"check_caster_fail_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_caster_fail_effect_attribute_op);
			if (wcscmp(fieldName, L"check_target_success_effect_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_flag[0]));
			if (wcscmp(fieldName, L"check_target_success_effect_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_flag[1]));
			if (wcscmp(fieldName, L"check_target_success_effect_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_flag[2]));
			if (wcscmp(fieldName, L"check_target_success_effect_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_flag[3]));
			if (wcscmp(fieldName, L"check_target_success_effect_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_success_effect_flag_op);
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_flag[0]));
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_flag[1]));
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_flag[2]));
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_flag[3]));
			if (wcscmp(fieldName, L"check_target_fail_effect_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_fail_effect_flag_op);
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_attribute[0]));
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_attribute[1]));
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_attribute[2]));
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_success_effect_attribute[3]));
			if (wcscmp(fieldName, L"check_target_success_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_success_effect_attribute_op);
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_attribute[0]));
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_attribute[1]));
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_attribute[2]));
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_target_fail_effect_attribute[3]));
			if (wcscmp(fieldName, L"check_target_fail_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_fail_effect_attribute_op);
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_flag[0]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_flag[1]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_flag[2]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_flag[3]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_summoned_success_effect_flag_op);
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_flag[0]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_flag[1]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_flag[2]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_flag[3]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_summoned_fail_effect_flag_op);
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_attribute[0]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_attribute[1]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_attribute[2]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_success_effect_attribute[3]));
			if (wcscmp(fieldName, L"check_summoned_success_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_summoned_success_effect_attribute_op);
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_attribute[0]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_attribute[1]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_attribute[2]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_summoned_fail_effect_attribute[3]));
			if (wcscmp(fieldName, L"check_summoned_fail_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_summoned_fail_effect_attribute_op);
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_id[0]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_id[1]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_id[2]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_id[3]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_variation_id[0]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_variation_id[1]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_variation_id[2]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_variation_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(check_caster_recycle_skill_variation_id[3]));
			if (wcscmp(fieldName, L"check_caster_recycle_skill_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_caster_recycle_skill_op);
			if (wcscmp(fieldName, L"check_target_npc_grade2") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_npc_grade2);
			if (wcscmp(fieldName, L"check_target_npc_grade2_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_npc_grade2_op);
			if (wcscmp(fieldName, L"check_target_distance_target_type") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_distance_target_type);
			if (wcscmp(fieldName, L"check_target_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_distance);
			if (wcscmp(fieldName, L"check_target_distance_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_distance_op);
			if (wcscmp(fieldName, L"check_around_target_type") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_target_type);
			if (wcscmp(fieldName, L"check_around_enemy_count") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_enemy_count);
			if (wcscmp(fieldName, L"check_around_enemy_targeting") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_enemy_targeting);
			if (wcscmp(fieldName, L"check_around_range") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_range);
			if (wcscmp(fieldName, L"check_around_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_op);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
__int8 check_hp_percent_target_type;
std::wstring check_hp_percent_target_type_EnumValue() const {return Get_check_hp_percent_target_type_EnumValue(check_hp_percent_target_type);};
char Pad0[1];
__int16 check_hp_percent;
__int8 check_hp_percent_op;
std::wstring check_hp_percent_op_EnumValue() const {return Get_check_hp_percent_op_EnumValue(check_hp_percent_op);};
char Pad1[1];
__int16 check_caster_success_effect_flag[4];
std::wstring check_caster_success_effect_flag_EnumValue(int index) const {return Get_check_caster_success_effect_flag_EnumValue(check_caster_success_effect_flag[index]);};
__int8 check_caster_success_effect_flag_op;
std::wstring check_caster_success_effect_flag_op_EnumValue() const {return Get_check_caster_success_effect_flag_op_EnumValue(check_caster_success_effect_flag_op);};
char Pad2[1];
__int16 check_caster_fail_effect_flag[4];
std::wstring check_caster_fail_effect_flag_EnumValue(int index) const {return Get_check_caster_fail_effect_flag_EnumValue(check_caster_fail_effect_flag[index]);};
__int8 check_caster_fail_effect_flag_op;
std::wstring check_caster_fail_effect_flag_op_EnumValue() const {return Get_check_caster_fail_effect_flag_op_EnumValue(check_caster_fail_effect_flag_op);};
char Pad3[1];
__int16 check_caster_success_effect_attribute[4];
std::wstring check_caster_success_effect_attribute_EnumValue(int index) const {return Get_check_caster_success_effect_attribute_EnumValue(check_caster_success_effect_attribute[index]);};
__int8 check_caster_success_effect_attribute_op;
std::wstring check_caster_success_effect_attribute_op_EnumValue() const {return Get_check_caster_success_effect_attribute_op_EnumValue(check_caster_success_effect_attribute_op);};
char Pad4[1];
__int16 check_caster_fail_effect_attribute[4];
std::wstring check_caster_fail_effect_attribute_EnumValue(int index) const {return Get_check_caster_fail_effect_attribute_EnumValue(check_caster_fail_effect_attribute[index]);};
__int8 check_caster_fail_effect_attribute_op;
std::wstring check_caster_fail_effect_attribute_op_EnumValue() const {return Get_check_caster_fail_effect_attribute_op_EnumValue(check_caster_fail_effect_attribute_op);};
char Pad5[1];
__int16 check_target_success_effect_flag[4];
std::wstring check_target_success_effect_flag_EnumValue(int index) const {return Get_check_target_success_effect_flag_EnumValue(check_target_success_effect_flag[index]);};
__int8 check_target_success_effect_flag_op;
std::wstring check_target_success_effect_flag_op_EnumValue() const {return Get_check_target_success_effect_flag_op_EnumValue(check_target_success_effect_flag_op);};
char Pad6[1];
__int16 check_target_fail_effect_flag[4];
std::wstring check_target_fail_effect_flag_EnumValue(int index) const {return Get_check_target_fail_effect_flag_EnumValue(check_target_fail_effect_flag[index]);};
__int8 check_target_fail_effect_flag_op;
std::wstring check_target_fail_effect_flag_op_EnumValue() const {return Get_check_target_fail_effect_flag_op_EnumValue(check_target_fail_effect_flag_op);};
char Pad7[1];
__int16 check_target_success_effect_attribute[4];
std::wstring check_target_success_effect_attribute_EnumValue(int index) const {return Get_check_target_success_effect_attribute_EnumValue(check_target_success_effect_attribute[index]);};
__int8 check_target_success_effect_attribute_op;
std::wstring check_target_success_effect_attribute_op_EnumValue() const {return Get_check_target_success_effect_attribute_op_EnumValue(check_target_success_effect_attribute_op);};
char Pad8[1];
__int16 check_target_fail_effect_attribute[4];
std::wstring check_target_fail_effect_attribute_EnumValue(int index) const {return Get_check_target_fail_effect_attribute_EnumValue(check_target_fail_effect_attribute[index]);};
__int8 check_target_fail_effect_attribute_op;
std::wstring check_target_fail_effect_attribute_op_EnumValue() const {return Get_check_target_fail_effect_attribute_op_EnumValue(check_target_fail_effect_attribute_op);};
char Pad9[1];
__int16 check_summoned_success_effect_flag[4];
std::wstring check_summoned_success_effect_flag_EnumValue(int index) const {return Get_check_summoned_success_effect_flag_EnumValue(check_summoned_success_effect_flag[index]);};
__int8 check_summoned_success_effect_flag_op;
std::wstring check_summoned_success_effect_flag_op_EnumValue() const {return Get_check_summoned_success_effect_flag_op_EnumValue(check_summoned_success_effect_flag_op);};
char Pad10[1];
__int16 check_summoned_fail_effect_flag[4];
std::wstring check_summoned_fail_effect_flag_EnumValue(int index) const {return Get_check_summoned_fail_effect_flag_EnumValue(check_summoned_fail_effect_flag[index]);};
__int8 check_summoned_fail_effect_flag_op;
std::wstring check_summoned_fail_effect_flag_op_EnumValue() const {return Get_check_summoned_fail_effect_flag_op_EnumValue(check_summoned_fail_effect_flag_op);};
char Pad11[1];
__int16 check_summoned_success_effect_attribute[4];
std::wstring check_summoned_success_effect_attribute_EnumValue(int index) const {return Get_check_summoned_success_effect_attribute_EnumValue(check_summoned_success_effect_attribute[index]);};
__int8 check_summoned_success_effect_attribute_op;
std::wstring check_summoned_success_effect_attribute_op_EnumValue() const {return Get_check_summoned_success_effect_attribute_op_EnumValue(check_summoned_success_effect_attribute_op);};
char Pad12[1];
__int16 check_summoned_fail_effect_attribute[4];
std::wstring check_summoned_fail_effect_attribute_EnumValue(int index) const {return Get_check_summoned_fail_effect_attribute_EnumValue(check_summoned_fail_effect_attribute[index]);};
__int8 check_summoned_fail_effect_attribute_op;
std::wstring check_summoned_fail_effect_attribute_op_EnumValue() const {return Get_check_summoned_fail_effect_attribute_op_EnumValue(check_summoned_fail_effect_attribute_op);};
char Pad13[3];
__int32 check_caster_recycle_skill_id[4];
__int8 check_caster_recycle_skill_variation_id[4];
__int8 check_caster_recycle_skill_op;
std::wstring check_caster_recycle_skill_op_EnumValue() const {return Get_check_caster_recycle_skill_op_EnumValue(check_caster_recycle_skill_op);};
__int8 check_target_npc_grade2;
std::wstring check_target_npc_grade2_EnumValue() const {return Get_check_target_npc_grade2_EnumValue(check_target_npc_grade2);};
__int8 check_target_npc_grade2_op;
std::wstring check_target_npc_grade2_op_EnumValue() const {return Get_check_target_npc_grade2_op_EnumValue(check_target_npc_grade2_op);};
__int8 check_target_distance_target_type;
std::wstring check_target_distance_target_type_EnumValue() const {return Get_check_target_distance_target_type_EnumValue(check_target_distance_target_type);};
__int16 check_target_distance;
__int8 check_target_distance_op;
std::wstring check_target_distance_op_EnumValue() const {return Get_check_target_distance_op_EnumValue(check_target_distance_op);};
__int8 check_around_target_type;
std::wstring check_around_target_type_EnumValue() const {return Get_check_around_target_type_EnumValue(check_around_target_type);};
__int16 check_around_enemy_count;
bool check_around_enemy_targeting;
char Pad14[1];
__int16 check_around_range;
__int8 check_around_op;
std::wstring check_around_op_EnumValue() const {return Get_check_around_op_EnumValue(check_around_op);};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 22; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_skill_cast_condition_RecordPtr // : DrRecordPtr
	{
		auto_combat_skill_cast_condition_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_skill_cast_condition_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}