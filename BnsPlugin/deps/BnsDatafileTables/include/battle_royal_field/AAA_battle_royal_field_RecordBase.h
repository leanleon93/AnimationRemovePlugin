/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct battle_royal_field_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"public_raid") == 0) return public_raid;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_member_count_party_mode_matching") == 0) return required_member_count_party_mode_matching;
			if (wcscmp(fieldName, L"required_party_count_party_mode_matching") == 0) return required_party_count_party_mode_matching;
			if (wcscmp(fieldName, L"available_party_mode_matching_weekly_time") == 0) return available_party_mode_matching_weekly_time;
			if (wcscmp(fieldName, L"waiting_duration_second") == 0) return waiting_duration_second;
			if (wcscmp(fieldName, L"stand_by_duration") == 0) return stand_by_duration;
			if (wcscmp(fieldName, L"waiting_time_before_combat") == 0) return waiting_time_before_combat;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"waiting_time_before_move") == 0) return waiting_time_before_move;
			if (wcscmp(fieldName, L"enter_pc_spawn") == 0) return enter_pc_spawn;
			if (wcscmp(fieldName, L"extra_skill_context_script") == 0) return extra_skill_context_script;
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return enable_infinite_hyper_energy;
			if (wcscmp(fieldName, L"waiting_time_before_start") == 0) return waiting_time_before_start;
			if (wcscmp(fieldName, L"camera_max_distance") == 0) return camera_max_distance;
			if (wcscmp(fieldName, L"start_condition_guide_timer_delay") == 0) return start_condition_guide_timer_delay;
			if (wcscmp(fieldName, L"survivor_escape_delay") == 0) return survivor_escape_delay;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"public_raid") == 0) return Data::AnyFieldToStringConverter::ToString(&public_raid);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_member_count_party_mode_matching") == 0) return Data::AnyFieldToStringConverter::ToString(&required_member_count_party_mode_matching);
			if (wcscmp(fieldName, L"required_party_count_party_mode_matching") == 0) return Data::AnyFieldToStringConverter::ToString(&required_party_count_party_mode_matching);
			if (wcscmp(fieldName, L"available_party_mode_matching_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&available_party_mode_matching_weekly_time);
			if (wcscmp(fieldName, L"waiting_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&waiting_duration_second);
			if (wcscmp(fieldName, L"stand_by_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&stand_by_duration);
			if (wcscmp(fieldName, L"waiting_time_before_combat") == 0) return Data::AnyFieldToStringConverter::ToString(&waiting_time_before_combat);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"waiting_time_before_move") == 0) return Data::AnyFieldToStringConverter::ToString(&waiting_time_before_move);
			if (wcscmp(fieldName, L"enter_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&enter_pc_spawn);
			if (wcscmp(fieldName, L"extra_skill_context_script") == 0) return Data::AnyFieldToStringConverter::ToString(&extra_skill_context_script);
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_infinite_hyper_energy);
			if (wcscmp(fieldName, L"waiting_time_before_start") == 0) return Data::AnyFieldToStringConverter::ToString(&waiting_time_before_start);
			if (wcscmp(fieldName, L"camera_max_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&camera_max_distance);
			if (wcscmp(fieldName, L"start_condition_guide_timer_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&start_condition_guide_timer_delay);
			if (wcscmp(fieldName, L"survivor_escape_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&survivor_escape_delay);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef public_raid;
int public_raid_tableId(){return 279;};
__int8 required_level;
__int8 required_mastery_level;
__int8 required_member_count_party_mode_matching;
__int8 required_party_count_party_mode_matching;
Data::TableRef available_party_mode_matching_weekly_time;
int available_party_mode_matching_weekly_time_tableId(){return 431;};
__int16 waiting_duration_second;
char Pad0[2];
__int32 stand_by_duration;
__int32 waiting_time_before_combat;
Data::TableRef group;
int group_tableId(){return 16;};
__int32 waiting_time_before_move;
Data::TableRef enter_pc_spawn;
int enter_pc_spawn_tableId(){return 452;};
Data::TableRef extra_skill_context_script;
int extra_skill_context_script_tableId(){return 74;};
bool enable_infinite_hyper_energy;
char Pad1[3];
__int32 waiting_time_before_start;
float camera_max_distance;
float start_condition_guide_timer_delay;
float survivor_escape_delay;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static TableVersion Version() { return TableVersion(0, 21); }
		static __int16 TableId() { return 32; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_royal_field_RecordPtr // : DrRecordPtr
	{
		battle_royal_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battle_royal_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}