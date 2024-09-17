/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_active_skill_Record : skill_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"cast_condition") == 0) return cast_condition;
			if (wcscmp(fieldName, L"consume_sp_value") == 0) return consume_sp_value;
			if (wcscmp(fieldName, L"ui_next_combo") == 0) return ui_next_combo;
			if (wcscmp(fieldName, L"combo_start_point_flag") == 0) return combo_start_point_flag;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"cast_condition") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_condition);
			if (wcscmp(fieldName, L"consume_sp_value") == 0) return Data::AnyFieldToStringConverter::ToString(&consume_sp_value);
			if (wcscmp(fieldName, L"ui_next_combo") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_next_combo);
			if (wcscmp(fieldName, L"combo_start_point_flag") == 0) return Data::AnyFieldToStringConverter::ToString(&combo_start_point_flag);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef cast_condition;
int cast_condition_tableId(){return 331;};
__int16 consume_sp_value;
char Pad_sub_0[2];
__int32 ui_next_combo;
__int8 combo_start_point_flag;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}