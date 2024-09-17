/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_recipe_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_brand_material_condition_type_EnumValue(__int8 value);
		static std::wstring Get_delivery_method_EnumValue(__int8 value);
		static std::wstring Get_recipe_type_EnumValue(__int8 value);
		static std::wstring Get_use_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"requirement_name") == 0) return requirement_name;
			if (wcscmp(fieldName, L"location_desc") == 0) return location_desc;
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"inner_category") == 0) return inner_category;
			if (wcscmp(fieldName, L"money_cost") == 0) return money_cost;
			if (wcscmp(fieldName, L"material") == 0) return material;
			if (wcscmp(fieldName, L"material_1") == 0) return material[0];
			if (wcscmp(fieldName, L"material_2") == 0) return material[1];
			if (wcscmp(fieldName, L"material_3") == 0) return material[2];
			if (wcscmp(fieldName, L"material_4") == 0) return material[3];
			if (wcscmp(fieldName, L"material_5") == 0) return material[4];
			if (wcscmp(fieldName, L"material_amount") == 0) return material_amount;
			if (wcscmp(fieldName, L"material_amount_1") == 0) return material_amount[0];
			if (wcscmp(fieldName, L"material_amount_2") == 0) return material_amount[1];
			if (wcscmp(fieldName, L"material_amount_3") == 0) return material_amount[2];
			if (wcscmp(fieldName, L"material_amount_4") == 0) return material_amount[3];
			if (wcscmp(fieldName, L"material_amount_5") == 0) return material_amount[4];
			if (wcscmp(fieldName, L"brand_material") == 0) return brand_material;
			if (wcscmp(fieldName, L"brand_material_1") == 0) return brand_material[0];
			if (wcscmp(fieldName, L"brand_material_2") == 0) return brand_material[1];
			if (wcscmp(fieldName, L"brand_material_3") == 0) return brand_material[2];
			if (wcscmp(fieldName, L"brand_material_4") == 0) return brand_material[3];
			if (wcscmp(fieldName, L"brand_material_5") == 0) return brand_material[4];
			if (wcscmp(fieldName, L"brand_material_condition_type") == 0) return brand_material_condition_type;
			if (wcscmp(fieldName, L"brand_material_condition_type_1") == 0) return brand_material_condition_type[0];
			if (wcscmp(fieldName, L"brand_material_condition_type_2") == 0) return brand_material_condition_type[1];
			if (wcscmp(fieldName, L"brand_material_condition_type_3") == 0) return brand_material_condition_type[2];
			if (wcscmp(fieldName, L"brand_material_condition_type_4") == 0) return brand_material_condition_type[3];
			if (wcscmp(fieldName, L"brand_material_condition_type_5") == 0) return brand_material_condition_type[4];
			if (wcscmp(fieldName, L"brand_material_amount") == 0) return brand_material_amount;
			if (wcscmp(fieldName, L"brand_material_amount_1") == 0) return brand_material_amount[0];
			if (wcscmp(fieldName, L"brand_material_amount_2") == 0) return brand_material_amount[1];
			if (wcscmp(fieldName, L"brand_material_amount_3") == 0) return brand_material_amount[2];
			if (wcscmp(fieldName, L"brand_material_amount_4") == 0) return brand_material_amount[3];
			if (wcscmp(fieldName, L"brand_material_amount_5") == 0) return brand_material_amount[4];
			if (wcscmp(fieldName, L"limit_production_exp") == 0) return limit_production_exp;
			if (wcscmp(fieldName, L"complete_quest") == 0) return complete_quest;
			if (wcscmp(fieldName, L"reward_production_exp") == 0) return reward_production_exp;
			if (wcscmp(fieldName, L"reward_production_exp_bonus") == 0) return reward_production_exp_bonus;
			if (wcscmp(fieldName, L"half_production_exp_step") == 0) return half_production_exp_step;
			if (wcscmp(fieldName, L"zero_production_exp_step") == 0) return zero_production_exp_step;
			if (wcscmp(fieldName, L"customizable") == 0) return customizable;
			if (wcscmp(fieldName, L"delivery_method") == 0) return delivery_method;
			if (wcscmp(fieldName, L"step") == 0) return step;
			if (wcscmp(fieldName, L"step_1") == 0) return step[0];
			if (wcscmp(fieldName, L"step_2") == 0) return step[1];
			if (wcscmp(fieldName, L"step_3") == 0) return step[2];
			if (wcscmp(fieldName, L"step_4") == 0) return step[3];
			if (wcscmp(fieldName, L"recipe_type") == 0) return recipe_type;
			if (wcscmp(fieldName, L"use_state") == 0) return use_state;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"requirement_name") == 0) return Data::AnyFieldToStringConverter::ToString(&requirement_name);
			if (wcscmp(fieldName, L"location_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&location_desc);
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"inner_category") == 0) return Data::AnyFieldToStringConverter::ToString(&inner_category);
			if (wcscmp(fieldName, L"money_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&money_cost);
			if (wcscmp(fieldName, L"material_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[0]));
			if (wcscmp(fieldName, L"material_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[1]));
			if (wcscmp(fieldName, L"material_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[2]));
			if (wcscmp(fieldName, L"material_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[3]));
			if (wcscmp(fieldName, L"material_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(material[4]));
			if (wcscmp(fieldName, L"material_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_amount[0]));
			if (wcscmp(fieldName, L"material_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_amount[1]));
			if (wcscmp(fieldName, L"material_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_amount[2]));
			if (wcscmp(fieldName, L"material_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_amount[3]));
			if (wcscmp(fieldName, L"material_amount_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_amount[4]));
			if (wcscmp(fieldName, L"brand_material_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[0]));
			if (wcscmp(fieldName, L"brand_material_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[1]));
			if (wcscmp(fieldName, L"brand_material_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[2]));
			if (wcscmp(fieldName, L"brand_material_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[3]));
			if (wcscmp(fieldName, L"brand_material_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material[4]));
			if (wcscmp(fieldName, L"brand_material_condition_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[0]));
			if (wcscmp(fieldName, L"brand_material_condition_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[1]));
			if (wcscmp(fieldName, L"brand_material_condition_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[2]));
			if (wcscmp(fieldName, L"brand_material_condition_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[3]));
			if (wcscmp(fieldName, L"brand_material_condition_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_condition_type[4]));
			if (wcscmp(fieldName, L"brand_material_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_amount[0]));
			if (wcscmp(fieldName, L"brand_material_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_amount[1]));
			if (wcscmp(fieldName, L"brand_material_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_amount[2]));
			if (wcscmp(fieldName, L"brand_material_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_amount[3]));
			if (wcscmp(fieldName, L"brand_material_amount_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(brand_material_amount[4]));
			if (wcscmp(fieldName, L"limit_production_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&limit_production_exp);
			if (wcscmp(fieldName, L"complete_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&complete_quest);
			if (wcscmp(fieldName, L"reward_production_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_production_exp);
			if (wcscmp(fieldName, L"reward_production_exp_bonus") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_production_exp_bonus);
			if (wcscmp(fieldName, L"half_production_exp_step") == 0) return Data::AnyFieldToStringConverter::ToString(&half_production_exp_step);
			if (wcscmp(fieldName, L"zero_production_exp_step") == 0) return Data::AnyFieldToStringConverter::ToString(&zero_production_exp_step);
			if (wcscmp(fieldName, L"customizable") == 0) return Data::AnyFieldToStringConverter::ToString(&customizable);
			if (wcscmp(fieldName, L"delivery_method") == 0) return Data::AnyFieldToStringConverter::ToString(&delivery_method);
			if (wcscmp(fieldName, L"step_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(step[0]));
			if (wcscmp(fieldName, L"step_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(step[1]));
			if (wcscmp(fieldName, L"step_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(step[2]));
			if (wcscmp(fieldName, L"step_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(step[3]));
			if (wcscmp(fieldName, L"recipe_type") == 0) return Data::AnyFieldToStringConverter::ToString(&recipe_type);
			if (wcscmp(fieldName, L"use_state") == 0) return Data::AnyFieldToStringConverter::ToString(&use_state);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef requirement_name;
int requirement_name_tableId(){return 405;};
Data::TableRef location_desc;
int location_desc_tableId(){return 405;};
__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad0[3];
__int32 inner_category;
__int32 money_cost;
Data::TableRef material[5];
int material_tableId(){return 189;};
__int16 material_amount[5];
char Pad1[2];
Data::TableRef brand_material[5];
int brand_material_tableId(){return 183;};
__int8 brand_material_condition_type[5];
std::wstring brand_material_condition_type_EnumValue(int index) const {return Get_brand_material_condition_type_EnumValue(brand_material_condition_type[index]);};
char Pad2[1];
__int16 brand_material_amount[5];
__int16 limit_production_exp;
char Pad3[2];
Data::TableRef complete_quest;
int complete_quest_tableId(){return 283;};
__int16 reward_production_exp;
__int16 reward_production_exp_bonus;
__int16 half_production_exp_step;
__int16 zero_production_exp_step;
bool customizable;
__int8 delivery_method;
std::wstring delivery_method_EnumValue() const {return Get_delivery_method_EnumValue(delivery_method);};
char Pad4[2];
Data::TableRef step[4];
int step_tableId(){return 83;};
__int8 recipe_type;
std::wstring recipe_type_EnumValue() const {return Get_recipe_type_EnumValue(recipe_type);};
__int8 use_state;
std::wstring use_state_EnumValue() const {return Get_use_state_EnumValue(use_state);};

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 82; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_recipe_RecordPtr // : DrRecordPtr
	{
		craft_recipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_recipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}