/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_buff_max_hp_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"max_hp_diff") == 0) return max_hp_diff;
			if (wcscmp(fieldName, L"buff_max_hp_percent") == 0) return buff_max_hp_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"max_hp_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hp_diff);
			if (wcscmp(fieldName, L"buff_max_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&buff_max_hp_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 max_hp_diff;
__int16 buff_max_hp_percent;

		static __int32 SubType() { return 67; }
	};
#pragma pack(pop)
}