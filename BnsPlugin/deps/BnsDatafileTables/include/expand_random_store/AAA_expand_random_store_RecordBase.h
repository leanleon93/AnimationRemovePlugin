/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct expand_random_store_Record : DrEl
	{
	private:
		static std::wstring Get_random_store_number_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_for_instant_payment") == 0) return required_item_for_instant_payment;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"required_item") == 0) return Data::AnyFieldToStringConverter::ToString(&required_item);
			if (wcscmp(fieldName, L"required_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&required_item_count);
			if (wcscmp(fieldName, L"required_item_for_instant_payment") == 0) return Data::AnyFieldToStringConverter::ToString(&required_item_for_instant_payment);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 random_store_number;
__int8 slot_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef required_item;
int required_item_tableId(){return 189;};
__int8 required_item_count;
char Pad0[3];
Data::TableRef required_item_for_instant_payment;
int required_item_for_instant_payment_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 126; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_random_store_RecordPtr // : DrRecordPtr
	{
		expand_random_store_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::expand_random_store_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}