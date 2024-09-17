/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_use_grocery_n_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_1") == 0) return item[0];
			if (wcscmp(fieldName, L"item_2") == 0) return item[1];
			if (wcscmp(fieldName, L"item_3") == 0) return item[2];
			if (wcscmp(fieldName, L"item_4") == 0) return item[3];
			if (wcscmp(fieldName, L"item_5") == 0) return item[4];
			if (wcscmp(fieldName, L"item_6") == 0) return item[5];
			if (wcscmp(fieldName, L"item_7") == 0) return item[6];
			if (wcscmp(fieldName, L"item_8") == 0) return item[7];
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
			if (wcscmp(fieldName, L"item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[0]));
			if (wcscmp(fieldName, L"item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[1]));
			if (wcscmp(fieldName, L"item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[2]));
			if (wcscmp(fieldName, L"item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[3]));
			if (wcscmp(fieldName, L"item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[4]));
			if (wcscmp(fieldName, L"item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[5]));
			if (wcscmp(fieldName, L"item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[6]));
			if (wcscmp(fieldName, L"item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[7]));
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
		Data::TableRef item[8];
int item_tableId(){return 189;};
Data::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 7; }
	};
#pragma pack(pop)
}