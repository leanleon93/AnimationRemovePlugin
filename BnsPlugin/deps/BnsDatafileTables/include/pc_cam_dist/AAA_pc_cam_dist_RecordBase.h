/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pc_cam_dist_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_stance_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"height_transition") == 0) return height_transition;
			if (wcscmp(fieldName, L"middle_transition") == 0) return middle_transition;
			if (wcscmp(fieldName, L"far_limit_min") == 0) return far_limit_min;
			if (wcscmp(fieldName, L"far_limit_max") == 0) return far_limit_max;
			if (wcscmp(fieldName, L"transparency") == 0) return transparency;
			if (wcscmp(fieldName, L"far_height") == 0) return far_height;
			if (wcscmp(fieldName, L"middle_height") == 0) return middle_height;
			if (wcscmp(fieldName, L"near_height") == 0) return near_height;
			if (wcscmp(fieldName, L"modulate_factor") == 0) return modulate_factor;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"height_transition") == 0) return Data::AnyFieldToStringConverter::ToString(&height_transition);
			if (wcscmp(fieldName, L"middle_transition") == 0) return Data::AnyFieldToStringConverter::ToString(&middle_transition);
			if (wcscmp(fieldName, L"far_limit_min") == 0) return Data::AnyFieldToStringConverter::ToString(&far_limit_min);
			if (wcscmp(fieldName, L"far_limit_max") == 0) return Data::AnyFieldToStringConverter::ToString(&far_limit_max);
			if (wcscmp(fieldName, L"transparency") == 0) return Data::AnyFieldToStringConverter::ToString(&transparency);
			if (wcscmp(fieldName, L"far_height") == 0) return Data::AnyFieldToStringConverter::ToString(&far_height);
			if (wcscmp(fieldName, L"middle_height") == 0) return Data::AnyFieldToStringConverter::ToString(&middle_height);
			if (wcscmp(fieldName, L"near_height") == 0) return Data::AnyFieldToStringConverter::ToString(&near_height);
			if (wcscmp(fieldName, L"modulate_factor") == 0) return Data::AnyFieldToStringConverter::ToString(&modulate_factor);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
__int8 stance;
bool combat_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float height_transition;
float middle_transition;
float far_limit_min;
float far_limit_max;
float transparency;
float far_height;
float middle_height;
float near_height;
float modulate_factor;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 267; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_cam_dist_RecordPtr // : DrRecordPtr
	{
		pc_cam_dist_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_cam_dist_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}