/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_portal_Record : zoneenv2_Record
	{
	private:
		static std::wstring Get_portal_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"portal_type") == 0) return portal_type;
			if (wcscmp(fieldName, L"transit_zone") == 0) return transit_zone;
			if (wcscmp(fieldName, L"transit_dungeon") == 0) return transit_dungeon;
			if (wcscmp(fieldName, L"transit_reentrance_pcspawn") == 0) return transit_reentrance_pcspawn;
			if (wcscmp(fieldName, L"transit_pc_spawn") == 0) return transit_pc_spawn;
			if (wcscmp(fieldName, L"transit_pc_spawn_in_arena") == 0) return transit_pc_spawn_in_arena;
			if (wcscmp(fieldName, L"transit_leave_cinematic") == 0) return transit_leave_cinematic;
			if (wcscmp(fieldName, L"transit_enter_cinematic") == 0) return transit_enter_cinematic;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_1") == 0) return effect[0];
			if (wcscmp(fieldName, L"effect_2") == 0) return effect[1];
			if (wcscmp(fieldName, L"effect_3") == 0) return effect[2];
			if (wcscmp(fieldName, L"effect_4") == 0) return effect[3];
			if (wcscmp(fieldName, L"effect_5") == 0) return effect[4];
			if (wcscmp(fieldName, L"effect_6") == 0) return effect[5];
			if (wcscmp(fieldName, L"effect_7") == 0) return effect[6];
			if (wcscmp(fieldName, L"effect_8") == 0) return effect[7];
			if (wcscmp(fieldName, L"transit_leave_social") == 0) return transit_leave_social;
			if (wcscmp(fieldName, L"transit_enter_social") == 0) return transit_enter_social;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"portal_type") == 0) return Data::AnyFieldToStringConverter::ToString(&portal_type);
			if (wcscmp(fieldName, L"transit_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_zone);
			if (wcscmp(fieldName, L"transit_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_dungeon);
			if (wcscmp(fieldName, L"transit_reentrance_pcspawn") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_reentrance_pcspawn);
			if (wcscmp(fieldName, L"transit_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_pc_spawn);
			if (wcscmp(fieldName, L"transit_pc_spawn_in_arena") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_pc_spawn_in_arena);
			if (wcscmp(fieldName, L"transit_leave_cinematic") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_leave_cinematic);
			if (wcscmp(fieldName, L"transit_enter_cinematic") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_enter_cinematic);
			if (wcscmp(fieldName, L"effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[0]));
			if (wcscmp(fieldName, L"effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[1]));
			if (wcscmp(fieldName, L"effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[2]));
			if (wcscmp(fieldName, L"effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[3]));
			if (wcscmp(fieldName, L"effect_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[4]));
			if (wcscmp(fieldName, L"effect_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[5]));
			if (wcscmp(fieldName, L"effect_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[6]));
			if (wcscmp(fieldName, L"effect_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[7]));
			if (wcscmp(fieldName, L"transit_leave_social") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_leave_social);
			if (wcscmp(fieldName, L"transit_enter_social") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_enter_social);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 portal_type;
std::wstring portal_type_EnumValue() const {return Get_portal_type_EnumValue(portal_type);};
char Pad_sub_0[3];
Data::TableRef transit_zone;
int transit_zone_tableId(){return 443;};
Data::TableRef transit_dungeon;
int transit_dungeon_tableId(){return 110;};
bool transit_reentrance_pcspawn;
char Pad_sub_1[1];
__int16 transit_pc_spawn;
Data::TableRef transit_pc_spawn_in_arena;
int transit_pc_spawn_in_arena_tableId(){return 452;};
Data::TableRef transit_leave_cinematic;
int transit_leave_cinematic_tableId(){return 56;};
Data::TableRef transit_enter_cinematic;
int transit_enter_cinematic_tableId(){return 56;};
Data::TableRef effect[8];
int effect_tableId(){return 111;};
Data::TableRef transit_leave_social;
int transit_leave_social_tableId(){return 367;};
Data::TableRef transit_enter_social;
int transit_enter_social_tableId(){return 367;};
__int8 required_level;

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}