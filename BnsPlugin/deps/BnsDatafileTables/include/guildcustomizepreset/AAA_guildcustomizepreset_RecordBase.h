/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guildcustomizepreset_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"customize_factor") == 0) return customize_factor;
			if (wcscmp(fieldName, L"customize_factor_1") == 0) return customize_factor[0];
			if (wcscmp(fieldName, L"customize_factor_2") == 0) return customize_factor[1];
			if (wcscmp(fieldName, L"customize_factor_3") == 0) return customize_factor[2];
			if (wcscmp(fieldName, L"customize_factor_4") == 0) return customize_factor[3];
			if (wcscmp(fieldName, L"customize_factor_5") == 0) return customize_factor[4];
			if (wcscmp(fieldName, L"customize_factor_6") == 0) return customize_factor[5];
			if (wcscmp(fieldName, L"customize_factor_7") == 0) return customize_factor[6];
			if (wcscmp(fieldName, L"customize_factor_8") == 0) return customize_factor[7];
			if (wcscmp(fieldName, L"customize_factor_9") == 0) return customize_factor[8];
			if (wcscmp(fieldName, L"customize_factor_10") == 0) return customize_factor[9];
			if (wcscmp(fieldName, L"customize_factor_11") == 0) return customize_factor[10];
			if (wcscmp(fieldName, L"customize_factor_12") == 0) return customize_factor[11];
			if (wcscmp(fieldName, L"customize_factor_13") == 0) return customize_factor[12];
			if (wcscmp(fieldName, L"customize_factor_14") == 0) return customize_factor[13];
			if (wcscmp(fieldName, L"customize_factor_15") == 0) return customize_factor[14];
			if (wcscmp(fieldName, L"customize_factor_16") == 0) return customize_factor[15];
			if (wcscmp(fieldName, L"customize_factor_17") == 0) return customize_factor[16];
			if (wcscmp(fieldName, L"customize_factor_18") == 0) return customize_factor[17];
			if (wcscmp(fieldName, L"customize_factor_19") == 0) return customize_factor[18];
			if (wcscmp(fieldName, L"customize_factor_20") == 0) return customize_factor[19];
			if (wcscmp(fieldName, L"customize_factor_21") == 0) return customize_factor[20];
			if (wcscmp(fieldName, L"customize_factor_22") == 0) return customize_factor[21];
			if (wcscmp(fieldName, L"customize_factor_23") == 0) return customize_factor[22];
			if (wcscmp(fieldName, L"customize_factor_24") == 0) return customize_factor[23];
			if (wcscmp(fieldName, L"customize_factor_25") == 0) return customize_factor[24];
			if (wcscmp(fieldName, L"customize_factor_26") == 0) return customize_factor[25];
			if (wcscmp(fieldName, L"customize_factor_27") == 0) return customize_factor[26];
			if (wcscmp(fieldName, L"customize_factor_28") == 0) return customize_factor[27];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"customize_factor_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[0]));
			if (wcscmp(fieldName, L"customize_factor_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[1]));
			if (wcscmp(fieldName, L"customize_factor_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[2]));
			if (wcscmp(fieldName, L"customize_factor_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[3]));
			if (wcscmp(fieldName, L"customize_factor_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[4]));
			if (wcscmp(fieldName, L"customize_factor_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[5]));
			if (wcscmp(fieldName, L"customize_factor_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[6]));
			if (wcscmp(fieldName, L"customize_factor_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[7]));
			if (wcscmp(fieldName, L"customize_factor_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[8]));
			if (wcscmp(fieldName, L"customize_factor_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[9]));
			if (wcscmp(fieldName, L"customize_factor_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[10]));
			if (wcscmp(fieldName, L"customize_factor_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[11]));
			if (wcscmp(fieldName, L"customize_factor_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[12]));
			if (wcscmp(fieldName, L"customize_factor_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[13]));
			if (wcscmp(fieldName, L"customize_factor_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[14]));
			if (wcscmp(fieldName, L"customize_factor_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[15]));
			if (wcscmp(fieldName, L"customize_factor_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[16]));
			if (wcscmp(fieldName, L"customize_factor_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[17]));
			if (wcscmp(fieldName, L"customize_factor_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[18]));
			if (wcscmp(fieldName, L"customize_factor_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[19]));
			if (wcscmp(fieldName, L"customize_factor_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[20]));
			if (wcscmp(fieldName, L"customize_factor_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[21]));
			if (wcscmp(fieldName, L"customize_factor_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[22]));
			if (wcscmp(fieldName, L"customize_factor_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[23]));
			if (wcscmp(fieldName, L"customize_factor_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[24]));
			if (wcscmp(fieldName, L"customize_factor_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[25]));
			if (wcscmp(fieldName, L"customize_factor_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[26]));
			if (wcscmp(fieldName, L"customize_factor_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(customize_factor[27]));

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
__int8 customize_factor[28];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 165; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildcustomizepreset_RecordPtr // : DrRecordPtr
	{
		guildcustomizepreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guildcustomizepreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}