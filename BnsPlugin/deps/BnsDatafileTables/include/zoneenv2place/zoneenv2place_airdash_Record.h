/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2place_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2place_airdash_Record : zoneenv2place_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2place_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"duration") == 0) return duration;
			if (wcscmp(fieldName, L"end_pos") == 0) return end_pos;
			if (wcscmp(fieldName, L"summon_end_pos") == 0) return summon_end_pos;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2place_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"duration") == 0) return Data::AnyFieldToStringConverter::ToString(&duration);
			if (wcscmp(fieldName, L"end_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&end_pos);
			if (wcscmp(fieldName, L"summon_end_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&summon_end_pos);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2place_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
__int32 duration;
Data::XYZ end_pos;
Data::XYZ summon_end_pos;

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}