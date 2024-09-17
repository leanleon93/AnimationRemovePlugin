/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_tumbling_Record : effect_Record
	{
	private:
		static std::wstring Get_tumbling_direction_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"tumbling_speed") == 0) return tumbling_speed;
			if (wcscmp(fieldName, L"tumbling_direction") == 0) return tumbling_direction;
			if (wcscmp(fieldName, L"target_yaw_to_back") == 0) return target_yaw_to_back;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"tumbling_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&tumbling_speed);
			if (wcscmp(fieldName, L"tumbling_direction") == 0) return Data::AnyFieldToStringConverter::ToString(&tumbling_direction);
			if (wcscmp(fieldName, L"target_yaw_to_back") == 0) return Data::AnyFieldToStringConverter::ToString(&target_yaw_to_back);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 tumbling_speed;
__int8 tumbling_direction;
std::wstring tumbling_direction_EnumValue() const {return Get_tumbling_direction_EnumValue(tumbling_direction);};
bool target_yaw_to_back;

		static __int32 SubType() { return 62; }
	};
#pragma pack(pop)
}