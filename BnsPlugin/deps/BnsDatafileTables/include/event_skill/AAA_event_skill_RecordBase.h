/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct event_skill_Record : DrEl
	{
	private:
		static std::wstring Get_stance_type_EnumValue(__int8 value);
		static std::wstring Get_skill_result_EnumValue(__int8 value);
		static std::wstring Get_event_type_EnumValue(__int8 value);
		static std::wstring Get_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"skill_1") == 0) return skill_1;
			if (wcscmp(fieldName, L"skill_1_1") == 0) return skill_1[0];
			if (wcscmp(fieldName, L"skill_1_2") == 0) return skill_1[1];
			if (wcscmp(fieldName, L"skill_2") == 0) return skill_2;
			if (wcscmp(fieldName, L"skill_2_1") == 0) return skill_2[0];
			if (wcscmp(fieldName, L"skill_2_2") == 0) return skill_2[1];
			if (wcscmp(fieldName, L"skill_2_3") == 0) return skill_2[2];
			if (wcscmp(fieldName, L"skill_2_4") == 0) return skill_2[3];
			if (wcscmp(fieldName, L"skill_2_5") == 0) return skill_2[4];
			if (wcscmp(fieldName, L"skill_2_6") == 0) return skill_2[5];
			if (wcscmp(fieldName, L"skill_2_7") == 0) return skill_2[6];
			if (wcscmp(fieldName, L"skill_2_8") == 0) return skill_2[7];
			if (wcscmp(fieldName, L"skill_2_9") == 0) return skill_2[8];
			if (wcscmp(fieldName, L"skill_2_10") == 0) return skill_2[9];
			if (wcscmp(fieldName, L"skill_2_11") == 0) return skill_2[10];
			if (wcscmp(fieldName, L"skill_2_12") == 0) return skill_2[11];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"skill_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_1[0]));
			if (wcscmp(fieldName, L"skill_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_1[1]));
			if (wcscmp(fieldName, L"skill_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[0]));
			if (wcscmp(fieldName, L"skill_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[1]));
			if (wcscmp(fieldName, L"skill_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[2]));
			if (wcscmp(fieldName, L"skill_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[3]));
			if (wcscmp(fieldName, L"skill_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[4]));
			if (wcscmp(fieldName, L"skill_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[5]));
			if (wcscmp(fieldName, L"skill_2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[6]));
			if (wcscmp(fieldName, L"skill_2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[7]));
			if (wcscmp(fieldName, L"skill_2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[8]));
			if (wcscmp(fieldName, L"skill_2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[9]));
			if (wcscmp(fieldName, L"skill_2_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[10]));
			if (wcscmp(fieldName, L"skill_2_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_2[11]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 stance_type;
__int8 skill_result;
__int8 event_type;
__int8 state;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 skill_1[2];
__int32 skill_2[12];

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 124; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_skill_RecordPtr // : DrRecordPtr
	{
		event_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::event_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}