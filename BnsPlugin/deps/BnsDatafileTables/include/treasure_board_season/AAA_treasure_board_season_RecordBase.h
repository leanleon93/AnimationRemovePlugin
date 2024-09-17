/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct treasure_board_season_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"season_enable") == 0) return season_enable;
			if (wcscmp(fieldName, L"treasure_board_page") == 0) return treasure_board_page;
			if (wcscmp(fieldName, L"treasure_board_page_1") == 0) return treasure_board_page[0];
			if (wcscmp(fieldName, L"treasure_board_page_2") == 0) return treasure_board_page[1];
			if (wcscmp(fieldName, L"treasure_board_page_3") == 0) return treasure_board_page[2];
			if (wcscmp(fieldName, L"treasure_board_page_4") == 0) return treasure_board_page[3];
			if (wcscmp(fieldName, L"treasure_board_page_5") == 0) return treasure_board_page[4];
			if (wcscmp(fieldName, L"treasure_board_page_6") == 0) return treasure_board_page[5];
			if (wcscmp(fieldName, L"treasure_board_page_7") == 0) return treasure_board_page[6];
			if (wcscmp(fieldName, L"treasure_board_page_8") == 0) return treasure_board_page[7];
			if (wcscmp(fieldName, L"treasure_board_page_9") == 0) return treasure_board_page[8];
			if (wcscmp(fieldName, L"treasure_board_page_10") == 0) return treasure_board_page[9];
			if (wcscmp(fieldName, L"season_reward_item") == 0) return season_reward_item;
			if (wcscmp(fieldName, L"season_reward_item_count") == 0) return season_reward_item_count;
			if (wcscmp(fieldName, L"season_name") == 0) return season_name;
			if (wcscmp(fieldName, L"season_end_time") == 0) return season_end_time;
			if (wcscmp(fieldName, L"season_board_symbol_on") == 0) return season_board_symbol_on;
			if (wcscmp(fieldName, L"season_board_symbol_off") == 0) return season_board_symbol_off;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"season_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&season_enable);
			if (wcscmp(fieldName, L"treasure_board_page_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[0]));
			if (wcscmp(fieldName, L"treasure_board_page_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[1]));
			if (wcscmp(fieldName, L"treasure_board_page_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[2]));
			if (wcscmp(fieldName, L"treasure_board_page_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[3]));
			if (wcscmp(fieldName, L"treasure_board_page_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[4]));
			if (wcscmp(fieldName, L"treasure_board_page_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[5]));
			if (wcscmp(fieldName, L"treasure_board_page_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[6]));
			if (wcscmp(fieldName, L"treasure_board_page_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[7]));
			if (wcscmp(fieldName, L"treasure_board_page_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[8]));
			if (wcscmp(fieldName, L"treasure_board_page_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_page[9]));
			if (wcscmp(fieldName, L"season_reward_item") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_item);
			if (wcscmp(fieldName, L"season_reward_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_item_count);
			if (wcscmp(fieldName, L"season_name") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name);
			if (wcscmp(fieldName, L"season_end_time") == 0) return Data::AnyFieldToStringConverter::ToString(&season_end_time);
			if (wcscmp(fieldName, L"season_board_symbol_on") == 0) return Data::AnyFieldToStringConverter::ToString(&season_board_symbol_on);
			if (wcscmp(fieldName, L"season_board_symbol_off") == 0) return Data::AnyFieldToStringConverter::ToString(&season_board_symbol_off);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(season_end_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_end_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_end_time));
			else return;
			if (reinterpret_cast<std::uintptr_t>(season_board_symbol_on) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_board_symbol_on = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_board_symbol_on));
			if (reinterpret_cast<std::uintptr_t>(season_board_symbol_off) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_board_symbol_off = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_board_symbol_off));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool season_enable;
char Pad0[3];
Data::TableRef treasure_board_page[10];
int treasure_board_page_tableId(){return 409;};
Data::TableRef season_reward_item;
int season_reward_item_tableId(){return 189;};
__int16 season_reward_item_count;
char Pad1[2];
Data::TableRef season_name;
int season_name_tableId(){return 405;};
wchar_t* season_end_time;
wchar_t* season_board_symbol_on;
wchar_t* season_board_symbol_off;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 411; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_season_RecordPtr // : DrRecordPtr
	{
		treasure_board_season_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::treasure_board_season_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}