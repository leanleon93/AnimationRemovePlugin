/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneevent_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneevent_faction_kill_count_Record : zoneevent_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneevent_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"spawn_delay") == 0) return spawn_delay;
			if (wcscmp(fieldName, L"spawn_delay_1") == 0) return spawn_delay[0];
			if (wcscmp(fieldName, L"spawn_delay_2") == 0) return spawn_delay[1];
			if (wcscmp(fieldName, L"spawn_delay_3") == 0) return spawn_delay[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneevent_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"spawn_delay_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(spawn_delay[0]));
			if (wcscmp(fieldName, L"spawn_delay_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(spawn_delay[1]));
			if (wcscmp(fieldName, L"spawn_delay_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(spawn_delay[2]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneevent_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 spawn_delay[3];

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}