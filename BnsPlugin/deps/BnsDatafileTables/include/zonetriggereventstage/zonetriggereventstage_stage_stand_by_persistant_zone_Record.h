/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_stand_by_persistant_zone_Record : zonetriggereventstage_Record
	{
	private:
		static std::wstring Get_persistant_zone_subtype_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zonetriggereventstage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"all_channel") == 0) return all_channel;
			if (wcscmp(fieldName, L"max_channel") == 0) return max_channel;
			if (wcscmp(fieldName, L"max_event_channel") == 0) return max_event_channel;
			if (wcscmp(fieldName, L"min_growing_channel") == 0) return min_growing_channel;
			if (wcscmp(fieldName, L"total_duration_minute") == 0) return total_duration_minute;
			if (wcscmp(fieldName, L"total_duration_minute_1") == 0) return total_duration_minute[0];
			if (wcscmp(fieldName, L"total_duration_minute_2") == 0) return total_duration_minute[1];
			if (wcscmp(fieldName, L"persistant_zone_subtype") == 0) return persistant_zone_subtype;
			if (wcscmp(fieldName, L"event_channel_text") == 0) return event_channel_text;
			if (wcscmp(fieldName, L"event_notify_diff_zone") == 0) return event_notify_diff_zone;
			if (wcscmp(fieldName, L"event_notify_diff_zone_1") == 0) return event_notify_diff_zone[0];
			if (wcscmp(fieldName, L"event_notify_diff_zone_2") == 0) return event_notify_diff_zone[1];
			if (wcscmp(fieldName, L"event_notify_diff_zone_3") == 0) return event_notify_diff_zone[2];
			if (wcscmp(fieldName, L"event_notify_diff_zone_4") == 0) return event_notify_diff_zone[3];
			if (wcscmp(fieldName, L"event_notify_diff_zone_5") == 0) return event_notify_diff_zone[4];
			if (wcscmp(fieldName, L"event_notify_diff_zone_6") == 0) return event_notify_diff_zone[5];
			if (wcscmp(fieldName, L"event_notify_diff_zone_msg") == 0) return event_notify_diff_zone_msg;
			if (wcscmp(fieldName, L"event_notify_diff_channel_msg") == 0) return event_notify_diff_channel_msg;
			if (wcscmp(fieldName, L"event_notify_msg") == 0) return event_notify_msg;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zonetriggereventstage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"all_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&all_channel);
			if (wcscmp(fieldName, L"max_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&max_channel);
			if (wcscmp(fieldName, L"max_event_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&max_event_channel);
			if (wcscmp(fieldName, L"min_growing_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&min_growing_channel);
			if (wcscmp(fieldName, L"total_duration_minute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(total_duration_minute[0]));
			if (wcscmp(fieldName, L"total_duration_minute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(total_duration_minute[1]));
			if (wcscmp(fieldName, L"persistant_zone_subtype") == 0) return Data::AnyFieldToStringConverter::ToString(&persistant_zone_subtype);
			if (wcscmp(fieldName, L"event_channel_text") == 0) return Data::AnyFieldToStringConverter::ToString(&event_channel_text);
			if (wcscmp(fieldName, L"event_notify_diff_zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_notify_diff_zone[0]));
			if (wcscmp(fieldName, L"event_notify_diff_zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_notify_diff_zone[1]));
			if (wcscmp(fieldName, L"event_notify_diff_zone_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_notify_diff_zone[2]));
			if (wcscmp(fieldName, L"event_notify_diff_zone_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_notify_diff_zone[3]));
			if (wcscmp(fieldName, L"event_notify_diff_zone_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_notify_diff_zone[4]));
			if (wcscmp(fieldName, L"event_notify_diff_zone_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_notify_diff_zone[5]));
			if (wcscmp(fieldName, L"event_notify_diff_zone_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&event_notify_diff_zone_msg);
			if (wcscmp(fieldName, L"event_notify_diff_channel_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&event_notify_diff_channel_msg);
			if (wcscmp(fieldName, L"event_notify_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&event_notify_msg);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zonetriggereventstage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		bool all_channel;
__int8 max_channel;
__int8 max_event_channel;
__int8 min_growing_channel;
__int16 total_duration_minute[2];
__int8 persistant_zone_subtype;
std::wstring persistant_zone_subtype_EnumValue() const {return Get_persistant_zone_subtype_EnumValue(persistant_zone_subtype);};
char Pad_sub_0[3];
Data::TableRef event_channel_text;
int event_channel_text_tableId(){return 405;};
Data::TableRef event_notify_diff_zone[6];
int event_notify_diff_zone_tableId(){return 443;};
Data::TableRef event_notify_diff_zone_msg;
int event_notify_diff_zone_msg_tableId(){return 151;};
Data::TableRef event_notify_diff_channel_msg;
int event_notify_diff_channel_msg_tableId(){return 151;};
Data::TableRef event_notify_msg;
int event_notify_msg_tableId(){return 151;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}