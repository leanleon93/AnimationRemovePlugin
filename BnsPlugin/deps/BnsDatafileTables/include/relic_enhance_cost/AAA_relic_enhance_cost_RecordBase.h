/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct relic_enhance_cost_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"enhance_money") == 0) return enhance_money;
			if (wcscmp(fieldName, L"enhance_required_item") == 0) return enhance_required_item;
			if (wcscmp(fieldName, L"enhance_required_item_1") == 0) return enhance_required_item[0];
			if (wcscmp(fieldName, L"enhance_required_item_2") == 0) return enhance_required_item[1];
			if (wcscmp(fieldName, L"enhance_required_item_3") == 0) return enhance_required_item[2];
			if (wcscmp(fieldName, L"enhance_required_item_4") == 0) return enhance_required_item[3];
			if (wcscmp(fieldName, L"enhance_required_item_count") == 0) return enhance_required_item_count;
			if (wcscmp(fieldName, L"enhance_required_item_count_1") == 0) return enhance_required_item_count[0];
			if (wcscmp(fieldName, L"enhance_required_item_count_2") == 0) return enhance_required_item_count[1];
			if (wcscmp(fieldName, L"enhance_required_item_count_3") == 0) return enhance_required_item_count[2];
			if (wcscmp(fieldName, L"enhance_required_item_count_4") == 0) return enhance_required_item_count[3];
			if (wcscmp(fieldName, L"enhance_reset_enable") == 0) return enhance_reset_enable;
			if (wcscmp(fieldName, L"enhance_reset_money") == 0) return enhance_reset_money;
			if (wcscmp(fieldName, L"enhance_reset_required_item") == 0) return enhance_reset_required_item;
			if (wcscmp(fieldName, L"enhance_reset_required_item_1") == 0) return enhance_reset_required_item[0];
			if (wcscmp(fieldName, L"enhance_reset_required_item_2") == 0) return enhance_reset_required_item[1];
			if (wcscmp(fieldName, L"enhance_reset_required_item_3") == 0) return enhance_reset_required_item[2];
			if (wcscmp(fieldName, L"enhance_reset_required_item_4") == 0) return enhance_reset_required_item[3];
			if (wcscmp(fieldName, L"enhance_reset_required_item_count") == 0) return enhance_reset_required_item_count;
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_1") == 0) return enhance_reset_required_item_count[0];
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_2") == 0) return enhance_reset_required_item_count[1];
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_3") == 0) return enhance_reset_required_item_count[2];
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_4") == 0) return enhance_reset_required_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"enhance_money") == 0) return Data::AnyFieldToStringConverter::ToString(&enhance_money);
			if (wcscmp(fieldName, L"enhance_required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item[0]));
			if (wcscmp(fieldName, L"enhance_required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item[1]));
			if (wcscmp(fieldName, L"enhance_required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item[2]));
			if (wcscmp(fieldName, L"enhance_required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item[3]));
			if (wcscmp(fieldName, L"enhance_required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item_count[0]));
			if (wcscmp(fieldName, L"enhance_required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item_count[1]));
			if (wcscmp(fieldName, L"enhance_required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item_count[2]));
			if (wcscmp(fieldName, L"enhance_required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_required_item_count[3]));
			if (wcscmp(fieldName, L"enhance_reset_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&enhance_reset_enable);
			if (wcscmp(fieldName, L"enhance_reset_money") == 0) return Data::AnyFieldToStringConverter::ToString(&enhance_reset_money);
			if (wcscmp(fieldName, L"enhance_reset_required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item[0]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item[1]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item[2]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item[3]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item_count[0]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item_count[1]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item_count[2]));
			if (wcscmp(fieldName, L"enhance_reset_required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(enhance_reset_required_item_count[3]));

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
__int32 enhance_money;
Data::TableRef enhance_required_item[4];
int enhance_required_item_tableId(){return 189;};
__int16 enhance_required_item_count[4];
bool enhance_reset_enable;
char Pad0[3];
__int32 enhance_reset_money;
Data::TableRef enhance_reset_required_item[4];
int enhance_reset_required_item_tableId(){return 189;};
__int16 enhance_reset_required_item_count[4];

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 307; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_enhance_cost_RecordPtr // : DrRecordPtr
	{
		relic_enhance_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_enhance_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}