/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_dull_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"move_speed_percent") == 0) return move_speed_percent;
			if (wcscmp(fieldName, L"cast_speed_percent") == 0) return cast_speed_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"move_speed_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&move_speed_percent);
			if (wcscmp(fieldName, L"cast_speed_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_speed_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 move_speed_percent;
__int16 cast_speed_percent;

		static __int32 SubType() { return 810; }
	};
#pragma pack(pop)
}