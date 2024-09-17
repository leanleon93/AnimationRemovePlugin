/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct abnormalcamera_Record : DrEl
	{
	private:
		static std::wstring Get_idle_type_EnumValue(__int8 value);
		static std::wstring Get_camera_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"camera_type") == 0) return camera_type;
			if (wcscmp(fieldName, L"location_x") == 0) return location_x;
			if (wcscmp(fieldName, L"location_y") == 0) return location_y;
			if (wcscmp(fieldName, L"location_z") == 0) return location_z;
			if (wcscmp(fieldName, L"target_x") == 0) return target_x;
			if (wcscmp(fieldName, L"target_y") == 0) return target_y;
			if (wcscmp(fieldName, L"target_z") == 0) return target_z;
			if (wcscmp(fieldName, L"enter_duration") == 0) return enter_duration;
			if (wcscmp(fieldName, L"leave_smooth") == 0) return leave_smooth;
			if (wcscmp(fieldName, L"leave_duration") == 0) return leave_duration;
			if (wcscmp(fieldName, L"height_far") == 0) return height_far;
			if (wcscmp(fieldName, L"height_middle") == 0) return height_middle;
			if (wcscmp(fieldName, L"height_near") == 0) return height_near;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"camera_type") == 0) return Data::AnyFieldToStringConverter::ToString(&camera_type);
			if (wcscmp(fieldName, L"location_x") == 0) return Data::AnyFieldToStringConverter::ToString(&location_x);
			if (wcscmp(fieldName, L"location_y") == 0) return Data::AnyFieldToStringConverter::ToString(&location_y);
			if (wcscmp(fieldName, L"location_z") == 0) return Data::AnyFieldToStringConverter::ToString(&location_z);
			if (wcscmp(fieldName, L"target_x") == 0) return Data::AnyFieldToStringConverter::ToString(&target_x);
			if (wcscmp(fieldName, L"target_y") == 0) return Data::AnyFieldToStringConverter::ToString(&target_y);
			if (wcscmp(fieldName, L"target_z") == 0) return Data::AnyFieldToStringConverter::ToString(&target_z);
			if (wcscmp(fieldName, L"enter_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&enter_duration);
			if (wcscmp(fieldName, L"leave_smooth") == 0) return Data::AnyFieldToStringConverter::ToString(&leave_smooth);
			if (wcscmp(fieldName, L"leave_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&leave_duration);
			if (wcscmp(fieldName, L"height_far") == 0) return Data::AnyFieldToStringConverter::ToString(&height_far);
			if (wcscmp(fieldName, L"height_middle") == 0) return Data::AnyFieldToStringConverter::ToString(&height_middle);
			if (wcscmp(fieldName, L"height_near") == 0) return Data::AnyFieldToStringConverter::ToString(&height_near);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 camera_type;
std::wstring camera_type_EnumValue() const {return Get_camera_type_EnumValue(camera_type);};
char Pad0[3];
float location_x;
float location_y;
float location_z;
float target_x;
float target_y;
float target_z;
float enter_duration;
bool leave_smooth;
char Pad1[3];
float leave_duration;
float height_far;
float height_middle;
float height_near;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 2; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) abnormalcamera_RecordPtr // : DrRecordPtr
	{
		abnormalcamera_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::abnormalcamera_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}