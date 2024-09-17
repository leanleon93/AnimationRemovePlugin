/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct board_gacha_reward_Record : DrEl
	{
	private:
		static std::wstring Get_reward_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"reward_type") == 0) return reward_type;
			if (wcscmp(fieldName, L"rank_min") == 0) return rank_min;
			if (wcscmp(fieldName, L"rank_max") == 0) return rank_max;
			if (wcscmp(fieldName, L"participation_count") == 0) return participation_count;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"lucky_reward_item") == 0) return lucky_reward_item;
			if (wcscmp(fieldName, L"lucky_reward_item_1") == 0) return lucky_reward_item[0];
			if (wcscmp(fieldName, L"lucky_reward_item_2") == 0) return lucky_reward_item[1];
			if (wcscmp(fieldName, L"lucky_reward_item_3") == 0) return lucky_reward_item[2];
			if (wcscmp(fieldName, L"lucky_reward_item_4") == 0) return lucky_reward_item[3];
			if (wcscmp(fieldName, L"lucky_reward_item_5") == 0) return lucky_reward_item[4];
			if (wcscmp(fieldName, L"lucky_reward_item_count") == 0) return lucky_reward_item_count;
			if (wcscmp(fieldName, L"lucky_reward_item_count_1") == 0) return lucky_reward_item_count[0];
			if (wcscmp(fieldName, L"lucky_reward_item_count_2") == 0) return lucky_reward_item_count[1];
			if (wcscmp(fieldName, L"lucky_reward_item_count_3") == 0) return lucky_reward_item_count[2];
			if (wcscmp(fieldName, L"lucky_reward_item_count_4") == 0) return lucky_reward_item_count[3];
			if (wcscmp(fieldName, L"lucky_reward_item_count_5") == 0) return lucky_reward_item_count[4];
			if (wcscmp(fieldName, L"lucky_reward_represent_item") == 0) return lucky_reward_represent_item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"reward_type") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_type);
			if (wcscmp(fieldName, L"rank_min") == 0) return Data::AnyFieldToStringConverter::ToString(&rank_min);
			if (wcscmp(fieldName, L"rank_max") == 0) return Data::AnyFieldToStringConverter::ToString(&rank_max);
			if (wcscmp(fieldName, L"participation_count") == 0) return Data::AnyFieldToStringConverter::ToString(&participation_count);
			if (wcscmp(fieldName, L"reward_item") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_item);
			if (wcscmp(fieldName, L"reward_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_item_count);
			if (wcscmp(fieldName, L"lucky_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item[0]));
			if (wcscmp(fieldName, L"lucky_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item[1]));
			if (wcscmp(fieldName, L"lucky_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item[2]));
			if (wcscmp(fieldName, L"lucky_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item[3]));
			if (wcscmp(fieldName, L"lucky_reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item[4]));
			if (wcscmp(fieldName, L"lucky_reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item_count[0]));
			if (wcscmp(fieldName, L"lucky_reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item_count[1]));
			if (wcscmp(fieldName, L"lucky_reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item_count[2]));
			if (wcscmp(fieldName, L"lucky_reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item_count[3]));
			if (wcscmp(fieldName, L"lucky_reward_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(lucky_reward_item_count[4]));
			if (wcscmp(fieldName, L"lucky_reward_represent_item") == 0) return Data::AnyFieldToStringConverter::ToString(&lucky_reward_represent_item);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 reward_type;
std::wstring reward_type_EnumValue() const {return Get_reward_type_EnumValue(reward_type);};
char Pad0[1];
__int16 rank_min;
__int16 rank_max;
__int16 participation_count;
Data::TableRef reward_item;
int reward_item_tableId(){return 189;};
__int16 reward_item_count;
char Pad1[2];
Data::TableRef lucky_reward_item[5];
int lucky_reward_item_tableId(){return 189;};
__int16 lucky_reward_item_count[5];
char Pad2[2];
Data::TableRef lucky_reward_represent_item;
int lucky_reward_represent_item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 41; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) board_gacha_reward_RecordPtr // : DrRecordPtr
	{
		board_gacha_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::board_gacha_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}