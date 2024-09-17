/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_increase_heal_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"additional_heal_percent") == 0) return additional_heal_percent;
			if (wcscmp(fieldName, L"additional_heal_diff") == 0) return additional_heal_diff;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"additional_heal_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_heal_percent);
			if (wcscmp(fieldName, L"additional_heal_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_heal_diff);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 additional_heal_percent;
__int16 additional_heal_diff;

		static __int32 SubType() { return 114; }
	};
#pragma pack(pop)
}