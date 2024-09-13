/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
    
#pragma pack(push, 1)
	const struct job_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 name2;
union IconRef {struct{__int64 IcontextureId; __int32 IconIndex; };};IconRef icon;
__int64 desc;
wchar_t* lobby_job_imageset;
wchar_t* character_info_job_imageset;
wchar_t* character_info_job_imageset2;
__int64 item_map_job_icon;
__int64 item_map_job_style_icon[3];
wchar_t* common_job_imageset;
__int8 stance[3];
char Pad0[1];
wchar_t* skillmap_backimageset;
__int16 skillmap_backimageset_width;
__int16 skillmap_backimageset_height;
__int64 lobby_slot_job_icon_texture;
__int16 lobby_slot_job_icon_index;
char Pad1[2];
wchar_t* lobby_job_symbol_image;
__int64 introduce_job_style[3];
__int64 play_style_desc;
wchar_t* play_style_imageset;
char play_difficulty;
char Pad2[3];
__int64 play_difficulty_desc;
wchar_t* hud_player_job_imageset;
__int16 action_key;
__int16 bns_action_key;
__int64 training_desc_default;
__int64 training_desc_attack;
__int64 training_desc_defence;
__int64 training_desc_maze;
__int64 training_desc_protect;
__int64 training_desc_control;
__int64 training_desc_distance;
__int16 training_chart_value_attack;
__int16 training_chart_value_defence;
__int16 training_chart_value_maze;
__int16 training_chart_value_protect;
__int16 training_chart_value_control;
__int16 training_chart_value_distance;
wchar_t* train_background_imageset;
__int16 lobby_chart_value_protection;
__int16 lobby_chart_value_control;
__int16 lobby_chart_value_distance;
__int16 lobby_chart_value_simplecontrols;
__int16 lobby_chart_value_defense;
__int16 lobby_chart_value_melee;
wchar_t* lobby_play_bink;
wchar_t* filter_name[3];
wchar_t* highlight_font;
__int64 job_quest_text;
__int16 damage_show_split_percent;
char Pad3[2];
__int64 job_style_name[10];
__int64 skill_train_ui_job_style_name[10];
wchar_t* skill_train_ui_job_style_imageset[10];
__int64 skill_train_ui_trait_open_button_text[10];
__int64 skill_train_ui_page_job_style_name[10];
wchar_t* skill_train_ui_page_job_style_imageset[10];
wchar_t* skill_trainingroom_ui_job_style_imageset[10];
bool use_guard_gauge;
bool use_ui_skill_combo;
__int16 use_ui_skill_train_combo_action;
__int64 contents_journal_job_style_icon[3];
float equip_weapon_scale;
__int8 phantom_weapon_active_type;
char Pad4[1];
__int16 phantom_weapon_active_effect_flag_1st;
__int16 phantom_weapon_active_effect_flag_2nd;
__int16 phantom_weapon_count;
wchar_t* phantom_weapon_anim_set;
bool phantom_weapon_start_create_socket;
char Pad5[1];
__int16 phantom_weapon_start_create_height;
bool phantom_weapon_reload_create_socket;
char Pad6[1];
__int16 phantom_weapon_reload_create_height;
bool phantom_weapon_customized_attach_scale;
char Pad7[3];
wchar_t* phantom_weapon_attach_socket_name_1st[6];
wchar_t* phantom_weapon_attach_socket_name_2nd[6];
wchar_t* phantom_weapon_spawn_start_bone;
float phantom_weapon_spawn_duration_1st;
float phantom_weapon_spawn_duration_2nd;
float phantom_weapon_spawn_attach_duration;
wchar_t* phantom_weapon_spawn_show_1st[6];
wchar_t* phantom_weapon_spawn_show_2nd[6];
wchar_t* phantom_weapon_spawn_end_bone;
float phantom_weapon_end_duration;
wchar_t* phantom_weapon_end_show[6];
float phantom_weapon_exec_end_duration;
wchar_t* phantom_weapon_exec_end_show[6];
float phantom_weapon_finish_duration;
wchar_t* phantom_weapon_finish_show[6];
wchar_t* phantom_weapon_idle_animation_1st[6];
wchar_t* phantom_weapon_idle_animation_2nd[6];
float phantom_weapon_sync_time;

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_RecordPtr // : DrRecordPtr
	{
		job_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}