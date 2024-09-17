/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_melee_physical_attack_hate_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hate_multiply_value") == 0) return hate_multiply_value;
			if (wcscmp(fieldName, L"hate_diff_value") == 0) return hate_diff_value;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hate_multiply_value") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_multiply_value);
			if (wcscmp(fieldName, L"hate_diff_value") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_diff_value);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 hate_multiply_value;
char Pad_sub_0[3];
__int32 hate_diff_value;

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}