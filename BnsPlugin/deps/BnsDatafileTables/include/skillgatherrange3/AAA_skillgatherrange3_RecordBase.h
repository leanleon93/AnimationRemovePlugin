/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillgatherrange3_Record : DrEl
	{
	private:
		static std::wstring Get_cast_dir_caster_EnumValue(__int8 value);
		static std::wstring Get_cast_dir_target_EnumValue(__int8 value);
		static std::wstring Get_summon_base_pos_type_EnumValue(__int8 value);
		static std::wstring Get_summon_base_dir_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"cast_dir_caster") == 0) return cast_dir_caster;
			if (wcscmp(fieldName, L"cast_dir_target") == 0) return cast_dir_target;
			if (wcscmp(fieldName, L"range_cast_min") == 0) return range_cast_min;
			if (wcscmp(fieldName, L"range_cast_max") == 0) return range_cast_max;
			if (wcscmp(fieldName, L"range_cast_height") == 0) return range_cast_height;
			if (wcscmp(fieldName, L"range_cast_depth") == 0) return range_cast_depth;
			if (wcscmp(fieldName, L"range_cast_laser_width") == 0) return range_cast_laser_width;
			if (wcscmp(fieldName, L"gather_radius_min") == 0) return gather_radius_min;
			if (wcscmp(fieldName, L"gather_radius_min_1") == 0) return gather_radius_min[0];
			if (wcscmp(fieldName, L"gather_radius_min_2") == 0) return gather_radius_min[1];
			if (wcscmp(fieldName, L"gather_radius_min_3") == 0) return gather_radius_min[2];
			if (wcscmp(fieldName, L"gather_radius_min_4") == 0) return gather_radius_min[3];
			if (wcscmp(fieldName, L"gather_radius_min_5") == 0) return gather_radius_min[4];
			if (wcscmp(fieldName, L"gather_radius_max") == 0) return gather_radius_max;
			if (wcscmp(fieldName, L"gather_radius_max_1") == 0) return gather_radius_max[0];
			if (wcscmp(fieldName, L"gather_radius_max_2") == 0) return gather_radius_max[1];
			if (wcscmp(fieldName, L"gather_radius_max_3") == 0) return gather_radius_max[2];
			if (wcscmp(fieldName, L"gather_radius_max_4") == 0) return gather_radius_max[3];
			if (wcscmp(fieldName, L"gather_radius_max_5") == 0) return gather_radius_max[4];
			if (wcscmp(fieldName, L"gather_laser_width_min") == 0) return gather_laser_width_min;
			if (wcscmp(fieldName, L"gather_laser_width_min_1") == 0) return gather_laser_width_min[0];
			if (wcscmp(fieldName, L"gather_laser_width_min_2") == 0) return gather_laser_width_min[1];
			if (wcscmp(fieldName, L"gather_laser_width_min_3") == 0) return gather_laser_width_min[2];
			if (wcscmp(fieldName, L"gather_laser_width_min_4") == 0) return gather_laser_width_min[3];
			if (wcscmp(fieldName, L"gather_laser_width_min_5") == 0) return gather_laser_width_min[4];
			if (wcscmp(fieldName, L"gather_laser_width_max") == 0) return gather_laser_width_max;
			if (wcscmp(fieldName, L"gather_laser_width_max_1") == 0) return gather_laser_width_max[0];
			if (wcscmp(fieldName, L"gather_laser_width_max_2") == 0) return gather_laser_width_max[1];
			if (wcscmp(fieldName, L"gather_laser_width_max_3") == 0) return gather_laser_width_max[2];
			if (wcscmp(fieldName, L"gather_laser_width_max_4") == 0) return gather_laser_width_max[3];
			if (wcscmp(fieldName, L"gather_laser_width_max_5") == 0) return gather_laser_width_max[4];
			if (wcscmp(fieldName, L"gather_laser_front_distance_min") == 0) return gather_laser_front_distance_min;
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_1") == 0) return gather_laser_front_distance_min[0];
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_2") == 0) return gather_laser_front_distance_min[1];
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_3") == 0) return gather_laser_front_distance_min[2];
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_4") == 0) return gather_laser_front_distance_min[3];
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_5") == 0) return gather_laser_front_distance_min[4];
			if (wcscmp(fieldName, L"gather_laser_front_distance_max") == 0) return gather_laser_front_distance_max;
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_1") == 0) return gather_laser_front_distance_max[0];
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_2") == 0) return gather_laser_front_distance_max[1];
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_3") == 0) return gather_laser_front_distance_max[2];
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_4") == 0) return gather_laser_front_distance_max[3];
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_5") == 0) return gather_laser_front_distance_max[4];
			if (wcscmp(fieldName, L"gather_laser_back_distance_min") == 0) return gather_laser_back_distance_min;
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_1") == 0) return gather_laser_back_distance_min[0];
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_2") == 0) return gather_laser_back_distance_min[1];
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_3") == 0) return gather_laser_back_distance_min[2];
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_4") == 0) return gather_laser_back_distance_min[3];
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_5") == 0) return gather_laser_back_distance_min[4];
			if (wcscmp(fieldName, L"gather_laser_back_distance_max") == 0) return gather_laser_back_distance_max;
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_1") == 0) return gather_laser_back_distance_max[0];
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_2") == 0) return gather_laser_back_distance_max[1];
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_3") == 0) return gather_laser_back_distance_max[2];
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_4") == 0) return gather_laser_back_distance_max[3];
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_5") == 0) return gather_laser_back_distance_max[4];
			if (wcscmp(fieldName, L"shifting_laser_width_min") == 0) return shifting_laser_width_min;
			if (wcscmp(fieldName, L"shifting_laser_width_max") == 0) return shifting_laser_width_max;
			if (wcscmp(fieldName, L"shifting_laser_distance_min") == 0) return shifting_laser_distance_min;
			if (wcscmp(fieldName, L"shifting_laser_distance_max") == 0) return shifting_laser_distance_max;
			if (wcscmp(fieldName, L"shifting_laser_height") == 0) return shifting_laser_height;
			if (wcscmp(fieldName, L"shifting_laser_depth") == 0) return shifting_laser_depth;
			if (wcscmp(fieldName, L"shifting_laser_offset") == 0) return shifting_laser_offset;
			if (wcscmp(fieldName, L"target_z") == 0) return target_z;
			if (wcscmp(fieldName, L"target_z_1") == 0) return target_z[0];
			if (wcscmp(fieldName, L"target_z_2") == 0) return target_z[1];
			if (wcscmp(fieldName, L"target_z_3") == 0) return target_z[2];
			if (wcscmp(fieldName, L"target_z_4") == 0) return target_z[3];
			if (wcscmp(fieldName, L"target_z_5") == 0) return target_z[4];
			if (wcscmp(fieldName, L"summon_base_pos_type") == 0) return summon_base_pos_type;
			if (wcscmp(fieldName, L"summon_base_pos_relative_distance") == 0) return summon_base_pos_relative_distance;
			if (wcscmp(fieldName, L"summon_base_dir_type") == 0) return summon_base_dir_type;
			if (wcscmp(fieldName, L"summon_base_dir_relative_angle") == 0) return summon_base_dir_relative_angle;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"cast_dir_caster") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_dir_caster);
			if (wcscmp(fieldName, L"cast_dir_target") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_dir_target);
			if (wcscmp(fieldName, L"range_cast_min") == 0) return Data::AnyFieldToStringConverter::ToString(&range_cast_min);
			if (wcscmp(fieldName, L"range_cast_max") == 0) return Data::AnyFieldToStringConverter::ToString(&range_cast_max);
			if (wcscmp(fieldName, L"range_cast_height") == 0) return Data::AnyFieldToStringConverter::ToString(&range_cast_height);
			if (wcscmp(fieldName, L"range_cast_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&range_cast_depth);
			if (wcscmp(fieldName, L"range_cast_laser_width") == 0) return Data::AnyFieldToStringConverter::ToString(&range_cast_laser_width);
			if (wcscmp(fieldName, L"gather_radius_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_min[0]));
			if (wcscmp(fieldName, L"gather_radius_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_min[1]));
			if (wcscmp(fieldName, L"gather_radius_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_min[2]));
			if (wcscmp(fieldName, L"gather_radius_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_min[3]));
			if (wcscmp(fieldName, L"gather_radius_min_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_min[4]));
			if (wcscmp(fieldName, L"gather_radius_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_max[0]));
			if (wcscmp(fieldName, L"gather_radius_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_max[1]));
			if (wcscmp(fieldName, L"gather_radius_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_max[2]));
			if (wcscmp(fieldName, L"gather_radius_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_max[3]));
			if (wcscmp(fieldName, L"gather_radius_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_radius_max[4]));
			if (wcscmp(fieldName, L"gather_laser_width_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_min[0]));
			if (wcscmp(fieldName, L"gather_laser_width_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_min[1]));
			if (wcscmp(fieldName, L"gather_laser_width_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_min[2]));
			if (wcscmp(fieldName, L"gather_laser_width_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_min[3]));
			if (wcscmp(fieldName, L"gather_laser_width_min_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_min[4]));
			if (wcscmp(fieldName, L"gather_laser_width_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_max[0]));
			if (wcscmp(fieldName, L"gather_laser_width_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_max[1]));
			if (wcscmp(fieldName, L"gather_laser_width_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_max[2]));
			if (wcscmp(fieldName, L"gather_laser_width_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_max[3]));
			if (wcscmp(fieldName, L"gather_laser_width_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_width_max[4]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_min[0]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_min[1]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_min[2]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_min[3]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_min_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_min[4]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_max[0]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_max[1]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_max[2]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_max[3]));
			if (wcscmp(fieldName, L"gather_laser_front_distance_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_front_distance_max[4]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_min[0]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_min[1]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_min[2]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_min[3]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_min_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_min[4]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_max[0]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_max[1]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_max[2]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_max[3]));
			if (wcscmp(fieldName, L"gather_laser_back_distance_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gather_laser_back_distance_max[4]));
			if (wcscmp(fieldName, L"shifting_laser_width_min") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_width_min);
			if (wcscmp(fieldName, L"shifting_laser_width_max") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_width_max);
			if (wcscmp(fieldName, L"shifting_laser_distance_min") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_distance_min);
			if (wcscmp(fieldName, L"shifting_laser_distance_max") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_distance_max);
			if (wcscmp(fieldName, L"shifting_laser_height") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_height);
			if (wcscmp(fieldName, L"shifting_laser_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_depth);
			if (wcscmp(fieldName, L"shifting_laser_offset") == 0) return Data::AnyFieldToStringConverter::ToString(&shifting_laser_offset);
			if (wcscmp(fieldName, L"target_z_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_z[0]));
			if (wcscmp(fieldName, L"target_z_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_z[1]));
			if (wcscmp(fieldName, L"target_z_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_z[2]));
			if (wcscmp(fieldName, L"target_z_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_z[3]));
			if (wcscmp(fieldName, L"target_z_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_z[4]));
			if (wcscmp(fieldName, L"summon_base_pos_type") == 0) return Data::AnyFieldToStringConverter::ToString(&summon_base_pos_type);
			if (wcscmp(fieldName, L"summon_base_pos_relative_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&summon_base_pos_relative_distance);
			if (wcscmp(fieldName, L"summon_base_dir_type") == 0) return Data::AnyFieldToStringConverter::ToString(&summon_base_dir_type);
			if (wcscmp(fieldName, L"summon_base_dir_relative_angle") == 0) return Data::AnyFieldToStringConverter::ToString(&summon_base_dir_relative_angle);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 cast_dir_caster;
std::wstring cast_dir_caster_EnumValue() const {return Get_cast_dir_caster_EnumValue(cast_dir_caster);};
__int8 cast_dir_target;
std::wstring cast_dir_target_EnumValue() const {return Get_cast_dir_target_EnumValue(cast_dir_target);};
__int16 range_cast_min;
__int16 range_cast_max;
__int16 range_cast_height;
__int16 range_cast_depth;
__int16 range_cast_laser_width;
__int16 gather_radius_min[5];
__int16 gather_radius_max[5];
__int16 gather_laser_width_min[5];
__int16 gather_laser_width_max[5];
__int16 gather_laser_front_distance_min[5];
__int16 gather_laser_front_distance_max[5];
__int16 gather_laser_back_distance_min[5];
__int16 gather_laser_back_distance_max[5];
__int16 shifting_laser_width_min;
__int16 shifting_laser_width_max;
__int16 shifting_laser_distance_min;
__int16 shifting_laser_distance_max;
__int16 shifting_laser_height;
__int16 shifting_laser_depth;
__int16 shifting_laser_offset;
__int16 target_z[5];
__int8 summon_base_pos_type;
std::wstring summon_base_pos_type_EnumValue() const {return Get_summon_base_pos_type_EnumValue(summon_base_pos_type);};
char Pad0[1];
__int16 summon_base_pos_relative_distance;
__int8 summon_base_dir_type;
std::wstring summon_base_dir_type_EnumValue() const {return Get_summon_base_dir_type_EnumValue(summon_base_dir_type);};
char Pad1[1];
__int16 summon_base_dir_relative_angle;

		static TableVersion Version() { return TableVersion(0, 16); }
		static __int16 TableId() { return 336; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillgatherrange3_RecordPtr // : DrRecordPtr
	{
		skillgatherrange3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillgatherrange3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}