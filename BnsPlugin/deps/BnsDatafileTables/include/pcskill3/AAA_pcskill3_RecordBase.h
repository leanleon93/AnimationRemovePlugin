/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pcskill3_Record : DrEl
	{
	private:
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"skill3") == 0) return skill3;
			if (wcscmp(fieldName, L"skill3_1") == 0) return skill3[0];
			if (wcscmp(fieldName, L"skill3_2") == 0) return skill3[1];
			if (wcscmp(fieldName, L"skill3_3") == 0) return skill3[2];
			if (wcscmp(fieldName, L"skill3_4") == 0) return skill3[3];
			if (wcscmp(fieldName, L"skill3_5") == 0) return skill3[4];
			if (wcscmp(fieldName, L"skill3_6") == 0) return skill3[5];
			if (wcscmp(fieldName, L"skill3_7") == 0) return skill3[6];
			if (wcscmp(fieldName, L"skill3_8") == 0) return skill3[7];
			if (wcscmp(fieldName, L"skill3_9") == 0) return skill3[8];
			if (wcscmp(fieldName, L"skill3_10") == 0) return skill3[9];
			if (wcscmp(fieldName, L"skill3_11") == 0) return skill3[10];
			if (wcscmp(fieldName, L"skill3_12") == 0) return skill3[11];
			if (wcscmp(fieldName, L"skill3_13") == 0) return skill3[12];
			if (wcscmp(fieldName, L"skill3_14") == 0) return skill3[13];
			if (wcscmp(fieldName, L"skill3_15") == 0) return skill3[14];
			if (wcscmp(fieldName, L"skill3_16") == 0) return skill3[15];
			if (wcscmp(fieldName, L"skill3_17") == 0) return skill3[16];
			if (wcscmp(fieldName, L"skill3_18") == 0) return skill3[17];
			if (wcscmp(fieldName, L"skill3_19") == 0) return skill3[18];
			if (wcscmp(fieldName, L"skill3_20") == 0) return skill3[19];
			if (wcscmp(fieldName, L"skill3_21") == 0) return skill3[20];
			if (wcscmp(fieldName, L"skill3_22") == 0) return skill3[21];
			if (wcscmp(fieldName, L"skill3_23") == 0) return skill3[22];
			if (wcscmp(fieldName, L"skill3_24") == 0) return skill3[23];
			if (wcscmp(fieldName, L"skill3_25") == 0) return skill3[24];
			if (wcscmp(fieldName, L"skill3_26") == 0) return skill3[25];
			if (wcscmp(fieldName, L"skill3_27") == 0) return skill3[26];
			if (wcscmp(fieldName, L"skill3_28") == 0) return skill3[27];
			if (wcscmp(fieldName, L"skill3_29") == 0) return skill3[28];
			if (wcscmp(fieldName, L"skill3_30") == 0) return skill3[29];
			if (wcscmp(fieldName, L"skill3_31") == 0) return skill3[30];
			if (wcscmp(fieldName, L"skill3_32") == 0) return skill3[31];
			if (wcscmp(fieldName, L"skill3_33") == 0) return skill3[32];
			if (wcscmp(fieldName, L"skill3_34") == 0) return skill3[33];
			if (wcscmp(fieldName, L"skill3_35") == 0) return skill3[34];
			if (wcscmp(fieldName, L"skill3_36") == 0) return skill3[35];
			if (wcscmp(fieldName, L"skill3_37") == 0) return skill3[36];
			if (wcscmp(fieldName, L"skill3_38") == 0) return skill3[37];
			if (wcscmp(fieldName, L"skill3_39") == 0) return skill3[38];
			if (wcscmp(fieldName, L"skill3_40") == 0) return skill3[39];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style);
			if (wcscmp(fieldName, L"skill3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[0]));
			if (wcscmp(fieldName, L"skill3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[1]));
			if (wcscmp(fieldName, L"skill3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[2]));
			if (wcscmp(fieldName, L"skill3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[3]));
			if (wcscmp(fieldName, L"skill3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[4]));
			if (wcscmp(fieldName, L"skill3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[5]));
			if (wcscmp(fieldName, L"skill3_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[6]));
			if (wcscmp(fieldName, L"skill3_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[7]));
			if (wcscmp(fieldName, L"skill3_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[8]));
			if (wcscmp(fieldName, L"skill3_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[9]));
			if (wcscmp(fieldName, L"skill3_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[10]));
			if (wcscmp(fieldName, L"skill3_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[11]));
			if (wcscmp(fieldName, L"skill3_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[12]));
			if (wcscmp(fieldName, L"skill3_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[13]));
			if (wcscmp(fieldName, L"skill3_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[14]));
			if (wcscmp(fieldName, L"skill3_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[15]));
			if (wcscmp(fieldName, L"skill3_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[16]));
			if (wcscmp(fieldName, L"skill3_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[17]));
			if (wcscmp(fieldName, L"skill3_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[18]));
			if (wcscmp(fieldName, L"skill3_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[19]));
			if (wcscmp(fieldName, L"skill3_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[20]));
			if (wcscmp(fieldName, L"skill3_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[21]));
			if (wcscmp(fieldName, L"skill3_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[22]));
			if (wcscmp(fieldName, L"skill3_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[23]));
			if (wcscmp(fieldName, L"skill3_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[24]));
			if (wcscmp(fieldName, L"skill3_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[25]));
			if (wcscmp(fieldName, L"skill3_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[26]));
			if (wcscmp(fieldName, L"skill3_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[27]));
			if (wcscmp(fieldName, L"skill3_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[28]));
			if (wcscmp(fieldName, L"skill3_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[29]));
			if (wcscmp(fieldName, L"skill3_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[30]));
			if (wcscmp(fieldName, L"skill3_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[31]));
			if (wcscmp(fieldName, L"skill3_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[32]));
			if (wcscmp(fieldName, L"skill3_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[33]));
			if (wcscmp(fieldName, L"skill3_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[34]));
			if (wcscmp(fieldName, L"skill3_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[35]));
			if (wcscmp(fieldName, L"skill3_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[36]));
			if (wcscmp(fieldName, L"skill3_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[37]));
			if (wcscmp(fieldName, L"skill3_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[38]));
			if (wcscmp(fieldName, L"skill3_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[39]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 job_style;
std::wstring job_style_EnumValue() const {return Get_job_style_EnumValue(job_style);};
char Pad0[3];
Data::TableRef skill3[40];
int skill3_tableId(){return 324;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 271; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pcskill3_RecordPtr // : DrRecordPtr
	{
		pcskill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pcskill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}