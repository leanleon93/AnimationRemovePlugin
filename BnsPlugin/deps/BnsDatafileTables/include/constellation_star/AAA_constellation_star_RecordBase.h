/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct constellation_star_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"constellation") == 0) return constellation;
			if (wcscmp(fieldName, L"star_type") == 0) return star_type;
			if (wcscmp(fieldName, L"order") == 0) return order;
			if (wcscmp(fieldName, L"required_pc_level") == 0) return required_pc_level;
			if (wcscmp(fieldName, L"required_pc_mastery_level") == 0) return required_pc_mastery_level;
			if (wcscmp(fieldName, L"required_quest") == 0) return required_quest;
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return required_achievement_id;
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return required_achievement_step;
			if (wcscmp(fieldName, L"activate_probability") == 0) return activate_probability;
			if (wcscmp(fieldName, L"activate_cost_money") == 0) return activate_cost_money;
			if (wcscmp(fieldName, L"activate_cost_item") == 0) return activate_cost_item;
			if (wcscmp(fieldName, L"activate_cost_item_1") == 0) return activate_cost_item[0];
			if (wcscmp(fieldName, L"activate_cost_item_2") == 0) return activate_cost_item[1];
			if (wcscmp(fieldName, L"activate_cost_item_3") == 0) return activate_cost_item[2];
			if (wcscmp(fieldName, L"activate_cost_item_4") == 0) return activate_cost_item[3];
			if (wcscmp(fieldName, L"activate_cost_item_5") == 0) return activate_cost_item[4];
			if (wcscmp(fieldName, L"activate_cost_item_6") == 0) return activate_cost_item[5];
			if (wcscmp(fieldName, L"activate_cost_item_count") == 0) return activate_cost_item_count;
			if (wcscmp(fieldName, L"activate_cost_item_count_1") == 0) return activate_cost_item_count[0];
			if (wcscmp(fieldName, L"activate_cost_item_count_2") == 0) return activate_cost_item_count[1];
			if (wcscmp(fieldName, L"activate_cost_item_count_3") == 0) return activate_cost_item_count[2];
			if (wcscmp(fieldName, L"activate_cost_item_count_4") == 0) return activate_cost_item_count[3];
			if (wcscmp(fieldName, L"activate_cost_item_count_5") == 0) return activate_cost_item_count[4];
			if (wcscmp(fieldName, L"activate_cost_item_count_6") == 0) return activate_cost_item_count[5];
			if (wcscmp(fieldName, L"draw_option_cost_money") == 0) return draw_option_cost_money;
			if (wcscmp(fieldName, L"draw_option_cost_item") == 0) return draw_option_cost_item;
			if (wcscmp(fieldName, L"draw_option_cost_item_1") == 0) return draw_option_cost_item[0];
			if (wcscmp(fieldName, L"draw_option_cost_item_2") == 0) return draw_option_cost_item[1];
			if (wcscmp(fieldName, L"draw_option_cost_item_3") == 0) return draw_option_cost_item[2];
			if (wcscmp(fieldName, L"draw_option_cost_item_4") == 0) return draw_option_cost_item[3];
			if (wcscmp(fieldName, L"draw_option_cost_item_5") == 0) return draw_option_cost_item[4];
			if (wcscmp(fieldName, L"draw_option_cost_item_6") == 0) return draw_option_cost_item[5];
			if (wcscmp(fieldName, L"draw_option_cost_item_count") == 0) return draw_option_cost_item_count;
			if (wcscmp(fieldName, L"draw_option_cost_item_count_1") == 0) return draw_option_cost_item_count[0];
			if (wcscmp(fieldName, L"draw_option_cost_item_count_2") == 0) return draw_option_cost_item_count[1];
			if (wcscmp(fieldName, L"draw_option_cost_item_count_3") == 0) return draw_option_cost_item_count[2];
			if (wcscmp(fieldName, L"draw_option_cost_item_count_4") == 0) return draw_option_cost_item_count[3];
			if (wcscmp(fieldName, L"draw_option_cost_item_count_5") == 0) return draw_option_cost_item_count[4];
			if (wcscmp(fieldName, L"draw_option_cost_item_count_6") == 0) return draw_option_cost_item_count[5];
			if (wcscmp(fieldName, L"option_select_count") == 0) return option_select_count;
			if (wcscmp(fieldName, L"option") == 0) return option;
			if (wcscmp(fieldName, L"option_1") == 0) return option[0];
			if (wcscmp(fieldName, L"option_2") == 0) return option[1];
			if (wcscmp(fieldName, L"option_3") == 0) return option[2];
			if (wcscmp(fieldName, L"option_4") == 0) return option[3];
			if (wcscmp(fieldName, L"option_5") == 0) return option[4];
			if (wcscmp(fieldName, L"option_6") == 0) return option[5];
			if (wcscmp(fieldName, L"option_7") == 0) return option[6];
			if (wcscmp(fieldName, L"option_8") == 0) return option[7];
			if (wcscmp(fieldName, L"option_9") == 0) return option[8];
			if (wcscmp(fieldName, L"option_10") == 0) return option[9];
			if (wcscmp(fieldName, L"option_11") == 0) return option[10];
			if (wcscmp(fieldName, L"option_12") == 0) return option[11];
			if (wcscmp(fieldName, L"option_13") == 0) return option[12];
			if (wcscmp(fieldName, L"option_14") == 0) return option[13];
			if (wcscmp(fieldName, L"option_15") == 0) return option[14];
			if (wcscmp(fieldName, L"option_16") == 0) return option[15];
			if (wcscmp(fieldName, L"option_17") == 0) return option[16];
			if (wcscmp(fieldName, L"option_18") == 0) return option[17];
			if (wcscmp(fieldName, L"option_19") == 0) return option[18];
			if (wcscmp(fieldName, L"option_20") == 0) return option[19];
			if (wcscmp(fieldName, L"option_21") == 0) return option[20];
			if (wcscmp(fieldName, L"option_22") == 0) return option[21];
			if (wcscmp(fieldName, L"option_23") == 0) return option[22];
			if (wcscmp(fieldName, L"option_24") == 0) return option[23];
			if (wcscmp(fieldName, L"option_25") == 0) return option[24];
			if (wcscmp(fieldName, L"option_26") == 0) return option[25];
			if (wcscmp(fieldName, L"option_27") == 0) return option[26];
			if (wcscmp(fieldName, L"option_28") == 0) return option[27];
			if (wcscmp(fieldName, L"option_29") == 0) return option[28];
			if (wcscmp(fieldName, L"option_30") == 0) return option[29];
			if (wcscmp(fieldName, L"option_31") == 0) return option[30];
			if (wcscmp(fieldName, L"option_32") == 0) return option[31];
			if (wcscmp(fieldName, L"option_33") == 0) return option[32];
			if (wcscmp(fieldName, L"option_34") == 0) return option[33];
			if (wcscmp(fieldName, L"option_35") == 0) return option[34];
			if (wcscmp(fieldName, L"option_36") == 0) return option[35];
			if (wcscmp(fieldName, L"option_37") == 0) return option[36];
			if (wcscmp(fieldName, L"option_38") == 0) return option[37];
			if (wcscmp(fieldName, L"option_39") == 0) return option[38];
			if (wcscmp(fieldName, L"option_40") == 0) return option[39];
			if (wcscmp(fieldName, L"option_41") == 0) return option[40];
			if (wcscmp(fieldName, L"option_42") == 0) return option[41];
			if (wcscmp(fieldName, L"option_43") == 0) return option[42];
			if (wcscmp(fieldName, L"option_44") == 0) return option[43];
			if (wcscmp(fieldName, L"option_45") == 0) return option[44];
			if (wcscmp(fieldName, L"option_46") == 0) return option[45];
			if (wcscmp(fieldName, L"option_47") == 0) return option[46];
			if (wcscmp(fieldName, L"option_48") == 0) return option[47];
			if (wcscmp(fieldName, L"option_49") == 0) return option[48];
			if (wcscmp(fieldName, L"option_50") == 0) return option[49];
			if (wcscmp(fieldName, L"option_weight") == 0) return option_weight;
			if (wcscmp(fieldName, L"option_weight_1") == 0) return option_weight[0];
			if (wcscmp(fieldName, L"option_weight_2") == 0) return option_weight[1];
			if (wcscmp(fieldName, L"option_weight_3") == 0) return option_weight[2];
			if (wcscmp(fieldName, L"option_weight_4") == 0) return option_weight[3];
			if (wcscmp(fieldName, L"option_weight_5") == 0) return option_weight[4];
			if (wcscmp(fieldName, L"option_weight_6") == 0) return option_weight[5];
			if (wcscmp(fieldName, L"option_weight_7") == 0) return option_weight[6];
			if (wcscmp(fieldName, L"option_weight_8") == 0) return option_weight[7];
			if (wcscmp(fieldName, L"option_weight_9") == 0) return option_weight[8];
			if (wcscmp(fieldName, L"option_weight_10") == 0) return option_weight[9];
			if (wcscmp(fieldName, L"option_weight_11") == 0) return option_weight[10];
			if (wcscmp(fieldName, L"option_weight_12") == 0) return option_weight[11];
			if (wcscmp(fieldName, L"option_weight_13") == 0) return option_weight[12];
			if (wcscmp(fieldName, L"option_weight_14") == 0) return option_weight[13];
			if (wcscmp(fieldName, L"option_weight_15") == 0) return option_weight[14];
			if (wcscmp(fieldName, L"option_weight_16") == 0) return option_weight[15];
			if (wcscmp(fieldName, L"option_weight_17") == 0) return option_weight[16];
			if (wcscmp(fieldName, L"option_weight_18") == 0) return option_weight[17];
			if (wcscmp(fieldName, L"option_weight_19") == 0) return option_weight[18];
			if (wcscmp(fieldName, L"option_weight_20") == 0) return option_weight[19];
			if (wcscmp(fieldName, L"option_weight_21") == 0) return option_weight[20];
			if (wcscmp(fieldName, L"option_weight_22") == 0) return option_weight[21];
			if (wcscmp(fieldName, L"option_weight_23") == 0) return option_weight[22];
			if (wcscmp(fieldName, L"option_weight_24") == 0) return option_weight[23];
			if (wcscmp(fieldName, L"option_weight_25") == 0) return option_weight[24];
			if (wcscmp(fieldName, L"option_weight_26") == 0) return option_weight[25];
			if (wcscmp(fieldName, L"option_weight_27") == 0) return option_weight[26];
			if (wcscmp(fieldName, L"option_weight_28") == 0) return option_weight[27];
			if (wcscmp(fieldName, L"option_weight_29") == 0) return option_weight[28];
			if (wcscmp(fieldName, L"option_weight_30") == 0) return option_weight[29];
			if (wcscmp(fieldName, L"option_weight_31") == 0) return option_weight[30];
			if (wcscmp(fieldName, L"option_weight_32") == 0) return option_weight[31];
			if (wcscmp(fieldName, L"option_weight_33") == 0) return option_weight[32];
			if (wcscmp(fieldName, L"option_weight_34") == 0) return option_weight[33];
			if (wcscmp(fieldName, L"option_weight_35") == 0) return option_weight[34];
			if (wcscmp(fieldName, L"option_weight_36") == 0) return option_weight[35];
			if (wcscmp(fieldName, L"option_weight_37") == 0) return option_weight[36];
			if (wcscmp(fieldName, L"option_weight_38") == 0) return option_weight[37];
			if (wcscmp(fieldName, L"option_weight_39") == 0) return option_weight[38];
			if (wcscmp(fieldName, L"option_weight_40") == 0) return option_weight[39];
			if (wcscmp(fieldName, L"option_weight_41") == 0) return option_weight[40];
			if (wcscmp(fieldName, L"option_weight_42") == 0) return option_weight[41];
			if (wcscmp(fieldName, L"option_weight_43") == 0) return option_weight[42];
			if (wcscmp(fieldName, L"option_weight_44") == 0) return option_weight[43];
			if (wcscmp(fieldName, L"option_weight_45") == 0) return option_weight[44];
			if (wcscmp(fieldName, L"option_weight_46") == 0) return option_weight[45];
			if (wcscmp(fieldName, L"option_weight_47") == 0) return option_weight[46];
			if (wcscmp(fieldName, L"option_weight_48") == 0) return option_weight[47];
			if (wcscmp(fieldName, L"option_weight_49") == 0) return option_weight[48];
			if (wcscmp(fieldName, L"option_weight_50") == 0) return option_weight[49];
			if (wcscmp(fieldName, L"option_weight_total") == 0) return option_weight_total;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"constellation") == 0) return Data::AnyFieldToStringConverter::ToString(&constellation);
			if (wcscmp(fieldName, L"star_type") == 0) return Data::AnyFieldToStringConverter::ToString(&star_type);
			if (wcscmp(fieldName, L"order") == 0) return Data::AnyFieldToStringConverter::ToString(&order);
			if (wcscmp(fieldName, L"required_pc_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_pc_level);
			if (wcscmp(fieldName, L"required_pc_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_pc_mastery_level);
			if (wcscmp(fieldName, L"required_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&required_quest);
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_id);
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_step);
			if (wcscmp(fieldName, L"activate_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_probability);
			if (wcscmp(fieldName, L"activate_cost_money") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_cost_money);
			if (wcscmp(fieldName, L"activate_cost_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item[0]));
			if (wcscmp(fieldName, L"activate_cost_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item[1]));
			if (wcscmp(fieldName, L"activate_cost_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item[2]));
			if (wcscmp(fieldName, L"activate_cost_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item[3]));
			if (wcscmp(fieldName, L"activate_cost_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item[4]));
			if (wcscmp(fieldName, L"activate_cost_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item[5]));
			if (wcscmp(fieldName, L"activate_cost_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item_count[0]));
			if (wcscmp(fieldName, L"activate_cost_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item_count[1]));
			if (wcscmp(fieldName, L"activate_cost_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item_count[2]));
			if (wcscmp(fieldName, L"activate_cost_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item_count[3]));
			if (wcscmp(fieldName, L"activate_cost_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item_count[4]));
			if (wcscmp(fieldName, L"activate_cost_item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_cost_item_count[5]));
			if (wcscmp(fieldName, L"draw_option_cost_money") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_option_cost_money);
			if (wcscmp(fieldName, L"draw_option_cost_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item[0]));
			if (wcscmp(fieldName, L"draw_option_cost_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item[1]));
			if (wcscmp(fieldName, L"draw_option_cost_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item[2]));
			if (wcscmp(fieldName, L"draw_option_cost_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item[3]));
			if (wcscmp(fieldName, L"draw_option_cost_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item[4]));
			if (wcscmp(fieldName, L"draw_option_cost_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item[5]));
			if (wcscmp(fieldName, L"draw_option_cost_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item_count[0]));
			if (wcscmp(fieldName, L"draw_option_cost_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item_count[1]));
			if (wcscmp(fieldName, L"draw_option_cost_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item_count[2]));
			if (wcscmp(fieldName, L"draw_option_cost_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item_count[3]));
			if (wcscmp(fieldName, L"draw_option_cost_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item_count[4]));
			if (wcscmp(fieldName, L"draw_option_cost_item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_option_cost_item_count[5]));
			if (wcscmp(fieldName, L"option_select_count") == 0) return Data::AnyFieldToStringConverter::ToString(&option_select_count);
			if (wcscmp(fieldName, L"option_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[0]));
			if (wcscmp(fieldName, L"option_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[1]));
			if (wcscmp(fieldName, L"option_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[2]));
			if (wcscmp(fieldName, L"option_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[3]));
			if (wcscmp(fieldName, L"option_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[4]));
			if (wcscmp(fieldName, L"option_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[5]));
			if (wcscmp(fieldName, L"option_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[6]));
			if (wcscmp(fieldName, L"option_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[7]));
			if (wcscmp(fieldName, L"option_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[8]));
			if (wcscmp(fieldName, L"option_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[9]));
			if (wcscmp(fieldName, L"option_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[10]));
			if (wcscmp(fieldName, L"option_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[11]));
			if (wcscmp(fieldName, L"option_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[12]));
			if (wcscmp(fieldName, L"option_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[13]));
			if (wcscmp(fieldName, L"option_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[14]));
			if (wcscmp(fieldName, L"option_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[15]));
			if (wcscmp(fieldName, L"option_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[16]));
			if (wcscmp(fieldName, L"option_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[17]));
			if (wcscmp(fieldName, L"option_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[18]));
			if (wcscmp(fieldName, L"option_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[19]));
			if (wcscmp(fieldName, L"option_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[20]));
			if (wcscmp(fieldName, L"option_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[21]));
			if (wcscmp(fieldName, L"option_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[22]));
			if (wcscmp(fieldName, L"option_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[23]));
			if (wcscmp(fieldName, L"option_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[24]));
			if (wcscmp(fieldName, L"option_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[25]));
			if (wcscmp(fieldName, L"option_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[26]));
			if (wcscmp(fieldName, L"option_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[27]));
			if (wcscmp(fieldName, L"option_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[28]));
			if (wcscmp(fieldName, L"option_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[29]));
			if (wcscmp(fieldName, L"option_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[30]));
			if (wcscmp(fieldName, L"option_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[31]));
			if (wcscmp(fieldName, L"option_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[32]));
			if (wcscmp(fieldName, L"option_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[33]));
			if (wcscmp(fieldName, L"option_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[34]));
			if (wcscmp(fieldName, L"option_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[35]));
			if (wcscmp(fieldName, L"option_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[36]));
			if (wcscmp(fieldName, L"option_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[37]));
			if (wcscmp(fieldName, L"option_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[38]));
			if (wcscmp(fieldName, L"option_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[39]));
			if (wcscmp(fieldName, L"option_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[40]));
			if (wcscmp(fieldName, L"option_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[41]));
			if (wcscmp(fieldName, L"option_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[42]));
			if (wcscmp(fieldName, L"option_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[43]));
			if (wcscmp(fieldName, L"option_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[44]));
			if (wcscmp(fieldName, L"option_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[45]));
			if (wcscmp(fieldName, L"option_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[46]));
			if (wcscmp(fieldName, L"option_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[47]));
			if (wcscmp(fieldName, L"option_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[48]));
			if (wcscmp(fieldName, L"option_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(option[49]));
			if (wcscmp(fieldName, L"option_weight_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[0]));
			if (wcscmp(fieldName, L"option_weight_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[1]));
			if (wcscmp(fieldName, L"option_weight_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[2]));
			if (wcscmp(fieldName, L"option_weight_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[3]));
			if (wcscmp(fieldName, L"option_weight_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[4]));
			if (wcscmp(fieldName, L"option_weight_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[5]));
			if (wcscmp(fieldName, L"option_weight_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[6]));
			if (wcscmp(fieldName, L"option_weight_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[7]));
			if (wcscmp(fieldName, L"option_weight_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[8]));
			if (wcscmp(fieldName, L"option_weight_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[9]));
			if (wcscmp(fieldName, L"option_weight_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[10]));
			if (wcscmp(fieldName, L"option_weight_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[11]));
			if (wcscmp(fieldName, L"option_weight_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[12]));
			if (wcscmp(fieldName, L"option_weight_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[13]));
			if (wcscmp(fieldName, L"option_weight_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[14]));
			if (wcscmp(fieldName, L"option_weight_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[15]));
			if (wcscmp(fieldName, L"option_weight_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[16]));
			if (wcscmp(fieldName, L"option_weight_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[17]));
			if (wcscmp(fieldName, L"option_weight_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[18]));
			if (wcscmp(fieldName, L"option_weight_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[19]));
			if (wcscmp(fieldName, L"option_weight_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[20]));
			if (wcscmp(fieldName, L"option_weight_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[21]));
			if (wcscmp(fieldName, L"option_weight_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[22]));
			if (wcscmp(fieldName, L"option_weight_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[23]));
			if (wcscmp(fieldName, L"option_weight_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[24]));
			if (wcscmp(fieldName, L"option_weight_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[25]));
			if (wcscmp(fieldName, L"option_weight_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[26]));
			if (wcscmp(fieldName, L"option_weight_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[27]));
			if (wcscmp(fieldName, L"option_weight_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[28]));
			if (wcscmp(fieldName, L"option_weight_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[29]));
			if (wcscmp(fieldName, L"option_weight_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[30]));
			if (wcscmp(fieldName, L"option_weight_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[31]));
			if (wcscmp(fieldName, L"option_weight_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[32]));
			if (wcscmp(fieldName, L"option_weight_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[33]));
			if (wcscmp(fieldName, L"option_weight_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[34]));
			if (wcscmp(fieldName, L"option_weight_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[35]));
			if (wcscmp(fieldName, L"option_weight_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[36]));
			if (wcscmp(fieldName, L"option_weight_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[37]));
			if (wcscmp(fieldName, L"option_weight_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[38]));
			if (wcscmp(fieldName, L"option_weight_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[39]));
			if (wcscmp(fieldName, L"option_weight_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[40]));
			if (wcscmp(fieldName, L"option_weight_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[41]));
			if (wcscmp(fieldName, L"option_weight_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[42]));
			if (wcscmp(fieldName, L"option_weight_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[43]));
			if (wcscmp(fieldName, L"option_weight_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[44]));
			if (wcscmp(fieldName, L"option_weight_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[45]));
			if (wcscmp(fieldName, L"option_weight_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[46]));
			if (wcscmp(fieldName, L"option_weight_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[47]));
			if (wcscmp(fieldName, L"option_weight_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[48]));
			if (wcscmp(fieldName, L"option_weight_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(option_weight[49]));
			if (wcscmp(fieldName, L"option_weight_total") == 0) return Data::AnyFieldToStringConverter::ToString(&option_weight_total);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};
Data::TableRef constellation;
int constellation_tableId(){return 63;};
__int8 star_type;
__int8 order;
__int8 required_pc_level;
__int8 required_pc_mastery_level;
Data::TableRef required_quest;
int required_quest_tableId(){return 283;};
__int16 required_achievement_id;
__int16 required_achievement_step;
__int16 activate_probability;
char Pad0[2];
__int32 activate_cost_money;
Data::TableRef activate_cost_item[6];
int activate_cost_item_tableId(){return 189;};
__int16 activate_cost_item_count[6];
__int32 draw_option_cost_money;
Data::TableRef draw_option_cost_item[6];
int draw_option_cost_item_tableId(){return 189;};
__int16 draw_option_cost_item_count[6];
__int8 option_select_count;
char Pad1[3];
Data::TableRef option[50];
int option_tableId(){return 65;};
__int16 option_weight[50];
__int32 option_weight_total;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 64; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) constellation_star_RecordPtr // : DrRecordPtr
	{
		constellation_star_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::constellation_star_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}