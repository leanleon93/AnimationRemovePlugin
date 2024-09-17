/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_additional_hp2_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hp_diff") == 0) return hp_diff;
			if (wcscmp(fieldName, L"additional_max_hp_percent") == 0) return additional_max_hp_percent;
			if (wcscmp(fieldName, L"absorb_last_damage") == 0) return absorb_last_damage;
			if (wcscmp(fieldName, L"ref_target_max_hp") == 0) return ref_target_max_hp;
			if (wcscmp(fieldName, L"use_additional_max_hp_percent_max") == 0) return use_additional_max_hp_percent_max;
			if (wcscmp(fieldName, L"additional_max_hp_percent_max") == 0) return additional_max_hp_percent_max;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hp_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_diff);
			if (wcscmp(fieldName, L"additional_max_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_max_hp_percent);
			if (wcscmp(fieldName, L"absorb_last_damage") == 0) return Data::AnyFieldToStringConverter::ToString(&absorb_last_damage);
			if (wcscmp(fieldName, L"ref_target_max_hp") == 0) return Data::AnyFieldToStringConverter::ToString(&ref_target_max_hp);
			if (wcscmp(fieldName, L"use_additional_max_hp_percent_max") == 0) return Data::AnyFieldToStringConverter::ToString(&use_additional_max_hp_percent_max);
			if (wcscmp(fieldName, L"additional_max_hp_percent_max") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_max_hp_percent_max);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 hp_diff;
__int16 additional_max_hp_percent;
bool absorb_last_damage;
bool ref_target_max_hp;
bool use_additional_max_hp_percent_max;
char Pad_sub_0[3];
__int32 additional_max_hp_percent_max;

		static __int32 SubType() { return 70; }
	};
#pragma pack(pop)
}