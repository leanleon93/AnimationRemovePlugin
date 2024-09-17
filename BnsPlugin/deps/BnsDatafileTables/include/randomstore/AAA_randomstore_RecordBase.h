/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct randomstore_Record : DrEl
	{
	private:
		static std::wstring Get_random_store_number_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"limit_level") == 0) return limit_level;
			if (wcscmp(fieldName, L"free_draw_enable") == 0) return free_draw_enable;
			if (wcscmp(fieldName, L"item_draw_enable") == 0) return item_draw_enable;
			if (wcscmp(fieldName, L"money_draw_enable") == 0) return money_draw_enable;
			if (wcscmp(fieldName, L"instant_payment_draw_enable") == 0) return instant_payment_draw_enable;
			if (wcscmp(fieldName, L"charge_of_item_draw") == 0) return charge_of_item_draw;
			if (wcscmp(fieldName, L"charge_of_money_draw") == 0) return charge_of_money_draw;
			if (wcscmp(fieldName, L"charge_of_item_instant_payment_draw") == 0) return charge_of_item_instant_payment_draw;
			if (wcscmp(fieldName, L"charge_of_item_five_times_draw") == 0) return charge_of_item_five_times_draw;
			if (wcscmp(fieldName, L"charge_of_item_count_five_times_draw") == 0) return charge_of_item_count_five_times_draw;
			if (wcscmp(fieldName, L"charge_of_money_five_times_draw") == 0) return charge_of_money_five_times_draw;
			if (wcscmp(fieldName, L"charge_of_item_instant_payment_five_times_draw") == 0) return charge_of_item_instant_payment_five_times_draw;
			if (wcscmp(fieldName, L"free_reward_draw_enable") == 0) return free_reward_draw_enable;
			if (wcscmp(fieldName, L"free_reward_draw_add_value") == 0) return free_reward_draw_add_value;
			if (wcscmp(fieldName, L"premium_reward_draw_enable") == 0) return premium_reward_draw_enable;
			if (wcscmp(fieldName, L"premium_reward_draw_premium_draw_count") == 0) return premium_reward_draw_premium_draw_count;
			if (wcscmp(fieldName, L"acquire_draw_reward_set_repeat_count") == 0) return acquire_draw_reward_set_repeat_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"limit_level") == 0) return Data::AnyFieldToStringConverter::ToString(&limit_level);
			if (wcscmp(fieldName, L"free_draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&free_draw_enable);
			if (wcscmp(fieldName, L"item_draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&item_draw_enable);
			if (wcscmp(fieldName, L"money_draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&money_draw_enable);
			if (wcscmp(fieldName, L"instant_payment_draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&instant_payment_draw_enable);
			if (wcscmp(fieldName, L"charge_of_item_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_item_draw);
			if (wcscmp(fieldName, L"charge_of_money_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_money_draw);
			if (wcscmp(fieldName, L"charge_of_item_instant_payment_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_item_instant_payment_draw);
			if (wcscmp(fieldName, L"charge_of_item_five_times_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_item_five_times_draw);
			if (wcscmp(fieldName, L"charge_of_item_count_five_times_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_item_count_five_times_draw);
			if (wcscmp(fieldName, L"charge_of_money_five_times_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_money_five_times_draw);
			if (wcscmp(fieldName, L"charge_of_item_instant_payment_five_times_draw") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_of_item_instant_payment_five_times_draw);
			if (wcscmp(fieldName, L"free_reward_draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&free_reward_draw_enable);
			if (wcscmp(fieldName, L"free_reward_draw_add_value") == 0) return Data::AnyFieldToStringConverter::ToString(&free_reward_draw_add_value);
			if (wcscmp(fieldName, L"premium_reward_draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&premium_reward_draw_enable);
			if (wcscmp(fieldName, L"premium_reward_draw_premium_draw_count") == 0) return Data::AnyFieldToStringConverter::ToString(&premium_reward_draw_premium_draw_count);
			if (wcscmp(fieldName, L"acquire_draw_reward_set_repeat_count") == 0) return Data::AnyFieldToStringConverter::ToString(&acquire_draw_reward_set_repeat_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 random_store_number;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 limit_level;
bool free_draw_enable;
bool item_draw_enable;
bool money_draw_enable;
bool instant_payment_draw_enable;
char Pad0[3];
Data::TableRef charge_of_item_draw;
int charge_of_item_draw_tableId(){return 189;};
__int64 charge_of_money_draw;
Data::TableRef charge_of_item_instant_payment_draw;
int charge_of_item_instant_payment_draw_tableId(){return 189;};
Data::TableRef charge_of_item_five_times_draw;
int charge_of_item_five_times_draw_tableId(){return 189;};
__int8 charge_of_item_count_five_times_draw;
char Pad1[3];
__int64 charge_of_money_five_times_draw;
Data::TableRef charge_of_item_instant_payment_five_times_draw;
int charge_of_item_instant_payment_five_times_draw_tableId(){return 189;};
bool free_reward_draw_enable;
char Pad2[3];
__int32 free_reward_draw_add_value;
bool premium_reward_draw_enable;
char Pad3[1];
__int16 premium_reward_draw_premium_draw_count;
__int32 acquire_draw_reward_set_repeat_count;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 292; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randomstore_RecordPtr // : DrRecordPtr
	{
		randomstore_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::randomstore_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}