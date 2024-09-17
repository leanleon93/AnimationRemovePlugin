/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_improve_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"cost_main_item") == 0) return cost_main_item;
			if (wcscmp(fieldName, L"cost_main_item_1") == 0) return cost_main_item[0];
			if (wcscmp(fieldName, L"cost_main_item_2") == 0) return cost_main_item[1];
			if (wcscmp(fieldName, L"cost_main_item_3") == 0) return cost_main_item[2];
			if (wcscmp(fieldName, L"cost_main_item_4") == 0) return cost_main_item[3];
			if (wcscmp(fieldName, L"cost_main_item_5") == 0) return cost_main_item[4];
			if (wcscmp(fieldName, L"cost_main_item_count") == 0) return cost_main_item_count;
			if (wcscmp(fieldName, L"cost_main_item_count_1") == 0) return cost_main_item_count[0];
			if (wcscmp(fieldName, L"cost_main_item_count_2") == 0) return cost_main_item_count[1];
			if (wcscmp(fieldName, L"cost_main_item_count_3") == 0) return cost_main_item_count[2];
			if (wcscmp(fieldName, L"cost_main_item_count_4") == 0) return cost_main_item_count[3];
			if (wcscmp(fieldName, L"cost_main_item_count_5") == 0) return cost_main_item_count[4];
			if (wcscmp(fieldName, L"cost_sub_item_1") == 0) return cost_sub_item_1;
			if (wcscmp(fieldName, L"cost_sub_item_1_1") == 0) return cost_sub_item_1[0];
			if (wcscmp(fieldName, L"cost_sub_item_1_2") == 0) return cost_sub_item_1[1];
			if (wcscmp(fieldName, L"cost_sub_item_1_3") == 0) return cost_sub_item_1[2];
			if (wcscmp(fieldName, L"cost_sub_item_1_4") == 0) return cost_sub_item_1[3];
			if (wcscmp(fieldName, L"cost_sub_item_1_5") == 0) return cost_sub_item_1[4];
			if (wcscmp(fieldName, L"cost_sub_item_1_6") == 0) return cost_sub_item_1[5];
			if (wcscmp(fieldName, L"cost_sub_item_1_7") == 0) return cost_sub_item_1[6];
			if (wcscmp(fieldName, L"cost_sub_item_1_8") == 0) return cost_sub_item_1[7];
			if (wcscmp(fieldName, L"cost_sub_item_count_1") == 0) return cost_sub_item_count_1;
			if (wcscmp(fieldName, L"cost_sub_item_count_1_1") == 0) return cost_sub_item_count_1[0];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_2") == 0) return cost_sub_item_count_1[1];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_3") == 0) return cost_sub_item_count_1[2];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_4") == 0) return cost_sub_item_count_1[3];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_5") == 0) return cost_sub_item_count_1[4];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_6") == 0) return cost_sub_item_count_1[5];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_7") == 0) return cost_sub_item_count_1[6];
			if (wcscmp(fieldName, L"cost_sub_item_count_1_8") == 0) return cost_sub_item_count_1[7];
			if (wcscmp(fieldName, L"cost_sub_item_2") == 0) return cost_sub_item_2;
			if (wcscmp(fieldName, L"cost_sub_item_2_1") == 0) return cost_sub_item_2[0];
			if (wcscmp(fieldName, L"cost_sub_item_2_2") == 0) return cost_sub_item_2[1];
			if (wcscmp(fieldName, L"cost_sub_item_2_3") == 0) return cost_sub_item_2[2];
			if (wcscmp(fieldName, L"cost_sub_item_2_4") == 0) return cost_sub_item_2[3];
			if (wcscmp(fieldName, L"cost_sub_item_2_5") == 0) return cost_sub_item_2[4];
			if (wcscmp(fieldName, L"cost_sub_item_2_6") == 0) return cost_sub_item_2[5];
			if (wcscmp(fieldName, L"cost_sub_item_2_7") == 0) return cost_sub_item_2[6];
			if (wcscmp(fieldName, L"cost_sub_item_2_8") == 0) return cost_sub_item_2[7];
			if (wcscmp(fieldName, L"cost_sub_item_count_2") == 0) return cost_sub_item_count_2;
			if (wcscmp(fieldName, L"cost_sub_item_count_2_1") == 0) return cost_sub_item_count_2[0];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_2") == 0) return cost_sub_item_count_2[1];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_3") == 0) return cost_sub_item_count_2[2];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_4") == 0) return cost_sub_item_count_2[3];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_5") == 0) return cost_sub_item_count_2[4];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_6") == 0) return cost_sub_item_count_2[5];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_7") == 0) return cost_sub_item_count_2[6];
			if (wcscmp(fieldName, L"cost_sub_item_count_2_8") == 0) return cost_sub_item_count_2[7];
			if (wcscmp(fieldName, L"cost_sub_item_3") == 0) return cost_sub_item_3;
			if (wcscmp(fieldName, L"cost_sub_item_3_1") == 0) return cost_sub_item_3[0];
			if (wcscmp(fieldName, L"cost_sub_item_3_2") == 0) return cost_sub_item_3[1];
			if (wcscmp(fieldName, L"cost_sub_item_3_3") == 0) return cost_sub_item_3[2];
			if (wcscmp(fieldName, L"cost_sub_item_3_4") == 0) return cost_sub_item_3[3];
			if (wcscmp(fieldName, L"cost_sub_item_3_5") == 0) return cost_sub_item_3[4];
			if (wcscmp(fieldName, L"cost_sub_item_3_6") == 0) return cost_sub_item_3[5];
			if (wcscmp(fieldName, L"cost_sub_item_3_7") == 0) return cost_sub_item_3[6];
			if (wcscmp(fieldName, L"cost_sub_item_3_8") == 0) return cost_sub_item_3[7];
			if (wcscmp(fieldName, L"cost_sub_item_count_3") == 0) return cost_sub_item_count_3;
			if (wcscmp(fieldName, L"cost_sub_item_count_3_1") == 0) return cost_sub_item_count_3[0];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_2") == 0) return cost_sub_item_count_3[1];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_3") == 0) return cost_sub_item_count_3[2];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_4") == 0) return cost_sub_item_count_3[3];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_5") == 0) return cost_sub_item_count_3[4];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_6") == 0) return cost_sub_item_count_3[5];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_7") == 0) return cost_sub_item_count_3[6];
			if (wcscmp(fieldName, L"cost_sub_item_count_3_8") == 0) return cost_sub_item_count_3[7];
			if (wcscmp(fieldName, L"cost_sub_item_4") == 0) return cost_sub_item_4;
			if (wcscmp(fieldName, L"cost_sub_item_4_1") == 0) return cost_sub_item_4[0];
			if (wcscmp(fieldName, L"cost_sub_item_4_2") == 0) return cost_sub_item_4[1];
			if (wcscmp(fieldName, L"cost_sub_item_4_3") == 0) return cost_sub_item_4[2];
			if (wcscmp(fieldName, L"cost_sub_item_4_4") == 0) return cost_sub_item_4[3];
			if (wcscmp(fieldName, L"cost_sub_item_4_5") == 0) return cost_sub_item_4[4];
			if (wcscmp(fieldName, L"cost_sub_item_4_6") == 0) return cost_sub_item_4[5];
			if (wcscmp(fieldName, L"cost_sub_item_4_7") == 0) return cost_sub_item_4[6];
			if (wcscmp(fieldName, L"cost_sub_item_4_8") == 0) return cost_sub_item_4[7];
			if (wcscmp(fieldName, L"cost_sub_item_count_4") == 0) return cost_sub_item_count_4;
			if (wcscmp(fieldName, L"cost_sub_item_count_4_1") == 0) return cost_sub_item_count_4[0];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_2") == 0) return cost_sub_item_count_4[1];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_3") == 0) return cost_sub_item_count_4[2];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_4") == 0) return cost_sub_item_count_4[3];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_5") == 0) return cost_sub_item_count_4[4];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_6") == 0) return cost_sub_item_count_4[5];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_7") == 0) return cost_sub_item_count_4[6];
			if (wcscmp(fieldName, L"cost_sub_item_count_4_8") == 0) return cost_sub_item_count_4[7];
			if (wcscmp(fieldName, L"cost_sub_item_5") == 0) return cost_sub_item_5;
			if (wcscmp(fieldName, L"cost_sub_item_5_1") == 0) return cost_sub_item_5[0];
			if (wcscmp(fieldName, L"cost_sub_item_5_2") == 0) return cost_sub_item_5[1];
			if (wcscmp(fieldName, L"cost_sub_item_5_3") == 0) return cost_sub_item_5[2];
			if (wcscmp(fieldName, L"cost_sub_item_5_4") == 0) return cost_sub_item_5[3];
			if (wcscmp(fieldName, L"cost_sub_item_5_5") == 0) return cost_sub_item_5[4];
			if (wcscmp(fieldName, L"cost_sub_item_5_6") == 0) return cost_sub_item_5[5];
			if (wcscmp(fieldName, L"cost_sub_item_5_7") == 0) return cost_sub_item_5[6];
			if (wcscmp(fieldName, L"cost_sub_item_5_8") == 0) return cost_sub_item_5[7];
			if (wcscmp(fieldName, L"cost_sub_item_count_5") == 0) return cost_sub_item_count_5;
			if (wcscmp(fieldName, L"cost_sub_item_count_5_1") == 0) return cost_sub_item_count_5[0];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_2") == 0) return cost_sub_item_count_5[1];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_3") == 0) return cost_sub_item_count_5[2];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_4") == 0) return cost_sub_item_count_5[3];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_5") == 0) return cost_sub_item_count_5[4];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_6") == 0) return cost_sub_item_count_5[5];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_7") == 0) return cost_sub_item_count_5[6];
			if (wcscmp(fieldName, L"cost_sub_item_count_5_8") == 0) return cost_sub_item_count_5[7];
			if (wcscmp(fieldName, L"cost_money") == 0) return cost_money;
			if (wcscmp(fieldName, L"cost_money_1") == 0) return cost_money[0];
			if (wcscmp(fieldName, L"cost_money_2") == 0) return cost_money[1];
			if (wcscmp(fieldName, L"cost_money_3") == 0) return cost_money[2];
			if (wcscmp(fieldName, L"cost_money_4") == 0) return cost_money[3];
			if (wcscmp(fieldName, L"cost_money_5") == 0) return cost_money[4];
			if (wcscmp(fieldName, L"success_probability") == 0) return success_probability;
			if (wcscmp(fieldName, L"success_probability_1") == 0) return success_probability[0];
			if (wcscmp(fieldName, L"success_probability_2") == 0) return success_probability[1];
			if (wcscmp(fieldName, L"success_probability_3") == 0) return success_probability[2];
			if (wcscmp(fieldName, L"success_probability_4") == 0) return success_probability[3];
			if (wcscmp(fieldName, L"success_probability_5") == 0) return success_probability[4];
			if (wcscmp(fieldName, L"use_success_probability") == 0) return use_success_probability;
			if (wcscmp(fieldName, L"use_success_probability_1") == 0) return use_success_probability[0];
			if (wcscmp(fieldName, L"use_success_probability_2") == 0) return use_success_probability[1];
			if (wcscmp(fieldName, L"use_success_probability_3") == 0) return use_success_probability[2];
			if (wcscmp(fieldName, L"use_success_probability_4") == 0) return use_success_probability[3];
			if (wcscmp(fieldName, L"use_success_probability_5") == 0) return use_success_probability[4];
			if (wcscmp(fieldName, L"mileage_enable") == 0) return mileage_enable;
			if (wcscmp(fieldName, L"mileage_save") == 0) return mileage_save;
			if (wcscmp(fieldName, L"mileage_save_1") == 0) return mileage_save[0];
			if (wcscmp(fieldName, L"mileage_save_2") == 0) return mileage_save[1];
			if (wcscmp(fieldName, L"mileage_save_3") == 0) return mileage_save[2];
			if (wcscmp(fieldName, L"mileage_save_4") == 0) return mileage_save[3];
			if (wcscmp(fieldName, L"mileage_save_5") == 0) return mileage_save[4];
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value") == 0) return cost_item_discount_minimum_value;
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_1") == 0) return cost_item_discount_minimum_value[0];
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_2") == 0) return cost_item_discount_minimum_value[1];
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_3") == 0) return cost_item_discount_minimum_value[2];
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_4") == 0) return cost_item_discount_minimum_value[3];
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_5") == 0) return cost_item_discount_minimum_value[4];
			if (wcscmp(fieldName, L"success_option_list_id") == 0) return success_option_list_id;
			if (wcscmp(fieldName, L"success_option_slot_number") == 0) return success_option_slot_number;
			if (wcscmp(fieldName, L"fail_level_diff") == 0) return fail_level_diff;
			if (wcscmp(fieldName, L"fail_level_diff_1") == 0) return fail_level_diff[0];
			if (wcscmp(fieldName, L"fail_level_diff_2") == 0) return fail_level_diff[1];
			if (wcscmp(fieldName, L"fail_level_diff_3") == 0) return fail_level_diff[2];
			if (wcscmp(fieldName, L"fail_level_diff_4") == 0) return fail_level_diff[3];
			if (wcscmp(fieldName, L"fail_level_diff_5") == 0) return fail_level_diff[4];
			if (wcscmp(fieldName, L"fixed_all_option") == 0) return fixed_all_option;
			if (wcscmp(fieldName, L"success_option_list_id_all") == 0) return success_option_list_id_all;
			if (wcscmp(fieldName, L"success_option_list_id_all_1") == 0) return success_option_list_id_all[0];
			if (wcscmp(fieldName, L"success_option_list_id_all_2") == 0) return success_option_list_id_all[1];
			if (wcscmp(fieldName, L"success_option_list_id_all_3") == 0) return success_option_list_id_all[2];
			if (wcscmp(fieldName, L"success_option_list_id_all_4") == 0) return success_option_list_id_all[3];
			if (wcscmp(fieldName, L"success_option_list_id_all_5") == 0) return success_option_list_id_all[4];
			if (wcscmp(fieldName, L"success_option_list_id_all_count") == 0) return success_option_list_id_all_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"cost_main_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item[0]));
			if (wcscmp(fieldName, L"cost_main_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item[1]));
			if (wcscmp(fieldName, L"cost_main_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item[2]));
			if (wcscmp(fieldName, L"cost_main_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item[3]));
			if (wcscmp(fieldName, L"cost_main_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item[4]));
			if (wcscmp(fieldName, L"cost_main_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item_count[0]));
			if (wcscmp(fieldName, L"cost_main_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item_count[1]));
			if (wcscmp(fieldName, L"cost_main_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item_count[2]));
			if (wcscmp(fieldName, L"cost_main_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item_count[3]));
			if (wcscmp(fieldName, L"cost_main_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_main_item_count[4]));
			if (wcscmp(fieldName, L"cost_sub_item_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[0]));
			if (wcscmp(fieldName, L"cost_sub_item_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[1]));
			if (wcscmp(fieldName, L"cost_sub_item_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[2]));
			if (wcscmp(fieldName, L"cost_sub_item_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[3]));
			if (wcscmp(fieldName, L"cost_sub_item_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[4]));
			if (wcscmp(fieldName, L"cost_sub_item_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[5]));
			if (wcscmp(fieldName, L"cost_sub_item_1_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[6]));
			if (wcscmp(fieldName, L"cost_sub_item_1_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_1[7]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[0]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[1]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[2]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[3]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[4]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[5]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[6]));
			if (wcscmp(fieldName, L"cost_sub_item_count_1_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_1[7]));
			if (wcscmp(fieldName, L"cost_sub_item_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[0]));
			if (wcscmp(fieldName, L"cost_sub_item_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[1]));
			if (wcscmp(fieldName, L"cost_sub_item_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[2]));
			if (wcscmp(fieldName, L"cost_sub_item_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[3]));
			if (wcscmp(fieldName, L"cost_sub_item_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[4]));
			if (wcscmp(fieldName, L"cost_sub_item_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[5]));
			if (wcscmp(fieldName, L"cost_sub_item_2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[6]));
			if (wcscmp(fieldName, L"cost_sub_item_2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_2[7]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[0]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[1]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[2]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[3]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[4]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[5]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[6]));
			if (wcscmp(fieldName, L"cost_sub_item_count_2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_2[7]));
			if (wcscmp(fieldName, L"cost_sub_item_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[0]));
			if (wcscmp(fieldName, L"cost_sub_item_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[1]));
			if (wcscmp(fieldName, L"cost_sub_item_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[2]));
			if (wcscmp(fieldName, L"cost_sub_item_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[3]));
			if (wcscmp(fieldName, L"cost_sub_item_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[4]));
			if (wcscmp(fieldName, L"cost_sub_item_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[5]));
			if (wcscmp(fieldName, L"cost_sub_item_3_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[6]));
			if (wcscmp(fieldName, L"cost_sub_item_3_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_3[7]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[0]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[1]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[2]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[3]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[4]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[5]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[6]));
			if (wcscmp(fieldName, L"cost_sub_item_count_3_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_3[7]));
			if (wcscmp(fieldName, L"cost_sub_item_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[0]));
			if (wcscmp(fieldName, L"cost_sub_item_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[1]));
			if (wcscmp(fieldName, L"cost_sub_item_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[2]));
			if (wcscmp(fieldName, L"cost_sub_item_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[3]));
			if (wcscmp(fieldName, L"cost_sub_item_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[4]));
			if (wcscmp(fieldName, L"cost_sub_item_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[5]));
			if (wcscmp(fieldName, L"cost_sub_item_4_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[6]));
			if (wcscmp(fieldName, L"cost_sub_item_4_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_4[7]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[0]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[1]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[2]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[3]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[4]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[5]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[6]));
			if (wcscmp(fieldName, L"cost_sub_item_count_4_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_4[7]));
			if (wcscmp(fieldName, L"cost_sub_item_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[0]));
			if (wcscmp(fieldName, L"cost_sub_item_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[1]));
			if (wcscmp(fieldName, L"cost_sub_item_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[2]));
			if (wcscmp(fieldName, L"cost_sub_item_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[3]));
			if (wcscmp(fieldName, L"cost_sub_item_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[4]));
			if (wcscmp(fieldName, L"cost_sub_item_5_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[5]));
			if (wcscmp(fieldName, L"cost_sub_item_5_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[6]));
			if (wcscmp(fieldName, L"cost_sub_item_5_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_5[7]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[0]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[1]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[2]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[3]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[4]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[5]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[6]));
			if (wcscmp(fieldName, L"cost_sub_item_count_5_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_sub_item_count_5[7]));
			if (wcscmp(fieldName, L"cost_money_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_money[0]));
			if (wcscmp(fieldName, L"cost_money_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_money[1]));
			if (wcscmp(fieldName, L"cost_money_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_money[2]));
			if (wcscmp(fieldName, L"cost_money_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_money[3]));
			if (wcscmp(fieldName, L"cost_money_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_money[4]));
			if (wcscmp(fieldName, L"success_probability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_probability[0]));
			if (wcscmp(fieldName, L"success_probability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_probability[1]));
			if (wcscmp(fieldName, L"success_probability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_probability[2]));
			if (wcscmp(fieldName, L"success_probability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_probability[3]));
			if (wcscmp(fieldName, L"success_probability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_probability[4]));
			if (wcscmp(fieldName, L"use_success_probability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_success_probability[0]));
			if (wcscmp(fieldName, L"use_success_probability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_success_probability[1]));
			if (wcscmp(fieldName, L"use_success_probability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_success_probability[2]));
			if (wcscmp(fieldName, L"use_success_probability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_success_probability[3]));
			if (wcscmp(fieldName, L"use_success_probability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_success_probability[4]));
			if (wcscmp(fieldName, L"mileage_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&mileage_enable);
			if (wcscmp(fieldName, L"mileage_save_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_save[0]));
			if (wcscmp(fieldName, L"mileage_save_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_save[1]));
			if (wcscmp(fieldName, L"mileage_save_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_save[2]));
			if (wcscmp(fieldName, L"mileage_save_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_save[3]));
			if (wcscmp(fieldName, L"mileage_save_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_save[4]));
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_discount_minimum_value[0]));
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_discount_minimum_value[1]));
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_discount_minimum_value[2]));
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_discount_minimum_value[3]));
			if (wcscmp(fieldName, L"cost_item_discount_minimum_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_discount_minimum_value[4]));
			if (wcscmp(fieldName, L"success_option_list_id") == 0) return Data::AnyFieldToStringConverter::ToString(&success_option_list_id);
			if (wcscmp(fieldName, L"success_option_slot_number") == 0) return Data::AnyFieldToStringConverter::ToString(&success_option_slot_number);
			if (wcscmp(fieldName, L"fail_level_diff_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_level_diff[0]));
			if (wcscmp(fieldName, L"fail_level_diff_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_level_diff[1]));
			if (wcscmp(fieldName, L"fail_level_diff_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_level_diff[2]));
			if (wcscmp(fieldName, L"fail_level_diff_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_level_diff[3]));
			if (wcscmp(fieldName, L"fail_level_diff_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_level_diff[4]));
			if (wcscmp(fieldName, L"fixed_all_option") == 0) return Data::AnyFieldToStringConverter::ToString(&fixed_all_option);
			if (wcscmp(fieldName, L"success_option_list_id_all_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_option_list_id_all[0]));
			if (wcscmp(fieldName, L"success_option_list_id_all_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_option_list_id_all[1]));
			if (wcscmp(fieldName, L"success_option_list_id_all_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_option_list_id_all[2]));
			if (wcscmp(fieldName, L"success_option_list_id_all_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_option_list_id_all[3]));
			if (wcscmp(fieldName, L"success_option_list_id_all_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(success_option_list_id_all[4]));
			if (wcscmp(fieldName, L"success_option_list_id_all_count") == 0) return Data::AnyFieldToStringConverter::ToString(&success_option_list_id_all_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef cost_main_item[5];
int cost_main_item_tableId(){return 189;};
__int16 cost_main_item_count[5];
char Pad0[2];
Data::TableRef cost_sub_item_1[8];
int cost_sub_item_1_tableId(){return 189;};
__int16 cost_sub_item_count_1[8];
Data::TableRef cost_sub_item_2[8];
int cost_sub_item_2_tableId(){return 189;};
__int16 cost_sub_item_count_2[8];
Data::TableRef cost_sub_item_3[8];
int cost_sub_item_3_tableId(){return 189;};
__int16 cost_sub_item_count_3[8];
Data::TableRef cost_sub_item_4[8];
int cost_sub_item_4_tableId(){return 189;};
__int16 cost_sub_item_count_4[8];
Data::TableRef cost_sub_item_5[8];
int cost_sub_item_5_tableId(){return 189;};
__int16 cost_sub_item_count_5[8];
__int32 cost_money[5];
__int16 success_probability[5];
bool use_success_probability[5];
bool mileage_enable;
bool mileage_save[5];
__int8 cost_item_discount_minimum_value[5];
char Pad1[2];
__int32 success_option_list_id;
__int8 success_option_slot_number;
__int8 fail_level_diff[5];
bool fixed_all_option;
char Pad2[1];
__int32 success_option_list_id_all[5];
__int8 success_option_list_id_all_count;

		static TableVersion Version() { return TableVersion(6, 3); }
		static __int16 TableId() { return 198; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_RecordPtr // : DrRecordPtr
	{
		item_improve_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_improve_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}