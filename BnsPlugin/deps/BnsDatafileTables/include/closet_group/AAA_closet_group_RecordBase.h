/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct closet_group_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"charge_of_item_for_instant_payment") == 0) return charge_of_item_for_instant_payment;
			if (wcscmp(fieldName, L"item_to_be_paid") == 0) return item_to_be_paid;
			if (wcscmp(fieldName, L"check_equip_characteristics") == 0) return check_equip_characteristics;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"charge_of_item_for_instant_payment") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_item_for_instant_payment);
			if (wcscmp(fieldName, L"item_to_be_paid") == 0) return Data::AnyFieldToStringConverter::ToString(&item_to_be_paid);
			if (wcscmp(fieldName, L"check_equip_characteristics") == 0) return Data::AnyFieldToStringConverter::ToString(&check_equip_characteristics);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad0[1];
__int16 sort_no;
Data::TableRef charge_of_item_for_instant_payment;
int charge_of_item_for_instant_payment_tableId(){return 189;};
Data::TableRef item_to_be_paid;
int item_to_be_paid_tableId(){return 189;};
bool check_equip_characteristics;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 59; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) closet_group_RecordPtr // : DrRecordPtr
	{
		closet_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::closet_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}