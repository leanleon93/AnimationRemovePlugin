/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guild_craft_recipe_Record : DrEl
	{
	private:
		static std::wstring Get_craft_type_EnumValue(__int8 value);
		static std::wstring Get_production_type_EnumValue(__int8 value);
		static std::wstring Get_brand_material_condition_type_EnumValue(__int8 value);
		static std::wstring Get_result_receive_type_EnumValue(__int8 value);
		static std::wstring Get_use_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"craft_type") == 0) return craft_type;
			if (wcscmp(fieldName, L"required_guild_level") == 0) return required_guild_level;
			if (wcscmp(fieldName, L"required_faction") == 0) return required_faction;
			if (wcscmp(fieldName, L"production_type") == 0) return production_type;
			if (wcscmp(fieldName, L"production_type_1") == 0) return production_type[0];
			if (wcscmp(fieldName, L"production_type_2") == 0) return production_type[1];
			if (wcscmp(fieldName, L"production_type_3") == 0) return production_type[2];
			if (wcscmp(fieldName, L"production_type_4") == 0) return production_type[3];
			if (wcscmp(fieldName, L"production_type_5") == 0) return production_type[4];
			if (wcscmp(fieldName, L"production_type_6") == 0) return production_type[5];
			if (wcscmp(fieldName, L"production_type_7") == 0) return production_type[6];
			if (wcscmp(fieldName, L"production_type_required_exp") == 0) return production_type_required_exp;
			if (wcscmp(fieldName, L"production_type_required_exp_1") == 0) return production_type_required_exp[0];
			if (wcscmp(fieldName, L"production_type_required_exp_2") == 0) return production_type_required_exp[1];
			if (wcscmp(fieldName, L"production_type_required_exp_3") == 0) return production_type_required_exp[2];
			if (wcscmp(fieldName, L"production_type_required_exp_4") == 0) return production_type_required_exp[3];
			if (wcscmp(fieldName, L"production_type_required_exp_5") == 0) return production_type_required_exp[4];
			if (wcscmp(fieldName, L"production_type_required_exp_6") == 0) return production_type_required_exp[5];
			if (wcscmp(fieldName, L"production_type_required_exp_7") == 0) return production_type_required_exp[6];
			if (wcscmp(fieldName, L"production_type_required_pc_count") == 0) return production_type_required_pc_count;
			if (wcscmp(fieldName, L"production_type_required_pc_count_1") == 0) return production_type_required_pc_count[0];
			if (wcscmp(fieldName, L"production_type_required_pc_count_2") == 0) return production_type_required_pc_count[1];
			if (wcscmp(fieldName, L"production_type_required_pc_count_3") == 0) return production_type_required_pc_count[2];
			if (wcscmp(fieldName, L"production_type_required_pc_count_4") == 0) return production_type_required_pc_count[3];
			if (wcscmp(fieldName, L"production_type_required_pc_count_5") == 0) return production_type_required_pc_count[4];
			if (wcscmp(fieldName, L"production_type_required_pc_count_6") == 0) return production_type_required_pc_count[5];
			if (wcscmp(fieldName, L"production_type_required_pc_count_7") == 0) return production_type_required_pc_count[6];
			if (wcscmp(fieldName, L"contract_money") == 0) return contract_money;
			if (wcscmp(fieldName, L"contract_item") == 0) return contract_item;
			if (wcscmp(fieldName, L"contract_item_1") == 0) return contract_item[0];
			if (wcscmp(fieldName, L"contract_item_2") == 0) return contract_item[1];
			if (wcscmp(fieldName, L"contract_item_3") == 0) return contract_item[2];
			if (wcscmp(fieldName, L"contract_item_4") == 0) return contract_item[3];
			if (wcscmp(fieldName, L"contract_item_5") == 0) return contract_item[4];
			if (wcscmp(fieldName, L"contract_item_count") == 0) return contract_item_count;
			if (wcscmp(fieldName, L"contract_item_count_1") == 0) return contract_item_count[0];
			if (wcscmp(fieldName, L"contract_item_count_2") == 0) return contract_item_count[1];
			if (wcscmp(fieldName, L"contract_item_count_3") == 0) return contract_item_count[2];
			if (wcscmp(fieldName, L"contract_item_count_4") == 0) return contract_item_count[3];
			if (wcscmp(fieldName, L"contract_item_count_5") == 0) return contract_item_count[4];
			if (wcscmp(fieldName, L"contract_bm_item") == 0) return contract_bm_item;
			if (wcscmp(fieldName, L"contract_bm_item_count") == 0) return contract_bm_item_count;
			if (wcscmp(fieldName, L"rent_bm_item") == 0) return rent_bm_item;
			if (wcscmp(fieldName, L"rent_bm_item_count") == 0) return rent_bm_item_count;
			if (wcscmp(fieldName, L"material") == 0) return material;
			if (wcscmp(fieldName, L"material_1") == 0) return material[0];
			if (wcscmp(fieldName, L"material_2") == 0) return material[1];
			if (wcscmp(fieldName, L"material_3") == 0) return material[2];
			if (wcscmp(fieldName, L"material_4") == 0) return material[3];
			if (wcscmp(fieldName, L"material_5") == 0) return material[4];
			if (wcscmp(fieldName, L"material_6") == 0) return material[5];
			if (wcscmp(fieldName, L"material_7") == 0) return material[6];
			if (wcscmp(fieldName, L"material_8") == 0) return material[7];
			if (wcscmp(fieldName, L"material_9") == 0) return material[8];
			if (wcscmp(fieldName, L"material_10") == 0) return material[9];
			if (wcscmp(fieldName, L"material_11") == 0) return material[10];
			if (wcscmp(fieldName, L"material_12") == 0) return material[11];
			if (wcscmp(fieldName, L"material_13") == 0) return material[12];
			if (wcscmp(fieldName, L"material_14") == 0) return material[13];
			if (wcscmp(fieldName, L"material_15") == 0) return material[14];
			if (wcscmp(fieldName, L"material_count") == 0) return material_count;
			if (wcscmp(fieldName, L"material_count_1") == 0) return material_count[0];
			if (wcscmp(fieldName, L"material_count_2") == 0) return material_count[1];
			if (wcscmp(fieldName, L"material_count_3") == 0) return material_count[2];
			if (wcscmp(fieldName, L"material_count_4") == 0) return material_count[3];
			if (wcscmp(fieldName, L"material_count_5") == 0) return material_count[4];
			if (wcscmp(fieldName, L"material_count_6") == 0) return material_count[5];
			if (wcscmp(fieldName, L"material_count_7") == 0) return material_count[6];
			if (wcscmp(fieldName, L"material_count_8") == 0) return material_count[7];
			if (wcscmp(fieldName, L"material_count_9") == 0) return material_count[8];
			if (wcscmp(fieldName, L"material_count_10") == 0) return material_count[9];
			if (wcscmp(fieldName, L"material_count_11") == 0) return material_count[10];
			if (wcscmp(fieldName, L"material_count_12") == 0) return material_count[11];
			if (wcscmp(fieldName, L"material_count_13") == 0) return material_count[12];
			if (wcscmp(fieldName, L"material_count_14") == 0) return material_count[13];
			if (wcscmp(fieldName, L"material_count_15") == 0) return material_count[14];
			if (wcscmp(fieldName, L"material_donation_point") == 0) return material_donation_point;
			if (wcscmp(fieldName, L"material_donation_point_1") == 0) return material_donation_point[0];
			if (wcscmp(fieldName, L"material_donation_point_2") == 0) return material_donation_point[1];
			if (wcscmp(fieldName, L"material_donation_point_3") == 0) return material_donation_point[2];
			if (wcscmp(fieldName, L"material_donation_point_4") == 0) return material_donation_point[3];
			if (wcscmp(fieldName, L"material_donation_point_5") == 0) return material_donation_point[4];
			if (wcscmp(fieldName, L"material_donation_point_6") == 0) return material_donation_point[5];
			if (wcscmp(fieldName, L"material_donation_point_7") == 0) return material_donation_point[6];
			if (wcscmp(fieldName, L"material_donation_point_8") == 0) return material_donation_point[7];
			if (wcscmp(fieldName, L"material_donation_point_9") == 0) return material_donation_point[8];
			if (wcscmp(fieldName, L"material_donation_point_10") == 0) return material_donation_point[9];
			if (wcscmp(fieldName, L"material_donation_point_11") == 0) return material_donation_point[10];
			if (wcscmp(fieldName, L"material_donation_point_12") == 0) return material_donation_point[11];
			if (wcscmp(fieldName, L"material_donation_point_13") == 0) return material_donation_point[12];
			if (wcscmp(fieldName, L"material_donation_point_14") == 0) return material_donation_point[13];
			if (wcscmp(fieldName, L"material_donation_point_15") == 0) return material_donation_point[14];
			if (wcscmp(fieldName, L"brand_material") == 0) return brand_material;
			if (wcscmp(fieldName, L"brand_material_1") == 0) return brand_material[0];
			if (wcscmp(fieldName, L"brand_material_2") == 0) return brand_material[1];
			if (wcscmp(fieldName, L"brand_material_3") == 0) return brand_material[2];
			if (wcscmp(fieldName, L"brand_material_condition_type") == 0) return brand_material_condition_type;
			if (wcscmp(fieldName, L"brand_material_condition_type_1") == 0) return brand_material_condition_type[0];
			if (wcscmp(fieldName, L"brand_material_condition_type_2") == 0) return brand_material_condition_type[1];
			if (wcscmp(fieldName, L"brand_material_condition_type_3") == 0) return brand_material_condition_type[2];
			if (wcscmp(fieldName, L"brand_material_count") == 0) return brand_material_count;
			if (wcscmp(fieldName, L"brand_material_count_1") == 0) return brand_material_count[0];
			if (wcscmp(fieldName, L"brand_material_count_2") == 0) return brand_material_count[1];
			if (wcscmp(fieldName, L"brand_material_count_3") == 0) return brand_material_count[2];
			if (wcscmp(fieldName, L"brand_material_donation_point") == 0) return brand_material_donation_point;
			if (wcscmp(fieldName, L"brand_material_donation_point_1") == 0) return brand_material_donation_point[0];
			if (wcscmp(fieldName, L"brand_material_donation_point_2") == 0) return brand_material_donation_point[1];
			if (wcscmp(fieldName, L"brand_material_donation_point_3") == 0) return brand_material_donation_point[2];
			if (wcscmp(fieldName, L"time_cost") == 0) return time_cost;
			if (wcscmp(fieldName, L"result") == 0) return result;
			if (wcscmp(fieldName, L"result_count") == 0) return result_count;
			if (wcscmp(fieldName, L"result_bonus_guildlevel") == 0) return result_bonus_guildlevel;
			if (wcscmp(fieldName, L"result_bonus_count") == 0) return result_bonus_count;
			if (wcscmp(fieldName, L"result_receive_type") == 0) return result_receive_type;
			if (wcscmp(fieldName, L"use_state") == 0) return use_state;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"craft_type") == 0) return Data::AnyFieldToStringConverter::ToString(&craft_type);
			if (wcscmp(fieldName, L"required_guild_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_guild_level);
			if (wcscmp(fieldName, L"required_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&required_faction);
			if (wcscmp(fieldName, L"production_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[0]));
			if (wcscmp(fieldName, L"production_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[1]));
			if (wcscmp(fieldName, L"production_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[2]));
			if (wcscmp(fieldName, L"production_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[3]));
			if (wcscmp(fieldName, L"production_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[4]));
			if (wcscmp(fieldName, L"production_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[5]));
			if (wcscmp(fieldName, L"production_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type[6]));
			if (wcscmp(fieldName, L"production_type_required_exp_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[0]));
			if (wcscmp(fieldName, L"production_type_required_exp_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[1]));
			if (wcscmp(fieldName, L"production_type_required_exp_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[2]));
			if (wcscmp(fieldName, L"production_type_required_exp_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[3]));
			if (wcscmp(fieldName, L"production_type_required_exp_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[4]));
			if (wcscmp(fieldName, L"production_type_required_exp_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[5]));
			if (wcscmp(fieldName, L"production_type_required_exp_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_exp[6]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[0]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[1]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[2]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[3]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[4]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[5]));
			if (wcscmp(fieldName, L"production_type_required_pc_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(production_type_required_pc_count[6]));
			if (wcscmp(fieldName, L"contract_money") == 0) return Data::AnyFieldToStringConverter::ToString(&contract_money);
			if (wcscmp(fieldName, L"contract_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item[0]));
			if (wcscmp(fieldName, L"contract_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item[1]));
			if (wcscmp(fieldName, L"contract_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item[2]));
			if (wcscmp(fieldName, L"contract_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item[3]));
			if (wcscmp(fieldName, L"contract_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item[4]));
			if (wcscmp(fieldName, L"contract_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item_count[0]));
			if (wcscmp(fieldName, L"contract_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item_count[1]));
			if (wcscmp(fieldName, L"contract_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item_count[2]));
			if (wcscmp(fieldName, L"contract_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item_count[3]));
			if (wcscmp(fieldName, L"contract_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(contract_item_count[4]));
			if (wcscmp(fieldName, L"contract_bm_item") == 0) return Data::AnyFieldToStringConverter::ToString(&contract_bm_item);
			if (wcscmp(fieldName, L"contract_bm_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&contract_bm_item_count);
			if (wcscmp(fieldName, L"rent_bm_item") == 0) return Data::AnyFieldToStringConverter::ToString(&rent_bm_item);
			if (wcscmp(fieldName, L"rent_bm_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&rent_bm_item_count);
			if (wcscmp(fieldName, L"material_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[0]));
			if (wcscmp(fieldName, L"material_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[1]));
			if (wcscmp(fieldName, L"material_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[2]));
			if (wcscmp(fieldName, L"material_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[3]));
			if (wcscmp(fieldName, L"material_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[4]));
			if (wcscmp(fieldName, L"material_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[5]));
			if (wcscmp(fieldName, L"material_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[6]));
			if (wcscmp(fieldName, L"material_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[7]));
			if (wcscmp(fieldName, L"material_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[8]));
			if (wcscmp(fieldName, L"material_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[9]));
			if (wcscmp(fieldName, L"material_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[10]));
			if (wcscmp(fieldName, L"material_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[11]));
			if (wcscmp(fieldName, L"material_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[12]));
			if (wcscmp(fieldName, L"material_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[13]));
			if (wcscmp(fieldName, L"material_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[14]));
			if (wcscmp(fieldName, L"material_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[0]));
			if (wcscmp(fieldName, L"material_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[1]));
			if (wcscmp(fieldName, L"material_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[2]));
			if (wcscmp(fieldName, L"material_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[3]));
			if (wcscmp(fieldName, L"material_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[4]));
			if (wcscmp(fieldName, L"material_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[5]));
			if (wcscmp(fieldName, L"material_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[6]));
			if (wcscmp(fieldName, L"material_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[7]));
			if (wcscmp(fieldName, L"material_count_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[8]));
			if (wcscmp(fieldName, L"material_count_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[9]));
			if (wcscmp(fieldName, L"material_count_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[10]));
			if (wcscmp(fieldName, L"material_count_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[11]));
			if (wcscmp(fieldName, L"material_count_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[12]));
			if (wcscmp(fieldName, L"material_count_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[13]));
			if (wcscmp(fieldName, L"material_count_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_count[14]));
			if (wcscmp(fieldName, L"material_donation_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[0]));
			if (wcscmp(fieldName, L"material_donation_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[1]));
			if (wcscmp(fieldName, L"material_donation_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[2]));
			if (wcscmp(fieldName, L"material_donation_point_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[3]));
			if (wcscmp(fieldName, L"material_donation_point_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[4]));
			if (wcscmp(fieldName, L"material_donation_point_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[5]));
			if (wcscmp(fieldName, L"material_donation_point_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[6]));
			if (wcscmp(fieldName, L"material_donation_point_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[7]));
			if (wcscmp(fieldName, L"material_donation_point_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[8]));
			if (wcscmp(fieldName, L"material_donation_point_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[9]));
			if (wcscmp(fieldName, L"material_donation_point_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[10]));
			if (wcscmp(fieldName, L"material_donation_point_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[11]));
			if (wcscmp(fieldName, L"material_donation_point_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[12]));
			if (wcscmp(fieldName, L"material_donation_point_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[13]));
			if (wcscmp(fieldName, L"material_donation_point_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_donation_point[14]));
			if (wcscmp(fieldName, L"brand_material_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[0]));
			if (wcscmp(fieldName, L"brand_material_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[1]));
			if (wcscmp(fieldName, L"brand_material_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[2]));
			if (wcscmp(fieldName, L"brand_material_condition_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[0]));
			if (wcscmp(fieldName, L"brand_material_condition_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[1]));
			if (wcscmp(fieldName, L"brand_material_condition_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[2]));
			if (wcscmp(fieldName, L"brand_material_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_count[0]));
			if (wcscmp(fieldName, L"brand_material_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_count[1]));
			if (wcscmp(fieldName, L"brand_material_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_count[2]));
			if (wcscmp(fieldName, L"brand_material_donation_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_donation_point[0]));
			if (wcscmp(fieldName, L"brand_material_donation_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_donation_point[1]));
			if (wcscmp(fieldName, L"brand_material_donation_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_donation_point[2]));
			if (wcscmp(fieldName, L"time_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&time_cost);
			if (wcscmp(fieldName, L"result") == 0) return Data::AnyFieldToStringConverter::ToString(&result);
			if (wcscmp(fieldName, L"result_count") == 0) return Data::AnyFieldToStringConverter::ToString(&result_count);
			if (wcscmp(fieldName, L"result_bonus_guildlevel") == 0) return Data::AnyFieldToStringConverter::ToString(&result_bonus_guildlevel);
			if (wcscmp(fieldName, L"result_bonus_count") == 0) return Data::AnyFieldToStringConverter::ToString(&result_bonus_count);
			if (wcscmp(fieldName, L"result_receive_type") == 0) return Data::AnyFieldToStringConverter::ToString(&result_receive_type);
			if (wcscmp(fieldName, L"use_state") == 0) return Data::AnyFieldToStringConverter::ToString(&use_state);

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
		wchar_t* alias;
__int8 craft_type;
std::wstring craft_type_EnumValue() const {return Get_craft_type_EnumValue(craft_type);};
__int8 required_guild_level;
char Pad0[2];
Data::TableRef required_faction;
int required_faction_tableId(){return 130;};
__int8 production_type[7];
std::wstring production_type_EnumValue(int index) const {return Get_production_type_EnumValue(production_type[index]);};
char Pad1[1];
__int16 production_type_required_exp[7];
__int8 production_type_required_pc_count[7];
char Pad2[3];
__int32 contract_money;
Data::TableRef contract_item[5];
int contract_item_tableId(){return 189;};
__int16 contract_item_count[5];
char Pad3[2];
Data::TableRef contract_bm_item;
int contract_bm_item_tableId(){return 189;};
__int16 contract_bm_item_count;
char Pad4[2];
Data::TableRef rent_bm_item;
int rent_bm_item_tableId(){return 189;};
__int16 rent_bm_item_count;
char Pad5[2];
Data::TableRef material[15];
int material_tableId(){return 189;};
__int16 material_count[15];
__int16 material_donation_point[15];
Data::TableRef brand_material[3];
int brand_material_tableId(){return 183;};
__int8 brand_material_condition_type[3];
std::wstring brand_material_condition_type_EnumValue(int index) const {return Get_brand_material_condition_type_EnumValue(brand_material_condition_type[index]);};
char Pad6[1];
__int16 brand_material_count[3];
__int16 brand_material_donation_point[3];
__int32 time_cost;
Data::TableRef result;
int result_tableId(){return 189;};
__int16 result_count;
__int8 result_bonus_guildlevel;
char Pad7[1];
__int16 result_bonus_count;
__int8 result_receive_type;
std::wstring result_receive_type_EnumValue() const {return Get_result_receive_type_EnumValue(result_receive_type);};
__int8 use_state;
std::wstring use_state_EnumValue() const {return Get_use_state_EnumValue(use_state);};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 164; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_craft_recipe_RecordPtr // : DrRecordPtr
	{
		guild_craft_recipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_craft_recipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}