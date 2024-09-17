/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct summoned_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_summoned_type_EnumValue(__int8 value);
		static std::wstring Get_brain_type_EnumValue(__int8 value);
		static std::wstring Get_far_event_action_type_EnumValue(__int8 value);
		static std::wstring Get_immune_skill_attribute_EnumValue(__int8 value);
		static std::wstring Get_immune_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_stance_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"id") == 0) return id;
			if (wcscmp(fieldName, L"sex") == 0) return sex;
			if (wcscmp(fieldName, L"summoned_type") == 0) return summoned_type;
			if (wcscmp(fieldName, L"brain_type") == 0) return brain_type;
			if (wcscmp(fieldName, L"combat_follow_distance") == 0) return combat_follow_distance;
			if (wcscmp(fieldName, L"far_event_distance") == 0) return far_event_distance;
			if (wcscmp(fieldName, L"far_event_action_type") == 0) return far_event_action_type;
			if (wcscmp(fieldName, L"radius") == 0) return radius;
			if (wcscmp(fieldName, L"trace_master_skill_target") == 0) return trace_master_skill_target;
			if (wcscmp(fieldName, L"summoned_sequence") == 0) return summoned_sequence;
			if (wcscmp(fieldName, L"seq_skill") == 0) return seq_skill;
			if (wcscmp(fieldName, L"seq_skill_1") == 0) return seq_skill[0];
			if (wcscmp(fieldName, L"seq_skill_2") == 0) return seq_skill[1];
			if (wcscmp(fieldName, L"seq_skill_3") == 0) return seq_skill[2];
			if (wcscmp(fieldName, L"seq_skill_4") == 0) return seq_skill[3];
			if (wcscmp(fieldName, L"seq_skill_5") == 0) return seq_skill[4];
			if (wcscmp(fieldName, L"seq_skill_6") == 0) return seq_skill[5];
			if (wcscmp(fieldName, L"seq_skill_7") == 0) return seq_skill[6];
			if (wcscmp(fieldName, L"seq_skill_8") == 0) return seq_skill[7];
			if (wcscmp(fieldName, L"seq_skill_9") == 0) return seq_skill[8];
			if (wcscmp(fieldName, L"seq_skill_10") == 0) return seq_skill[9];
			if (wcscmp(fieldName, L"spawn_skill_id") == 0) return spawn_skill_id;
			if (wcscmp(fieldName, L"immune_skill_attribute") == 0) return immune_skill_attribute;
			if (wcscmp(fieldName, L"immune_skill_attribute_1") == 0) return immune_skill_attribute[0];
			if (wcscmp(fieldName, L"immune_skill_attribute_2") == 0) return immune_skill_attribute[1];
			if (wcscmp(fieldName, L"immune_skill_attribute_3") == 0) return immune_skill_attribute[2];
			if (wcscmp(fieldName, L"immune_skill_attribute_4") == 0) return immune_skill_attribute[3];
			if (wcscmp(fieldName, L"immune_effect_attribute") == 0) return immune_effect_attribute;
			if (wcscmp(fieldName, L"immune_effect_attribute_1") == 0) return immune_effect_attribute[0];
			if (wcscmp(fieldName, L"immune_effect_attribute_2") == 0) return immune_effect_attribute[1];
			if (wcscmp(fieldName, L"immune_effect_attribute_3") == 0) return immune_effect_attribute[2];
			if (wcscmp(fieldName, L"immune_effect_attribute_4") == 0) return immune_effect_attribute[3];
			if (wcscmp(fieldName, L"immune_effect_attribute_5") == 0) return immune_effect_attribute[4];
			if (wcscmp(fieldName, L"immune_effect_attribute_6") == 0) return immune_effect_attribute[5];
			if (wcscmp(fieldName, L"immune_effect_attribute_7") == 0) return immune_effect_attribute[6];
			if (wcscmp(fieldName, L"immune_effect_attribute_8") == 0) return immune_effect_attribute[7];
			if (wcscmp(fieldName, L"stance") == 0) return stance;
			if (wcscmp(fieldName, L"lifetime_duration") == 0) return lifetime_duration;
			if (wcscmp(fieldName, L"max_speed_near_master") == 0) return max_speed_near_master;
			if (wcscmp(fieldName, L"min_distance_to_lerp_speed") == 0) return min_distance_to_lerp_speed;
			if (wcscmp(fieldName, L"max_distance_to_lerp_speed") == 0) return max_distance_to_lerp_speed;
			if (wcscmp(fieldName, L"speed") == 0) return speed;
			if (wcscmp(fieldName, L"use_customized_appearance") == 0) return use_customized_appearance;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;
			if (wcscmp(fieldName, L"animset") == 0) return animset;
			if (wcscmp(fieldName, L"spawn_social") == 0) return spawn_social;
			if (wcscmp(fieldName, L"respawn_in_social") == 0) return respawn_in_social;
			if (wcscmp(fieldName, L"respawn_out_social") == 0) return respawn_out_social;
			if (wcscmp(fieldName, L"spawn_show") == 0) return spawn_show;
			if (wcscmp(fieldName, L"despawn_show") == 0) return despawn_show;
			if (wcscmp(fieldName, L"combat_side_player_continuance_show") == 0) return combat_side_player_continuance_show;
			if (wcscmp(fieldName, L"combat_side_friend_continuance_show") == 0) return combat_side_friend_continuance_show;
			if (wcscmp(fieldName, L"combat_side_enemy_continuance_show") == 0) return combat_side_enemy_continuance_show;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"ui_show_buff_list") == 0) return ui_show_buff_list;
			if (wcscmp(fieldName, L"ui_show_nameplate") == 0) return ui_show_nameplate;
			if (wcscmp(fieldName, L"ui_show_summoned_stat") == 0) return ui_show_summoned_stat;
			if (wcscmp(fieldName, L"ui_enable_pc_tooltip") == 0) return ui_enable_pc_tooltip;
			if (wcscmp(fieldName, L"mapunit_width") == 0) return mapunit_width;
			if (wcscmp(fieldName, L"mapunit_height") == 0) return mapunit_height;
			if (wcscmp(fieldName, L"mapunit_imageset") == 0) return mapunit_imageset;
			if (wcscmp(fieldName, L"mapunit_outsight_width") == 0) return mapunit_outsight_width;
			if (wcscmp(fieldName, L"mapunit_outsight_height") == 0) return mapunit_outsight_height;
			if (wcscmp(fieldName, L"mapunit_outsight_imageset") == 0) return mapunit_outsight_imageset;
			if (wcscmp(fieldName, L"fixed_name") == 0) return fixed_name;
			if (wcscmp(fieldName, L"nameplate_title_state_normal") == 0) return nameplate_title_state_normal;
			if (wcscmp(fieldName, L"nameplate_title_state_duel_other_team") == 0) return nameplate_title_state_duel_other_team;
			if (wcscmp(fieldName, L"nameplate_name_state_anonymity") == 0) return nameplate_name_state_anonymity;
			if (wcscmp(fieldName, L"nameplate_name_state_duel_other_team") == 0) return nameplate_name_state_duel_other_team;
			if (wcscmp(fieldName, L"term_sequence_range_sim_check") == 0) return term_sequence_range_sim_check;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"id") == 0) return Data::AnyFieldToStringConverter::ToString(&id);
			if (wcscmp(fieldName, L"sex") == 0) return Data::AnyFieldToStringConverter::ToString(&sex);
			if (wcscmp(fieldName, L"summoned_type") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_type);
			if (wcscmp(fieldName, L"brain_type") == 0) return Data::AnyFieldToStringConverter::ToString(&brain_type);
			if (wcscmp(fieldName, L"combat_follow_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_follow_distance);
			if (wcscmp(fieldName, L"far_event_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&far_event_distance);
			if (wcscmp(fieldName, L"far_event_action_type") == 0) return Data::AnyFieldToStringConverter::ToString(&far_event_action_type);
			if (wcscmp(fieldName, L"radius") == 0) return Data::AnyFieldToStringConverter::ToString(&radius);
			if (wcscmp(fieldName, L"trace_master_skill_target") == 0) return Data::AnyFieldToStringConverter::ToString(&trace_master_skill_target);
			if (wcscmp(fieldName, L"summoned_sequence") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_sequence);
			if (wcscmp(fieldName, L"seq_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[0]));
			if (wcscmp(fieldName, L"seq_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[1]));
			if (wcscmp(fieldName, L"seq_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[2]));
			if (wcscmp(fieldName, L"seq_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[3]));
			if (wcscmp(fieldName, L"seq_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[4]));
			if (wcscmp(fieldName, L"seq_skill_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[5]));
			if (wcscmp(fieldName, L"seq_skill_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[6]));
			if (wcscmp(fieldName, L"seq_skill_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[7]));
			if (wcscmp(fieldName, L"seq_skill_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[8]));
			if (wcscmp(fieldName, L"seq_skill_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(seq_skill[9]));
			if (wcscmp(fieldName, L"spawn_skill_id") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_skill_id);
			if (wcscmp(fieldName, L"immune_skill_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_skill_attribute[0]));
			if (wcscmp(fieldName, L"immune_skill_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_skill_attribute[1]));
			if (wcscmp(fieldName, L"immune_skill_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_skill_attribute[2]));
			if (wcscmp(fieldName, L"immune_skill_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_skill_attribute[3]));
			if (wcscmp(fieldName, L"immune_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[0]));
			if (wcscmp(fieldName, L"immune_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[1]));
			if (wcscmp(fieldName, L"immune_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[2]));
			if (wcscmp(fieldName, L"immune_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[3]));
			if (wcscmp(fieldName, L"immune_effect_attribute_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[4]));
			if (wcscmp(fieldName, L"immune_effect_attribute_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[5]));
			if (wcscmp(fieldName, L"immune_effect_attribute_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[6]));
			if (wcscmp(fieldName, L"immune_effect_attribute_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_effect_attribute[7]));
			if (wcscmp(fieldName, L"stance") == 0) return Data::AnyFieldToStringConverter::ToString(&stance);
			if (wcscmp(fieldName, L"lifetime_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&lifetime_duration);
			if (wcscmp(fieldName, L"max_speed_near_master") == 0) return Data::AnyFieldToStringConverter::ToString(&max_speed_near_master);
			if (wcscmp(fieldName, L"min_distance_to_lerp_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&min_distance_to_lerp_speed);
			if (wcscmp(fieldName, L"max_distance_to_lerp_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&max_distance_to_lerp_speed);
			if (wcscmp(fieldName, L"speed") == 0) return Data::AnyFieldToStringConverter::ToString(&speed);
			if (wcscmp(fieldName, L"use_customized_appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&use_customized_appearance);
			if (wcscmp(fieldName, L"appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance);
			if (wcscmp(fieldName, L"animset") == 0) return Data::AnyFieldToStringConverter::ToString(&animset);
			if (wcscmp(fieldName, L"spawn_social") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_social);
			if (wcscmp(fieldName, L"respawn_in_social") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_in_social);
			if (wcscmp(fieldName, L"respawn_out_social") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_out_social);
			if (wcscmp(fieldName, L"spawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show);
			if (wcscmp(fieldName, L"despawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show);
			if (wcscmp(fieldName, L"combat_side_player_continuance_show") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_side_player_continuance_show);
			if (wcscmp(fieldName, L"combat_side_friend_continuance_show") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_side_friend_continuance_show);
			if (wcscmp(fieldName, L"combat_side_enemy_continuance_show") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_side_enemy_continuance_show);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"ui_show_buff_list") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_show_buff_list);
			if (wcscmp(fieldName, L"ui_show_nameplate") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_show_nameplate);
			if (wcscmp(fieldName, L"ui_show_summoned_stat") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_show_summoned_stat);
			if (wcscmp(fieldName, L"ui_enable_pc_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_enable_pc_tooltip);
			if (wcscmp(fieldName, L"mapunit_width") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_width);
			if (wcscmp(fieldName, L"mapunit_height") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_height);
			if (wcscmp(fieldName, L"mapunit_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_imageset);
			if (wcscmp(fieldName, L"mapunit_outsight_width") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_outsight_width);
			if (wcscmp(fieldName, L"mapunit_outsight_height") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_outsight_height);
			if (wcscmp(fieldName, L"mapunit_outsight_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_outsight_imageset);
			if (wcscmp(fieldName, L"fixed_name") == 0) return Data::AnyFieldToStringConverter::ToString(&fixed_name);
			if (wcscmp(fieldName, L"nameplate_title_state_normal") == 0) return Data::AnyFieldToStringConverter::ToString(&nameplate_title_state_normal);
			if (wcscmp(fieldName, L"nameplate_title_state_duel_other_team") == 0) return Data::AnyFieldToStringConverter::ToString(&nameplate_title_state_duel_other_team);
			if (wcscmp(fieldName, L"nameplate_name_state_anonymity") == 0) return Data::AnyFieldToStringConverter::ToString(&nameplate_name_state_anonymity);
			if (wcscmp(fieldName, L"nameplate_name_state_duel_other_team") == 0) return Data::AnyFieldToStringConverter::ToString(&nameplate_name_state_duel_other_team);
			if (wcscmp(fieldName, L"term_sequence_range_sim_check") == 0) return Data::AnyFieldToStringConverter::ToString(&term_sequence_range_sim_check);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(animset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(spawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show));
			if (reinterpret_cast<std::uintptr_t>(despawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show));
			if (reinterpret_cast<std::uintptr_t>(combat_side_player_continuance_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_side_player_continuance_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_side_player_continuance_show));
			if (reinterpret_cast<std::uintptr_t>(combat_side_friend_continuance_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_side_friend_continuance_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_side_friend_continuance_show));
			if (reinterpret_cast<std::uintptr_t>(combat_side_enemy_continuance_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_side_enemy_continuance_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_side_enemy_continuance_show));
			if (reinterpret_cast<std::uintptr_t>(mapunit_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mapunit_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mapunit_imageset));
			if (reinterpret_cast<std::uintptr_t>(mapunit_outsight_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mapunit_outsight_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mapunit_outsight_imageset));
		}
		union Key
		{
            struct {
                __int8 race;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 id;
__int8 sex;
std::wstring sex_EnumValue() const {return Get_sex_EnumValue(sex);};
__int8 summoned_type;
std::wstring summoned_type_EnumValue() const {return Get_summoned_type_EnumValue(summoned_type);};
__int8 brain_type;
std::wstring brain_type_EnumValue() const {return Get_brain_type_EnumValue(brain_type);};
char Pad0[1];
__int16 combat_follow_distance;
__int16 far_event_distance;
__int8 far_event_action_type;
std::wstring far_event_action_type_EnumValue() const {return Get_far_event_action_type_EnumValue(far_event_action_type);};
char Pad1[1];
__int16 radius;
bool trace_master_skill_target;
char Pad2[3];
Data::TableRef summoned_sequence;
int summoned_sequence_tableId(){return 395;};
__int32 seq_skill[10];
__int32 spawn_skill_id;
__int8 immune_skill_attribute[4];
std::wstring immune_skill_attribute_EnumValue(int index) const {return Get_immune_skill_attribute_EnumValue(immune_skill_attribute[index]);};
__int16 immune_effect_attribute[8];
std::wstring immune_effect_attribute_EnumValue(int index) const {return Get_immune_effect_attribute_EnumValue(immune_effect_attribute[index]);};
__int8 stance;
std::wstring stance_EnumValue() const {return Get_stance_EnumValue(stance);};
char Pad3[3];
__int32 lifetime_duration;
__int16 max_speed_near_master;
__int16 min_distance_to_lerp_speed;
__int16 max_distance_to_lerp_speed;
__int16 speed;
bool use_customized_appearance;
char Pad4[3];
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* animset;
Data::TableRef spawn_social;
int spawn_social_tableId(){return 367;};
Data::TableRef respawn_in_social;
int respawn_in_social_tableId(){return 367;};
Data::TableRef respawn_out_social;
int respawn_out_social_tableId(){return 367;};
wchar_t* spawn_show;
wchar_t* despawn_show;
wchar_t* combat_side_player_continuance_show;
wchar_t* combat_side_friend_continuance_show;
wchar_t* combat_side_enemy_continuance_show;
Data::IconRef icon;
bool ui_show_buff_list;
bool ui_show_nameplate;
bool ui_show_summoned_stat;
bool ui_enable_pc_tooltip;
float mapunit_width;
float mapunit_height;
wchar_t* mapunit_imageset;
float mapunit_outsight_width;
float mapunit_outsight_height;
wchar_t* mapunit_outsight_imageset;
Data::TableRef fixed_name;
int fixed_name_tableId(){return 405;};
Data::TableRef nameplate_title_state_normal;
int nameplate_title_state_normal_tableId(){return 405;};
Data::TableRef nameplate_title_state_duel_other_team;
int nameplate_title_state_duel_other_team_tableId(){return 405;};
Data::TableRef nameplate_name_state_anonymity;
int nameplate_name_state_anonymity_tableId(){return 405;};
Data::TableRef nameplate_name_state_duel_other_team;
int nameplate_name_state_duel_other_team_tableId(){return 405;};
float term_sequence_range_sim_check;

		static TableVersion Version() { return TableVersion(0, 55); }
		static __int16 TableId() { return 388; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoned_RecordPtr // : DrRecordPtr
	{
		summoned_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summoned_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}