/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_random_option_group_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"effect_list") == 0) return effect_list;
			if (wcscmp(fieldName, L"ability_list") == 0) return ability_list;
			if (wcscmp(fieldName, L"ability_list_1") == 0) return ability_list[0];
			if (wcscmp(fieldName, L"ability_list_2") == 0) return ability_list[1];
			if (wcscmp(fieldName, L"ability_list_3") == 0) return ability_list[2];
			if (wcscmp(fieldName, L"ability_list_total_count") == 0) return ability_list_total_count;
			if (wcscmp(fieldName, L"skill_build_up_group_list") == 0) return skill_build_up_group_list;
			if (wcscmp(fieldName, L"skill_build_up_group_list_1") == 0) return skill_build_up_group_list[0];
			if (wcscmp(fieldName, L"skill_build_up_group_list_2") == 0) return skill_build_up_group_list[1];
			if (wcscmp(fieldName, L"skill_build_up_group_list_3") == 0) return skill_build_up_group_list[2];
			if (wcscmp(fieldName, L"skill_build_up_group_list_total_count") == 0) return skill_build_up_group_list_total_count;
			if (wcscmp(fieldName, L"skill_train_by_item_list") == 0) return skill_train_by_item_list;
			if (wcscmp(fieldName, L"duplication_enable") == 0) return duplication_enable;
			if (wcscmp(fieldName, L"unlimited_draw") == 0) return unlimited_draw;
			if (wcscmp(fieldName, L"draw_enable_count") == 0) return draw_enable_count;
			if (wcscmp(fieldName, L"draw_cost_money") == 0) return draw_cost_money;
			if (wcscmp(fieldName, L"draw_cost_money_1") == 0) return draw_cost_money[0];
			if (wcscmp(fieldName, L"draw_cost_money_2") == 0) return draw_cost_money[1];
			if (wcscmp(fieldName, L"draw_cost_money_3") == 0) return draw_cost_money[2];
			if (wcscmp(fieldName, L"draw_cost_money_4") == 0) return draw_cost_money[3];
			if (wcscmp(fieldName, L"draw_cost_total_count") == 0) return draw_cost_total_count;
			if (wcscmp(fieldName, L"draw_cost_main_item") == 0) return draw_cost_main_item;
			if (wcscmp(fieldName, L"draw_cost_main_item_1") == 0) return draw_cost_main_item[0];
			if (wcscmp(fieldName, L"draw_cost_main_item_2") == 0) return draw_cost_main_item[1];
			if (wcscmp(fieldName, L"draw_cost_main_item_3") == 0) return draw_cost_main_item[2];
			if (wcscmp(fieldName, L"draw_cost_main_item_4") == 0) return draw_cost_main_item[3];
			if (wcscmp(fieldName, L"draw_cost_main_item_count") == 0) return draw_cost_main_item_count;
			if (wcscmp(fieldName, L"draw_cost_main_item_count_1") == 0) return draw_cost_main_item_count[0];
			if (wcscmp(fieldName, L"draw_cost_main_item_count_2") == 0) return draw_cost_main_item_count[1];
			if (wcscmp(fieldName, L"draw_cost_main_item_count_3") == 0) return draw_cost_main_item_count[2];
			if (wcscmp(fieldName, L"draw_cost_main_item_count_4") == 0) return draw_cost_main_item_count[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_1") == 0) return draw_cost_sub_item_1;
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_1") == 0) return draw_cost_sub_item_1[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_2") == 0) return draw_cost_sub_item_1[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_3") == 0) return draw_cost_sub_item_1[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_4") == 0) return draw_cost_sub_item_1[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_5") == 0) return draw_cost_sub_item_1[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_6") == 0) return draw_cost_sub_item_1[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1") == 0) return draw_cost_sub_item_count_1;
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_1") == 0) return draw_cost_sub_item_count_1[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_2") == 0) return draw_cost_sub_item_count_1[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_3") == 0) return draw_cost_sub_item_count_1[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_4") == 0) return draw_cost_sub_item_count_1[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_5") == 0) return draw_cost_sub_item_count_1[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_6") == 0) return draw_cost_sub_item_count_1[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_2") == 0) return draw_cost_sub_item_2;
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_1") == 0) return draw_cost_sub_item_2[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_2") == 0) return draw_cost_sub_item_2[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_3") == 0) return draw_cost_sub_item_2[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_4") == 0) return draw_cost_sub_item_2[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_5") == 0) return draw_cost_sub_item_2[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_6") == 0) return draw_cost_sub_item_2[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2") == 0) return draw_cost_sub_item_count_2;
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_1") == 0) return draw_cost_sub_item_count_2[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_2") == 0) return draw_cost_sub_item_count_2[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_3") == 0) return draw_cost_sub_item_count_2[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_4") == 0) return draw_cost_sub_item_count_2[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_5") == 0) return draw_cost_sub_item_count_2[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_6") == 0) return draw_cost_sub_item_count_2[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_3") == 0) return draw_cost_sub_item_3;
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_1") == 0) return draw_cost_sub_item_3[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_2") == 0) return draw_cost_sub_item_3[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_3") == 0) return draw_cost_sub_item_3[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_4") == 0) return draw_cost_sub_item_3[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_5") == 0) return draw_cost_sub_item_3[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_6") == 0) return draw_cost_sub_item_3[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3") == 0) return draw_cost_sub_item_count_3;
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_1") == 0) return draw_cost_sub_item_count_3[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_2") == 0) return draw_cost_sub_item_count_3[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_3") == 0) return draw_cost_sub_item_count_3[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_4") == 0) return draw_cost_sub_item_count_3[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_5") == 0) return draw_cost_sub_item_count_3[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_6") == 0) return draw_cost_sub_item_count_3[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_4") == 0) return draw_cost_sub_item_4;
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_1") == 0) return draw_cost_sub_item_4[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_2") == 0) return draw_cost_sub_item_4[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_3") == 0) return draw_cost_sub_item_4[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_4") == 0) return draw_cost_sub_item_4[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_5") == 0) return draw_cost_sub_item_4[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_6") == 0) return draw_cost_sub_item_4[5];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4") == 0) return draw_cost_sub_item_count_4;
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_1") == 0) return draw_cost_sub_item_count_4[0];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_2") == 0) return draw_cost_sub_item_count_4[1];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_3") == 0) return draw_cost_sub_item_count_4[2];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_4") == 0) return draw_cost_sub_item_count_4[3];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_5") == 0) return draw_cost_sub_item_count_4[4];
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_6") == 0) return draw_cost_sub_item_count_4[5];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"effect_list") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_list);
			if (wcscmp(fieldName, L"ability_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_list[0]));
			if (wcscmp(fieldName, L"ability_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_list[1]));
			if (wcscmp(fieldName, L"ability_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_list[2]));
			if (wcscmp(fieldName, L"ability_list_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_list_total_count);
			if (wcscmp(fieldName, L"skill_build_up_group_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_list[0]));
			if (wcscmp(fieldName, L"skill_build_up_group_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_list[1]));
			if (wcscmp(fieldName, L"skill_build_up_group_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_list[2]));
			if (wcscmp(fieldName, L"skill_build_up_group_list_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_build_up_group_list_total_count);
			if (wcscmp(fieldName, L"skill_train_by_item_list") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_train_by_item_list);
			if (wcscmp(fieldName, L"duplication_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&duplication_enable);
			if (wcscmp(fieldName, L"unlimited_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&unlimited_draw);
			if (wcscmp(fieldName, L"draw_enable_count") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_enable_count);
			if (wcscmp(fieldName, L"draw_cost_money_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_money[0]));
			if (wcscmp(fieldName, L"draw_cost_money_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_money[1]));
			if (wcscmp(fieldName, L"draw_cost_money_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_money[2]));
			if (wcscmp(fieldName, L"draw_cost_money_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_money[3]));
			if (wcscmp(fieldName, L"draw_cost_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_cost_total_count);
			if (wcscmp(fieldName, L"draw_cost_main_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item[0]));
			if (wcscmp(fieldName, L"draw_cost_main_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item[1]));
			if (wcscmp(fieldName, L"draw_cost_main_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item[2]));
			if (wcscmp(fieldName, L"draw_cost_main_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item[3]));
			if (wcscmp(fieldName, L"draw_cost_main_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item_count[0]));
			if (wcscmp(fieldName, L"draw_cost_main_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item_count[1]));
			if (wcscmp(fieldName, L"draw_cost_main_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item_count[2]));
			if (wcscmp(fieldName, L"draw_cost_main_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_main_item_count[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_1[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_1[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_1[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_1[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_1[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_1[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_1[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_1[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_1[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_1[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_1[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_1[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_2[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_2[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_2[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_2[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_2[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_2[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_2[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_2[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_2[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_2[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_2[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_2[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_3[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_3[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_3[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_3[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_3[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_3[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_3[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_3[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_3[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_3[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_3[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_3[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_4[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_4[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_4[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_4[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_4[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_4[5]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_4[0]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_4[1]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_4[2]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_4[3]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_4[4]));
			if (wcscmp(fieldName, L"draw_cost_sub_item_count_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(draw_cost_sub_item_count_4[5]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef effect_list;
int effect_list_tableId(){return 113;};
Data::TableRef ability_list[3];
int ability_list_tableId(){return 1;};
__int8 ability_list_total_count;
char Pad0[3];
Data::TableRef skill_build_up_group_list[3];
int skill_build_up_group_list_tableId(){return 329;};
__int8 skill_build_up_group_list_total_count;
char Pad1[3];
Data::TableRef skill_train_by_item_list;
int skill_train_by_item_list_tableId(){return 353;};
bool duplication_enable;
bool unlimited_draw;
__int8 draw_enable_count;
char Pad2[1];
__int32 draw_cost_money[4];
__int8 draw_cost_total_count;
char Pad3[3];
Data::TableRef draw_cost_main_item[4];
int draw_cost_main_item_tableId(){return 189;};
__int16 draw_cost_main_item_count[4];
Data::TableRef draw_cost_sub_item_1[6];
int draw_cost_sub_item_1_tableId(){return 189;};
__int16 draw_cost_sub_item_count_1[6];
Data::TableRef draw_cost_sub_item_2[6];
int draw_cost_sub_item_2_tableId(){return 189;};
__int16 draw_cost_sub_item_count_2[6];
Data::TableRef draw_cost_sub_item_3[6];
int draw_cost_sub_item_3_tableId(){return 189;};
__int16 draw_cost_sub_item_count_3[6];
Data::TableRef draw_cost_sub_item_4[6];
int draw_cost_sub_item_4_tableId(){return 189;};
__int16 draw_cost_sub_item_count_4[6];

		static TableVersion Version() { return TableVersion(6, 0); }
		static __int16 TableId() { return 206; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_option_group_RecordPtr // : DrRecordPtr
	{
		item_random_option_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_random_option_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}