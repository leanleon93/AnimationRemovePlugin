/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_weapon_Record : item_Record
	{
	private:
		static std::wstring Get_weapon_type_EnumValue(__int8 value);
		static std::wstring Get_gem_slot_type_EnumValue(__int8 value);
		static std::wstring Get_weapon_appearance_change_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = item_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_type") == 0) return weapon_type;
			if (wcscmp(fieldName, L"equip_show") == 0) return equip_show;
			if (wcscmp(fieldName, L"default_gem_level") == 0) return default_gem_level;
			if (wcscmp(fieldName, L"max_gem_slot_level") == 0) return max_gem_slot_level;
			if (wcscmp(fieldName, L"identify_enable") == 0) return identify_enable;
			if (wcscmp(fieldName, L"identify_grocery") == 0) return identify_grocery;
			if (wcscmp(fieldName, L"gem_slot_by_probability") == 0) return gem_slot_by_probability;
			if (wcscmp(fieldName, L"gem_slot_type") == 0) return gem_slot_type;
			if (wcscmp(fieldName, L"gem_slot_type_1") == 0) return gem_slot_type[0];
			if (wcscmp(fieldName, L"gem_slot_type_2") == 0) return gem_slot_type[1];
			if (wcscmp(fieldName, L"gem_slot_type_3") == 0) return gem_slot_type[2];
			if (wcscmp(fieldName, L"gem_slot_type_4") == 0) return gem_slot_type[3];
			if (wcscmp(fieldName, L"open_gem_slot_grocery") == 0) return open_gem_slot_grocery;
			if (wcscmp(fieldName, L"open_gem_slot_grocery_1") == 0) return open_gem_slot_grocery[0];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_2") == 0) return open_gem_slot_grocery[1];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_3") == 0) return open_gem_slot_grocery[2];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_4") == 0) return open_gem_slot_grocery[3];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_5") == 0) return open_gem_slot_grocery[4];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_6") == 0) return open_gem_slot_grocery[5];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_7") == 0) return open_gem_slot_grocery[6];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_8") == 0) return open_gem_slot_grocery[7];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count") == 0) return open_gem_slot_grocery_count;
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_1") == 0) return open_gem_slot_grocery_count[0];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_2") == 0) return open_gem_slot_grocery_count[1];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_3") == 0) return open_gem_slot_grocery_count[2];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_4") == 0) return open_gem_slot_grocery_count[3];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_5") == 0) return open_gem_slot_grocery_count[4];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_6") == 0) return open_gem_slot_grocery_count[5];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_7") == 0) return open_gem_slot_grocery_count[6];
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_8") == 0) return open_gem_slot_grocery_count[7];
			if (wcscmp(fieldName, L"open_gem_slot_price") == 0) return open_gem_slot_price;
			if (wcscmp(fieldName, L"open_gem_slot_price_1") == 0) return open_gem_slot_price[0];
			if (wcscmp(fieldName, L"open_gem_slot_price_2") == 0) return open_gem_slot_price[1];
			if (wcscmp(fieldName, L"open_gem_slot_price_3") == 0) return open_gem_slot_price[2];
			if (wcscmp(fieldName, L"open_gem_slot_price_4") == 0) return open_gem_slot_price[3];
			if (wcscmp(fieldName, L"open_gem_slot_price_5") == 0) return open_gem_slot_price[4];
			if (wcscmp(fieldName, L"open_gem_slot_price_6") == 0) return open_gem_slot_price[5];
			if (wcscmp(fieldName, L"open_gem_slot_price_7") == 0) return open_gem_slot_price[6];
			if (wcscmp(fieldName, L"open_gem_slot_price_8") == 0) return open_gem_slot_price[7];
			if (wcscmp(fieldName, L"fixed_open_gem_slot") == 0) return fixed_open_gem_slot;
			if (wcscmp(fieldName, L"max_gem_slot_count") == 0) return max_gem_slot_count;
			if (wcscmp(fieldName, L"enchant_gem_slot_usable") == 0) return enchant_gem_slot_usable;
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_1") == 0) return enchant_gem_slot_usable[0];
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_2") == 0) return enchant_gem_slot_usable[1];
			if (wcscmp(fieldName, L"repairable") == 0) return repairable;
			if (wcscmp(fieldName, L"repair_level") == 0) return repair_level;
			if (wcscmp(fieldName, L"repair_item_count") == 0) return repair_item_count;
			if (wcscmp(fieldName, L"ui_repair_item") == 0) return ui_repair_item;
			if (wcscmp(fieldName, L"gem_slot_expandable") == 0) return gem_slot_expandable;
			if (wcscmp(fieldName, L"skill_by_equipment") == 0) return skill_by_equipment;
			if (wcscmp(fieldName, L"weapon_appearance_change_type") == 0) return weapon_appearance_change_type;
			if (wcscmp(fieldName, L"pet") == 0) return pet;
			if (wcscmp(fieldName, L"closet_group_id") == 0) return closet_group_id;
			if (wcscmp(fieldName, L"skill_skin") == 0) return skill_skin;
			if (wcscmp(fieldName, L"hidden_power_attach") == 0) return hidden_power_attach;
			if (wcscmp(fieldName, L"unseal_consume_item2") == 0) return unseal_consume_item2;
			if (wcscmp(fieldName, L"unseal_consume_item2_1") == 0) return unseal_consume_item2[0];
			if (wcscmp(fieldName, L"unseal_consume_item2_2") == 0) return unseal_consume_item2[1];
			if (wcscmp(fieldName, L"unseal_consume_item2_3") == 0) return unseal_consume_item2[2];
			if (wcscmp(fieldName, L"unseal_consume_item2_4") == 0) return unseal_consume_item2[3];
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count") == 0) return unseal_consume_item2_stack_count;
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_1") == 0) return unseal_consume_item2_stack_count[0];
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_2") == 0) return unseal_consume_item2_stack_count[1];
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_3") == 0) return unseal_consume_item2_stack_count[2];
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_4") == 0) return unseal_consume_item2_stack_count[3];
			if (wcscmp(fieldName, L"weapon_appearance_job_change") == 0) return weapon_appearance_job_change;
			if (wcscmp(fieldName, L"init_star_stone_slot_cost_group") == 0) return init_star_stone_slot_cost_group;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = item_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_type") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_type);
			if (wcscmp(fieldName, L"equip_show") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_show);
			if (wcscmp(fieldName, L"default_gem_level") == 0) return Data::AnyFieldToStringConverter::ToString(&default_gem_level);
			if (wcscmp(fieldName, L"max_gem_slot_level") == 0) return Data::AnyFieldToStringConverter::ToString(&max_gem_slot_level);
			if (wcscmp(fieldName, L"identify_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&identify_enable);
			if (wcscmp(fieldName, L"identify_grocery") == 0) return Data::AnyFieldToStringConverter::ToString(&identify_grocery);
			if (wcscmp(fieldName, L"gem_slot_by_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&gem_slot_by_probability);
			if (wcscmp(fieldName, L"gem_slot_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gem_slot_type[0]));
			if (wcscmp(fieldName, L"gem_slot_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gem_slot_type[1]));
			if (wcscmp(fieldName, L"gem_slot_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gem_slot_type[2]));
			if (wcscmp(fieldName, L"gem_slot_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gem_slot_type[3]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[0]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[1]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[2]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[3]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[4]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[5]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[6]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery[7]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[0]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[1]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[2]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[3]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[4]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[5]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[6]));
			if (wcscmp(fieldName, L"open_gem_slot_grocery_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_grocery_count[7]));
			if (wcscmp(fieldName, L"open_gem_slot_price_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[0]));
			if (wcscmp(fieldName, L"open_gem_slot_price_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[1]));
			if (wcscmp(fieldName, L"open_gem_slot_price_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[2]));
			if (wcscmp(fieldName, L"open_gem_slot_price_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[3]));
			if (wcscmp(fieldName, L"open_gem_slot_price_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[4]));
			if (wcscmp(fieldName, L"open_gem_slot_price_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[5]));
			if (wcscmp(fieldName, L"open_gem_slot_price_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[6]));
			if (wcscmp(fieldName, L"open_gem_slot_price_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(open_gem_slot_price[7]));
			if (wcscmp(fieldName, L"fixed_open_gem_slot") == 0) return Data::AnyFieldToStringConverter::ToString(&fixed_open_gem_slot);
			if (wcscmp(fieldName, L"max_gem_slot_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_gem_slot_count);
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(enchant_gem_slot_usable[0]));
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(enchant_gem_slot_usable[1]));
			if (wcscmp(fieldName, L"repairable") == 0) return Data::AnyFieldToStringConverter::ToString(&repairable);
			if (wcscmp(fieldName, L"repair_level") == 0) return Data::AnyFieldToStringConverter::ToString(&repair_level);
			if (wcscmp(fieldName, L"repair_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&repair_item_count);
			if (wcscmp(fieldName, L"ui_repair_item") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_repair_item);
			if (wcscmp(fieldName, L"gem_slot_expandable") == 0) return Data::AnyFieldToStringConverter::ToString(&gem_slot_expandable);
			if (wcscmp(fieldName, L"skill_by_equipment") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_by_equipment);
			if (wcscmp(fieldName, L"weapon_appearance_change_type") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_appearance_change_type);
			if (wcscmp(fieldName, L"pet") == 0) return Data::AnyFieldToStringConverter::ToString(&pet);
			if (wcscmp(fieldName, L"closet_group_id") == 0) return Data::AnyFieldToStringConverter::ToString(&closet_group_id);
			if (wcscmp(fieldName, L"skill_skin") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_skin);
			if (wcscmp(fieldName, L"hidden_power_attach") == 0) return Data::AnyFieldToStringConverter::ToString(&hidden_power_attach);
			if (wcscmp(fieldName, L"unseal_consume_item2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[0]));
			if (wcscmp(fieldName, L"unseal_consume_item2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[1]));
			if (wcscmp(fieldName, L"unseal_consume_item2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[2]));
			if (wcscmp(fieldName, L"unseal_consume_item2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[3]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[0]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[1]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[2]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[3]));
			if (wcscmp(fieldName, L"weapon_appearance_job_change") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_appearance_job_change);
			if (wcscmp(fieldName, L"init_star_stone_slot_cost_group") == 0) return Data::AnyFieldToStringConverter::ToString(&init_star_stone_slot_cost_group);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			item_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(equip_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) equip_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(equip_show));
		}
		char Pad_sub_0[3];
__int8 weapon_type;
std::wstring weapon_type_EnumValue() const {return Get_weapon_type_EnumValue(weapon_type);};
char Pad_sub_1[3];
wchar_t* equip_show;
__int16 default_gem_level;
__int16 max_gem_slot_level;
bool identify_enable;
char Pad_sub_2[3];
Data::TableRef identify_grocery;
int identify_grocery_tableId(){return 189;};
bool gem_slot_by_probability;
__int8 gem_slot_type[4];
std::wstring gem_slot_type_EnumValue(int index) const {return Get_gem_slot_type_EnumValue(gem_slot_type[index]);};
char Pad_sub_3[3];
Data::TableRef open_gem_slot_grocery[8];
int open_gem_slot_grocery_tableId(){return 189;};
__int16 open_gem_slot_grocery_count[8];
__int32 open_gem_slot_price[8];
__int8 fixed_open_gem_slot;
__int8 max_gem_slot_count;
bool enchant_gem_slot_usable[2];
bool repairable;
char Pad_sub_4[1];
__int16 repair_level;
__int16 repair_item_count;
char Pad_sub_5[2];
Data::TableRef ui_repair_item;
int ui_repair_item_tableId(){return 189;};
bool gem_slot_expandable;
char Pad_sub_6[3];
Data::TableRef skill_by_equipment;
int skill_by_equipment_tableId(){return 330;};
__int8 weapon_appearance_change_type;
std::wstring weapon_appearance_change_type_EnumValue() const {return Get_weapon_appearance_change_type_EnumValue(weapon_appearance_change_type);};
char Pad_sub_7[3];
Data::TableRef pet;
int pet_tableId(){return 274;};
__int32 closet_group_id;
Data::TableRef skill_skin;
int skill_skin_tableId(){return 344;};
__int16 hidden_power_attach;
char Pad_sub_8[2];
Data::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 189;};
__int16 unseal_consume_item2_stack_count[4];
bool weapon_appearance_job_change;
char Pad_sub_9[3];
Data::TableRef init_star_stone_slot_cost_group;
int init_star_stone_slot_cost_group_tableId(){return 76;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}