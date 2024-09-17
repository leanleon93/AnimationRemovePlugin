/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_case_recipe_Record : DrEl
	{
	private:
		static std::wstring Get_use_state_EnumValue(__int8 value);
		static std::wstring Get_cost_material_condition_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group_alias") == 0) return group_alias;
			if (wcscmp(fieldName, L"case_option") == 0) return case_option;
			if (wcscmp(fieldName, L"craft_duration") == 0) return craft_duration;
			if (wcscmp(fieldName, L"use_state") == 0) return use_state;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"requirement_name") == 0) return requirement_name;
			if (wcscmp(fieldName, L"location_desc") == 0) return location_desc;
			if (wcscmp(fieldName, L"required_craft_exp") == 0) return required_craft_exp;
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return required_achievement_id;
			if (wcscmp(fieldName, L"required_achievement_step_min") == 0) return required_achievement_step_min;
			if (wcscmp(fieldName, L"cost_money") == 0) return cost_money;
			if (wcscmp(fieldName, L"cost_material") == 0) return cost_material;
			if (wcscmp(fieldName, L"cost_material_1") == 0) return cost_material[0];
			if (wcscmp(fieldName, L"cost_material_2") == 0) return cost_material[1];
			if (wcscmp(fieldName, L"cost_material_3") == 0) return cost_material[2];
			if (wcscmp(fieldName, L"cost_material_4") == 0) return cost_material[3];
			if (wcscmp(fieldName, L"cost_material_5") == 0) return cost_material[4];
			if (wcscmp(fieldName, L"cost_material_6") == 0) return cost_material[5];
			if (wcscmp(fieldName, L"cost_material_7") == 0) return cost_material[6];
			if (wcscmp(fieldName, L"cost_material_8") == 0) return cost_material[7];
			if (wcscmp(fieldName, L"cost_material_condition_type") == 0) return cost_material_condition_type;
			if (wcscmp(fieldName, L"cost_material_condition_type_1") == 0) return cost_material_condition_type[0];
			if (wcscmp(fieldName, L"cost_material_condition_type_2") == 0) return cost_material_condition_type[1];
			if (wcscmp(fieldName, L"cost_material_condition_type_3") == 0) return cost_material_condition_type[2];
			if (wcscmp(fieldName, L"cost_material_condition_type_4") == 0) return cost_material_condition_type[3];
			if (wcscmp(fieldName, L"cost_material_condition_type_5") == 0) return cost_material_condition_type[4];
			if (wcscmp(fieldName, L"cost_material_condition_type_6") == 0) return cost_material_condition_type[5];
			if (wcscmp(fieldName, L"cost_material_condition_type_7") == 0) return cost_material_condition_type[6];
			if (wcscmp(fieldName, L"cost_material_condition_type_8") == 0) return cost_material_condition_type[7];
			if (wcscmp(fieldName, L"cost_material_amount") == 0) return cost_material_amount;
			if (wcscmp(fieldName, L"cost_material_amount_1") == 0) return cost_material_amount[0];
			if (wcscmp(fieldName, L"cost_material_amount_2") == 0) return cost_material_amount[1];
			if (wcscmp(fieldName, L"cost_material_amount_3") == 0) return cost_material_amount[2];
			if (wcscmp(fieldName, L"cost_material_amount_4") == 0) return cost_material_amount[3];
			if (wcscmp(fieldName, L"cost_material_amount_5") == 0) return cost_material_amount[4];
			if (wcscmp(fieldName, L"cost_material_amount_6") == 0) return cost_material_amount[5];
			if (wcscmp(fieldName, L"cost_material_amount_7") == 0) return cost_material_amount[6];
			if (wcscmp(fieldName, L"cost_material_amount_8") == 0) return cost_material_amount[7];
			if (wcscmp(fieldName, L"reward_craft_exp") == 0) return reward_craft_exp;
			if (wcscmp(fieldName, L"half_craft_exp_step") == 0) return half_craft_exp_step;
			if (wcscmp(fieldName, L"zero_craft_exp_step") == 0) return zero_craft_exp_step;
			if (wcscmp(fieldName, L"reward_craft_bonus_exp") == 0) return reward_craft_bonus_exp;
			if (wcscmp(fieldName, L"half_craft_bonus_exp_step") == 0) return half_craft_bonus_exp_step;
			if (wcscmp(fieldName, L"zero_craft_bonus_exp_step") == 0) return zero_craft_bonus_exp_step;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_4") == 0) return reward_item[3];
			if (wcscmp(fieldName, L"reward_item_5") == 0) return reward_item[4];
			if (wcscmp(fieldName, L"reward_item_min") == 0) return reward_item_min;
			if (wcscmp(fieldName, L"reward_item_min_1") == 0) return reward_item_min[0];
			if (wcscmp(fieldName, L"reward_item_min_2") == 0) return reward_item_min[1];
			if (wcscmp(fieldName, L"reward_item_min_3") == 0) return reward_item_min[2];
			if (wcscmp(fieldName, L"reward_item_min_4") == 0) return reward_item_min[3];
			if (wcscmp(fieldName, L"reward_item_min_5") == 0) return reward_item_min[4];
			if (wcscmp(fieldName, L"reward_item_max") == 0) return reward_item_max;
			if (wcscmp(fieldName, L"reward_item_max_1") == 0) return reward_item_max[0];
			if (wcscmp(fieldName, L"reward_item_max_2") == 0) return reward_item_max[1];
			if (wcscmp(fieldName, L"reward_item_max_3") == 0) return reward_item_max[2];
			if (wcscmp(fieldName, L"reward_item_max_4") == 0) return reward_item_max[3];
			if (wcscmp(fieldName, L"reward_item_max_5") == 0) return reward_item_max[4];
			if (wcscmp(fieldName, L"reward_item_reference") == 0) return reward_item_reference;
			if (wcscmp(fieldName, L"reward_item_reference_1") == 0) return reward_item_reference[0];
			if (wcscmp(fieldName, L"reward_item_reference_2") == 0) return reward_item_reference[1];
			if (wcscmp(fieldName, L"reward_item_reference_3") == 0) return reward_item_reference[2];
			if (wcscmp(fieldName, L"reward_item_reference_4") == 0) return reward_item_reference[3];
			if (wcscmp(fieldName, L"reward_item_reference_5") == 0) return reward_item_reference[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group_alias") == 0) return Data::AnyFieldToStringConverter::ToString(&group_alias);
			if (wcscmp(fieldName, L"case_option") == 0) return Data::AnyFieldToStringConverter::ToString(&case_option);
			if (wcscmp(fieldName, L"craft_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&craft_duration);
			if (wcscmp(fieldName, L"use_state") == 0) return Data::AnyFieldToStringConverter::ToString(&use_state);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"requirement_name") == 0) return Data::AnyFieldToStringConverter::ToString(&requirement_name);
			if (wcscmp(fieldName, L"location_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&location_desc);
			if (wcscmp(fieldName, L"required_craft_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&required_craft_exp);
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_id);
			if (wcscmp(fieldName, L"required_achievement_step_min") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_step_min);
			if (wcscmp(fieldName, L"cost_money") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_money);
			if (wcscmp(fieldName, L"cost_material_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[0]));
			if (wcscmp(fieldName, L"cost_material_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[1]));
			if (wcscmp(fieldName, L"cost_material_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[2]));
			if (wcscmp(fieldName, L"cost_material_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[3]));
			if (wcscmp(fieldName, L"cost_material_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[4]));
			if (wcscmp(fieldName, L"cost_material_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[5]));
			if (wcscmp(fieldName, L"cost_material_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[6]));
			if (wcscmp(fieldName, L"cost_material_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material[7]));
			if (wcscmp(fieldName, L"cost_material_condition_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[0]));
			if (wcscmp(fieldName, L"cost_material_condition_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[1]));
			if (wcscmp(fieldName, L"cost_material_condition_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[2]));
			if (wcscmp(fieldName, L"cost_material_condition_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[3]));
			if (wcscmp(fieldName, L"cost_material_condition_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[4]));
			if (wcscmp(fieldName, L"cost_material_condition_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[5]));
			if (wcscmp(fieldName, L"cost_material_condition_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[6]));
			if (wcscmp(fieldName, L"cost_material_condition_type_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_condition_type[7]));
			if (wcscmp(fieldName, L"cost_material_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[0]));
			if (wcscmp(fieldName, L"cost_material_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[1]));
			if (wcscmp(fieldName, L"cost_material_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[2]));
			if (wcscmp(fieldName, L"cost_material_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[3]));
			if (wcscmp(fieldName, L"cost_material_amount_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[4]));
			if (wcscmp(fieldName, L"cost_material_amount_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[5]));
			if (wcscmp(fieldName, L"cost_material_amount_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[6]));
			if (wcscmp(fieldName, L"cost_material_amount_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_material_amount[7]));
			if (wcscmp(fieldName, L"reward_craft_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_craft_exp);
			if (wcscmp(fieldName, L"half_craft_exp_step") == 0) return Data::AnyFieldToStringConverter::ToString(&half_craft_exp_step);
			if (wcscmp(fieldName, L"zero_craft_exp_step") == 0) return Data::AnyFieldToStringConverter::ToString(&zero_craft_exp_step);
			if (wcscmp(fieldName, L"reward_craft_bonus_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_craft_bonus_exp);
			if (wcscmp(fieldName, L"half_craft_bonus_exp_step") == 0) return Data::AnyFieldToStringConverter::ToString(&half_craft_bonus_exp_step);
			if (wcscmp(fieldName, L"zero_craft_bonus_exp_step") == 0) return Data::AnyFieldToStringConverter::ToString(&zero_craft_bonus_exp_step);
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[3]));
			if (wcscmp(fieldName, L"reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[4]));
			if (wcscmp(fieldName, L"reward_item_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_min[0]));
			if (wcscmp(fieldName, L"reward_item_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_min[1]));
			if (wcscmp(fieldName, L"reward_item_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_min[2]));
			if (wcscmp(fieldName, L"reward_item_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_min[3]));
			if (wcscmp(fieldName, L"reward_item_min_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_min[4]));
			if (wcscmp(fieldName, L"reward_item_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_max[0]));
			if (wcscmp(fieldName, L"reward_item_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_max[1]));
			if (wcscmp(fieldName, L"reward_item_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_max[2]));
			if (wcscmp(fieldName, L"reward_item_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_max[3]));
			if (wcscmp(fieldName, L"reward_item_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_max[4]));
			if (wcscmp(fieldName, L"reward_item_reference_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_reference[0]));
			if (wcscmp(fieldName, L"reward_item_reference_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_reference[1]));
			if (wcscmp(fieldName, L"reward_item_reference_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_reference[2]));
			if (wcscmp(fieldName, L"reward_item_reference_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_reference[3]));
			if (wcscmp(fieldName, L"reward_item_reference_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_reference[4]));

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
Data::TableRef group_alias;
int group_alias_tableId(){return 80;};
__int8 case_option;
char Pad0[3];
__int32 craft_duration;
__int8 use_state;
std::wstring use_state_EnumValue() const {return Get_use_state_EnumValue(use_state);};
char Pad1[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef requirement_name;
int requirement_name_tableId(){return 405;};
Data::TableRef location_desc;
int location_desc_tableId(){return 405;};
__int16 required_craft_exp;
char Pad2[2];
__int32 required_achievement_id;
__int16 required_achievement_step_min;
char Pad3[2];
__int32 cost_money;
Data::ExplicitTableRef cost_material[8];
__int8 cost_material_condition_type[8];
std::wstring cost_material_condition_type_EnumValue(int index) const {return Get_cost_material_condition_type_EnumValue(cost_material_condition_type[index]);};
__int16 cost_material_amount[8];
__int16 reward_craft_exp;
__int16 half_craft_exp_step;
__int16 zero_craft_exp_step;
__int16 reward_craft_bonus_exp;
__int16 half_craft_bonus_exp_step;
__int16 zero_craft_bonus_exp_step;
Data::TableRef reward_item[5];
int reward_item_tableId(){return 189;};
__int32 reward_item_min[5];
__int32 reward_item_max[5];
__int32 reward_item_reference[5];

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 78; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_case_recipe_RecordPtr // : DrRecordPtr
	{
		craft_case_recipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_case_recipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}