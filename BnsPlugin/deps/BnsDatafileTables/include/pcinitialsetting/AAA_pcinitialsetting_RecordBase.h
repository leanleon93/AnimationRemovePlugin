/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pcinitialsetting_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"quest") == 0) return quest;
			if (wcscmp(fieldName, L"quest_1") == 0) return quest[0];
			if (wcscmp(fieldName, L"quest_2") == 0) return quest[1];
			if (wcscmp(fieldName, L"quest_mission_step") == 0) return quest_mission_step;
			if (wcscmp(fieldName, L"quest_mission_step_1") == 0) return quest_mission_step[0];
			if (wcscmp(fieldName, L"quest_mission_step_2") == 0) return quest_mission_step[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest[0]));
			if (wcscmp(fieldName, L"quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest[1]));
			if (wcscmp(fieldName, L"quest_mission_step_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_mission_step[0]));
			if (wcscmp(fieldName, L"quest_mission_step_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(quest_mission_step[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int16 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef quest[2];
int quest_tableId(){return 283;};
__int8 quest_mission_step[2];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 269; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pcinitialsetting_RecordPtr // : DrRecordPtr
	{
		pcinitialsetting_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pcinitialsetting_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}