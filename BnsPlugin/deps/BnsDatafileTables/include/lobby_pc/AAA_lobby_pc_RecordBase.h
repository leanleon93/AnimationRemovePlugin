/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct lobby_pc_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"anim_set") == 0) return anim_set;
			if (wcscmp(fieldName, L"additional_anim_set") == 0) return additional_anim_set;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;
			if (wcscmp(fieldName, L"select_anim") == 0) return select_anim;
			if (wcscmp(fieldName, L"idle_anim") == 0) return idle_anim;
			if (wcscmp(fieldName, L"equip_hand") == 0) return equip_hand;
			if (wcscmp(fieldName, L"pc_pos") == 0) return pc_pos;
			if (wcscmp(fieldName, L"camera_pos") == 0) return camera_pos;
			if (wcscmp(fieldName, L"camera_target") == 0) return camera_target;
			if (wcscmp(fieldName, L"select_lobby_show") == 0) return select_lobby_show;
			if (wcscmp(fieldName, L"create_lobby_show") == 0) return create_lobby_show;
			if (wcscmp(fieldName, L"create_lobby_levelsequence") == 0) return create_lobby_levelsequence;
			if (wcscmp(fieldName, L"duel_lobby_show") == 0) return duel_lobby_show;
			if (wcscmp(fieldName, L"duel_lobby_other_show") == 0) return duel_lobby_other_show;
			if (wcscmp(fieldName, L"customize_lobby_idle_anim") == 0) return customize_lobby_idle_anim;
			if (wcscmp(fieldName, L"customize_lobby_event_show_time") == 0) return customize_lobby_event_show_time;
			if (wcscmp(fieldName, L"customize_lobby_event_show1") == 0) return customize_lobby_event_show1;
			if (wcscmp(fieldName, L"customize_lobby_event_show2") == 0) return customize_lobby_event_show2;
			if (wcscmp(fieldName, L"customize_lobby_event_show3") == 0) return customize_lobby_event_show3;
			if (wcscmp(fieldName, L"preview_world_cam_height_transition") == 0) return preview_world_cam_height_transition;
			if (wcscmp(fieldName, L"preview_world_cam_middle_transition") == 0) return preview_world_cam_middle_transition;
			if (wcscmp(fieldName, L"preview_world_cam_far_limit_min") == 0) return preview_world_cam_far_limit_min;
			if (wcscmp(fieldName, L"preview_world_cam_far_limit_max") == 0) return preview_world_cam_far_limit_max;
			if (wcscmp(fieldName, L"preview_world_cam_far_height") == 0) return preview_world_cam_far_height;
			if (wcscmp(fieldName, L"preview_world_cam_middle_height") == 0) return preview_world_cam_middle_height;
			if (wcscmp(fieldName, L"preview_world_cam_near_height") == 0) return preview_world_cam_near_height;
			if (wcscmp(fieldName, L"preview_world_cam_modulate_factor") == 0) return preview_world_cam_modulate_factor;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"anim_set") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_set);
			if (wcscmp(fieldName, L"additional_anim_set") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_anim_set);
			if (wcscmp(fieldName, L"appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance);
			if (wcscmp(fieldName, L"select_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&select_anim);
			if (wcscmp(fieldName, L"idle_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_anim);
			if (wcscmp(fieldName, L"equip_hand") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_hand);
			if (wcscmp(fieldName, L"pc_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_pos);
			if (wcscmp(fieldName, L"camera_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&camera_pos);
			if (wcscmp(fieldName, L"camera_target") == 0) return Data::AnyFieldToStringConverter::ToString(&camera_target);
			if (wcscmp(fieldName, L"select_lobby_show") == 0) return Data::AnyFieldToStringConverter::ToString(&select_lobby_show);
			if (wcscmp(fieldName, L"create_lobby_show") == 0) return Data::AnyFieldToStringConverter::ToString(&create_lobby_show);
			if (wcscmp(fieldName, L"create_lobby_levelsequence") == 0) return Data::AnyFieldToStringConverter::ToString(&create_lobby_levelsequence);
			if (wcscmp(fieldName, L"duel_lobby_show") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_lobby_show);
			if (wcscmp(fieldName, L"duel_lobby_other_show") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_lobby_other_show);
			if (wcscmp(fieldName, L"customize_lobby_idle_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&customize_lobby_idle_anim);
			if (wcscmp(fieldName, L"customize_lobby_event_show_time") == 0) return Data::AnyFieldToStringConverter::ToString(&customize_lobby_event_show_time);
			if (wcscmp(fieldName, L"customize_lobby_event_show1") == 0) return Data::AnyFieldToStringConverter::ToString(&customize_lobby_event_show1);
			if (wcscmp(fieldName, L"customize_lobby_event_show2") == 0) return Data::AnyFieldToStringConverter::ToString(&customize_lobby_event_show2);
			if (wcscmp(fieldName, L"customize_lobby_event_show3") == 0) return Data::AnyFieldToStringConverter::ToString(&customize_lobby_event_show3);
			if (wcscmp(fieldName, L"preview_world_cam_height_transition") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_height_transition);
			if (wcscmp(fieldName, L"preview_world_cam_middle_transition") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_middle_transition);
			if (wcscmp(fieldName, L"preview_world_cam_far_limit_min") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_far_limit_min);
			if (wcscmp(fieldName, L"preview_world_cam_far_limit_max") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_far_limit_max);
			if (wcscmp(fieldName, L"preview_world_cam_far_height") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_far_height);
			if (wcscmp(fieldName, L"preview_world_cam_middle_height") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_middle_height);
			if (wcscmp(fieldName, L"preview_world_cam_near_height") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_near_height);
			if (wcscmp(fieldName, L"preview_world_cam_modulate_factor") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_world_cam_modulate_factor);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(anim_set) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_set = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_set));
			else return;
			if (reinterpret_cast<std::uintptr_t>(additional_anim_set) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) additional_anim_set = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(additional_anim_set));
			if (reinterpret_cast<std::uintptr_t>(select_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) select_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(select_anim));
			if (reinterpret_cast<std::uintptr_t>(idle_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) idle_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(idle_anim));
			if (reinterpret_cast<std::uintptr_t>(pc_pos) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pc_pos = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pc_pos));
			if (reinterpret_cast<std::uintptr_t>(camera_pos) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) camera_pos = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(camera_pos));
			if (reinterpret_cast<std::uintptr_t>(camera_target) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) camera_target = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(camera_target));
			if (reinterpret_cast<std::uintptr_t>(select_lobby_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) select_lobby_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(select_lobby_show));
			if (reinterpret_cast<std::uintptr_t>(create_lobby_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) create_lobby_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(create_lobby_show));
			if (reinterpret_cast<std::uintptr_t>(create_lobby_levelsequence) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) create_lobby_levelsequence = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(create_lobby_levelsequence));
			if (reinterpret_cast<std::uintptr_t>(duel_lobby_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) duel_lobby_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(duel_lobby_show));
			if (reinterpret_cast<std::uintptr_t>(duel_lobby_other_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) duel_lobby_other_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(duel_lobby_other_show));
			if (reinterpret_cast<std::uintptr_t>(customize_lobby_idle_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) customize_lobby_idle_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(customize_lobby_idle_anim));
			if (reinterpret_cast<std::uintptr_t>(customize_lobby_event_show1) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) customize_lobby_event_show1 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(customize_lobby_event_show1));
			if (reinterpret_cast<std::uintptr_t>(customize_lobby_event_show2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) customize_lobby_event_show2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(customize_lobby_event_show2));
			if (reinterpret_cast<std::uintptr_t>(customize_lobby_event_show3) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) customize_lobby_event_show3 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(customize_lobby_event_show3));
		}
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int8 sex;
__int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_set;
wchar_t* additional_anim_set;
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* select_anim;
wchar_t* idle_anim;
Data::TableRef equip_hand;
int equip_hand_tableId(){return 189;};
wchar_t* pc_pos;
wchar_t* camera_pos;
wchar_t* camera_target;
wchar_t* select_lobby_show;
wchar_t* create_lobby_show;
wchar_t* create_lobby_levelsequence;
wchar_t* duel_lobby_show;
wchar_t* duel_lobby_other_show;
wchar_t* customize_lobby_idle_anim;
__int32 customize_lobby_event_show_time;
wchar_t* customize_lobby_event_show1;
wchar_t* customize_lobby_event_show2;
wchar_t* customize_lobby_event_show3;
float preview_world_cam_height_transition;
float preview_world_cam_middle_transition;
float preview_world_cam_far_limit_min;
float preview_world_cam_far_limit_max;
float preview_world_cam_far_height;
float preview_world_cam_middle_height;
float preview_world_cam_near_height;
float preview_world_cam_modulate_factor;

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 235; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) lobby_pc_RecordPtr // : DrRecordPtr
	{
		lobby_pc_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::lobby_pc_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}