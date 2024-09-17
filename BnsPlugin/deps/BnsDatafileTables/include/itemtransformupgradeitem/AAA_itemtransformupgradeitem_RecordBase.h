/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemtransformupgradeitem_Record : DrEl
	{
	private:
		static std::wstring Get_upgrade_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"upgrade_type") == 0) return upgrade_type;
			if (wcscmp(fieldName, L"upgrade_item") == 0) return upgrade_item;
			if (wcscmp(fieldName, L"upgrade_item_1") == 0) return upgrade_item[0];
			if (wcscmp(fieldName, L"upgrade_item_2") == 0) return upgrade_item[1];
			if (wcscmp(fieldName, L"upgrade_item_3") == 0) return upgrade_item[2];
			if (wcscmp(fieldName, L"upgrade_item_4") == 0) return upgrade_item[3];
			if (wcscmp(fieldName, L"upgrade_item_stack_count") == 0) return upgrade_item_stack_count;
			if (wcscmp(fieldName, L"upgrade_item_stack_count_1") == 0) return upgrade_item_stack_count[0];
			if (wcscmp(fieldName, L"upgrade_item_stack_count_2") == 0) return upgrade_item_stack_count[1];
			if (wcscmp(fieldName, L"upgrade_item_stack_count_3") == 0) return upgrade_item_stack_count[2];
			if (wcscmp(fieldName, L"upgrade_item_stack_count_4") == 0) return upgrade_item_stack_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"upgrade_type") == 0) return Data::AnyFieldToStringConverter::ToString(&upgrade_type);
			if (wcscmp(fieldName, L"upgrade_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item[0]));
			if (wcscmp(fieldName, L"upgrade_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item[1]));
			if (wcscmp(fieldName, L"upgrade_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item[2]));
			if (wcscmp(fieldName, L"upgrade_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item[3]));
			if (wcscmp(fieldName, L"upgrade_item_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item_stack_count[0]));
			if (wcscmp(fieldName, L"upgrade_item_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item_stack_count[1]));
			if (wcscmp(fieldName, L"upgrade_item_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item_stack_count[2]));
			if (wcscmp(fieldName, L"upgrade_item_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(upgrade_item_stack_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 upgrade_type;
std::wstring upgrade_type_EnumValue() const {return Get_upgrade_type_EnumValue(upgrade_type);};
char Pad0[3];
Data::TableRef upgrade_item[4];
int upgrade_item_tableId(){return 189;};
__int8 upgrade_item_stack_count[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 214; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemtransformupgradeitem_RecordPtr // : DrRecordPtr
	{
		itemtransformupgradeitem_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemtransformupgradeitem_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}