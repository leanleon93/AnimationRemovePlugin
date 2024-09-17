/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_quest_complete_count_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_reset_type_EnumValue(__int8 value);
		static std::wstring Get_reset_by_acquire_time_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"reset_type") == 0) return reset_type;
			if (wcscmp(fieldName, L"reset_by_acquire_time") == 0) return reset_by_acquire_time;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"reset_type") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_type);
			if (wcscmp(fieldName, L"reset_by_acquire_time") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_by_acquire_time);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 reset_type;
std::wstring reset_type_EnumValue() const {return Get_reset_type_EnumValue(reset_type);};
__int8 reset_by_acquire_time;
std::wstring reset_by_acquire_time_EnumValue() const {return Get_reset_by_acquire_time_EnumValue(reset_by_acquire_time);};

		static __int32 SubType() { return 16; }
	};
#pragma pack(pop)
}