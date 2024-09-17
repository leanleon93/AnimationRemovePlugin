/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_internal_force_attack_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"additional_power_probability") == 0) return additional_power_probability;
			if (wcscmp(fieldName, L"additional_power_percent") == 0) return additional_power_percent;
			if (wcscmp(fieldName, L"additional_power_diff") == 0) return additional_power_diff;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"additional_power_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_power_probability);
			if (wcscmp(fieldName, L"additional_power_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_power_percent);
			if (wcscmp(fieldName, L"additional_power_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_power_diff);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 additional_power_probability;
char Pad_sub_0[1];
__int16 additional_power_percent;
__int16 additional_power_diff;

		static __int32 SubType() { return 52; }
	};
#pragma pack(pop)
}