/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_effect_stack_count_Record : filter_Record
	{
	private:
		static std::wstring Get_effect_slot_EnumValue(__int8 value);
		static std::wstring Get_term_op_EnumValue(__int8 value);
		static std::wstring Get_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_type") == 0) return effect_type;
			if (wcscmp(fieldName, L"effect_slot") == 0) return effect_slot;
			if (wcscmp(fieldName, L"term_op") == 0) return term_op;
			if (wcscmp(fieldName, L"op") == 0) return op;
			if (wcscmp(fieldName, L"op_1") == 0) return op[0];
			if (wcscmp(fieldName, L"op_2") == 0) return op[1];
			if (wcscmp(fieldName, L"value") == 0) return value;
			if (wcscmp(fieldName, L"value_1") == 0) return value[0];
			if (wcscmp(fieldName, L"value_2") == 0) return value[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_type") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_type);
			if (wcscmp(fieldName, L"effect_slot") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_slot);
			if (wcscmp(fieldName, L"term_op") == 0) return Data::AnyFieldToStringConverter::ToString(&term_op);
			if (wcscmp(fieldName, L"op_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(op[0]));
			if (wcscmp(fieldName, L"op_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(op[1]));
			if (wcscmp(fieldName, L"value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[0]));
			if (wcscmp(fieldName, L"value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(effect_type) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_type = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_type));
		}
		wchar_t* effect_type;
__int8 effect_slot;
std::wstring effect_slot_EnumValue() const {return Get_effect_slot_EnumValue(effect_slot);};
__int8 term_op;
std::wstring term_op_EnumValue() const {return Get_term_op_EnumValue(term_op);};
__int8 op[2];
std::wstring op_EnumValue(int index) const {return Get_op_EnumValue(op[index]);};
char Pad_sub_0[2];
__int64 value[2];

		static __int32 SubType() { return 35; }
	};
#pragma pack(pop)
}