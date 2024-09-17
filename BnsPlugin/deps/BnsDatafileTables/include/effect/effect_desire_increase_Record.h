/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_desire_increase_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hate_diff") == 0) return hate_diff;
			if (wcscmp(fieldName, L"desire_attack_normal_diff") == 0) return desire_attack_normal_diff;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hate_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&hate_diff);
			if (wcscmp(fieldName, L"desire_attack_normal_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&desire_attack_normal_diff);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 hate_diff;
__int16 desire_attack_normal_diff;

		static __int32 SubType() { return 30; }
	};
#pragma pack(pop)
}