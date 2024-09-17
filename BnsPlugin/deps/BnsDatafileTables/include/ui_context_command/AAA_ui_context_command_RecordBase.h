/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ui_context_command_Record : DrEl
	{
	private:
		static std::wstring Get_target_EnumValue(__int8 value);
		static std::wstring Get_command_EnumValue(__int8 value);
		static std::wstring Get_default_command_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"command") == 0) return command;
			if (wcscmp(fieldName, L"command_1") == 0) return command[0];
			if (wcscmp(fieldName, L"command_2") == 0) return command[1];
			if (wcscmp(fieldName, L"command_3") == 0) return command[2];
			if (wcscmp(fieldName, L"command_4") == 0) return command[3];
			if (wcscmp(fieldName, L"command_5") == 0) return command[4];
			if (wcscmp(fieldName, L"command_6") == 0) return command[5];
			if (wcscmp(fieldName, L"command_7") == 0) return command[6];
			if (wcscmp(fieldName, L"command_8") == 0) return command[7];
			if (wcscmp(fieldName, L"command_9") == 0) return command[8];
			if (wcscmp(fieldName, L"command_10") == 0) return command[9];
			if (wcscmp(fieldName, L"command_11") == 0) return command[10];
			if (wcscmp(fieldName, L"command_12") == 0) return command[11];
			if (wcscmp(fieldName, L"command_13") == 0) return command[12];
			if (wcscmp(fieldName, L"command_14") == 0) return command[13];
			if (wcscmp(fieldName, L"command_15") == 0) return command[14];
			if (wcscmp(fieldName, L"command_16") == 0) return command[15];
			if (wcscmp(fieldName, L"command_17") == 0) return command[16];
			if (wcscmp(fieldName, L"command_18") == 0) return command[17];
			if (wcscmp(fieldName, L"command_19") == 0) return command[18];
			if (wcscmp(fieldName, L"command_20") == 0) return command[19];
			if (wcscmp(fieldName, L"command_21") == 0) return command[20];
			if (wcscmp(fieldName, L"command_22") == 0) return command[21];
			if (wcscmp(fieldName, L"command_23") == 0) return command[22];
			if (wcscmp(fieldName, L"command_24") == 0) return command[23];
			if (wcscmp(fieldName, L"command_25") == 0) return command[24];
			if (wcscmp(fieldName, L"command_26") == 0) return command[25];
			if (wcscmp(fieldName, L"command_27") == 0) return command[26];
			if (wcscmp(fieldName, L"command_28") == 0) return command[27];
			if (wcscmp(fieldName, L"command_29") == 0) return command[28];
			if (wcscmp(fieldName, L"command_30") == 0) return command[29];
			if (wcscmp(fieldName, L"default_command") == 0) return default_command;
			if (wcscmp(fieldName, L"default_command_1") == 0) return default_command[0];
			if (wcscmp(fieldName, L"default_command_2") == 0) return default_command[1];
			if (wcscmp(fieldName, L"default_command_3") == 0) return default_command[2];
			if (wcscmp(fieldName, L"default_command_4") == 0) return default_command[3];
			if (wcscmp(fieldName, L"default_command_5") == 0) return default_command[4];
			if (wcscmp(fieldName, L"default_command_6") == 0) return default_command[5];
			if (wcscmp(fieldName, L"default_command_7") == 0) return default_command[6];
			if (wcscmp(fieldName, L"default_command_8") == 0) return default_command[7];
			if (wcscmp(fieldName, L"default_command_9") == 0) return default_command[8];
			if (wcscmp(fieldName, L"default_command_10") == 0) return default_command[9];
			if (wcscmp(fieldName, L"default_command_11") == 0) return default_command[10];
			if (wcscmp(fieldName, L"default_command_12") == 0) return default_command[11];
			if (wcscmp(fieldName, L"default_command_13") == 0) return default_command[12];
			if (wcscmp(fieldName, L"default_command_14") == 0) return default_command[13];
			if (wcscmp(fieldName, L"default_command_15") == 0) return default_command[14];
			if (wcscmp(fieldName, L"main_command_count") == 0) return main_command_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"command_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[0]));
			if (wcscmp(fieldName, L"command_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[1]));
			if (wcscmp(fieldName, L"command_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[2]));
			if (wcscmp(fieldName, L"command_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[3]));
			if (wcscmp(fieldName, L"command_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[4]));
			if (wcscmp(fieldName, L"command_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[5]));
			if (wcscmp(fieldName, L"command_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[6]));
			if (wcscmp(fieldName, L"command_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[7]));
			if (wcscmp(fieldName, L"command_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[8]));
			if (wcscmp(fieldName, L"command_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[9]));
			if (wcscmp(fieldName, L"command_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[10]));
			if (wcscmp(fieldName, L"command_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[11]));
			if (wcscmp(fieldName, L"command_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[12]));
			if (wcscmp(fieldName, L"command_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[13]));
			if (wcscmp(fieldName, L"command_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[14]));
			if (wcscmp(fieldName, L"command_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[15]));
			if (wcscmp(fieldName, L"command_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[16]));
			if (wcscmp(fieldName, L"command_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[17]));
			if (wcscmp(fieldName, L"command_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[18]));
			if (wcscmp(fieldName, L"command_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[19]));
			if (wcscmp(fieldName, L"command_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[20]));
			if (wcscmp(fieldName, L"command_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[21]));
			if (wcscmp(fieldName, L"command_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[22]));
			if (wcscmp(fieldName, L"command_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[23]));
			if (wcscmp(fieldName, L"command_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[24]));
			if (wcscmp(fieldName, L"command_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[25]));
			if (wcscmp(fieldName, L"command_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[26]));
			if (wcscmp(fieldName, L"command_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[27]));
			if (wcscmp(fieldName, L"command_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[28]));
			if (wcscmp(fieldName, L"command_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(command[29]));
			if (wcscmp(fieldName, L"default_command_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[0]));
			if (wcscmp(fieldName, L"default_command_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[1]));
			if (wcscmp(fieldName, L"default_command_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[2]));
			if (wcscmp(fieldName, L"default_command_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[3]));
			if (wcscmp(fieldName, L"default_command_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[4]));
			if (wcscmp(fieldName, L"default_command_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[5]));
			if (wcscmp(fieldName, L"default_command_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[6]));
			if (wcscmp(fieldName, L"default_command_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[7]));
			if (wcscmp(fieldName, L"default_command_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[8]));
			if (wcscmp(fieldName, L"default_command_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[9]));
			if (wcscmp(fieldName, L"default_command_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[10]));
			if (wcscmp(fieldName, L"default_command_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[11]));
			if (wcscmp(fieldName, L"default_command_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[12]));
			if (wcscmp(fieldName, L"default_command_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[13]));
			if (wcscmp(fieldName, L"default_command_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_command[14]));
			if (wcscmp(fieldName, L"main_command_count") == 0) return Data::AnyFieldToStringConverter::ToString(&main_command_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 target;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 command[30];
std::wstring command_EnumValue(int index) const {return Get_command_EnumValue(command[index]);};
__int8 default_command[15];
std::wstring default_command_EnumValue(int index) const {return Get_default_command_EnumValue(default_command[index]);};
__int8 main_command_count;

		static TableVersion Version() { return TableVersion(0, 43); }
		static __int16 TableId() { return 414; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ui_context_command_RecordPtr // : DrRecordPtr
	{
		ui_context_command_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ui_context_command_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}