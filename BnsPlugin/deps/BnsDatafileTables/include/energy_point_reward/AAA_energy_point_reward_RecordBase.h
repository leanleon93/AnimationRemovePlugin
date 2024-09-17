/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct energy_point_reward_Record : DrEl
	{
	private:
		static std::wstring Get_reward_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"require_energy_point") == 0) return require_energy_point;
			if (wcscmp(fieldName, L"max_acquire_count") == 0) return max_acquire_count;
			if (wcscmp(fieldName, L"reward_type") == 0) return reward_type;
			if (wcscmp(fieldName, L"exp") == 0) return exp;
			if (wcscmp(fieldName, L"money_min") == 0) return money_min;
			if (wcscmp(fieldName, L"money_max") == 0) return money_max;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_1") == 0) return item[0];
			if (wcscmp(fieldName, L"item_2") == 0) return item[1];
			if (wcscmp(fieldName, L"item_3") == 0) return item[2];
			if (wcscmp(fieldName, L"item_4") == 0) return item[3];
			if (wcscmp(fieldName, L"item_5") == 0) return item[4];
			if (wcscmp(fieldName, L"item_6") == 0) return item[5];
			if (wcscmp(fieldName, L"item_7") == 0) return item[6];
			if (wcscmp(fieldName, L"item_8") == 0) return item[7];
			if (wcscmp(fieldName, L"item_count") == 0) return item_count;
			if (wcscmp(fieldName, L"item_count_1") == 0) return item_count[0];
			if (wcscmp(fieldName, L"item_count_2") == 0) return item_count[1];
			if (wcscmp(fieldName, L"item_count_3") == 0) return item_count[2];
			if (wcscmp(fieldName, L"item_count_4") == 0) return item_count[3];
			if (wcscmp(fieldName, L"item_count_5") == 0) return item_count[4];
			if (wcscmp(fieldName, L"item_count_6") == 0) return item_count[5];
			if (wcscmp(fieldName, L"item_count_7") == 0) return item_count[6];
			if (wcscmp(fieldName, L"item_count_8") == 0) return item_count[7];
			if (wcscmp(fieldName, L"item_total_weight") == 0) return item_total_weight;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"name") == 0) return name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"require_energy_point") == 0) return Data::AnyFieldToStringConverter::ToString(&require_energy_point);
			if (wcscmp(fieldName, L"max_acquire_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_acquire_count);
			if (wcscmp(fieldName, L"reward_type") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_type);
			if (wcscmp(fieldName, L"exp") == 0) return Data::AnyFieldToStringConverter::ToString(&exp);
			if (wcscmp(fieldName, L"money_min") == 0) return Data::AnyFieldToStringConverter::ToString(&money_min);
			if (wcscmp(fieldName, L"money_max") == 0) return Data::AnyFieldToStringConverter::ToString(&money_max);
			if (wcscmp(fieldName, L"item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[0]));
			if (wcscmp(fieldName, L"item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[1]));
			if (wcscmp(fieldName, L"item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[2]));
			if (wcscmp(fieldName, L"item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[3]));
			if (wcscmp(fieldName, L"item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[4]));
			if (wcscmp(fieldName, L"item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[5]));
			if (wcscmp(fieldName, L"item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[6]));
			if (wcscmp(fieldName, L"item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[7]));
			if (wcscmp(fieldName, L"item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[0]));
			if (wcscmp(fieldName, L"item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[1]));
			if (wcscmp(fieldName, L"item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[2]));
			if (wcscmp(fieldName, L"item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[3]));
			if (wcscmp(fieldName, L"item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[4]));
			if (wcscmp(fieldName, L"item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[5]));
			if (wcscmp(fieldName, L"item_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[6]));
			if (wcscmp(fieldName, L"item_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[7]));
			if (wcscmp(fieldName, L"item_total_weight") == 0) return Data::AnyFieldToStringConverter::ToString(&item_total_weight);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 require_energy_point;
__int16 max_acquire_count;
__int8 reward_type;
std::wstring reward_type_EnumValue() const {return Get_reward_type_EnumValue(reward_type);};
char Pad0[1];
__int64 exp;
__int32 money_min;
__int32 money_max;
Data::TableRef item[8];
int item_tableId(){return 189;};
__int16 item_count[8];
__int32 item_total_weight;
Data::IconRef icon;
Data::TableRef name;
int name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 116; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) energy_point_reward_RecordPtr // : DrRecordPtr
	{
		energy_point_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::energy_point_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}