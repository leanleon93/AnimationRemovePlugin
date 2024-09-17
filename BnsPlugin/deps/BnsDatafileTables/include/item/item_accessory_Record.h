/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_accessory_Record : item_Record
	{
	private:
		static std::wstring Get_accessory_type_EnumValue(__int8 value);
		static std::wstring Get_custom_dress_design_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = item_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"accessory_type") == 0) return accessory_type;
			if (wcscmp(fieldName, L"necessary_costume") == 0) return necessary_costume;
			if (wcscmp(fieldName, L"necessary_costume_brand") == 0) return necessary_costume_brand;
			if (wcscmp(fieldName, L"cannot_equip_identical_pairs") == 0) return cannot_equip_identical_pairs;
			if (wcscmp(fieldName, L"guild_used") == 0) return guild_used;
			if (wcscmp(fieldName, L"closet_group_id") == 0) return closet_group_id;
			if (wcscmp(fieldName, L"talk_social") == 0) return talk_social;
			if (wcscmp(fieldName, L"skill3") == 0) return skill3;
			if (wcscmp(fieldName, L"custom_dress_design_state") == 0) return custom_dress_design_state;
			if (wcscmp(fieldName, L"hidden_power_attach") == 0) return hidden_power_attach;
			if (wcscmp(fieldName, L"vehicle_detail") == 0) return vehicle_detail;
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
			if (wcscmp(fieldName, L"chat_ui_icon") == 0) return chat_ui_icon;
			if (wcscmp(fieldName, L"thumbnail_frame_fx") == 0) return thumbnail_frame_fx;
			if (wcscmp(fieldName, L"appearance_item") == 0) return appearance_item;
			if (wcscmp(fieldName, L"enchant_gem_slot_usable") == 0) return enchant_gem_slot_usable;
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_1") == 0) return enchant_gem_slot_usable[0];
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_2") == 0) return enchant_gem_slot_usable[1];
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_3") == 0) return enchant_gem_slot_usable[2];
			if (wcscmp(fieldName, L"init_star_stone_slot_cost_group") == 0) return init_star_stone_slot_cost_group;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = item_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"accessory_type") == 0) return Data::AnyFieldToStringConverter::ToString(&accessory_type);
			if (wcscmp(fieldName, L"necessary_costume") == 0) return Data::AnyFieldToStringConverter::ToString(&necessary_costume);
			if (wcscmp(fieldName, L"necessary_costume_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&necessary_costume_brand);
			if (wcscmp(fieldName, L"cannot_equip_identical_pairs") == 0) return Data::AnyFieldToStringConverter::ToString(&cannot_equip_identical_pairs);
			if (wcscmp(fieldName, L"guild_used") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_used);
			if (wcscmp(fieldName, L"closet_group_id") == 0) return Data::AnyFieldToStringConverter::ToString(&closet_group_id);
			if (wcscmp(fieldName, L"talk_social") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_social);
			if (wcscmp(fieldName, L"skill3") == 0) return Data::AnyFieldToStringConverter::ToString(&skill3);
			if (wcscmp(fieldName, L"custom_dress_design_state") == 0) return Data::AnyFieldToStringConverter::ToString(&custom_dress_design_state);
			if (wcscmp(fieldName, L"hidden_power_attach") == 0) return Data::AnyFieldToStringConverter::ToString(&hidden_power_attach);
			if (wcscmp(fieldName, L"vehicle_detail") == 0) return Data::AnyFieldToStringConverter::ToString(&vehicle_detail);
			if (wcscmp(fieldName, L"unseal_consume_item2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[0]));
			if (wcscmp(fieldName, L"unseal_consume_item2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[1]));
			if (wcscmp(fieldName, L"unseal_consume_item2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[2]));
			if (wcscmp(fieldName, L"unseal_consume_item2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2[3]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[0]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[1]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[2]));
			if (wcscmp(fieldName, L"unseal_consume_item2_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(unseal_consume_item2_stack_count[3]));
			if (wcscmp(fieldName, L"chat_ui_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&chat_ui_icon);
			if (wcscmp(fieldName, L"thumbnail_frame_fx") == 0) return Data::AnyFieldToStringConverter::ToString(&thumbnail_frame_fx);
			if (wcscmp(fieldName, L"appearance_item") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance_item);
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(enchant_gem_slot_usable[0]));
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(enchant_gem_slot_usable[1]));
			if (wcscmp(fieldName, L"enchant_gem_slot_usable_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(enchant_gem_slot_usable[2]));
			if (wcscmp(fieldName, L"init_star_stone_slot_cost_group") == 0) return Data::AnyFieldToStringConverter::ToString(&init_star_stone_slot_cost_group);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			item_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(thumbnail_frame_fx) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) thumbnail_frame_fx = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(thumbnail_frame_fx));
		}
		char Pad_sub_0[3];
__int8 accessory_type;
std::wstring accessory_type_EnumValue() const {return Get_accessory_type_EnumValue(accessory_type);};
char Pad_sub_1[3];
Data::TableRef necessary_costume;
int necessary_costume_tableId(){return 189;};
Data::TableRef necessary_costume_brand;
int necessary_costume_brand_tableId(){return 183;};
bool cannot_equip_identical_pairs;
bool guild_used;
char Pad_sub_2[2];
__int32 closet_group_id;
Data::TableRef talk_social;
int talk_social_tableId(){return 399;};
Data::TableRef skill3;
int skill3_tableId(){return 324;};
__int8 custom_dress_design_state;
std::wstring custom_dress_design_state_EnumValue() const {return Get_custom_dress_design_state_EnumValue(custom_dress_design_state);};
char Pad_sub_3[1];
__int16 hidden_power_attach;
Data::TableRef vehicle_detail;
int vehicle_detail_tableId(){return 420;};
Data::TableRef unseal_consume_item2[4];
int unseal_consume_item2_tableId(){return 189;};
__int16 unseal_consume_item2_stack_count[4];
Data::IconRef chat_ui_icon;
wchar_t* thumbnail_frame_fx;
Data::TableRef appearance_item;
int appearance_item_tableId(){return 11;};
bool enchant_gem_slot_usable[3];
char Pad_sub_4[1];
Data::TableRef init_star_stone_slot_cost_group;
int init_star_stone_slot_cost_group_tableId(){return 76;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}