/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mapinfo_Record : DrEl
	{
	private:
		static std::wstring Get_imageset_condition_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group_id") == 0) return group_id;
			if (wcscmp(fieldName, L"floor") == 0) return floor;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"parent_mapinfo") == 0) return parent_mapinfo;
			if (wcscmp(fieldName, L"scale") == 0) return scale;
			if (wcscmp(fieldName, L"district") == 0) return district;
			if (wcscmp(fieldName, L"map_group_1") == 0) return map_group_1;
			if (wcscmp(fieldName, L"map_group_2") == 0) return map_group_2;
			if (wcscmp(fieldName, L"local_axis_x") == 0) return local_axis_x;
			if (wcscmp(fieldName, L"local_axis_y") == 0) return local_axis_y;
			if (wcscmp(fieldName, L"image_size") == 0) return image_size;
			if (wcscmp(fieldName, L"imageset") == 0) return imageset;
			if (wcscmp(fieldName, L"imageset_alphamap") == 0) return imageset_alphamap;
			if (wcscmp(fieldName, L"imageset_condition_category") == 0) return imageset_condition_category;
			if (wcscmp(fieldName, L"imageset_condition_value") == 0) return imageset_condition_value;
			if (wcscmp(fieldName, L"conditional_imageset") == 0) return conditional_imageset;
			if (wcscmp(fieldName, L"conditional_imageset_alphamap") == 0) return conditional_imageset_alphamap;
			if (wcscmp(fieldName, L"overlay") == 0) return overlay;
			if (wcscmp(fieldName, L"overlay_1") == 0) return overlay[0];
			if (wcscmp(fieldName, L"overlay_2") == 0) return overlay[1];
			if (wcscmp(fieldName, L"overlay_3") == 0) return overlay[2];
			if (wcscmp(fieldName, L"overlay_4") == 0) return overlay[3];
			if (wcscmp(fieldName, L"overlay_5") == 0) return overlay[4];
			if (wcscmp(fieldName, L"overlay_6") == 0) return overlay[5];
			if (wcscmp(fieldName, L"overlay_7") == 0) return overlay[6];
			if (wcscmp(fieldName, L"overlay_8") == 0) return overlay[7];
			if (wcscmp(fieldName, L"overlay_9") == 0) return overlay[8];
			if (wcscmp(fieldName, L"overlay_10") == 0) return overlay[9];
			if (wcscmp(fieldName, L"overlay_11") == 0) return overlay[10];
			if (wcscmp(fieldName, L"overlay_12") == 0) return overlay[11];
			if (wcscmp(fieldName, L"overlay_13") == 0) return overlay[12];
			if (wcscmp(fieldName, L"overlay_14") == 0) return overlay[13];
			if (wcscmp(fieldName, L"overlay_15") == 0) return overlay[14];
			if (wcscmp(fieldName, L"overlay_16") == 0) return overlay[15];
			if (wcscmp(fieldName, L"overlay_17") == 0) return overlay[16];
			if (wcscmp(fieldName, L"overlay_18") == 0) return overlay[17];
			if (wcscmp(fieldName, L"overlay_19") == 0) return overlay[18];
			if (wcscmp(fieldName, L"overlay_20") == 0) return overlay[19];
			if (wcscmp(fieldName, L"overlay_21") == 0) return overlay[20];
			if (wcscmp(fieldName, L"overlay_22") == 0) return overlay[21];
			if (wcscmp(fieldName, L"overlay_23") == 0) return overlay[22];
			if (wcscmp(fieldName, L"overlay_24") == 0) return overlay[23];
			if (wcscmp(fieldName, L"overlay_25") == 0) return overlay[24];
			if (wcscmp(fieldName, L"overlay_26") == 0) return overlay[25];
			if (wcscmp(fieldName, L"overlay_27") == 0) return overlay[26];
			if (wcscmp(fieldName, L"overlay_28") == 0) return overlay[27];
			if (wcscmp(fieldName, L"overlay_29") == 0) return overlay[28];
			if (wcscmp(fieldName, L"overlay_30") == 0) return overlay[29];
			if (wcscmp(fieldName, L"use_pos_in_parent") == 0) return use_pos_in_parent;
			if (wcscmp(fieldName, L"pos_in_parent_x") == 0) return pos_in_parent_x;
			if (wcscmp(fieldName, L"pos_in_parent_y") == 0) return pos_in_parent_y;
			if (wcscmp(fieldName, L"terrain") == 0) return terrain;
			if (wcscmp(fieldName, L"zoom") == 0) return zoom;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"show_navigaion_list") == 0) return show_navigaion_list;
			if (wcscmp(fieldName, L"arena_dungeon_parent_mapinfo") == 0) return arena_dungeon_parent_mapinfo;
			if (wcscmp(fieldName, L"arena_dungeon_use_pos_in_parent") == 0) return arena_dungeon_use_pos_in_parent;
			if (wcscmp(fieldName, L"arena_dungeon_pos_in_parent_x") == 0) return arena_dungeon_pos_in_parent_x;
			if (wcscmp(fieldName, L"arena_dungeon_pos_in_parent_y") == 0) return arena_dungeon_pos_in_parent_y;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group_id") == 0) return Data::AnyFieldToStringConverter::ToString(&group_id);
			if (wcscmp(fieldName, L"floor") == 0) return Data::AnyFieldToStringConverter::ToString(&floor);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"parent_mapinfo") == 0) return Data::AnyFieldToStringConverter::ToString(&parent_mapinfo);
			if (wcscmp(fieldName, L"scale") == 0) return Data::AnyFieldToStringConverter::ToString(&scale);
			if (wcscmp(fieldName, L"district") == 0) return Data::AnyFieldToStringConverter::ToString(&district);
			if (wcscmp(fieldName, L"map_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&map_group_1);
			if (wcscmp(fieldName, L"map_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&map_group_2);
			if (wcscmp(fieldName, L"local_axis_x") == 0) return Data::AnyFieldToStringConverter::ToString(&local_axis_x);
			if (wcscmp(fieldName, L"local_axis_y") == 0) return Data::AnyFieldToStringConverter::ToString(&local_axis_y);
			if (wcscmp(fieldName, L"image_size") == 0) return Data::AnyFieldToStringConverter::ToString(&image_size);
			if (wcscmp(fieldName, L"imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&imageset);
			if (wcscmp(fieldName, L"imageset_alphamap") == 0) return Data::AnyFieldToStringConverter::ToString(&imageset_alphamap);
			if (wcscmp(fieldName, L"imageset_condition_category") == 0) return Data::AnyFieldToStringConverter::ToString(&imageset_condition_category);
			if (wcscmp(fieldName, L"imageset_condition_value") == 0) return Data::AnyFieldToStringConverter::ToString(&imageset_condition_value);
			if (wcscmp(fieldName, L"conditional_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&conditional_imageset);
			if (wcscmp(fieldName, L"conditional_imageset_alphamap") == 0) return Data::AnyFieldToStringConverter::ToString(&conditional_imageset_alphamap);
			if (wcscmp(fieldName, L"overlay_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[0]));
			if (wcscmp(fieldName, L"overlay_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[1]));
			if (wcscmp(fieldName, L"overlay_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[2]));
			if (wcscmp(fieldName, L"overlay_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[3]));
			if (wcscmp(fieldName, L"overlay_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[4]));
			if (wcscmp(fieldName, L"overlay_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[5]));
			if (wcscmp(fieldName, L"overlay_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[6]));
			if (wcscmp(fieldName, L"overlay_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[7]));
			if (wcscmp(fieldName, L"overlay_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[8]));
			if (wcscmp(fieldName, L"overlay_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[9]));
			if (wcscmp(fieldName, L"overlay_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[10]));
			if (wcscmp(fieldName, L"overlay_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[11]));
			if (wcscmp(fieldName, L"overlay_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[12]));
			if (wcscmp(fieldName, L"overlay_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[13]));
			if (wcscmp(fieldName, L"overlay_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[14]));
			if (wcscmp(fieldName, L"overlay_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[15]));
			if (wcscmp(fieldName, L"overlay_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[16]));
			if (wcscmp(fieldName, L"overlay_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[17]));
			if (wcscmp(fieldName, L"overlay_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[18]));
			if (wcscmp(fieldName, L"overlay_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[19]));
			if (wcscmp(fieldName, L"overlay_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[20]));
			if (wcscmp(fieldName, L"overlay_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[21]));
			if (wcscmp(fieldName, L"overlay_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[22]));
			if (wcscmp(fieldName, L"overlay_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[23]));
			if (wcscmp(fieldName, L"overlay_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[24]));
			if (wcscmp(fieldName, L"overlay_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[25]));
			if (wcscmp(fieldName, L"overlay_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[26]));
			if (wcscmp(fieldName, L"overlay_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[27]));
			if (wcscmp(fieldName, L"overlay_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[28]));
			if (wcscmp(fieldName, L"overlay_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(overlay[29]));
			if (wcscmp(fieldName, L"use_pos_in_parent") == 0) return Data::AnyFieldToStringConverter::ToString(&use_pos_in_parent);
			if (wcscmp(fieldName, L"pos_in_parent_x") == 0) return Data::AnyFieldToStringConverter::ToString(&pos_in_parent_x);
			if (wcscmp(fieldName, L"pos_in_parent_y") == 0) return Data::AnyFieldToStringConverter::ToString(&pos_in_parent_y);
			if (wcscmp(fieldName, L"terrain") == 0) return Data::AnyFieldToStringConverter::ToString(&terrain);
			if (wcscmp(fieldName, L"zoom") == 0) return Data::AnyFieldToStringConverter::ToString(&zoom);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"show_navigaion_list") == 0) return Data::AnyFieldToStringConverter::ToString(&show_navigaion_list);
			if (wcscmp(fieldName, L"arena_dungeon_parent_mapinfo") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_dungeon_parent_mapinfo);
			if (wcscmp(fieldName, L"arena_dungeon_use_pos_in_parent") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_dungeon_use_pos_in_parent);
			if (wcscmp(fieldName, L"arena_dungeon_pos_in_parent_x") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_dungeon_pos_in_parent_x);
			if (wcscmp(fieldName, L"arena_dungeon_pos_in_parent_y") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_dungeon_pos_in_parent_y);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(imageset));
			if (reinterpret_cast<std::uintptr_t>(imageset_alphamap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) imageset_alphamap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(imageset_alphamap));
			if (reinterpret_cast<std::uintptr_t>(conditional_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) conditional_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(conditional_imageset));
			if (reinterpret_cast<std::uintptr_t>(conditional_imageset_alphamap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) conditional_imageset_alphamap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(conditional_imageset_alphamap));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 group_id;
__int16 floor;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef parent_mapinfo;
int parent_mapinfo_tableId(){return 240;};
float scale;
Data::TableRef district;
int district_tableId(){return 100;};
Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
Data::TableRef map_group_2;
int map_group_2_tableId(){return 239;};
float local_axis_x;
float local_axis_y;
__int16 image_size;
char Pad0[2];
wchar_t* imageset;
wchar_t* imageset_alphamap;
__int8 imageset_condition_category;
std::wstring imageset_condition_category_EnumValue() const {return Get_imageset_condition_category_EnumValue(imageset_condition_category);};
char Pad1[3];
__int64 imageset_condition_value;
wchar_t* conditional_imageset;
wchar_t* conditional_imageset_alphamap;
Data::TableRef overlay[30];
int overlay_tableId(){return 241;};
bool use_pos_in_parent;
char Pad2[3];
float pos_in_parent_x;
float pos_in_parent_y;
Data::TableRef terrain;
int terrain_tableId(){return 404;};
float zoom;
__int16 sort_no;
bool show_navigaion_list;
char Pad3[1];
Data::TableRef arena_dungeon_parent_mapinfo;
int arena_dungeon_parent_mapinfo_tableId(){return 240;};
bool arena_dungeon_use_pos_in_parent;
char Pad4[3];
float arena_dungeon_pos_in_parent_x;
float arena_dungeon_pos_in_parent_y;

		static TableVersion Version() { return TableVersion(1, 41); }
		static __int16 TableId() { return 240; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapinfo_RecordPtr // : DrRecordPtr
	{
		mapinfo_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mapinfo_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}