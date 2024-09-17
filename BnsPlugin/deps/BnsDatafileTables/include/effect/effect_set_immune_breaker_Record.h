/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_set_immune_breaker_Record : effect_Record
	{
	private:
		static std::wstring Get_immune_breaker_attribute_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"immune_breaker_attribute") == 0) return immune_breaker_attribute;
			if (wcscmp(fieldName, L"immune_breaker_count") == 0) return immune_breaker_count;
			if (wcscmp(fieldName, L"immune_breaker_duration") == 0) return immune_breaker_duration;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"immune_breaker_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_breaker_attribute);
			if (wcscmp(fieldName, L"immune_breaker_count") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_breaker_count);
			if (wcscmp(fieldName, L"immune_breaker_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_breaker_duration);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 immune_breaker_attribute;
std::wstring immune_breaker_attribute_EnumValue() const {return Get_immune_breaker_attribute_EnumValue(immune_breaker_attribute);};
__int8 immune_breaker_count;
char Pad_sub_0[1];
__int32 immune_breaker_duration;

		static __int32 SubType() { return 27; }
	};
#pragma pack(pop)
}