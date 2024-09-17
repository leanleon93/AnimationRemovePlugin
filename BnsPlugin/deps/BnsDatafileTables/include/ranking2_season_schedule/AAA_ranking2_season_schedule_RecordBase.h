/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_season_schedule_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"season") == 0) return season;
			if (wcscmp(fieldName, L"schedule_number") == 0) return schedule_number;
			if (wcscmp(fieldName, L"start_time") == 0) return start_time;
			if (wcscmp(fieldName, L"end_time") == 0) return end_time;
			if (wcscmp(fieldName, L"reward_group") == 0) return reward_group;
			if (wcscmp(fieldName, L"is_join_reward") == 0) return is_join_reward;
			if (wcscmp(fieldName, L"is_job_reward") == 0) return is_job_reward;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"season") == 0) return Data::AnyFieldToStringConverter::ToString(&season);
			if (wcscmp(fieldName, L"schedule_number") == 0) return Data::AnyFieldToStringConverter::ToString(&schedule_number);
			if (wcscmp(fieldName, L"start_time") == 0) return Data::AnyFieldToStringConverter::ToString(&start_time);
			if (wcscmp(fieldName, L"end_time") == 0) return Data::AnyFieldToStringConverter::ToString(&end_time);
			if (wcscmp(fieldName, L"reward_group") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_group);
			if (wcscmp(fieldName, L"is_join_reward") == 0) return Data::AnyFieldToStringConverter::ToString(&is_join_reward);
			if (wcscmp(fieldName, L"is_job_reward") == 0) return Data::AnyFieldToStringConverter::ToString(&is_job_reward);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_time));
			if (reinterpret_cast<std::uintptr_t>(end_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_time));
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
Data::TableRef season;
int season_tableId(){return 300;};
__int8 schedule_number;
char Pad0[3];
wchar_t* start_time;
wchar_t* end_time;
Data::TableRef reward_group;
int reward_group_tableId(){return 299;};
bool is_join_reward;
bool is_job_reward;

		static TableVersion Version() { return TableVersion(4, 1); }
		static __int16 TableId() { return 302; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_schedule_RecordPtr // : DrRecordPtr
	{
		ranking2_season_schedule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_schedule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}