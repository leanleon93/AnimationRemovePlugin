/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_attraction_shortcut_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct attraction_shortcut_time_limit_field_Record : attraction_shortcut_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = attraction_shortcut_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"time_limit_field_zone") == 0) return time_limit_field_zone;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = attraction_shortcut_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"time_limit_field_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&time_limit_field_zone);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			attraction_shortcut_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef time_limit_field_zone;
int time_limit_field_zone_tableId(){return 406;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}