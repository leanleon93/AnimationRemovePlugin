/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guilduniformrecipe_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_is_bm") == 0) return required_item_is_bm;
			if (wcscmp(fieldName, L"required_item_is_bm_1") == 0) return required_item_is_bm[0];
			if (wcscmp(fieldName, L"required_item_is_bm_2") == 0) return required_item_is_bm[1];
			if (wcscmp(fieldName, L"bank_money") == 0) return bank_money;
			if (wcscmp(fieldName, L"bank_required_item") == 0) return bank_required_item;
			if (wcscmp(fieldName, L"bank_required_item_1") == 0) return bank_required_item[0];
			if (wcscmp(fieldName, L"bank_required_item_2") == 0) return bank_required_item[1];
			if (wcscmp(fieldName, L"bank_required_item_3") == 0) return bank_required_item[2];
			if (wcscmp(fieldName, L"bank_required_item_4") == 0) return bank_required_item[3];
			if (wcscmp(fieldName, L"bank_required_item_5") == 0) return bank_required_item[4];
			if (wcscmp(fieldName, L"bank_required_item_count") == 0) return bank_required_item_count;
			if (wcscmp(fieldName, L"bank_required_item_count_1") == 0) return bank_required_item_count[0];
			if (wcscmp(fieldName, L"bank_required_item_count_2") == 0) return bank_required_item_count[1];
			if (wcscmp(fieldName, L"bank_required_item_count_3") == 0) return bank_required_item_count[2];
			if (wcscmp(fieldName, L"bank_required_item_count_4") == 0) return bank_required_item_count[3];
			if (wcscmp(fieldName, L"bank_required_item_count_5") == 0) return bank_required_item_count[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_is_bm_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_is_bm[0]));
			if (wcscmp(fieldName, L"required_item_is_bm_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_is_bm[1]));
			if (wcscmp(fieldName, L"bank_money") == 0) return Data::AnyFieldToStringConverter::ToString(&bank_money);
			if (wcscmp(fieldName, L"bank_required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item[0]));
			if (wcscmp(fieldName, L"bank_required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item[1]));
			if (wcscmp(fieldName, L"bank_required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item[2]));
			if (wcscmp(fieldName, L"bank_required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item[3]));
			if (wcscmp(fieldName, L"bank_required_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item[4]));
			if (wcscmp(fieldName, L"bank_required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item_count[0]));
			if (wcscmp(fieldName, L"bank_required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item_count[1]));
			if (wcscmp(fieldName, L"bank_required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item_count[2]));
			if (wcscmp(fieldName, L"bank_required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item_count[3]));
			if (wcscmp(fieldName, L"bank_required_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(bank_required_item_count[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 recipe_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef required_item[2];
int required_item_tableId(){return 189;};
__int32 required_item_count[2];
bool required_item_is_bm[2];
char Pad0[2];
__int32 bank_money;
Data::TableRef bank_required_item[5];
int bank_required_item_tableId(){return 189;};
__int32 bank_required_item_count[5];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 173; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformrecipe_RecordPtr // : DrRecordPtr
	{
		guilduniformrecipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformrecipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}