/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_quest_complete_Record : filter_Record
	{
	private:
		static std::wstring Get_count_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"quest") == 0) return quest;
			if (wcscmp(fieldName, L"mission_step") == 0) return mission_step;
			if (wcscmp(fieldName, L"count") == 0) return count;
			if (wcscmp(fieldName, L"count_op") == 0) return count_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"quest") == 0) return Data::AnyFieldToStringConverter::ToString(&quest);
			if (wcscmp(fieldName, L"mission_step") == 0) return Data::AnyFieldToStringConverter::ToString(&mission_step);
			if (wcscmp(fieldName, L"count") == 0) return Data::AnyFieldToStringConverter::ToString(&count);
			if (wcscmp(fieldName, L"count_op") == 0) return Data::AnyFieldToStringConverter::ToString(&count_op);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef quest;
int quest_tableId(){return 283;};
__int8 mission_step;
char Pad_sub_0[1];
__int16 count;
__int8 count_op;
std::wstring count_op_EnumValue() const {return Get_count_op_EnumValue(count_op);};

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}