/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_challengelist_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct challengelist_week_Record : challengelist_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = challengelist_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"week_start_date_time") == 0) return week_start_date_time;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = challengelist_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"week_start_date_time") == 0) return Data::AnyFieldToStringConverter::ToString(&week_start_date_time);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			challengelist_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(week_start_date_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) week_start_date_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(week_start_date_time));
		}
		wchar_t* week_start_date_time;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}