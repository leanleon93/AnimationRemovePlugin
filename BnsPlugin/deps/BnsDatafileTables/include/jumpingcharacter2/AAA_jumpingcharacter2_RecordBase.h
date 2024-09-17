/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct jumpingcharacter2_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_preceding_epic_quest") == 0) return required_preceding_epic_quest;
			if (wcscmp(fieldName, L"last_epic_quest_to_complete") == 0) return last_epic_quest_to_complete;
			if (wcscmp(fieldName, L"quest_to_complete") == 0) return quest_to_complete;
			if (wcscmp(fieldName, L"quest_to_complete_1") == 0) return quest_to_complete[0];
			if (wcscmp(fieldName, L"quest_to_complete_2") == 0) return quest_to_complete[1];
			if (wcscmp(fieldName, L"quest_to_complete_3") == 0) return quest_to_complete[2];
			if (wcscmp(fieldName, L"quest_to_complete_4") == 0) return quest_to_complete[3];
			if (wcscmp(fieldName, L"quest_to_complete_5") == 0) return quest_to_complete[4];
			if (wcscmp(fieldName, L"quest_to_complete_6") == 0) return quest_to_complete[5];
			if (wcscmp(fieldName, L"quest_to_complete_7") == 0) return quest_to_complete[6];
			if (wcscmp(fieldName, L"quest_to_complete_8") == 0) return quest_to_complete[7];
			if (wcscmp(fieldName, L"quest_to_complete_9") == 0) return quest_to_complete[8];
			if (wcscmp(fieldName, L"quest_to_complete_10") == 0) return quest_to_complete[9];
			if (wcscmp(fieldName, L"quest_to_complete_11") == 0) return quest_to_complete[10];
			if (wcscmp(fieldName, L"quest_to_complete_12") == 0) return quest_to_complete[11];
			if (wcscmp(fieldName, L"quest_to_complete_13") == 0) return quest_to_complete[12];
			if (wcscmp(fieldName, L"quest_to_complete_14") == 0) return quest_to_complete[13];
			if (wcscmp(fieldName, L"quest_to_complete_15") == 0) return quest_to_complete[14];
			if (wcscmp(fieldName, L"quest_to_complete_16") == 0) return quest_to_complete[15];
			if (wcscmp(fieldName, L"quest_to_complete_17") == 0) return quest_to_complete[16];
			if (wcscmp(fieldName, L"quest_to_complete_18") == 0) return quest_to_complete[17];
			if (wcscmp(fieldName, L"quest_to_complete_19") == 0) return quest_to_complete[18];
			if (wcscmp(fieldName, L"quest_to_complete_20") == 0) return quest_to_complete[19];
			if (wcscmp(fieldName, L"warp_to_pcspawn") == 0) return warp_to_pcspawn;
			if (wcscmp(fieldName, L"faction1_item") == 0) return faction1_item;
			if (wcscmp(fieldName, L"faction2_item") == 0) return faction2_item;
			if (wcscmp(fieldName, L"reward_exp") == 0) return reward_exp;
			if (wcscmp(fieldName, L"reward_money") == 0) return reward_money;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_4") == 0) return reward_item[3];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return reward_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_preceding_epic_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_epic_quest);
			if (wcscmp(fieldName, L"last_epic_quest_to_complete") == 0) return Data::AnyFieldToStringConverter::ToString(&last_epic_quest_to_complete);
			if (wcscmp(fieldName, L"quest_to_complete_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[0]));
			if (wcscmp(fieldName, L"quest_to_complete_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[1]));
			if (wcscmp(fieldName, L"quest_to_complete_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[2]));
			if (wcscmp(fieldName, L"quest_to_complete_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[3]));
			if (wcscmp(fieldName, L"quest_to_complete_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[4]));
			if (wcscmp(fieldName, L"quest_to_complete_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[5]));
			if (wcscmp(fieldName, L"quest_to_complete_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[6]));
			if (wcscmp(fieldName, L"quest_to_complete_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[7]));
			if (wcscmp(fieldName, L"quest_to_complete_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[8]));
			if (wcscmp(fieldName, L"quest_to_complete_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[9]));
			if (wcscmp(fieldName, L"quest_to_complete_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[10]));
			if (wcscmp(fieldName, L"quest_to_complete_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[11]));
			if (wcscmp(fieldName, L"quest_to_complete_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[12]));
			if (wcscmp(fieldName, L"quest_to_complete_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[13]));
			if (wcscmp(fieldName, L"quest_to_complete_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[14]));
			if (wcscmp(fieldName, L"quest_to_complete_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[15]));
			if (wcscmp(fieldName, L"quest_to_complete_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[16]));
			if (wcscmp(fieldName, L"quest_to_complete_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[17]));
			if (wcscmp(fieldName, L"quest_to_complete_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[18]));
			if (wcscmp(fieldName, L"quest_to_complete_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_to_complete[19]));
			if (wcscmp(fieldName, L"warp_to_pcspawn") == 0) return Data::AnyFieldToStringConverter::ToString(&warp_to_pcspawn);
			if (wcscmp(fieldName, L"faction1_item") == 0) return Data::AnyFieldToStringConverter::ToString(&faction1_item);
			if (wcscmp(fieldName, L"faction2_item") == 0) return Data::AnyFieldToStringConverter::ToString(&faction2_item);
			if (wcscmp(fieldName, L"reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_exp);
			if (wcscmp(fieldName, L"reward_money") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_money);
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[3]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[3]));

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
		__int16 required_level;
char Pad0[2];
Data::TableRef required_preceding_epic_quest;
int required_preceding_epic_quest_tableId(){return 283;};
Data::TableRef last_epic_quest_to_complete;
int last_epic_quest_to_complete_tableId(){return 283;};
Data::TableRef quest_to_complete[20];
int quest_to_complete_tableId(){return 283;};
Data::TableRef warp_to_pcspawn;
int warp_to_pcspawn_tableId(){return 452;};
Data::TableRef faction1_item;
int faction1_item_tableId(){return 189;};
Data::TableRef faction2_item;
int faction2_item_tableId(){return 189;};
__int32 reward_exp;
__int32 reward_money;
Data::TableRef reward_item[4];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 228; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jumpingcharacter2_RecordPtr // : DrRecordPtr
	{
		jumpingcharacter2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jumpingcharacter2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}