/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct weapon_appearance_change_cost_Record : DrEl
	{
	private:
		static std::wstring Get_weapon_cost_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"cost_apply_item") == 0) return cost_apply_item;
			if (wcscmp(fieldName, L"cost_apply_item_1") == 0) return cost_apply_item[0];
			if (wcscmp(fieldName, L"cost_apply_item_2") == 0) return cost_apply_item[1];
			if (wcscmp(fieldName, L"cost_apply_item_amount") == 0) return cost_apply_item_amount;
			if (wcscmp(fieldName, L"cost_apply_item_amount_1") == 0) return cost_apply_item_amount[0];
			if (wcscmp(fieldName, L"cost_apply_item_amount_2") == 0) return cost_apply_item_amount[1];
			if (wcscmp(fieldName, L"cost_apply_money") == 0) return cost_apply_money;
			if (wcscmp(fieldName, L"cost_remove_separable") == 0) return cost_remove_separable;
			if (wcscmp(fieldName, L"cost_remove_item") == 0) return cost_remove_item;
			if (wcscmp(fieldName, L"cost_remove_item_1") == 0) return cost_remove_item[0];
			if (wcscmp(fieldName, L"cost_remove_item_2") == 0) return cost_remove_item[1];
			if (wcscmp(fieldName, L"cost_remove_item_amount") == 0) return cost_remove_item_amount;
			if (wcscmp(fieldName, L"cost_remove_item_amount_1") == 0) return cost_remove_item_amount[0];
			if (wcscmp(fieldName, L"cost_remove_item_amount_2") == 0) return cost_remove_item_amount[1];
			if (wcscmp(fieldName, L"cost_remove_money") == 0) return cost_remove_money;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"cost_apply_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_apply_item[0]));
			if (wcscmp(fieldName, L"cost_apply_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_apply_item[1]));
			if (wcscmp(fieldName, L"cost_apply_item_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_apply_item_amount[0]));
			if (wcscmp(fieldName, L"cost_apply_item_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_apply_item_amount[1]));
			if (wcscmp(fieldName, L"cost_apply_money") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_apply_money);
			if (wcscmp(fieldName, L"cost_remove_separable") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_remove_separable);
			if (wcscmp(fieldName, L"cost_remove_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_remove_item[0]));
			if (wcscmp(fieldName, L"cost_remove_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_remove_item[1]));
			if (wcscmp(fieldName, L"cost_remove_item_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_remove_item_amount[0]));
			if (wcscmp(fieldName, L"cost_remove_item_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_remove_item_amount[1]));
			if (wcscmp(fieldName, L"cost_remove_money") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_remove_money);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 item_grade;
__int8 growth_efficient_level;
__int8 weapon_cost_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef cost_apply_item[2];
int cost_apply_item_tableId(){return 189;};
__int16 cost_apply_item_amount[2];
__int32 cost_apply_money;
bool cost_remove_separable;
char Pad0[3];
Data::TableRef cost_remove_item[2];
int cost_remove_item_tableId(){return 189;};
__int16 cost_remove_item_amount[2];
__int32 cost_remove_money;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 427; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_appearance_change_cost_RecordPtr // : DrRecordPtr
	{
		weapon_appearance_change_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapon_appearance_change_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}