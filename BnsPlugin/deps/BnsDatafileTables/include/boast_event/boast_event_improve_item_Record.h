/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_event_improve_item_Record : boast_event_Record
	{
	private:
		static std::wstring Get_op_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = boast_event_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"improve_id") == 0) return improve_id;
			if (wcscmp(fieldName, L"improve_level") == 0) return improve_level;
			if (wcscmp(fieldName, L"op_type") == 0) return op_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = boast_event_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"improve_id") == 0) return Data::AnyFieldToStringConverter::ToString(&improve_id);
			if (wcscmp(fieldName, L"improve_level") == 0) return Data::AnyFieldToStringConverter::ToString(&improve_level);
			if (wcscmp(fieldName, L"op_type") == 0) return Data::AnyFieldToStringConverter::ToString(&op_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			boast_event_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
__int32 improve_id;
__int8 improve_level;
__int8 op_type;
std::wstring op_type_EnumValue() const {return Get_op_type_EnumValue(op_type);};

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}