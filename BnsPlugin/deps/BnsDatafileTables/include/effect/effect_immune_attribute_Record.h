/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_immune_attribute_Record : effect_Record
	{
	private:
		static std::wstring Get_immune_attribute_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"immune_attribute") == 0) return immune_attribute;
			if (wcscmp(fieldName, L"immune_attribute_1") == 0) return immune_attribute[0];
			if (wcscmp(fieldName, L"immune_attribute_2") == 0) return immune_attribute[1];
			if (wcscmp(fieldName, L"immune_attribute_3") == 0) return immune_attribute[2];
			if (wcscmp(fieldName, L"immune_attribute_4") == 0) return immune_attribute[3];
			if (wcscmp(fieldName, L"immune_attribute_value") == 0) return immune_attribute_value;
			if (wcscmp(fieldName, L"immune_attribute_value_2") == 0) return immune_attribute_value_2;
			if (wcscmp(fieldName, L"immune_attribute_value_3") == 0) return immune_attribute_value_3;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"immune_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[0]));
			if (wcscmp(fieldName, L"immune_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[1]));
			if (wcscmp(fieldName, L"immune_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[2]));
			if (wcscmp(fieldName, L"immune_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_attribute[3]));
			if (wcscmp(fieldName, L"immune_attribute_value") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_attribute_value);
			if (wcscmp(fieldName, L"immune_attribute_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_attribute_value_2);
			if (wcscmp(fieldName, L"immune_attribute_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_attribute_value_3);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 immune_attribute[4];
std::wstring immune_attribute_EnumValue(int index) const {return Get_immune_attribute_EnumValue(immune_attribute[index]);};
__int64 immune_attribute_value;
__int64 immune_attribute_value_2;
__int64 immune_attribute_value_3;

		static __int32 SubType() { return 73; }
	};
#pragma pack(pop)
}