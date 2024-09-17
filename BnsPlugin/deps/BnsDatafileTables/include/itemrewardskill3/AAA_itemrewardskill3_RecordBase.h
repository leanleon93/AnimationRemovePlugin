/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemrewardskill3_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"change_skill_id") == 0) return change_skill_id;
			if (wcscmp(fieldName, L"change_skill_id_1") == 0) return change_skill_id[0];
			if (wcscmp(fieldName, L"change_skill_id_2") == 0) return change_skill_id[1];
			if (wcscmp(fieldName, L"change_skill_id_3") == 0) return change_skill_id[2];
			if (wcscmp(fieldName, L"change_skill_id_4") == 0) return change_skill_id[3];
			if (wcscmp(fieldName, L"change_skill_id_5") == 0) return change_skill_id[4];
			if (wcscmp(fieldName, L"change_skill_id_6") == 0) return change_skill_id[5];
			if (wcscmp(fieldName, L"change_skill_id_7") == 0) return change_skill_id[6];
			if (wcscmp(fieldName, L"change_skill_id_8") == 0) return change_skill_id[7];
			if (wcscmp(fieldName, L"change_skill_id_9") == 0) return change_skill_id[8];
			if (wcscmp(fieldName, L"change_skill_id_10") == 0) return change_skill_id[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"change_skill_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[0]));
			if (wcscmp(fieldName, L"change_skill_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[1]));
			if (wcscmp(fieldName, L"change_skill_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[2]));
			if (wcscmp(fieldName, L"change_skill_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[3]));
			if (wcscmp(fieldName, L"change_skill_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[4]));
			if (wcscmp(fieldName, L"change_skill_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[5]));
			if (wcscmp(fieldName, L"change_skill_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[6]));
			if (wcscmp(fieldName, L"change_skill_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[7]));
			if (wcscmp(fieldName, L"change_skill_id_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[8]));
			if (wcscmp(fieldName, L"change_skill_id_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill_id[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 job;
Data::TableRef head_skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		char Pad0[4];
Data::TableRef change_skill_id[10];
int change_skill_id_tableId(){return 324;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 207; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemrewardskill3_RecordPtr // : DrRecordPtr
	{
		itemrewardskill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemrewardskill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}