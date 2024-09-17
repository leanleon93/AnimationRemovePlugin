/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class mapunit_RecordSubType : __int32
    {
		mapunit_record_sub_static = 0,
		mapunit_record_sub_quest = 1,
		mapunit_record_sub_link = 2,
		mapunit_record_sub_npc = 3,
		mapunit_record_sub_boss = 4,
		mapunit_record_sub_airdash = 5,
		mapunit_record_sub_env = 6,
		mapunit_record_sub_attraction = 7,
		mapunit_record_sub_npc_group = 8,
		mapunit_record_sub_guild_battle_field_portal = 9,
		mapunit_record_sub_party_battle_startpoint_alpha = 10,
		mapunit_record_sub_party_battle_startpoint_beta = 11,
		mapunit_record_sub_fishing_field = 12,
		mapunit_record_sub_count = 13,
    };
#pragma pack(push, 1)
	struct mapunit_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_map_depth_EnumValue(__int8 value);
		static std::wstring Get_arena_dungeon_map_depth_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"mapid") == 0) return mapid;
			if (wcscmp(fieldName, L"zone_id") == 0) return zone_id;
			if (wcscmp(fieldName, L"is_phasing_unit") == 0) return is_phasing_unit;
			if (wcscmp(fieldName, L"position_x") == 0) return position_x;
			if (wcscmp(fieldName, L"position_y") == 0) return position_y;
			if (wcscmp(fieldName, L"position_z") == 0) return position_z;
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"map_depth") == 0) return map_depth;
			if (wcscmp(fieldName, L"arena_dungeon_map_depth") == 0) return arena_dungeon_map_depth;
			if (wcscmp(fieldName, L"zoom") == 0) return zoom;
			if (wcscmp(fieldName, L"rotate") == 0) return rotate;
			if (wcscmp(fieldName, L"click") == 0) return click;
			if (wcscmp(fieldName, L"front") == 0) return front;
			if (wcscmp(fieldName, L"show_tooltip") == 0) return show_tooltip;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"opacity") == 0) return opacity;
			if (wcscmp(fieldName, L"size_x") == 0) return size_x;
			if (wcscmp(fieldName, L"size_y") == 0) return size_y;
			if (wcscmp(fieldName, L"oufofsight_size_x") == 0) return oufofsight_size_x;
			if (wcscmp(fieldName, L"oufofsight_size_y") == 0) return oufofsight_size_y;
			if (wcscmp(fieldName, L"imageset") == 0) return imageset;
			if (wcscmp(fieldName, L"over_imageset") == 0) return over_imageset;
			if (wcscmp(fieldName, L"pressed_imageset") == 0) return pressed_imageset;
			if (wcscmp(fieldName, L"outofsight_imageset") == 0) return outofsight_imageset;
			if (wcscmp(fieldName, L"outofsight_over_imageset") == 0) return outofsight_over_imageset;
			if (wcscmp(fieldName, L"outofsight_pressed_imageset") == 0) return outofsight_pressed_imageset;
			if (wcscmp(fieldName, L"center_pos_x") == 0) return center_pos_x;
			if (wcscmp(fieldName, L"center_pos_y") == 0) return center_pos_y;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"mapid") == 0) return Data::AnyFieldToStringConverter::ToString(&mapid);
			if (wcscmp(fieldName, L"zone_id") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_id);
			if (wcscmp(fieldName, L"is_phasing_unit") == 0) return Data::AnyFieldToStringConverter::ToString(&is_phasing_unit);
			if (wcscmp(fieldName, L"position_x") == 0) return Data::AnyFieldToStringConverter::ToString(&position_x);
			if (wcscmp(fieldName, L"position_y") == 0) return Data::AnyFieldToStringConverter::ToString(&position_y);
			if (wcscmp(fieldName, L"position_z") == 0) return Data::AnyFieldToStringConverter::ToString(&position_z);
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"map_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&map_depth);
			if (wcscmp(fieldName, L"arena_dungeon_map_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_dungeon_map_depth);
			if (wcscmp(fieldName, L"zoom") == 0) return Data::AnyFieldToStringConverter::ToString(&zoom);
			if (wcscmp(fieldName, L"rotate") == 0) return Data::AnyFieldToStringConverter::ToString(&rotate);
			if (wcscmp(fieldName, L"click") == 0) return Data::AnyFieldToStringConverter::ToString(&click);
			if (wcscmp(fieldName, L"front") == 0) return Data::AnyFieldToStringConverter::ToString(&front);
			if (wcscmp(fieldName, L"show_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&show_tooltip);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"opacity") == 0) return Data::AnyFieldToStringConverter::ToString(&opacity);
			if (wcscmp(fieldName, L"size_x") == 0) return Data::AnyFieldToStringConverter::ToString(&size_x);
			if (wcscmp(fieldName, L"size_y") == 0) return Data::AnyFieldToStringConverter::ToString(&size_y);
			if (wcscmp(fieldName, L"oufofsight_size_x") == 0) return Data::AnyFieldToStringConverter::ToString(&oufofsight_size_x);
			if (wcscmp(fieldName, L"oufofsight_size_y") == 0) return Data::AnyFieldToStringConverter::ToString(&oufofsight_size_y);
			if (wcscmp(fieldName, L"imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&imageset);
			if (wcscmp(fieldName, L"over_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&over_imageset);
			if (wcscmp(fieldName, L"pressed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&pressed_imageset);
			if (wcscmp(fieldName, L"outofsight_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&outofsight_imageset);
			if (wcscmp(fieldName, L"outofsight_over_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&outofsight_over_imageset);
			if (wcscmp(fieldName, L"outofsight_pressed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&outofsight_pressed_imageset);
			if (wcscmp(fieldName, L"center_pos_x") == 0) return Data::AnyFieldToStringConverter::ToString(&center_pos_x);
			if (wcscmp(fieldName, L"center_pos_y") == 0) return Data::AnyFieldToStringConverter::ToString(&center_pos_y);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(imageset));
			if (reinterpret_cast<std::uintptr_t>(over_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) over_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(over_imageset));
			if (reinterpret_cast<std::uintptr_t>(pressed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pressed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pressed_imageset));
			if (reinterpret_cast<std::uintptr_t>(outofsight_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) outofsight_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(outofsight_imageset));
			if (reinterpret_cast<std::uintptr_t>(outofsight_over_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) outofsight_over_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(outofsight_over_imageset));
			if (reinterpret_cast<std::uintptr_t>(outofsight_pressed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) outofsight_pressed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(outofsight_pressed_imageset));
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
__int16 mapid;
char Pad0[2];
__int32 zone_id;
bool is_phasing_unit;
char Pad1[3];
float position_x;
float position_y;
float position_z;
__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
__int8 map_depth;
std::wstring map_depth_EnumValue() const {return Get_map_depth_EnumValue(map_depth);};
__int8 arena_dungeon_map_depth;
std::wstring arena_dungeon_map_depth_EnumValue() const {return Get_arena_dungeon_map_depth_EnumValue(arena_dungeon_map_depth);};
bool zoom;
bool rotate;
bool click;
bool front;
bool show_tooltip;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int16 opacity;
__int16 size_x;
__int16 size_y;
__int16 oufofsight_size_x;
__int16 oufofsight_size_y;
char Pad2[2];
wchar_t* imageset;
wchar_t* over_imageset;
wchar_t* pressed_imageset;
wchar_t* outofsight_imageset;
wchar_t* outofsight_over_imageset;
wchar_t* outofsight_pressed_imageset;
float center_pos_x;
float center_pos_y;

		static TableVersion Version() { return TableVersion(1, 78); }
		static __int16 TableId() { return 242; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapunit_RecordPtr // : DrRecordPtr
	{
		mapunit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mapunit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}