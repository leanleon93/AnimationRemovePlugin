/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct hyper_racing_game_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"play_time") == 0) return play_time;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"public_raid") == 0) return public_raid;
			if (wcscmp(fieldName, L"reward") == 0) return reward;
			if (wcscmp(fieldName, L"reward_1") == 0) return reward[0];
			if (wcscmp(fieldName, L"reward_2") == 0) return reward[1];
			if (wcscmp(fieldName, L"reward_3") == 0) return reward[2];
			if (wcscmp(fieldName, L"reward_4") == 0) return reward[3];
			if (wcscmp(fieldName, L"reward_time") == 0) return reward_time;
			if (wcscmp(fieldName, L"reward_time_1") == 0) return reward_time[0];
			if (wcscmp(fieldName, L"reward_time_2") == 0) return reward_time[1];
			if (wcscmp(fieldName, L"reward_time_3") == 0) return reward_time[2];
			if (wcscmp(fieldName, L"reward_time_4") == 0) return reward_time[3];
			if (wcscmp(fieldName, L"finish_reward") == 0) return finish_reward;
			if (wcscmp(fieldName, L"timeout_reward") == 0) return timeout_reward;
			if (wcscmp(fieldName, L"goal_foot_switch") == 0) return goal_foot_switch;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"play_time") == 0) return Data::AnyFieldToStringConverter::ToString(&play_time);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"public_raid") == 0) return Data::AnyFieldToStringConverter::ToString(&public_raid);
			if (wcscmp(fieldName, L"reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[0]));
			if (wcscmp(fieldName, L"reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[1]));
			if (wcscmp(fieldName, L"reward_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[2]));
			if (wcscmp(fieldName, L"reward_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[3]));
			if (wcscmp(fieldName, L"reward_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_time[0]));
			if (wcscmp(fieldName, L"reward_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_time[1]));
			if (wcscmp(fieldName, L"reward_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_time[2]));
			if (wcscmp(fieldName, L"reward_time_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_time[3]));
			if (wcscmp(fieldName, L"finish_reward") == 0) return Data::AnyFieldToStringConverter::ToString(&finish_reward);
			if (wcscmp(fieldName, L"timeout_reward") == 0) return Data::AnyFieldToStringConverter::ToString(&timeout_reward);
			if (wcscmp(fieldName, L"goal_foot_switch") == 0) return Data::AnyFieldToStringConverter::ToString(&goal_foot_switch);

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
Data::TableRef zone;
int zone_tableId(){return 443;};
__int32 play_time;
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef public_raid;
int public_raid_tableId(){return 279;};
Data::TableRef reward[4];
int reward_tableId(){return 177;};
__int32 reward_time[4];
Data::TableRef finish_reward;
int finish_reward_tableId(){return 177;};
Data::TableRef timeout_reward;
int timeout_reward_tableId(){return 177;};
Data::TableRef goal_foot_switch;
int goal_foot_switch_tableId(){return 446;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 176; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) hyper_racing_game_RecordPtr // : DrRecordPtr
	{
		hyper_racing_game_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::hyper_racing_game_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}