/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_enchant_Record : item_Record
	{
	private:
		static std::wstring Get_enchant_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = item_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"enchant_type") == 0) return enchant_type;
			if (wcscmp(fieldName, L"transient_enchant_duration") == 0) return transient_enchant_duration;
			if (wcscmp(fieldName, L"transient_ehchant_effect") == 0) return transient_ehchant_effect;
			if (wcscmp(fieldName, L"transient_ehchant_effect_1") == 0) return transient_ehchant_effect[0];
			if (wcscmp(fieldName, L"transient_ehchant_effect_2") == 0) return transient_ehchant_effect[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = item_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"enchant_type") == 0) return Data::AnyFieldToStringConverter::ToString(&enchant_type);
			if (wcscmp(fieldName, L"transient_enchant_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&transient_enchant_duration);
			if (wcscmp(fieldName, L"transient_ehchant_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(transient_ehchant_effect[0]));
			if (wcscmp(fieldName, L"transient_ehchant_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(transient_ehchant_effect[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			item_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
__int8 enchant_type;
std::wstring enchant_type_EnumValue() const {return Get_enchant_type_EnumValue(enchant_type);};
char Pad_sub_1[3];
__int32 transient_enchant_duration;
Data::TableRef transient_ehchant_effect[2];
int transient_ehchant_effect_tableId(){return 111;};

		static __int32 SubType() { return 5; }
	};
#pragma pack(pop)
}