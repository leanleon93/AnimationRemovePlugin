/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_transform_item_brand_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_equip_type_EnumValue(__int8 value);
		static std::wstring Get_result_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_brand") == 0) return item_brand;
			if (wcscmp(fieldName, L"item_grade") == 0) return item_grade;
			if (wcscmp(fieldName, L"equip_type") == 0) return equip_type;
			if (wcscmp(fieldName, L"result") == 0) return result;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&item_brand);
			if (wcscmp(fieldName, L"item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&item_grade);
			if (wcscmp(fieldName, L"equip_type") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_type);
			if (wcscmp(fieldName, L"result") == 0) return Data::AnyFieldToStringConverter::ToString(&result);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef item_brand;
int item_brand_tableId(){return 183;};
__int8 item_grade;
__int8 equip_type;
std::wstring equip_type_EnumValue() const {return Get_equip_type_EnumValue(equip_type);};
__int8 result;
std::wstring result_EnumValue() const {return Get_result_EnumValue(result);};

		static __int32 SubType() { return 40; }
	};
#pragma pack(pop)
}