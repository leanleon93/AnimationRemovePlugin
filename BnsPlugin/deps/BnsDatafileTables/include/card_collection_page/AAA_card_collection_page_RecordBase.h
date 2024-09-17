/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct card_collection_page_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"cost_money") == 0) return cost_money;
			if (wcscmp(fieldName, L"cost_item") == 0) return cost_item;
			if (wcscmp(fieldName, L"cost_item_1") == 0) return cost_item[0];
			if (wcscmp(fieldName, L"cost_item_2") == 0) return cost_item[1];
			if (wcscmp(fieldName, L"cost_item_3") == 0) return cost_item[2];
			if (wcscmp(fieldName, L"cost_item_4") == 0) return cost_item[3];
			if (wcscmp(fieldName, L"cost_item_count") == 0) return cost_item_count;
			if (wcscmp(fieldName, L"cost_item_count_1") == 0) return cost_item_count[0];
			if (wcscmp(fieldName, L"cost_item_count_2") == 0) return cost_item_count[1];
			if (wcscmp(fieldName, L"cost_item_count_3") == 0) return cost_item_count[2];
			if (wcscmp(fieldName, L"cost_item_count_4") == 0) return cost_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"cost_money") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_money);
			if (wcscmp(fieldName, L"cost_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[0]));
			if (wcscmp(fieldName, L"cost_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[1]));
			if (wcscmp(fieldName, L"cost_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[2]));
			if (wcscmp(fieldName, L"cost_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[3]));
			if (wcscmp(fieldName, L"cost_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[0]));
			if (wcscmp(fieldName, L"cost_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[1]));
			if (wcscmp(fieldName, L"cost_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[2]));
			if (wcscmp(fieldName, L"cost_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 page;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name;
int name_tableId(){return 405;};
__int32 cost_money;
Data::TableRef cost_item[4];
int cost_item_tableId(){return 189;};
__int16 cost_item_count[4];

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 48; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) card_collection_page_RecordPtr // : DrRecordPtr
	{
		card_collection_page_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::card_collection_page_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}