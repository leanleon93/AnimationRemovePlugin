/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_bleeding_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hp_diff") == 0) return hp_diff;
			if (wcscmp(fieldName, L"bleeding_max_hp_percent") == 0) return bleeding_max_hp_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hp_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_diff);
			if (wcscmp(fieldName, L"bleeding_max_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&bleeding_max_hp_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int64 hp_diff;
__int32 bleeding_max_hp_percent;

		static __int32 SubType() { return 66; }
	};
#pragma pack(pop)
}