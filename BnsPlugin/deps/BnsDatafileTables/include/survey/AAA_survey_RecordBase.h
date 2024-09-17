/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct survey_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"survey_question") == 0) return survey_question;
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"race") == 0) return race;
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"completed_quest") == 0) return completed_quest;
			if (wcscmp(fieldName, L"start_year") == 0) return start_year;
			if (wcscmp(fieldName, L"start_month") == 0) return start_month;
			if (wcscmp(fieldName, L"start_day") == 0) return start_day;
			if (wcscmp(fieldName, L"start_hour") == 0) return start_hour;
			if (wcscmp(fieldName, L"end_year") == 0) return end_year;
			if (wcscmp(fieldName, L"end_month") == 0) return end_month;
			if (wcscmp(fieldName, L"end_day") == 0) return end_day;
			if (wcscmp(fieldName, L"end_hour") == 0) return end_hour;
			if (wcscmp(fieldName, L"need_item") == 0) return need_item;
			if (wcscmp(fieldName, L"fixed_reward_item") == 0) return fixed_reward_item;
			if (wcscmp(fieldName, L"fixed_reward_item_1") == 0) return fixed_reward_item[0];
			if (wcscmp(fieldName, L"fixed_reward_item_2") == 0) return fixed_reward_item[1];
			if (wcscmp(fieldName, L"fixed_reward_item_3") == 0) return fixed_reward_item[2];
			if (wcscmp(fieldName, L"fixed_reward_item_4") == 0) return fixed_reward_item[3];
			if (wcscmp(fieldName, L"fixed_reward_item_count") == 0) return fixed_reward_item_count;
			if (wcscmp(fieldName, L"fixed_reward_item_count_1") == 0) return fixed_reward_item_count[0];
			if (wcscmp(fieldName, L"fixed_reward_item_count_2") == 0) return fixed_reward_item_count[1];
			if (wcscmp(fieldName, L"fixed_reward_item_count_3") == 0) return fixed_reward_item_count[2];
			if (wcscmp(fieldName, L"fixed_reward_item_count_4") == 0) return fixed_reward_item_count[3];
			if (wcscmp(fieldName, L"optional_reward_item") == 0) return optional_reward_item;
			if (wcscmp(fieldName, L"optional_reward_item_1") == 0) return optional_reward_item[0];
			if (wcscmp(fieldName, L"optional_reward_item_2") == 0) return optional_reward_item[1];
			if (wcscmp(fieldName, L"optional_reward_item_3") == 0) return optional_reward_item[2];
			if (wcscmp(fieldName, L"optional_reward_item_4") == 0) return optional_reward_item[3];
			if (wcscmp(fieldName, L"optional_reward_item_count") == 0) return optional_reward_item_count;
			if (wcscmp(fieldName, L"optional_reward_item_count_1") == 0) return optional_reward_item_count[0];
			if (wcscmp(fieldName, L"optional_reward_item_count_2") == 0) return optional_reward_item_count[1];
			if (wcscmp(fieldName, L"optional_reward_item_count_3") == 0) return optional_reward_item_count[2];
			if (wcscmp(fieldName, L"optional_reward_item_count_4") == 0) return optional_reward_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"survey_question") == 0) return Data::AnyFieldToStringConverter::ToString(&survey_question);
			if (wcscmp(fieldName, L"job") == 0) return Data::AnyFieldToStringConverter::ToString(&job);
			if (wcscmp(fieldName, L"race") == 0) return Data::AnyFieldToStringConverter::ToString(&race);
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"completed_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&completed_quest);
			if (wcscmp(fieldName, L"start_year") == 0) return Data::AnyFieldToStringConverter::ToString(&start_year);
			if (wcscmp(fieldName, L"start_month") == 0) return Data::AnyFieldToStringConverter::ToString(&start_month);
			if (wcscmp(fieldName, L"start_day") == 0) return Data::AnyFieldToStringConverter::ToString(&start_day);
			if (wcscmp(fieldName, L"start_hour") == 0) return Data::AnyFieldToStringConverter::ToString(&start_hour);
			if (wcscmp(fieldName, L"end_year") == 0) return Data::AnyFieldToStringConverter::ToString(&end_year);
			if (wcscmp(fieldName, L"end_month") == 0) return Data::AnyFieldToStringConverter::ToString(&end_month);
			if (wcscmp(fieldName, L"end_day") == 0) return Data::AnyFieldToStringConverter::ToString(&end_day);
			if (wcscmp(fieldName, L"end_hour") == 0) return Data::AnyFieldToStringConverter::ToString(&end_hour);
			if (wcscmp(fieldName, L"need_item") == 0) return Data::AnyFieldToStringConverter::ToString(&need_item);
			if (wcscmp(fieldName, L"fixed_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item[0]));
			if (wcscmp(fieldName, L"fixed_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item[1]));
			if (wcscmp(fieldName, L"fixed_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item[2]));
			if (wcscmp(fieldName, L"fixed_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item[3]));
			if (wcscmp(fieldName, L"fixed_reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item_count[0]));
			if (wcscmp(fieldName, L"fixed_reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item_count[1]));
			if (wcscmp(fieldName, L"fixed_reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item_count[2]));
			if (wcscmp(fieldName, L"fixed_reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_item_count[3]));
			if (wcscmp(fieldName, L"optional_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item[0]));
			if (wcscmp(fieldName, L"optional_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item[1]));
			if (wcscmp(fieldName, L"optional_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item[2]));
			if (wcscmp(fieldName, L"optional_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item[3]));
			if (wcscmp(fieldName, L"optional_reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item_count[0]));
			if (wcscmp(fieldName, L"optional_reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item_count[1]));
			if (wcscmp(fieldName, L"optional_reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item_count[2]));
			if (wcscmp(fieldName, L"optional_reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_item_count[3]));

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
		Data::TableRef survey_question;
int survey_question_tableId(){return 398;};
__int8 job;
std::wstring job_EnumValue() const {return Get_job_EnumValue(job);};
__int8 race;
std::wstring race_EnumValue() const {return Get_race_EnumValue(race);};
char Pad0[2];
__int32 level;
Data::TableRef completed_quest;
int completed_quest_tableId(){return 283;};
__int16 start_year;
__int8 start_month;
__int8 start_day;
__int8 start_hour;
char Pad1[1];
__int16 end_year;
__int8 end_month;
__int8 end_day;
__int8 end_hour;
char Pad2[1];
Data::TableRef need_item;
int need_item_tableId(){return 189;};
Data::TableRef fixed_reward_item[4];
int fixed_reward_item_tableId(){return 189;};
__int8 fixed_reward_item_count[4];
Data::TableRef optional_reward_item[4];
int optional_reward_item_tableId(){return 189;};
__int8 optional_reward_item_count[4];

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 397; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) survey_RecordPtr // : DrRecordPtr
	{
		survey_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::survey_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}