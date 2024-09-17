/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_airdash_leave_Record : zoneenv2_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"airdash_level") == 0) return airdash_level;
			if (wcscmp(fieldName, L"transit_zone") == 0) return transit_zone;
			if (wcscmp(fieldName, L"transit_pc_spawn") == 0) return transit_pc_spawn;
			if (wcscmp(fieldName, L"transit_leave_social") == 0) return transit_leave_social;
			if (wcscmp(fieldName, L"transit_enter_social") == 0) return transit_enter_social;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"airdash_level") == 0) return Data::AnyFieldToStringConverter::ToString(&airdash_level);
			if (wcscmp(fieldName, L"transit_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_zone);
			if (wcscmp(fieldName, L"transit_pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_pc_spawn);
			if (wcscmp(fieldName, L"transit_leave_social") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_leave_social);
			if (wcscmp(fieldName, L"transit_enter_social") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_enter_social);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 airdash_level;
char Pad_sub_0[3];
Data::TableRef transit_zone;
int transit_zone_tableId(){return 443;};
__int16 transit_pc_spawn;
char Pad_sub_1[2];
Data::TableRef transit_leave_social;
int transit_leave_social_tableId(){return 367;};
Data::TableRef transit_enter_social;
int transit_enter_social_tableId(){return 367;};

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}