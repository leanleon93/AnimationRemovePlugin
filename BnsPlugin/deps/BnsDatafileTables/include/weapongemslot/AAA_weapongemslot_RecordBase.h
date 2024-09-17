/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct weapongemslot_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"delete_slot_consume_item") == 0) return delete_slot_consume_item;
			if (wcscmp(fieldName, L"delete_slot_consume_item_1") == 0) return delete_slot_consume_item[0];
			if (wcscmp(fieldName, L"delete_slot_consume_item_2") == 0) return delete_slot_consume_item[1];
			if (wcscmp(fieldName, L"delete_slot_consume_item_3") == 0) return delete_slot_consume_item[2];
			if (wcscmp(fieldName, L"delete_slot_consume_item_4") == 0) return delete_slot_consume_item[3];
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count") == 0) return delete_slot_consume_item_stack_count;
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_1") == 0) return delete_slot_consume_item_stack_count[0];
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_2") == 0) return delete_slot_consume_item_stack_count[1];
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_3") == 0) return delete_slot_consume_item_stack_count[2];
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_4") == 0) return delete_slot_consume_item_stack_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"delete_slot_consume_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item[0]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item[1]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item[2]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item[3]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item_stack_count[0]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item_stack_count[1]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item_stack_count[2]));
			if (wcscmp(fieldName, L"delete_slot_consume_item_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(delete_slot_consume_item_stack_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef delete_slot_consume_item[4];
int delete_slot_consume_item_tableId(){return 189;};
__int16 delete_slot_consume_item_stack_count[4];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 429; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapongemslot_RecordPtr // : DrRecordPtr
	{
		weapongemslot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapongemslot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}