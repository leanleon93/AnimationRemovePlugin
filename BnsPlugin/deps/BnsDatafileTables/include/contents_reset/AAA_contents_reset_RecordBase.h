/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contents_reset_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"reset_target") == 0) return reset_target;
			if (wcscmp(fieldName, L"reset_money") == 0) return reset_money;
			if (wcscmp(fieldName, L"reset_item") == 0) return reset_item;
			if (wcscmp(fieldName, L"reset_item_1") == 0) return reset_item[0];
			if (wcscmp(fieldName, L"reset_item_2") == 0) return reset_item[1];
			if (wcscmp(fieldName, L"reset_item_3") == 0) return reset_item[2];
			if (wcscmp(fieldName, L"reset_item_4") == 0) return reset_item[3];
			if (wcscmp(fieldName, L"reset_item_count") == 0) return reset_item_count;
			if (wcscmp(fieldName, L"reset_item_count_1") == 0) return reset_item_count[0];
			if (wcscmp(fieldName, L"reset_item_count_2") == 0) return reset_item_count[1];
			if (wcscmp(fieldName, L"reset_item_count_3") == 0) return reset_item_count[2];
			if (wcscmp(fieldName, L"reset_item_count_4") == 0) return reset_item_count[3];
			if (wcscmp(fieldName, L"quota") == 0) return quota;
			if (wcscmp(fieldName, L"max_unbind_count") == 0) return max_unbind_count;
			if (wcscmp(fieldName, L"quota_recharge_amount") == 0) return quota_recharge_amount;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"reset_target") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_target);
			if (wcscmp(fieldName, L"reset_money") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_money);
			if (wcscmp(fieldName, L"reset_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item[0]));
			if (wcscmp(fieldName, L"reset_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item[1]));
			if (wcscmp(fieldName, L"reset_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item[2]));
			if (wcscmp(fieldName, L"reset_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item[3]));
			if (wcscmp(fieldName, L"reset_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item_count[0]));
			if (wcscmp(fieldName, L"reset_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item_count[1]));
			if (wcscmp(fieldName, L"reset_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item_count[2]));
			if (wcscmp(fieldName, L"reset_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_item_count[3]));
			if (wcscmp(fieldName, L"quota") == 0) return Data::AnyFieldToStringConverter::ToString(&quota);
			if (wcscmp(fieldName, L"max_unbind_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_unbind_count);
			if (wcscmp(fieldName, L"quota_recharge_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&quota_recharge_amount);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::ExplicitTableRef reset_target;
__int32 reset_money;
Data::TableRef reset_item[4];
int reset_item_tableId(){return 189;};
__int8 reset_item_count[4];
Data::TableRef quota;
int quota_tableId(){return 66;};
__int8 max_unbind_count;
char Pad0[3];
__int64 quota_recharge_amount;

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 72; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_reset_RecordPtr // : DrRecordPtr
	{
		contents_reset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contents_reset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}