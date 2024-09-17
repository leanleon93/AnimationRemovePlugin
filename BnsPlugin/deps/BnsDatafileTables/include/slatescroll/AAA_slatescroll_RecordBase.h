/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct slatescroll_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"ingredient_item") == 0) return ingredient_item;
			if (wcscmp(fieldName, L"ingredient_item_1") == 0) return ingredient_item[0];
			if (wcscmp(fieldName, L"ingredient_item_2") == 0) return ingredient_item[1];
			if (wcscmp(fieldName, L"ingredient_item_3") == 0) return ingredient_item[2];
			if (wcscmp(fieldName, L"ingredient_item_4") == 0) return ingredient_item[3];
			if (wcscmp(fieldName, L"ingredient_item_5") == 0) return ingredient_item[4];
			if (wcscmp(fieldName, L"ingredient_count") == 0) return ingredient_count;
			if (wcscmp(fieldName, L"ingredient_count_1") == 0) return ingredient_count[0];
			if (wcscmp(fieldName, L"ingredient_count_2") == 0) return ingredient_count[1];
			if (wcscmp(fieldName, L"ingredient_count_3") == 0) return ingredient_count[2];
			if (wcscmp(fieldName, L"ingredient_count_4") == 0) return ingredient_count[3];
			if (wcscmp(fieldName, L"ingredient_count_5") == 0) return ingredient_count[4];
			if (wcscmp(fieldName, L"ingredient_money") == 0) return ingredient_money;
			if (wcscmp(fieldName, L"secondary_cash") == 0) return secondary_cash;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"ingredient_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_item[0]));
			if (wcscmp(fieldName, L"ingredient_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_item[1]));
			if (wcscmp(fieldName, L"ingredient_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_item[2]));
			if (wcscmp(fieldName, L"ingredient_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_item[3]));
			if (wcscmp(fieldName, L"ingredient_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_item[4]));
			if (wcscmp(fieldName, L"ingredient_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_count[0]));
			if (wcscmp(fieldName, L"ingredient_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_count[1]));
			if (wcscmp(fieldName, L"ingredient_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_count[2]));
			if (wcscmp(fieldName, L"ingredient_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_count[3]));
			if (wcscmp(fieldName, L"ingredient_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ingredient_count[4]));
			if (wcscmp(fieldName, L"ingredient_money") == 0) return Data::AnyFieldToStringConverter::ToString(&ingredient_money);
			if (wcscmp(fieldName, L"secondary_cash") == 0) return Data::AnyFieldToStringConverter::ToString(&secondary_cash);

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
Data::TableRef ingredient_item[5];
int ingredient_item_tableId(){return 189;};
__int16 ingredient_count[5];
char Pad0[2];
__int32 ingredient_money;
Data::TableRef secondary_cash;
int secondary_cash_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 364; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatescroll_RecordPtr // : DrRecordPtr
	{
		slatescroll_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::slatescroll_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}