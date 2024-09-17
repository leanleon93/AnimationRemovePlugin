/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_interval_guard_gauge_heal_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"guard_gauge_diff") == 0) return guard_gauge_diff;
			if (wcscmp(fieldName, L"guard_gauge_percent") == 0) return guard_gauge_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"guard_gauge_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&guard_gauge_diff);
			if (wcscmp(fieldName, L"guard_gauge_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&guard_gauge_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 guard_gauge_diff;
__int16 guard_gauge_percent;

		static __int32 SubType() { return 98; }
	};
#pragma pack(pop)
}