/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventcond_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventcond_weekly_event_Record : zonetriggereventcond_Record
	{
	private:
		static std::wstring Get_event_day_of_week_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zonetriggereventcond_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"event_day_of_week") == 0) return event_day_of_week;
			if (wcscmp(fieldName, L"event_hour") == 0) return event_hour;
			if (wcscmp(fieldName, L"event_hour_1") == 0) return event_hour[0];
			if (wcscmp(fieldName, L"event_hour_2") == 0) return event_hour[1];
			if (wcscmp(fieldName, L"event_hour_3") == 0) return event_hour[2];
			if (wcscmp(fieldName, L"event_hour_4") == 0) return event_hour[3];
			if (wcscmp(fieldName, L"event_hour_5") == 0) return event_hour[4];
			if (wcscmp(fieldName, L"event_hour_6") == 0) return event_hour[5];
			if (wcscmp(fieldName, L"event_hour_7") == 0) return event_hour[6];
			if (wcscmp(fieldName, L"event_hour_8") == 0) return event_hour[7];
			if (wcscmp(fieldName, L"event_hour_9") == 0) return event_hour[8];
			if (wcscmp(fieldName, L"event_hour_10") == 0) return event_hour[9];
			if (wcscmp(fieldName, L"event_hour_11") == 0) return event_hour[10];
			if (wcscmp(fieldName, L"event_hour_12") == 0) return event_hour[11];
			if (wcscmp(fieldName, L"event_minute") == 0) return event_minute;
			if (wcscmp(fieldName, L"event_minute_1") == 0) return event_minute[0];
			if (wcscmp(fieldName, L"event_minute_2") == 0) return event_minute[1];
			if (wcscmp(fieldName, L"event_minute_3") == 0) return event_minute[2];
			if (wcscmp(fieldName, L"event_minute_4") == 0) return event_minute[3];
			if (wcscmp(fieldName, L"event_minute_5") == 0) return event_minute[4];
			if (wcscmp(fieldName, L"event_minute_6") == 0) return event_minute[5];
			if (wcscmp(fieldName, L"event_minute_7") == 0) return event_minute[6];
			if (wcscmp(fieldName, L"event_minute_8") == 0) return event_minute[7];
			if (wcscmp(fieldName, L"event_minute_9") == 0) return event_minute[8];
			if (wcscmp(fieldName, L"event_minute_10") == 0) return event_minute[9];
			if (wcscmp(fieldName, L"event_minute_11") == 0) return event_minute[10];
			if (wcscmp(fieldName, L"event_minute_12") == 0) return event_minute[11];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zonetriggereventcond_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"event_day_of_week") == 0) return Data::AnyFieldToStringConverter::ToString(&event_day_of_week);
			if (wcscmp(fieldName, L"event_hour_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[0]));
			if (wcscmp(fieldName, L"event_hour_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[1]));
			if (wcscmp(fieldName, L"event_hour_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[2]));
			if (wcscmp(fieldName, L"event_hour_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[3]));
			if (wcscmp(fieldName, L"event_hour_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[4]));
			if (wcscmp(fieldName, L"event_hour_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[5]));
			if (wcscmp(fieldName, L"event_hour_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[6]));
			if (wcscmp(fieldName, L"event_hour_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[7]));
			if (wcscmp(fieldName, L"event_hour_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[8]));
			if (wcscmp(fieldName, L"event_hour_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[9]));
			if (wcscmp(fieldName, L"event_hour_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[10]));
			if (wcscmp(fieldName, L"event_hour_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_hour[11]));
			if (wcscmp(fieldName, L"event_minute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[0]));
			if (wcscmp(fieldName, L"event_minute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[1]));
			if (wcscmp(fieldName, L"event_minute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[2]));
			if (wcscmp(fieldName, L"event_minute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[3]));
			if (wcscmp(fieldName, L"event_minute_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[4]));
			if (wcscmp(fieldName, L"event_minute_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[5]));
			if (wcscmp(fieldName, L"event_minute_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[6]));
			if (wcscmp(fieldName, L"event_minute_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[7]));
			if (wcscmp(fieldName, L"event_minute_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[8]));
			if (wcscmp(fieldName, L"event_minute_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[9]));
			if (wcscmp(fieldName, L"event_minute_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[10]));
			if (wcscmp(fieldName, L"event_minute_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_minute[11]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zonetriggereventcond_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 event_day_of_week;
std::wstring event_day_of_week_EnumValue() const {return Get_event_day_of_week_EnumValue(event_day_of_week);};
__int8 event_hour[12];
__int8 event_minute[12];

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}