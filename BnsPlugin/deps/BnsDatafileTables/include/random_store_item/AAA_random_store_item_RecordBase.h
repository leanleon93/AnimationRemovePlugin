/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct random_store_item_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_count") == 0) return item_count;
			if (wcscmp(fieldName, L"item_price_money") == 0) return item_price_money;
			if (wcscmp(fieldName, L"item_price_item") == 0) return item_price_item;
			if (wcscmp(fieldName, L"item_price_item_amount") == 0) return item_price_item_amount;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);
			if (wcscmp(fieldName, L"item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&item_count);
			if (wcscmp(fieldName, L"item_price_money") == 0) return Data::AnyFieldToStringConverter::ToString(&item_price_money);
			if (wcscmp(fieldName, L"item_price_item") == 0) return Data::AnyFieldToStringConverter::ToString(&item_price_item);
			if (wcscmp(fieldName, L"item_price_item_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&item_price_item_amount);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef item;
int item_tableId(){return 189;};
__int16 item_count;
char Pad0[2];
__int32 item_price_money;
Data::TableRef item_price_item;
int item_price_item_tableId(){return 189;};
__int16 item_price_item_amount;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 294; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) random_store_item_RecordPtr // : DrRecordPtr
	{
		random_store_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::random_store_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}