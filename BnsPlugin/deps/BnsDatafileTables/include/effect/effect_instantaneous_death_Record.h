/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_instantaneous_death_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"death_probability") == 0) return death_probability;
			if (wcscmp(fieldName, L"exhaustion") == 0) return exhaustion;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"death_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&death_probability);
			if (wcscmp(fieldName, L"exhaustion") == 0) return Data::AnyFieldToStringConverter::ToString(&exhaustion);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 death_probability;
bool exhaustion;

		static __int32 SubType() { return 51; }
	};
#pragma pack(pop)
}