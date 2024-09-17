/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct battle_royal_field_event_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"default_event_area_radius") == 0) return default_event_area_radius;
			if (wcscmp(fieldName, L"notice_time") == 0) return notice_time;
			if (wcscmp(fieldName, L"notice_time_1") == 0) return notice_time[0];
			if (wcscmp(fieldName, L"notice_time_2") == 0) return notice_time[1];
			if (wcscmp(fieldName, L"notice_time_3") == 0) return notice_time[2];
			if (wcscmp(fieldName, L"notice_time_4") == 0) return notice_time[3];
			if (wcscmp(fieldName, L"notice_time_5") == 0) return notice_time[4];
			if (wcscmp(fieldName, L"notice_time_6") == 0) return notice_time[5];
			if (wcscmp(fieldName, L"notice_time_7") == 0) return notice_time[6];
			if (wcscmp(fieldName, L"notice_time_8") == 0) return notice_time[7];
			if (wcscmp(fieldName, L"notice_time_9") == 0) return notice_time[8];
			if (wcscmp(fieldName, L"notice_time_10") == 0) return notice_time[9];
			if (wcscmp(fieldName, L"start_time") == 0) return start_time;
			if (wcscmp(fieldName, L"start_time_1") == 0) return start_time[0];
			if (wcscmp(fieldName, L"start_time_2") == 0) return start_time[1];
			if (wcscmp(fieldName, L"start_time_3") == 0) return start_time[2];
			if (wcscmp(fieldName, L"start_time_4") == 0) return start_time[3];
			if (wcscmp(fieldName, L"start_time_5") == 0) return start_time[4];
			if (wcscmp(fieldName, L"start_time_6") == 0) return start_time[5];
			if (wcscmp(fieldName, L"start_time_7") == 0) return start_time[6];
			if (wcscmp(fieldName, L"start_time_8") == 0) return start_time[7];
			if (wcscmp(fieldName, L"start_time_9") == 0) return start_time[8];
			if (wcscmp(fieldName, L"start_time_10") == 0) return start_time[9];
			if (wcscmp(fieldName, L"duration") == 0) return duration;
			if (wcscmp(fieldName, L"duration_1") == 0) return duration[0];
			if (wcscmp(fieldName, L"duration_2") == 0) return duration[1];
			if (wcscmp(fieldName, L"duration_3") == 0) return duration[2];
			if (wcscmp(fieldName, L"duration_4") == 0) return duration[3];
			if (wcscmp(fieldName, L"duration_5") == 0) return duration[4];
			if (wcscmp(fieldName, L"duration_6") == 0) return duration[5];
			if (wcscmp(fieldName, L"duration_7") == 0) return duration[6];
			if (wcscmp(fieldName, L"duration_8") == 0) return duration[7];
			if (wcscmp(fieldName, L"duration_9") == 0) return duration[8];
			if (wcscmp(fieldName, L"duration_10") == 0) return duration[9];
			if (wcscmp(fieldName, L"toxic_event_area_radius") == 0) return toxic_event_area_radius;
			if (wcscmp(fieldName, L"toxic_event_area_radius_1") == 0) return toxic_event_area_radius[0];
			if (wcscmp(fieldName, L"toxic_event_area_radius_2") == 0) return toxic_event_area_radius[1];
			if (wcscmp(fieldName, L"toxic_event_area_radius_3") == 0) return toxic_event_area_radius[2];
			if (wcscmp(fieldName, L"toxic_event_area_radius_4") == 0) return toxic_event_area_radius[3];
			if (wcscmp(fieldName, L"toxic_event_area_radius_5") == 0) return toxic_event_area_radius[4];
			if (wcscmp(fieldName, L"toxic_event_area_radius_6") == 0) return toxic_event_area_radius[5];
			if (wcscmp(fieldName, L"toxic_event_area_radius_7") == 0) return toxic_event_area_radius[6];
			if (wcscmp(fieldName, L"toxic_event_area_radius_8") == 0) return toxic_event_area_radius[7];
			if (wcscmp(fieldName, L"toxic_event_area_radius_9") == 0) return toxic_event_area_radius[8];
			if (wcscmp(fieldName, L"toxic_event_area_radius_10") == 0) return toxic_event_area_radius[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"default_event_area_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&default_event_area_radius);
			if (wcscmp(fieldName, L"notice_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[0]));
			if (wcscmp(fieldName, L"notice_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[1]));
			if (wcscmp(fieldName, L"notice_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[2]));
			if (wcscmp(fieldName, L"notice_time_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[3]));
			if (wcscmp(fieldName, L"notice_time_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[4]));
			if (wcscmp(fieldName, L"notice_time_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[5]));
			if (wcscmp(fieldName, L"notice_time_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[6]));
			if (wcscmp(fieldName, L"notice_time_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[7]));
			if (wcscmp(fieldName, L"notice_time_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[8]));
			if (wcscmp(fieldName, L"notice_time_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(notice_time[9]));
			if (wcscmp(fieldName, L"start_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[0]));
			if (wcscmp(fieldName, L"start_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[1]));
			if (wcscmp(fieldName, L"start_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[2]));
			if (wcscmp(fieldName, L"start_time_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[3]));
			if (wcscmp(fieldName, L"start_time_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[4]));
			if (wcscmp(fieldName, L"start_time_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[5]));
			if (wcscmp(fieldName, L"start_time_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[6]));
			if (wcscmp(fieldName, L"start_time_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[7]));
			if (wcscmp(fieldName, L"start_time_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[8]));
			if (wcscmp(fieldName, L"start_time_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_time[9]));
			if (wcscmp(fieldName, L"duration_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[0]));
			if (wcscmp(fieldName, L"duration_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[1]));
			if (wcscmp(fieldName, L"duration_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[2]));
			if (wcscmp(fieldName, L"duration_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[3]));
			if (wcscmp(fieldName, L"duration_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[4]));
			if (wcscmp(fieldName, L"duration_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[5]));
			if (wcscmp(fieldName, L"duration_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[6]));
			if (wcscmp(fieldName, L"duration_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[7]));
			if (wcscmp(fieldName, L"duration_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[8]));
			if (wcscmp(fieldName, L"duration_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(duration[9]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[0]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[1]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[2]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[3]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[4]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[5]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[6]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[7]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[8]));
			if (wcscmp(fieldName, L"toxic_event_area_radius_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(toxic_event_area_radius[9]));

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
__int32 default_event_area_radius;
__int32 notice_time[10];
__int32 start_time[10];
__int32 duration[10];
__int32 toxic_event_area_radius[10];

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 35; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battle_royal_field_event_RecordPtr // : DrRecordPtr
	{
		battle_royal_field_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battle_royal_field_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}