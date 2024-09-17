/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct account_post_charge_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"charge_money") == 0) return charge_money;
			if (wcscmp(fieldName, L"charge_item") == 0) return charge_item;
			if (wcscmp(fieldName, L"charge_item_1") == 0) return charge_item[0];
			if (wcscmp(fieldName, L"charge_item_2") == 0) return charge_item[1];
			if (wcscmp(fieldName, L"charge_item_amount") == 0) return charge_item_amount;
			if (wcscmp(fieldName, L"charge_item_amount_1") == 0) return charge_item_amount[0];
			if (wcscmp(fieldName, L"charge_item_amount_2") == 0) return charge_item_amount[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"charge_money") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_money);
			if (wcscmp(fieldName, L"charge_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(charge_item[0]));
			if (wcscmp(fieldName, L"charge_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(charge_item[1]));
			if (wcscmp(fieldName, L"charge_item_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(charge_item_amount[0]));
			if (wcscmp(fieldName, L"charge_item_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(charge_item_amount[1]));

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
__int32 charge_money;
Data::TableRef charge_item[2];
int charge_item_tableId(){return 189;};
__int32 charge_item_amount[2];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 5; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) account_post_charge_RecordPtr // : DrRecordPtr
	{
		account_post_charge_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::account_post_charge_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}