/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_stand_by_guild_battle_field_entrance_Record : zonetriggereventstage_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zonetriggereventstage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"min_growing_channel") == 0) return min_growing_channel;
			if (wcscmp(fieldName, L"total_duration_minute") == 0) return total_duration_minute;
			if (wcscmp(fieldName, L"total_duration_minute_1") == 0) return total_duration_minute[0];
			if (wcscmp(fieldName, L"total_duration_minute_2") == 0) return total_duration_minute[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zonetriggereventstage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"min_growing_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&min_growing_channel);
			if (wcscmp(fieldName, L"total_duration_minute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(total_duration_minute[0]));
			if (wcscmp(fieldName, L"total_duration_minute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(total_duration_minute[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zonetriggereventstage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 min_growing_channel;
char Pad_sub_0[1];
__int16 total_duration_minute[2];

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}