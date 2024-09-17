/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct job_change_quest_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"acquire_quest") == 0) return acquire_quest;
			if (wcscmp(fieldName, L"acquire_quest_1") == 0) return acquire_quest[0];
			if (wcscmp(fieldName, L"acquire_quest_2") == 0) return acquire_quest[1];
			if (wcscmp(fieldName, L"acquire_quest_3") == 0) return acquire_quest[2];
			if (wcscmp(fieldName, L"acquire_quest_4") == 0) return acquire_quest[3];
			if (wcscmp(fieldName, L"complete_quest") == 0) return complete_quest;
			if (wcscmp(fieldName, L"complete_quest_1") == 0) return complete_quest[0];
			if (wcscmp(fieldName, L"complete_quest_2") == 0) return complete_quest[1];
			if (wcscmp(fieldName, L"complete_quest_3") == 0) return complete_quest[2];
			if (wcscmp(fieldName, L"complete_quest_4") == 0) return complete_quest[3];
			if (wcscmp(fieldName, L"complete_quest_5") == 0) return complete_quest[4];
			if (wcscmp(fieldName, L"complete_quest_6") == 0) return complete_quest[5];
			if (wcscmp(fieldName, L"complete_quest_7") == 0) return complete_quest[6];
			if (wcscmp(fieldName, L"complete_quest_8") == 0) return complete_quest[7];
			if (wcscmp(fieldName, L"complete_quest_9") == 0) return complete_quest[8];
			if (wcscmp(fieldName, L"complete_quest_10") == 0) return complete_quest[9];
			if (wcscmp(fieldName, L"complete_quest_11") == 0) return complete_quest[10];
			if (wcscmp(fieldName, L"complete_quest_12") == 0) return complete_quest[11];
			if (wcscmp(fieldName, L"complete_quest_13") == 0) return complete_quest[12];
			if (wcscmp(fieldName, L"complete_quest_14") == 0) return complete_quest[13];
			if (wcscmp(fieldName, L"complete_quest_15") == 0) return complete_quest[14];
			if (wcscmp(fieldName, L"complete_quest_16") == 0) return complete_quest[15];
			if (wcscmp(fieldName, L"reset_quest") == 0) return reset_quest;
			if (wcscmp(fieldName, L"reset_quest_1") == 0) return reset_quest[0];
			if (wcscmp(fieldName, L"reset_quest_2") == 0) return reset_quest[1];
			if (wcscmp(fieldName, L"reset_quest_3") == 0) return reset_quest[2];
			if (wcscmp(fieldName, L"reset_quest_4") == 0) return reset_quest[3];
			if (wcscmp(fieldName, L"reset_quest_free") == 0) return reset_quest_free;
			if (wcscmp(fieldName, L"reset_quest_free_1") == 0) return reset_quest_free[0];
			if (wcscmp(fieldName, L"reset_quest_free_2") == 0) return reset_quest_free[1];
			if (wcscmp(fieldName, L"reset_quest_free_3") == 0) return reset_quest_free[2];
			if (wcscmp(fieldName, L"reset_quest_free_4") == 0) return reset_quest_free[3];
			if (wcscmp(fieldName, L"reset_quest_free_5") == 0) return reset_quest_free[4];
			if (wcscmp(fieldName, L"reset_quest_free_6") == 0) return reset_quest_free[5];
			if (wcscmp(fieldName, L"reset_quest_free_7") == 0) return reset_quest_free[6];
			if (wcscmp(fieldName, L"reset_quest_free_8") == 0) return reset_quest_free[7];
			if (wcscmp(fieldName, L"reset_quest_free_9") == 0) return reset_quest_free[8];
			if (wcscmp(fieldName, L"reset_quest_free_10") == 0) return reset_quest_free[9];
			if (wcscmp(fieldName, L"reset_quest_free_11") == 0) return reset_quest_free[10];
			if (wcscmp(fieldName, L"reset_quest_free_12") == 0) return reset_quest_free[11];
			if (wcscmp(fieldName, L"reset_quest_free_13") == 0) return reset_quest_free[12];
			if (wcscmp(fieldName, L"reset_quest_free_14") == 0) return reset_quest_free[13];
			if (wcscmp(fieldName, L"reset_quest_free_15") == 0) return reset_quest_free[14];
			if (wcscmp(fieldName, L"reset_quest_free_16") == 0) return reset_quest_free[15];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"acquire_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(acquire_quest[0]));
			if (wcscmp(fieldName, L"acquire_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(acquire_quest[1]));
			if (wcscmp(fieldName, L"acquire_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(acquire_quest[2]));
			if (wcscmp(fieldName, L"acquire_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(acquire_quest[3]));
			if (wcscmp(fieldName, L"complete_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[0]));
			if (wcscmp(fieldName, L"complete_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[1]));
			if (wcscmp(fieldName, L"complete_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[2]));
			if (wcscmp(fieldName, L"complete_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[3]));
			if (wcscmp(fieldName, L"complete_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[4]));
			if (wcscmp(fieldName, L"complete_quest_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[5]));
			if (wcscmp(fieldName, L"complete_quest_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[6]));
			if (wcscmp(fieldName, L"complete_quest_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[7]));
			if (wcscmp(fieldName, L"complete_quest_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[8]));
			if (wcscmp(fieldName, L"complete_quest_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[9]));
			if (wcscmp(fieldName, L"complete_quest_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[10]));
			if (wcscmp(fieldName, L"complete_quest_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[11]));
			if (wcscmp(fieldName, L"complete_quest_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[12]));
			if (wcscmp(fieldName, L"complete_quest_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[13]));
			if (wcscmp(fieldName, L"complete_quest_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[14]));
			if (wcscmp(fieldName, L"complete_quest_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(complete_quest[15]));
			if (wcscmp(fieldName, L"reset_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest[0]));
			if (wcscmp(fieldName, L"reset_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest[1]));
			if (wcscmp(fieldName, L"reset_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest[2]));
			if (wcscmp(fieldName, L"reset_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest[3]));
			if (wcscmp(fieldName, L"reset_quest_free_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[0]));
			if (wcscmp(fieldName, L"reset_quest_free_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[1]));
			if (wcscmp(fieldName, L"reset_quest_free_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[2]));
			if (wcscmp(fieldName, L"reset_quest_free_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[3]));
			if (wcscmp(fieldName, L"reset_quest_free_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[4]));
			if (wcscmp(fieldName, L"reset_quest_free_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[5]));
			if (wcscmp(fieldName, L"reset_quest_free_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[6]));
			if (wcscmp(fieldName, L"reset_quest_free_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[7]));
			if (wcscmp(fieldName, L"reset_quest_free_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[8]));
			if (wcscmp(fieldName, L"reset_quest_free_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[9]));
			if (wcscmp(fieldName, L"reset_quest_free_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[10]));
			if (wcscmp(fieldName, L"reset_quest_free_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[11]));
			if (wcscmp(fieldName, L"reset_quest_free_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[12]));
			if (wcscmp(fieldName, L"reset_quest_free_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[13]));
			if (wcscmp(fieldName, L"reset_quest_free_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[14]));
			if (wcscmp(fieldName, L"reset_quest_free_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(reset_quest_free[15]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 acquire_quest[4];
__int16 complete_quest[16];
__int16 reset_quest[4];
__int16 reset_quest_free[16];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 221; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_quest_RecordPtr // : DrRecordPtr
	{
		job_change_quest_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_quest_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}