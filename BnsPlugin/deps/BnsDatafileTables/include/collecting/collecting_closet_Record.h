/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_collecting_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct collecting_closet_Record : collecting_Record
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = collecting_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"collect_closet") == 0) return collect_closet;
			if (wcscmp(fieldName, L"collect_closet_1") == 0) return collect_closet[0];
			if (wcscmp(fieldName, L"collect_closet_2") == 0) return collect_closet[1];
			if (wcscmp(fieldName, L"collect_closet_3") == 0) return collect_closet[2];
			if (wcscmp(fieldName, L"collect_closet_4") == 0) return collect_closet[3];
			if (wcscmp(fieldName, L"collect_closet_5") == 0) return collect_closet[4];
			if (wcscmp(fieldName, L"collect_closet_6") == 0) return collect_closet[5];
			if (wcscmp(fieldName, L"collect_closet_7") == 0) return collect_closet[6];
			if (wcscmp(fieldName, L"collect_closet_8") == 0) return collect_closet[7];
			if (wcscmp(fieldName, L"collect_closet_replace") == 0) return collect_closet_replace;
			if (wcscmp(fieldName, L"collect_closet_replace_1") == 0) return collect_closet_replace[0];
			if (wcscmp(fieldName, L"collect_closet_replace_2") == 0) return collect_closet_replace[1];
			if (wcscmp(fieldName, L"collect_closet_replace_3") == 0) return collect_closet_replace[2];
			if (wcscmp(fieldName, L"collect_closet_replace_4") == 0) return collect_closet_replace[3];
			if (wcscmp(fieldName, L"collect_closet_replace_5") == 0) return collect_closet_replace[4];
			if (wcscmp(fieldName, L"collect_closet_replace_6") == 0) return collect_closet_replace[5];
			if (wcscmp(fieldName, L"collect_closet_replace_7") == 0) return collect_closet_replace[6];
			if (wcscmp(fieldName, L"collect_closet_replace_8") == 0) return collect_closet_replace[7];
			if (wcscmp(fieldName, L"collect_closet_subreplace") == 0) return collect_closet_subreplace;
			if (wcscmp(fieldName, L"collect_closet_subreplace_1") == 0) return collect_closet_subreplace[0];
			if (wcscmp(fieldName, L"collect_closet_subreplace_2") == 0) return collect_closet_subreplace[1];
			if (wcscmp(fieldName, L"collect_closet_subreplace_3") == 0) return collect_closet_subreplace[2];
			if (wcscmp(fieldName, L"collect_closet_subreplace_4") == 0) return collect_closet_subreplace[3];
			if (wcscmp(fieldName, L"collect_closet_subreplace_5") == 0) return collect_closet_subreplace[4];
			if (wcscmp(fieldName, L"collect_closet_subreplace_6") == 0) return collect_closet_subreplace[5];
			if (wcscmp(fieldName, L"collect_closet_subreplace_7") == 0) return collect_closet_subreplace[6];
			if (wcscmp(fieldName, L"collect_closet_subreplace_8") == 0) return collect_closet_subreplace[7];
			if (wcscmp(fieldName, L"collect_skill_skin") == 0) return collect_skill_skin;
			if (wcscmp(fieldName, L"collect_skill_skin_1") == 0) return collect_skill_skin[0];
			if (wcscmp(fieldName, L"collect_skill_skin_2") == 0) return collect_skill_skin[1];
			if (wcscmp(fieldName, L"collect_skill_skin_3") == 0) return collect_skill_skin[2];
			if (wcscmp(fieldName, L"collect_skill_skin_4") == 0) return collect_skill_skin[3];
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_4") == 0) return reward_item[3];
			if (wcscmp(fieldName, L"reward_item_5") == 0) return reward_item[4];
			if (wcscmp(fieldName, L"reward_item_6") == 0) return reward_item[5];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return reward_item_count[3];
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return reward_item_count[4];
			if (wcscmp(fieldName, L"reward_item_count_6") == 0) return reward_item_count[5];
			if (wcscmp(fieldName, L"reward_money") == 0) return reward_money;
			if (wcscmp(fieldName, L"reward_collecting_score") == 0) return reward_collecting_score;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"ability_value_1") == 0) return ability_value[0];
			if (wcscmp(fieldName, L"ability_value_2") == 0) return ability_value[1];
			if (wcscmp(fieldName, L"ability_value_3") == 0) return ability_value[2];
			if (wcscmp(fieldName, L"ability_base_value") == 0) return ability_base_value;
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return ability_base_value[0];
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return ability_base_value[1];
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return ability_base_value[2];
			if (wcscmp(fieldName, L"expiration_time") == 0) return expiration_time;
			if (wcscmp(fieldName, L"can_not_used") == 0) return can_not_used;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = collecting_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"collect_closet_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[0]));
			if (wcscmp(fieldName, L"collect_closet_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[1]));
			if (wcscmp(fieldName, L"collect_closet_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[2]));
			if (wcscmp(fieldName, L"collect_closet_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[3]));
			if (wcscmp(fieldName, L"collect_closet_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[4]));
			if (wcscmp(fieldName, L"collect_closet_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[5]));
			if (wcscmp(fieldName, L"collect_closet_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[6]));
			if (wcscmp(fieldName, L"collect_closet_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet[7]));
			if (wcscmp(fieldName, L"collect_closet_replace_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[0]));
			if (wcscmp(fieldName, L"collect_closet_replace_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[1]));
			if (wcscmp(fieldName, L"collect_closet_replace_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[2]));
			if (wcscmp(fieldName, L"collect_closet_replace_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[3]));
			if (wcscmp(fieldName, L"collect_closet_replace_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[4]));
			if (wcscmp(fieldName, L"collect_closet_replace_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[5]));
			if (wcscmp(fieldName, L"collect_closet_replace_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[6]));
			if (wcscmp(fieldName, L"collect_closet_replace_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_replace[7]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[0]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[1]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[2]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[3]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[4]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[5]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[6]));
			if (wcscmp(fieldName, L"collect_closet_subreplace_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_closet_subreplace[7]));
			if (wcscmp(fieldName, L"collect_skill_skin_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_skill_skin[0]));
			if (wcscmp(fieldName, L"collect_skill_skin_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_skill_skin[1]));
			if (wcscmp(fieldName, L"collect_skill_skin_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_skill_skin[2]));
			if (wcscmp(fieldName, L"collect_skill_skin_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collect_skill_skin[3]));
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[3]));
			if (wcscmp(fieldName, L"reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[4]));
			if (wcscmp(fieldName, L"reward_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[5]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[3]));
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[4]));
			if (wcscmp(fieldName, L"reward_item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[5]));
			if (wcscmp(fieldName, L"reward_money") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_money);
			if (wcscmp(fieldName, L"reward_collecting_score") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_collecting_score);
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[0]));
			if (wcscmp(fieldName, L"ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[1]));
			if (wcscmp(fieldName, L"ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[2]));
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[0]));
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[1]));
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[2]));
			if (wcscmp(fieldName, L"expiration_time") == 0) return Data::AnyFieldToStringConverter::ToString(&expiration_time);
			if (wcscmp(fieldName, L"can_not_used") == 0) return Data::AnyFieldToStringConverter::ToString(&can_not_used);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			collecting_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(expiration_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) expiration_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(expiration_time));
		}
		__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad_sub_0[3];
Data::TableRef collect_closet[8];
int collect_closet_tableId(){return 59;};
Data::TableRef collect_closet_replace[8];
int collect_closet_replace_tableId(){return 59;};
Data::TableRef collect_closet_subreplace[8];
int collect_closet_subreplace_tableId(){return 59;};
Data::TableRef collect_skill_skin[4];
int collect_skill_skin_tableId(){return 344;};
Data::TableRef reward_item[6];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[6];
__int32 reward_money;
__int32 reward_collecting_score;
__int8 ability[3];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
char Pad_sub_1[1];
__int32 ability_value[3];
__int32 ability_base_value[3];
wchar_t* expiration_time;
bool can_not_used;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}