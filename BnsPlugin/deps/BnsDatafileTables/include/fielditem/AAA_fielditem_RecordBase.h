/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fielditem_Record : DrEl
	{
	private:
		static std::wstring Get_parry_event_EnumValue(__int8 value);
		static std::wstring Get_forwarding_types_EnumValue(__int8 value);
		static std::wstring Get_target_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"remain_duration") == 0) return remain_duration;
			if (wcscmp(fieldName, L"pickup_radius") == 0) return pickup_radius;
			if (wcscmp(fieldName, L"pickup_duration") == 0) return pickup_duration;
			if (wcscmp(fieldName, L"putdown_duration") == 0) return putdown_duration;
			if (wcscmp(fieldName, L"equip_effect") == 0) return equip_effect;
			if (wcscmp(fieldName, L"equip_effect_1") == 0) return equip_effect[0];
			if (wcscmp(fieldName, L"equip_effect_2") == 0) return equip_effect[1];
			if (wcscmp(fieldName, L"equip_effect_3") == 0) return equip_effect[2];
			if (wcscmp(fieldName, L"equip_effect_4") == 0) return equip_effect[3];
			if (wcscmp(fieldName, L"not_change_create_pos") == 0) return not_change_create_pos;
			if (wcscmp(fieldName, L"parry_event") == 0) return parry_event;
			if (wcscmp(fieldName, L"acquire_quest") == 0) return acquire_quest;
			if (wcscmp(fieldName, L"forwarding_types") == 0) return forwarding_types;
			if (wcscmp(fieldName, L"quests") == 0) return quests;
			if (wcscmp(fieldName, L"missions") == 0) return missions;
			if (wcscmp(fieldName, L"cases") == 0) return cases;
			if (wcscmp(fieldName, L"case_subtypes") == 0) return case_subtypes;
			if (wcscmp(fieldName, L"use_count") == 0) return use_count;
			if (wcscmp(fieldName, L"use_skill3") == 0) return use_skill3;
			if (wcscmp(fieldName, L"use_skill3_1") == 0) return use_skill3[0];
			if (wcscmp(fieldName, L"use_skill3_2") == 0) return use_skill3[1];
			if (wcscmp(fieldName, L"use_skill3_3") == 0) return use_skill3[2];
			if (wcscmp(fieldName, L"use_skill3_4") == 0) return use_skill3[3];
			if (wcscmp(fieldName, L"consume_use_count") == 0) return consume_use_count;
			if (wcscmp(fieldName, L"consume_use_count_1") == 0) return consume_use_count[0];
			if (wcscmp(fieldName, L"consume_use_count_2") == 0) return consume_use_count[1];
			if (wcscmp(fieldName, L"consume_use_count_3") == 0) return consume_use_count[2];
			if (wcscmp(fieldName, L"consume_use_count_4") == 0) return consume_use_count[3];
			if (wcscmp(fieldName, L"throw_skill3") == 0) return throw_skill3;
			if (wcscmp(fieldName, L"init_activated") == 0) return init_activated;
			if (wcscmp(fieldName, L"explosion_time") == 0) return explosion_time;
			if (wcscmp(fieldName, L"target_radius") == 0) return target_radius;
			if (wcscmp(fieldName, L"target_decal") == 0) return target_decal;
			if (wcscmp(fieldName, L"target_state") == 0) return target_state;
			if (wcscmp(fieldName, L"invoke_effect") == 0) return invoke_effect;
			if (wcscmp(fieldName, L"invoke_effect_1") == 0) return invoke_effect[0];
			if (wcscmp(fieldName, L"invoke_effect_2") == 0) return invoke_effect[1];
			if (wcscmp(fieldName, L"invoke_effect_3") == 0) return invoke_effect[2];
			if (wcscmp(fieldName, L"invoke_effect_4") == 0) return invoke_effect[3];
			if (wcscmp(fieldName, L"change_activator_by_killer") == 0) return change_activator_by_killer;
			if (wcscmp(fieldName, L"target_first_filter") == 0) return target_first_filter;
			if (wcscmp(fieldName, L"target_first_filter_1") == 0) return target_first_filter[0];
			if (wcscmp(fieldName, L"target_first_filter_2") == 0) return target_first_filter[1];
			if (wcscmp(fieldName, L"target_first_filter_3") == 0) return target_first_filter[2];
			if (wcscmp(fieldName, L"target_first_filter_4") == 0) return target_first_filter[3];
			if (wcscmp(fieldName, L"target_second_filter") == 0) return target_second_filter;
			if (wcscmp(fieldName, L"target_second_filter_1") == 0) return target_second_filter[0];
			if (wcscmp(fieldName, L"target_second_filter_2") == 0) return target_second_filter[1];
			if (wcscmp(fieldName, L"target_second_filter_3") == 0) return target_second_filter[2];
			if (wcscmp(fieldName, L"target_second_filter_4") == 0) return target_second_filter[3];
			if (wcscmp(fieldName, L"first_effect") == 0) return first_effect;
			if (wcscmp(fieldName, L"first_effect_1") == 0) return first_effect[0];
			if (wcscmp(fieldName, L"first_effect_2") == 0) return first_effect[1];
			if (wcscmp(fieldName, L"first_effect_3") == 0) return first_effect[2];
			if (wcscmp(fieldName, L"first_effect_4") == 0) return first_effect[3];
			if (wcscmp(fieldName, L"second_effect") == 0) return second_effect;
			if (wcscmp(fieldName, L"second_effect_1") == 0) return second_effect[0];
			if (wcscmp(fieldName, L"second_effect_2") == 0) return second_effect[1];
			if (wcscmp(fieldName, L"second_effect_3") == 0) return second_effect[2];
			if (wcscmp(fieldName, L"second_effect_4") == 0) return second_effect[3];
			if (wcscmp(fieldName, L"activated_effect") == 0) return activated_effect;
			if (wcscmp(fieldName, L"activate_show") == 0) return activate_show;
			if (wcscmp(fieldName, L"activate_show_1") == 0) return activate_show[0];
			if (wcscmp(fieldName, L"activate_show_2") == 0) return activate_show[1];
			if (wcscmp(fieldName, L"activate_show_3") == 0) return activate_show[2];
			if (wcscmp(fieldName, L"activate_particle") == 0) return activate_particle;
			if (wcscmp(fieldName, L"activate_particle_duration") == 0) return activate_particle_duration;
			if (wcscmp(fieldName, L"activate_particle_attatch_bone") == 0) return activate_particle_attatch_bone;
			if (wcscmp(fieldName, L"throw_target") == 0) return throw_target;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"mesh_id") == 0) return mesh_id;
			if (wcscmp(fieldName, L"mesh_col") == 0) return mesh_col;
			if (wcscmp(fieldName, L"animset_name") == 0) return animset_name;
			if (wcscmp(fieldName, L"moveanim") == 0) return moveanim;
			if (wcscmp(fieldName, L"grab_bone") == 0) return grab_bone;
			if (wcscmp(fieldName, L"pick_up") == 0) return pick_up;
			if (wcscmp(fieldName, L"put_down") == 0) return put_down;
			if (wcscmp(fieldName, L"throw_item") == 0) return throw_item;
			if (wcscmp(fieldName, L"attach_time") == 0) return attach_time;
			if (wcscmp(fieldName, L"detach_time") == 0) return detach_time;
			if (wcscmp(fieldName, L"throw_detach_time") == 0) return throw_detach_time;
			if (wcscmp(fieldName, L"throw_bone") == 0) return throw_bone;
			if (wcscmp(fieldName, L"randing") == 0) return randing;
			if (wcscmp(fieldName, L"throw_straight") == 0) return throw_straight;
			if (wcscmp(fieldName, L"gadget_stay") == 0) return gadget_stay;
			if (wcscmp(fieldName, L"gadget_pickup_idle") == 0) return gadget_pickup_idle;
			if (wcscmp(fieldName, L"gadget_putdown_start") == 0) return gadget_putdown_start;
			if (wcscmp(fieldName, L"gadget_pickup_start") == 0) return gadget_pickup_start;
			if (wcscmp(fieldName, L"gadget_thrown_start") == 0) return gadget_thrown_start;
			if (wcscmp(fieldName, L"gadget_thrown_particle") == 0) return gadget_thrown_particle;
			if (wcscmp(fieldName, L"gadget_landing") == 0) return gadget_landing;
			if (wcscmp(fieldName, L"action_name2") == 0) return action_name2;
			if (wcscmp(fieldName, L"action_desc2") == 0) return action_desc2;
			if (wcscmp(fieldName, L"drop_action_name") == 0) return drop_action_name;
			if (wcscmp(fieldName, L"drop_action_desc") == 0) return drop_action_desc;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"gadget_dropanim") == 0) return gadget_dropanim;
			if (wcscmp(fieldName, L"gadget_putdown_show") == 0) return gadget_putdown_show;
			if (wcscmp(fieldName, L"throw_presentation") == 0) return throw_presentation;
			if (wcscmp(fieldName, L"prefix") == 0) return prefix;
			if (wcscmp(fieldName, L"gadget_decompose_showdata") == 0) return gadget_decompose_showdata;
			if (wcscmp(fieldName, L"gadget_consume_showdata") == 0) return gadget_consume_showdata;
			if (wcscmp(fieldName, L"gadget_consume_in_hand_showdata") == 0) return gadget_consume_in_hand_showdata;
			if (wcscmp(fieldName, L"ghost_mode") == 0) return ghost_mode;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"remain_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&remain_duration);
			if (wcscmp(fieldName, L"pickup_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&pickup_radius);
			if (wcscmp(fieldName, L"pickup_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&pickup_duration);
			if (wcscmp(fieldName, L"putdown_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&putdown_duration);
			if (wcscmp(fieldName, L"equip_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_effect[0]));
			if (wcscmp(fieldName, L"equip_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_effect[1]));
			if (wcscmp(fieldName, L"equip_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_effect[2]));
			if (wcscmp(fieldName, L"equip_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_effect[3]));
			if (wcscmp(fieldName, L"not_change_create_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&not_change_create_pos);
			if (wcscmp(fieldName, L"parry_event") == 0) return Data::AnyFieldToStringConverter::ToString(&parry_event);
			if (wcscmp(fieldName, L"acquire_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&acquire_quest);
			if (wcscmp(fieldName, L"forwarding_types") == 0) return Data::AnyFieldToStringConverter::ToString(&forwarding_types);
			if (wcscmp(fieldName, L"quests") == 0) return Data::AnyFieldToStringConverter::ToString(&quests);
			if (wcscmp(fieldName, L"missions") == 0) return Data::AnyFieldToStringConverter::ToString(&missions);
			if (wcscmp(fieldName, L"cases") == 0) return Data::AnyFieldToStringConverter::ToString(&cases);
			if (wcscmp(fieldName, L"case_subtypes") == 0) return Data::AnyFieldToStringConverter::ToString(&case_subtypes);
			if (wcscmp(fieldName, L"use_count") == 0) return Data::AnyFieldToStringConverter::ToString(&use_count);
			if (wcscmp(fieldName, L"use_skill3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_skill3[0]));
			if (wcscmp(fieldName, L"use_skill3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_skill3[1]));
			if (wcscmp(fieldName, L"use_skill3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_skill3[2]));
			if (wcscmp(fieldName, L"use_skill3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_skill3[3]));
			if (wcscmp(fieldName, L"consume_use_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(consume_use_count[0]));
			if (wcscmp(fieldName, L"consume_use_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(consume_use_count[1]));
			if (wcscmp(fieldName, L"consume_use_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(consume_use_count[2]));
			if (wcscmp(fieldName, L"consume_use_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(consume_use_count[3]));
			if (wcscmp(fieldName, L"throw_skill3") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_skill3);
			if (wcscmp(fieldName, L"init_activated") == 0) return Data::AnyFieldToStringConverter::ToString(&init_activated);
			if (wcscmp(fieldName, L"explosion_time") == 0) return Data::AnyFieldToStringConverter::ToString(&explosion_time);
			if (wcscmp(fieldName, L"target_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&target_radius);
			if (wcscmp(fieldName, L"target_decal") == 0) return Data::AnyFieldToStringConverter::ToString(&target_decal);
			if (wcscmp(fieldName, L"target_state") == 0) return Data::AnyFieldToStringConverter::ToString(&target_state);
			if (wcscmp(fieldName, L"invoke_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(invoke_effect[0]));
			if (wcscmp(fieldName, L"invoke_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(invoke_effect[1]));
			if (wcscmp(fieldName, L"invoke_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(invoke_effect[2]));
			if (wcscmp(fieldName, L"invoke_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(invoke_effect[3]));
			if (wcscmp(fieldName, L"change_activator_by_killer") == 0) return Data::AnyFieldToStringConverter::ToString(&change_activator_by_killer);
			if (wcscmp(fieldName, L"target_first_filter_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_first_filter[0]));
			if (wcscmp(fieldName, L"target_first_filter_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_first_filter[1]));
			if (wcscmp(fieldName, L"target_first_filter_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_first_filter[2]));
			if (wcscmp(fieldName, L"target_first_filter_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_first_filter[3]));
			if (wcscmp(fieldName, L"target_second_filter_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_second_filter[0]));
			if (wcscmp(fieldName, L"target_second_filter_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_second_filter[1]));
			if (wcscmp(fieldName, L"target_second_filter_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_second_filter[2]));
			if (wcscmp(fieldName, L"target_second_filter_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_second_filter[3]));
			if (wcscmp(fieldName, L"first_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(first_effect[0]));
			if (wcscmp(fieldName, L"first_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(first_effect[1]));
			if (wcscmp(fieldName, L"first_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(first_effect[2]));
			if (wcscmp(fieldName, L"first_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(first_effect[3]));
			if (wcscmp(fieldName, L"second_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_effect[0]));
			if (wcscmp(fieldName, L"second_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_effect[1]));
			if (wcscmp(fieldName, L"second_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_effect[2]));
			if (wcscmp(fieldName, L"second_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(second_effect[3]));
			if (wcscmp(fieldName, L"activated_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&activated_effect);
			if (wcscmp(fieldName, L"activate_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_show[0]));
			if (wcscmp(fieldName, L"activate_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_show[1]));
			if (wcscmp(fieldName, L"activate_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(activate_show[2]));
			if (wcscmp(fieldName, L"activate_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_particle);
			if (wcscmp(fieldName, L"activate_particle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_particle_duration);
			if (wcscmp(fieldName, L"activate_particle_attatch_bone") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_particle_attatch_bone);
			if (wcscmp(fieldName, L"throw_target") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_target);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"mesh_id") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_id);
			if (wcscmp(fieldName, L"mesh_col") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_col);
			if (wcscmp(fieldName, L"animset_name") == 0) return Data::AnyFieldToStringConverter::ToString(&animset_name);
			if (wcscmp(fieldName, L"moveanim") == 0) return Data::AnyFieldToStringConverter::ToString(&moveanim);
			if (wcscmp(fieldName, L"grab_bone") == 0) return Data::AnyFieldToStringConverter::ToString(&grab_bone);
			if (wcscmp(fieldName, L"pick_up") == 0) return Data::AnyFieldToStringConverter::ToString(&pick_up);
			if (wcscmp(fieldName, L"put_down") == 0) return Data::AnyFieldToStringConverter::ToString(&put_down);
			if (wcscmp(fieldName, L"throw_item") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_item);
			if (wcscmp(fieldName, L"attach_time") == 0) return Data::AnyFieldToStringConverter::ToString(&attach_time);
			if (wcscmp(fieldName, L"detach_time") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_time);
			if (wcscmp(fieldName, L"throw_detach_time") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_detach_time);
			if (wcscmp(fieldName, L"throw_bone") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_bone);
			if (wcscmp(fieldName, L"randing") == 0) return Data::AnyFieldToStringConverter::ToString(&randing);
			if (wcscmp(fieldName, L"throw_straight") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_straight);
			if (wcscmp(fieldName, L"gadget_stay") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_stay);
			if (wcscmp(fieldName, L"gadget_pickup_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_pickup_idle);
			if (wcscmp(fieldName, L"gadget_putdown_start") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_putdown_start);
			if (wcscmp(fieldName, L"gadget_pickup_start") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_pickup_start);
			if (wcscmp(fieldName, L"gadget_thrown_start") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_thrown_start);
			if (wcscmp(fieldName, L"gadget_thrown_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_thrown_particle);
			if (wcscmp(fieldName, L"gadget_landing") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_landing);
			if (wcscmp(fieldName, L"action_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&action_name2);
			if (wcscmp(fieldName, L"action_desc2") == 0) return Data::AnyFieldToStringConverter::ToString(&action_desc2);
			if (wcscmp(fieldName, L"drop_action_name") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_action_name);
			if (wcscmp(fieldName, L"drop_action_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&drop_action_desc);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"gadget_dropanim") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_dropanim);
			if (wcscmp(fieldName, L"gadget_putdown_show") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_putdown_show);
			if (wcscmp(fieldName, L"throw_presentation") == 0) return Data::AnyFieldToStringConverter::ToString(&throw_presentation);
			if (wcscmp(fieldName, L"prefix") == 0) return Data::AnyFieldToStringConverter::ToString(&prefix);
			if (wcscmp(fieldName, L"gadget_decompose_showdata") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_decompose_showdata);
			if (wcscmp(fieldName, L"gadget_consume_showdata") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_consume_showdata);
			if (wcscmp(fieldName, L"gadget_consume_in_hand_showdata") == 0) return Data::AnyFieldToStringConverter::ToString(&gadget_consume_in_hand_showdata);
			if (wcscmp(fieldName, L"ghost_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&ghost_mode);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(target_decal) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) target_decal = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(target_decal));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(activate_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) activate_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(activate_show[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(activate_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) activate_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(activate_particle));
			if (reinterpret_cast<std::uintptr_t>(activate_particle_attatch_bone) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) activate_particle_attatch_bone = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(activate_particle_attatch_bone));
			if (reinterpret_cast<std::uintptr_t>(mesh_id) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_id = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_id));
			if (reinterpret_cast<std::uintptr_t>(mesh_col) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_col = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_col));
			if (reinterpret_cast<std::uintptr_t>(animset_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) animset_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(animset_name));
			if (reinterpret_cast<std::uintptr_t>(grab_bone) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) grab_bone = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(grab_bone));
			if (reinterpret_cast<std::uintptr_t>(pick_up) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pick_up = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pick_up));
			if (reinterpret_cast<std::uintptr_t>(put_down) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) put_down = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(put_down));
			if (reinterpret_cast<std::uintptr_t>(throw_item) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) throw_item = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(throw_item));
			if (reinterpret_cast<std::uintptr_t>(throw_bone) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) throw_bone = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(throw_bone));
			if (reinterpret_cast<std::uintptr_t>(gadget_stay) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_stay = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_stay));
			if (reinterpret_cast<std::uintptr_t>(gadget_pickup_idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_pickup_idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_pickup_idle));
			if (reinterpret_cast<std::uintptr_t>(gadget_putdown_start) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_putdown_start = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_putdown_start));
			if (reinterpret_cast<std::uintptr_t>(gadget_pickup_start) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_pickup_start = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_pickup_start));
			if (reinterpret_cast<std::uintptr_t>(gadget_thrown_start) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_thrown_start = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_thrown_start));
			if (reinterpret_cast<std::uintptr_t>(gadget_thrown_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_thrown_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_thrown_particle));
			if (reinterpret_cast<std::uintptr_t>(gadget_landing) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_landing = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_landing));
			if (reinterpret_cast<std::uintptr_t>(gadget_dropanim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_dropanim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_dropanim));
			if (reinterpret_cast<std::uintptr_t>(gadget_putdown_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_putdown_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_putdown_show));
			if (reinterpret_cast<std::uintptr_t>(prefix) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) prefix = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(prefix));
			if (reinterpret_cast<std::uintptr_t>(gadget_decompose_showdata) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_decompose_showdata = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_decompose_showdata));
			if (reinterpret_cast<std::uintptr_t>(gadget_consume_showdata) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_consume_showdata = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_consume_showdata));
			if (reinterpret_cast<std::uintptr_t>(gadget_consume_in_hand_showdata) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gadget_consume_in_hand_showdata = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gadget_consume_in_hand_showdata));
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
__int32 remain_duration;
__int16 pickup_radius;
char Pad0[2];
__int32 pickup_duration;
__int32 putdown_duration;
Data::TableRef equip_effect[4];
int equip_effect_tableId(){return 111;};
bool not_change_create_pos;
__int8 parry_event;
std::wstring parry_event_EnumValue() const {return Get_parry_event_EnumValue(parry_event);};
char Pad1[2];
Data::TableRef acquire_quest;
int acquire_quest_tableId(){return 283;};
__int8 forwarding_types;
std::wstring forwarding_types_EnumValue() const {return Get_forwarding_types_EnumValue(forwarding_types);};
char Pad2[3];
Data::TableRef quests;
int quests_tableId(){return 283;};
__int8 missions;
__int8 cases;
__int16 case_subtypes;
__int16 use_count;
char Pad3[2];
Data::TableRef use_skill3[4];
int use_skill3_tableId(){return 324;};
__int16 consume_use_count[4];
Data::TableRef throw_skill3;
int throw_skill3_tableId(){return 324;};
bool init_activated;
char Pad4[3];
__int32 explosion_time;
__int16 target_radius;
char Pad5[2];
wchar_t* target_decal;
__int8 target_state;
std::wstring target_state_EnumValue() const {return Get_target_state_EnumValue(target_state);};
char Pad6[3];
Data::TableRef invoke_effect[4];
int invoke_effect_tableId(){return 111;};
bool change_activator_by_killer;
char Pad7[3];
Data::TableRef target_first_filter[4];
int target_first_filter_tableId(){return 141;};
Data::TableRef target_second_filter[4];
int target_second_filter_tableId(){return 141;};
Data::TableRef first_effect[4];
int first_effect_tableId(){return 111;};
Data::TableRef second_effect[4];
int second_effect_tableId(){return 111;};
bool activated_effect;
char Pad8[3];
wchar_t* activate_show[3];
wchar_t* activate_particle;
__int32 activate_particle_duration;
wchar_t* activate_particle_attatch_bone;
bool throw_target;
char Pad9[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
wchar_t* mesh_id;
wchar_t* mesh_col;
wchar_t* animset_name;
Data::TableRef moveanim;
int moveanim_tableId(){return 139;};
wchar_t* grab_bone;
wchar_t* pick_up;
wchar_t* put_down;
wchar_t* throw_item;
__int32 attach_time;
__int32 detach_time;
__int32 throw_detach_time;
wchar_t* throw_bone;
bool randing;
bool throw_straight;
char Pad10[2];
wchar_t* gadget_stay;
wchar_t* gadget_pickup_idle;
wchar_t* gadget_putdown_start;
wchar_t* gadget_pickup_start;
wchar_t* gadget_thrown_start;
wchar_t* gadget_thrown_particle;
wchar_t* gadget_landing;
Data::TableRef action_name2;
int action_name2_tableId(){return 405;};
Data::TableRef action_desc2;
int action_desc2_tableId(){return 405;};
Data::TableRef drop_action_name;
int drop_action_name_tableId(){return 405;};
Data::TableRef drop_action_desc;
int drop_action_desc_tableId(){return 405;};
Data::TableRef description2;
int description2_tableId(){return 405;};
wchar_t* gadget_dropanim;
wchar_t* gadget_putdown_show;
bool throw_presentation;
char Pad11[3];
wchar_t* prefix;
wchar_t* gadget_decompose_showdata;
wchar_t* gadget_consume_showdata;
wchar_t* gadget_consume_in_hand_showdata;
bool ghost_mode;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 137; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditem_RecordPtr // : DrRecordPtr
	{
		fielditem_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fielditem_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}