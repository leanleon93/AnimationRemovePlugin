/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_refiner_Record : zoneenv2_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"occupation_duration") == 0) return occupation_duration;
			if (wcscmp(fieldName, L"try_refining_duration") == 0) return try_refining_duration;
			if (wcscmp(fieldName, L"base_refining_duration") == 0) return base_refining_duration;
			if (wcscmp(fieldName, L"accroach_duration") == 0) return accroach_duration;
			if (wcscmp(fieldName, L"give_faction_score_duration") == 0) return give_faction_score_duration;
			if (wcscmp(fieldName, L"respawn_duration_in_refined") == 0) return respawn_duration_in_refined;
			if (wcscmp(fieldName, L"refine_faction_score") == 0) return refine_faction_score;
			if (wcscmp(fieldName, L"refined_reward_item") == 0) return refined_reward_item;
			if (wcscmp(fieldName, L"refined_reward_item_base_count") == 0) return refined_reward_item_base_count;
			if (wcscmp(fieldName, L"refined_effect") == 0) return refined_effect;
			if (wcscmp(fieldName, L"refined_effect_distance") == 0) return refined_effect_distance;
			if (wcscmp(fieldName, L"refining_disable") == 0) return refining_disable;
			if (wcscmp(fieldName, L"occputation_effect") == 0) return occputation_effect;
			if (wcscmp(fieldName, L"occputation_effect_distance") == 0) return occputation_effect_distance;
			if (wcscmp(fieldName, L"occupy_action_icon") == 0) return occupy_action_icon;
			if (wcscmp(fieldName, L"occupy_action_name") == 0) return occupy_action_name;
			if (wcscmp(fieldName, L"occupy_caster_showname") == 0) return occupy_caster_showname;
			if (wcscmp(fieldName, L"try_refine_action_icon") == 0) return try_refine_action_icon;
			if (wcscmp(fieldName, L"try_refine_action_name") == 0) return try_refine_action_name;
			if (wcscmp(fieldName, L"try_refine_caster_showname") == 0) return try_refine_caster_showname;
			if (wcscmp(fieldName, L"give_score_action_icon") == 0) return give_score_action_icon;
			if (wcscmp(fieldName, L"give_score_action_name") == 0) return give_score_action_name;
			if (wcscmp(fieldName, L"give_score_social") == 0) return give_score_social;
			if (wcscmp(fieldName, L"give_score_caster_showname") == 0) return give_score_caster_showname;
			if (wcscmp(fieldName, L"accroach_action_icon") == 0) return accroach_action_icon;
			if (wcscmp(fieldName, L"accroach_action_name") == 0) return accroach_action_name;
			if (wcscmp(fieldName, L"accroach_caster_showname") == 0) return accroach_caster_showname;
			if (wcscmp(fieldName, L"accroach_start_kismet") == 0) return accroach_start_kismet;
			if (wcscmp(fieldName, L"accroach_end_kismet") == 0) return accroach_end_kismet;
			if (wcscmp(fieldName, L"friend_gate_start_kismet") == 0) return friend_gate_start_kismet;
			if (wcscmp(fieldName, L"friend_gate_end_kismet") == 0) return friend_gate_end_kismet;
			if (wcscmp(fieldName, L"enemy_gate_start_kismet") == 0) return enemy_gate_start_kismet;
			if (wcscmp(fieldName, L"enemy_gate_end_kismet") == 0) return enemy_gate_end_kismet;
			if (wcscmp(fieldName, L"refiner_ui_index") == 0) return refiner_ui_index;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"occupation_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&occupation_duration);
			if (wcscmp(fieldName, L"try_refining_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&try_refining_duration);
			if (wcscmp(fieldName, L"base_refining_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&base_refining_duration);
			if (wcscmp(fieldName, L"accroach_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&accroach_duration);
			if (wcscmp(fieldName, L"give_faction_score_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&give_faction_score_duration);
			if (wcscmp(fieldName, L"respawn_duration_in_refined") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_duration_in_refined);
			if (wcscmp(fieldName, L"refine_faction_score") == 0) return Data::AnyFieldToStringConverter::ToString(&refine_faction_score);
			if (wcscmp(fieldName, L"refined_reward_item") == 0) return Data::AnyFieldToStringConverter::ToString(&refined_reward_item);
			if (wcscmp(fieldName, L"refined_reward_item_base_count") == 0) return Data::AnyFieldToStringConverter::ToString(&refined_reward_item_base_count);
			if (wcscmp(fieldName, L"refined_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&refined_effect);
			if (wcscmp(fieldName, L"refined_effect_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&refined_effect_distance);
			if (wcscmp(fieldName, L"refining_disable") == 0) return Data::AnyFieldToStringConverter::ToString(&refining_disable);
			if (wcscmp(fieldName, L"occputation_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&occputation_effect);
			if (wcscmp(fieldName, L"occputation_effect_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&occputation_effect_distance);
			if (wcscmp(fieldName, L"occupy_action_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&occupy_action_icon);
			if (wcscmp(fieldName, L"occupy_action_name") == 0) return Data::AnyFieldToStringConverter::ToString(&occupy_action_name);
			if (wcscmp(fieldName, L"occupy_caster_showname") == 0) return Data::AnyFieldToStringConverter::ToString(&occupy_caster_showname);
			if (wcscmp(fieldName, L"try_refine_action_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&try_refine_action_icon);
			if (wcscmp(fieldName, L"try_refine_action_name") == 0) return Data::AnyFieldToStringConverter::ToString(&try_refine_action_name);
			if (wcscmp(fieldName, L"try_refine_caster_showname") == 0) return Data::AnyFieldToStringConverter::ToString(&try_refine_caster_showname);
			if (wcscmp(fieldName, L"give_score_action_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&give_score_action_icon);
			if (wcscmp(fieldName, L"give_score_action_name") == 0) return Data::AnyFieldToStringConverter::ToString(&give_score_action_name);
			if (wcscmp(fieldName, L"give_score_social") == 0) return Data::AnyFieldToStringConverter::ToString(&give_score_social);
			if (wcscmp(fieldName, L"give_score_caster_showname") == 0) return Data::AnyFieldToStringConverter::ToString(&give_score_caster_showname);
			if (wcscmp(fieldName, L"accroach_action_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&accroach_action_icon);
			if (wcscmp(fieldName, L"accroach_action_name") == 0) return Data::AnyFieldToStringConverter::ToString(&accroach_action_name);
			if (wcscmp(fieldName, L"accroach_caster_showname") == 0) return Data::AnyFieldToStringConverter::ToString(&accroach_caster_showname);
			if (wcscmp(fieldName, L"accroach_start_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&accroach_start_kismet);
			if (wcscmp(fieldName, L"accroach_end_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&accroach_end_kismet);
			if (wcscmp(fieldName, L"friend_gate_start_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_gate_start_kismet);
			if (wcscmp(fieldName, L"friend_gate_end_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&friend_gate_end_kismet);
			if (wcscmp(fieldName, L"enemy_gate_start_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_gate_start_kismet);
			if (wcscmp(fieldName, L"enemy_gate_end_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&enemy_gate_end_kismet);
			if (wcscmp(fieldName, L"refiner_ui_index") == 0) return Data::AnyFieldToStringConverter::ToString(&refiner_ui_index);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(occupy_caster_showname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) occupy_caster_showname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(occupy_caster_showname));
			else return;
			if (reinterpret_cast<std::uintptr_t>(try_refine_caster_showname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) try_refine_caster_showname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(try_refine_caster_showname));
			if (reinterpret_cast<std::uintptr_t>(give_score_caster_showname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) give_score_caster_showname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(give_score_caster_showname));
			if (reinterpret_cast<std::uintptr_t>(accroach_caster_showname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) accroach_caster_showname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(accroach_caster_showname));
			if (reinterpret_cast<std::uintptr_t>(accroach_start_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) accroach_start_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(accroach_start_kismet));
			if (reinterpret_cast<std::uintptr_t>(accroach_end_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) accroach_end_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(accroach_end_kismet));
			if (reinterpret_cast<std::uintptr_t>(friend_gate_start_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_gate_start_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_gate_start_kismet));
			if (reinterpret_cast<std::uintptr_t>(friend_gate_end_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) friend_gate_end_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(friend_gate_end_kismet));
			if (reinterpret_cast<std::uintptr_t>(enemy_gate_start_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_gate_start_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_gate_start_kismet));
			if (reinterpret_cast<std::uintptr_t>(enemy_gate_end_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) enemy_gate_end_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(enemy_gate_end_kismet));
		}
		__int32 occupation_duration;
__int32 try_refining_duration;
__int32 base_refining_duration;
__int32 accroach_duration;
__int32 give_faction_score_duration;
__int32 respawn_duration_in_refined;
__int32 refine_faction_score;
Data::TableRef refined_reward_item;
int refined_reward_item_tableId(){return 189;};
__int16 refined_reward_item_base_count;
char Pad_sub_0[2];
Data::TableRef refined_effect;
int refined_effect_tableId(){return 111;};
__int16 refined_effect_distance;
bool refining_disable;
char Pad_sub_1[1];
Data::TableRef occputation_effect;
int occputation_effect_tableId(){return 111;};
__int16 occputation_effect_distance;
char Pad_sub_2[2];
Data::IconRef occupy_action_icon;
Data::TableRef occupy_action_name;
int occupy_action_name_tableId(){return 405;};
wchar_t* occupy_caster_showname;
Data::IconRef try_refine_action_icon;
Data::TableRef try_refine_action_name;
int try_refine_action_name_tableId(){return 405;};
wchar_t* try_refine_caster_showname;
Data::IconRef give_score_action_icon;
Data::TableRef give_score_action_name;
int give_score_action_name_tableId(){return 405;};
Data::TableRef give_score_social;
int give_score_social_tableId(){return 367;};
wchar_t* give_score_caster_showname;
Data::IconRef accroach_action_icon;
Data::TableRef accroach_action_name;
int accroach_action_name_tableId(){return 405;};
wchar_t* accroach_caster_showname;
wchar_t* accroach_start_kismet;
wchar_t* accroach_end_kismet;
wchar_t* friend_gate_start_kismet;
wchar_t* friend_gate_end_kismet;
wchar_t* enemy_gate_start_kismet;
wchar_t* enemy_gate_end_kismet;
__int8 refiner_ui_index;

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}