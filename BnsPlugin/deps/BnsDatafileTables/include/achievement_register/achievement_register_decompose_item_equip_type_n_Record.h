/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_decompose_item_equip_type_n_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_equip_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_brand") == 0) return item_brand;
			if (wcscmp(fieldName, L"item_grade") == 0) return item_grade;
			if (wcscmp(fieldName, L"item_level") == 0) return item_level;
			if (wcscmp(fieldName, L"equip_type") == 0) return equip_type;
			if (wcscmp(fieldName, L"equip_type_1") == 0) return equip_type[0];
			if (wcscmp(fieldName, L"equip_type_2") == 0) return equip_type[1];
			if (wcscmp(fieldName, L"equip_type_3") == 0) return equip_type[2];
			if (wcscmp(fieldName, L"equip_type_4") == 0) return equip_type[3];
			if (wcscmp(fieldName, L"equip_type_5") == 0) return equip_type[4];
			if (wcscmp(fieldName, L"equip_type_6") == 0) return equip_type[5];
			if (wcscmp(fieldName, L"equip_type_7") == 0) return equip_type[6];
			if (wcscmp(fieldName, L"equip_type_8") == 0) return equip_type[7];
			if (wcscmp(fieldName, L"slot_name") == 0) return slot_name;
			if (wcscmp(fieldName, L"slot_name_1") == 0) return slot_name[0];
			if (wcscmp(fieldName, L"slot_name_2") == 0) return slot_name[1];
			if (wcscmp(fieldName, L"slot_name_3") == 0) return slot_name[2];
			if (wcscmp(fieldName, L"slot_name_4") == 0) return slot_name[3];
			if (wcscmp(fieldName, L"slot_name_5") == 0) return slot_name[4];
			if (wcscmp(fieldName, L"slot_name_6") == 0) return slot_name[5];
			if (wcscmp(fieldName, L"slot_name_7") == 0) return slot_name[6];
			if (wcscmp(fieldName, L"slot_name_8") == 0) return slot_name[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&item_brand);
			if (wcscmp(fieldName, L"item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&item_grade);
			if (wcscmp(fieldName, L"item_level") == 0) return Data::AnyFieldToStringConverter::ToString(&item_level);
			if (wcscmp(fieldName, L"equip_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[0]));
			if (wcscmp(fieldName, L"equip_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[1]));
			if (wcscmp(fieldName, L"equip_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[2]));
			if (wcscmp(fieldName, L"equip_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[3]));
			if (wcscmp(fieldName, L"equip_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[4]));
			if (wcscmp(fieldName, L"equip_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[5]));
			if (wcscmp(fieldName, L"equip_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[6]));
			if (wcscmp(fieldName, L"equip_type_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[7]));
			if (wcscmp(fieldName, L"slot_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[0]));
			if (wcscmp(fieldName, L"slot_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[1]));
			if (wcscmp(fieldName, L"slot_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[2]));
			if (wcscmp(fieldName, L"slot_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[3]));
			if (wcscmp(fieldName, L"slot_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[4]));
			if (wcscmp(fieldName, L"slot_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[5]));
			if (wcscmp(fieldName, L"slot_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[6]));
			if (wcscmp(fieldName, L"slot_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef item_brand;
int item_brand_tableId(){return 183;};
__int8 item_grade;
__int8 item_level;
__int8 equip_type[8];
std::wstring equip_type_EnumValue(int index) const {return Get_equip_type_EnumValue(equip_type[index]);};
char Pad_sub_0[2];
Data::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 35; }
	};
#pragma pack(pop)
}