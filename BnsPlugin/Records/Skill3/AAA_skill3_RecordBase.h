/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
	enum class skill3_RecordSubType : __int32
	{
		skill3_record_sub_active_skill = 0,
		skill3_record_sub_passive_skill = 1,
		skill3_record_sub_action = 2,
		skill3_record_sub_count = 3,
	};
#pragma pack(push, 1)
	const struct skill3_Record : DrEl
	{
	public:
		union Key
		{
			struct {
				__int32 id;
				char variation_id;
			};
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
		__int16 revised_event_probability_in_exec[5];
		char Pad0[2];
		__int64 skill_modify_limit;
		bool is_ego_skill;
		bool use_ego_skill_training_sequence;
		char Pad1[2];
		__int64 systematization[16];
		__int16 damage_rate_pvp;
		__int16 damage_rate_standard_stats;
		__int64 quest;
		char mission;
		char caseindex;
		char forwardingtype;
		char Pad2[1];
		wchar_t* name;
		__int64 name2;
		__int8 ui_stance[3];
		char Pad3[1];
		__int16 short_cut_key;
		__int16 short_cut_key_classic;
		__int16 short_cut_key_bns_simple_context;
		__int8 ui_category;
		bool ui_is_show_context_combo;
		bool ui_is_show_context_key_change;
		bool ui_is_show_context_immune_break;
		bool ui_is_show_context_combo_highlight;
		bool use_duel_observer_history;
		wchar_t* cast_decal_component;
		wchar_t* decal_component;
		bool invoke_fx_msg;
		bool stop_exec_show;
		bool weapon_property;
		bool auto_casting;
		__int64 icon_texture;
		__int16 icon_index;
		char Pad4[2];
		union IconRef { struct { __int64 IcontextureId; __int32 IconIndex; }; }; IconRef icon;
		__int64 main_info1;
		__int64 main_info2;
		__int64 sub_info;
		__int64 main_info1_diff;
		__int64 main_info2_diff;
		__int64 sub_info_diff;
		__int64 main_tooltip_1[5];
		__int64 main_tooltip_2[5];
		__int64 sub_tooltip[10];
		__int64 stance_tooltip[5];
		__int64 condition_tooltip[5];
		__int64 ui_combo;
		__int8 ui_category_display_type;
		char Pad5[3];
		__int64 ui_main_buff;
		bool show_cast_bar;
		bool show_exec_bar;
		bool show_repeat_bar;
		char Pad6[1];
		__int32 skill_attack_power_min;
		__int32 skill_attack_power_max;
		__int32 skill_attack_sub_power_min;
		__int32 skill_attack_sub_power_max;
		bool ignore_parent_tooltip;
		bool die_knockback;
		bool cast_last_anim_pause;
		bool filter_group_1;
		bool filter_group_2;
		bool filter_group_3;
		bool play_extra_sound;
		char Pad7[1];
		wchar_t* extra_sound_show;
		float extra_sound_show_lmittime;
		__int8 bullet_effect_start_skill_flow;
		char Pad8[3];
		float bullet_effect_show_offset;
		float bullet_effect_duration;
		__int64 description_weapon_soul_gem;
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill3_RecordPtr // : DrRecordPtr
	{
		skill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}