/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct expand_relic_inventory_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_4") == 0) return required_item[3];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return required_item_count[2];
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return required_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[3]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[2]));
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 inventory_size;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
Data::TableRef required_item[4];
int required_item_tableId(){return 189;};
__int8 required_item_count[4];

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 127; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_relic_inventory_RecordPtr // : DrRecordPtr
	{
		expand_relic_inventory_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::expand_relic_inventory_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}