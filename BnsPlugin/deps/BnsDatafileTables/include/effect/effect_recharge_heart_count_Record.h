/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_recharge_heart_count_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"instant_heart_count") == 0) return instant_heart_count;
			if (wcscmp(fieldName, L"heart_count") == 0) return heart_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"instant_heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&instant_heart_count);
			if (wcscmp(fieldName, L"heart_count") == 0) return Data::AnyFieldToStringConverter::ToString(&heart_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 instant_heart_count;
__int8 heart_count;

		static __int32 SubType() { return 836; }
	};
#pragma pack(pop)
}