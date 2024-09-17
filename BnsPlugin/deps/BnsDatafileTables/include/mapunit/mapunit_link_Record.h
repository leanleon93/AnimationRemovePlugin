/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_link_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"link_mapid") == 0) return link_mapid;
			if (wcscmp(fieldName, L"link_map_location_x") == 0) return link_map_location_x;
			if (wcscmp(fieldName, L"link_map_location_y") == 0) return link_map_location_y;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"link_mapid") == 0) return Data::AnyFieldToStringConverter::ToString(&link_mapid);
			if (wcscmp(fieldName, L"link_map_location_x") == 0) return Data::AnyFieldToStringConverter::ToString(&link_map_location_x);
			if (wcscmp(fieldName, L"link_map_location_y") == 0) return Data::AnyFieldToStringConverter::ToString(&link_map_location_y);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 link_mapid;
char Pad_sub_0[2];
float link_map_location_x;
float link_map_location_y;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}