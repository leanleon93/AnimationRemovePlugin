/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guild_bank_item_Record : DrEl
	{
	private:
		static std::wstring Get_bank_item_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"bank_item") == 0) return bank_item;
			if (wcscmp(fieldName, L"bank_item_round_lot") == 0) return bank_item_round_lot;
			if (wcscmp(fieldName, L"bank_item_max_count") == 0) return bank_item_max_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"bank_item") == 0) return Data::AnyFieldToStringConverter::ToString(&bank_item);
			if (wcscmp(fieldName, L"bank_item_round_lot") == 0) return Data::AnyFieldToStringConverter::ToString(&bank_item_round_lot);
			if (wcscmp(fieldName, L"bank_item_max_count") == 0) return Data::AnyFieldToStringConverter::ToString(&bank_item_max_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 bank_item_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef bank_item;
int bank_item_tableId(){return 189;};
__int16 bank_item_round_lot;
char Pad0[2];
__int64 bank_item_max_count;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 160; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_bank_item_RecordPtr // : DrRecordPtr
	{
		guild_bank_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_bank_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}