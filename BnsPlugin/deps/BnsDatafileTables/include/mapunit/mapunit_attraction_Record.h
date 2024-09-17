/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_attraction_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"attraction") == 0) return attraction;
			if (wcscmp(fieldName, L"attraction_position_x") == 0) return attraction_position_x;
			if (wcscmp(fieldName, L"attraction_position_y") == 0) return attraction_position_y;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"attraction") == 0) return Data::AnyFieldToStringConverter::ToString(&attraction);
			if (wcscmp(fieldName, L"attraction_position_x") == 0) return Data::AnyFieldToStringConverter::ToString(&attraction_position_x);
			if (wcscmp(fieldName, L"attraction_position_y") == 0) return Data::AnyFieldToStringConverter::ToString(&attraction_position_y);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::ExplicitTableRef attraction;
float attraction_position_x;
float attraction_position_y;

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}