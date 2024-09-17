/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_training_room_reward_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_exp") == 0) return reward_exp;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_exp);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 job;
__int16 grade;
__int8 achievement;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef reward_item[3];
int reward_item_tableId(){return 189;};
__int8 reward_item_count[3];
char Pad0[1];
__int32 reward_exp;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 105; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_training_room_reward_RecordPtr // : DrRecordPtr
	{
		duel_bot_training_room_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_training_room_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}