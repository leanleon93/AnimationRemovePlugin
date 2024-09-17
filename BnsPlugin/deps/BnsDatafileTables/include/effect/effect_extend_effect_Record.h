/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_extend_effect_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_type") == 0) return effect_type;
			if (wcscmp(fieldName, L"extend_duration") == 0) return extend_duration;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_type") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_type);
			if (wcscmp(fieldName, L"extend_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&extend_duration);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(effect_type) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_type = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_type));
		}
		wchar_t* effect_type;
char Pad_sub_0[2];
__int32 extend_duration;

		static __int32 SubType() { return 41; }
	};
#pragma pack(pop)
}