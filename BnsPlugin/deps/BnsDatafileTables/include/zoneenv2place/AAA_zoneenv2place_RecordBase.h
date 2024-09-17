/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class zoneenv2place_RecordSubType : __int32
    {
		zoneenv2place_record_sub_button = 0,
		zoneenv2place_record_sub_chest = 1,
		zoneenv2place_record_sub_pot = 2,
		zoneenv2place_record_sub_gate = 3,
		zoneenv2place_record_sub_wall = 4,
		zoneenv2place_record_sub_refiner = 5,
		zoneenv2place_record_sub_control_point = 6,
		zoneenv2place_record_sub_portal = 7,
		zoneenv2place_record_sub_foot_switch = 8,
		zoneenv2place_record_sub_effect_region = 9,
		zoneenv2place_record_sub_airdash = 10,
		zoneenv2place_record_sub_airdash_leave = 11,
		zoneenv2place_record_sub_oceanic_region = 12,
		zoneenv2place_record_sub_fall_death = 13,
		zoneenv2place_record_sub_multiple_loop = 14,
		zoneenv2place_record_sub_deck = 15,
		zoneenv2place_record_sub_fishing_point = 16,
		zoneenv2place_record_sub_attraction_popup = 17,
		zoneenv2place_record_sub_enter_arena_dungeonlobby = 18,
		zoneenv2place_record_sub_count = 19,
    };
#pragma pack(push, 1)
	struct zoneenv2place_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"region_point") == 0) return region_point;
			if (wcscmp(fieldName, L"region_point_1") == 0) return region_point[0];
			if (wcscmp(fieldName, L"region_point_2") == 0) return region_point[1];
			if (wcscmp(fieldName, L"region_point_3") == 0) return region_point[2];
			if (wcscmp(fieldName, L"region_point_4") == 0) return region_point[3];
			if (wcscmp(fieldName, L"height") == 0) return height;
			if (wcscmp(fieldName, L"action_point") == 0) return action_point;
			if (wcscmp(fieldName, L"action_radius") == 0) return action_radius;
			if (wcscmp(fieldName, L"use_manipulation_point") == 0) return use_manipulation_point;
			if (wcscmp(fieldName, L"manipulation_point") == 0) return manipulation_point;
			if (wcscmp(fieldName, L"manipulation_radius") == 0) return manipulation_radius;
			if (wcscmp(fieldName, L"manipulation_height_upper") == 0) return manipulation_height_upper;
			if (wcscmp(fieldName, L"manipulation_height_lower") == 0) return manipulation_height_lower;
			if (wcscmp(fieldName, L"env_actorname") == 0) return env_actorname;
			if (wcscmp(fieldName, L"spawn_env") == 0) return spawn_env;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"region_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(region_point[0]));
			if (wcscmp(fieldName, L"region_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(region_point[1]));
			if (wcscmp(fieldName, L"region_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(region_point[2]));
			if (wcscmp(fieldName, L"region_point_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(region_point[3]));
			if (wcscmp(fieldName, L"height") == 0) return Data::AnyFieldToStringConverter::ToString(&height);
			if (wcscmp(fieldName, L"action_point") == 0) return Data::AnyFieldToStringConverter::ToString(&action_point);
			if (wcscmp(fieldName, L"action_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&action_radius);
			if (wcscmp(fieldName, L"use_manipulation_point") == 0) return Data::AnyFieldToStringConverter::ToString(&use_manipulation_point);
			if (wcscmp(fieldName, L"manipulation_point") == 0) return Data::AnyFieldToStringConverter::ToString(&manipulation_point);
			if (wcscmp(fieldName, L"manipulation_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&manipulation_radius);
			if (wcscmp(fieldName, L"manipulation_height_upper") == 0) return Data::AnyFieldToStringConverter::ToString(&manipulation_height_upper);
			if (wcscmp(fieldName, L"manipulation_height_lower") == 0) return Data::AnyFieldToStringConverter::ToString(&manipulation_height_lower);
			if (wcscmp(fieldName, L"env_actorname") == 0) return Data::AnyFieldToStringConverter::ToString(&env_actorname);
			if (wcscmp(fieldName, L"spawn_env") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_env);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(env_actorname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) env_actorname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(env_actorname));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::XYZ region_point[4];
__int16 height;
char Pad0[2];
Data::XYZ action_point;
__int16 action_radius;
bool use_manipulation_point;
char Pad1[1];
Data::XYZ manipulation_point;
__int16 manipulation_radius;
__int16 manipulation_height_upper;
__int16 manipulation_height_lower;
char Pad2[2];
wchar_t* env_actorname;
bool spawn_env;

		static TableVersion Version() { return TableVersion(0, 20); }
		static __int16 TableId() { return 445; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2place_RecordPtr // : DrRecordPtr
	{
		zoneenv2place_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneenv2place_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}