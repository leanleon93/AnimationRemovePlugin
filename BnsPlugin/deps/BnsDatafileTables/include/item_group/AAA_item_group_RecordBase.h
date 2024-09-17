/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_group_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"member_item") == 0) return member_item;
			if (wcscmp(fieldName, L"member_item_1") == 0) return member_item[0];
			if (wcscmp(fieldName, L"member_item_2") == 0) return member_item[1];
			if (wcscmp(fieldName, L"member_item_3") == 0) return member_item[2];
			if (wcscmp(fieldName, L"member_item_4") == 0) return member_item[3];
			if (wcscmp(fieldName, L"member_item_5") == 0) return member_item[4];
			if (wcscmp(fieldName, L"member_item_6") == 0) return member_item[5];
			if (wcscmp(fieldName, L"member_item_7") == 0) return member_item[6];
			if (wcscmp(fieldName, L"member_item_8") == 0) return member_item[7];
			if (wcscmp(fieldName, L"member_item_9") == 0) return member_item[8];
			if (wcscmp(fieldName, L"member_item_10") == 0) return member_item[9];
			if (wcscmp(fieldName, L"member_item_11") == 0) return member_item[10];
			if (wcscmp(fieldName, L"member_item_12") == 0) return member_item[11];
			if (wcscmp(fieldName, L"member_item_13") == 0) return member_item[12];
			if (wcscmp(fieldName, L"member_item_14") == 0) return member_item[13];
			if (wcscmp(fieldName, L"member_item_15") == 0) return member_item[14];
			if (wcscmp(fieldName, L"member_item_16") == 0) return member_item[15];
			if (wcscmp(fieldName, L"member_item_17") == 0) return member_item[16];
			if (wcscmp(fieldName, L"member_item_18") == 0) return member_item[17];
			if (wcscmp(fieldName, L"member_item_19") == 0) return member_item[18];
			if (wcscmp(fieldName, L"member_item_20") == 0) return member_item[19];
			if (wcscmp(fieldName, L"member_item_21") == 0) return member_item[20];
			if (wcscmp(fieldName, L"member_item_22") == 0) return member_item[21];
			if (wcscmp(fieldName, L"member_item_23") == 0) return member_item[22];
			if (wcscmp(fieldName, L"member_item_24") == 0) return member_item[23];
			if (wcscmp(fieldName, L"member_item_25") == 0) return member_item[24];
			if (wcscmp(fieldName, L"member_item_26") == 0) return member_item[25];
			if (wcscmp(fieldName, L"member_item_27") == 0) return member_item[26];
			if (wcscmp(fieldName, L"member_item_28") == 0) return member_item[27];
			if (wcscmp(fieldName, L"member_item_29") == 0) return member_item[28];
			if (wcscmp(fieldName, L"member_item_30") == 0) return member_item[29];
			if (wcscmp(fieldName, L"member_item_31") == 0) return member_item[30];
			if (wcscmp(fieldName, L"member_item_32") == 0) return member_item[31];
			if (wcscmp(fieldName, L"member_item_33") == 0) return member_item[32];
			if (wcscmp(fieldName, L"member_item_34") == 0) return member_item[33];
			if (wcscmp(fieldName, L"member_item_35") == 0) return member_item[34];
			if (wcscmp(fieldName, L"member_item_36") == 0) return member_item[35];
			if (wcscmp(fieldName, L"member_item_37") == 0) return member_item[36];
			if (wcscmp(fieldName, L"member_item_38") == 0) return member_item[37];
			if (wcscmp(fieldName, L"member_item_39") == 0) return member_item[38];
			if (wcscmp(fieldName, L"member_item_40") == 0) return member_item[39];
			if (wcscmp(fieldName, L"member_item_41") == 0) return member_item[40];
			if (wcscmp(fieldName, L"member_item_42") == 0) return member_item[41];
			if (wcscmp(fieldName, L"member_item_43") == 0) return member_item[42];
			if (wcscmp(fieldName, L"member_item_44") == 0) return member_item[43];
			if (wcscmp(fieldName, L"member_item_45") == 0) return member_item[44];
			if (wcscmp(fieldName, L"member_item_46") == 0) return member_item[45];
			if (wcscmp(fieldName, L"member_item_47") == 0) return member_item[46];
			if (wcscmp(fieldName, L"member_item_48") == 0) return member_item[47];
			if (wcscmp(fieldName, L"member_item_49") == 0) return member_item[48];
			if (wcscmp(fieldName, L"member_item_50") == 0) return member_item[49];
			if (wcscmp(fieldName, L"member_item_count") == 0) return member_item_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"member_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[0]));
			if (wcscmp(fieldName, L"member_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[1]));
			if (wcscmp(fieldName, L"member_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[2]));
			if (wcscmp(fieldName, L"member_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[3]));
			if (wcscmp(fieldName, L"member_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[4]));
			if (wcscmp(fieldName, L"member_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[5]));
			if (wcscmp(fieldName, L"member_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[6]));
			if (wcscmp(fieldName, L"member_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[7]));
			if (wcscmp(fieldName, L"member_item_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[8]));
			if (wcscmp(fieldName, L"member_item_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[9]));
			if (wcscmp(fieldName, L"member_item_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[10]));
			if (wcscmp(fieldName, L"member_item_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[11]));
			if (wcscmp(fieldName, L"member_item_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[12]));
			if (wcscmp(fieldName, L"member_item_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[13]));
			if (wcscmp(fieldName, L"member_item_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[14]));
			if (wcscmp(fieldName, L"member_item_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[15]));
			if (wcscmp(fieldName, L"member_item_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[16]));
			if (wcscmp(fieldName, L"member_item_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[17]));
			if (wcscmp(fieldName, L"member_item_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[18]));
			if (wcscmp(fieldName, L"member_item_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[19]));
			if (wcscmp(fieldName, L"member_item_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[20]));
			if (wcscmp(fieldName, L"member_item_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[21]));
			if (wcscmp(fieldName, L"member_item_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[22]));
			if (wcscmp(fieldName, L"member_item_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[23]));
			if (wcscmp(fieldName, L"member_item_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[24]));
			if (wcscmp(fieldName, L"member_item_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[25]));
			if (wcscmp(fieldName, L"member_item_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[26]));
			if (wcscmp(fieldName, L"member_item_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[27]));
			if (wcscmp(fieldName, L"member_item_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[28]));
			if (wcscmp(fieldName, L"member_item_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[29]));
			if (wcscmp(fieldName, L"member_item_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[30]));
			if (wcscmp(fieldName, L"member_item_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[31]));
			if (wcscmp(fieldName, L"member_item_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[32]));
			if (wcscmp(fieldName, L"member_item_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[33]));
			if (wcscmp(fieldName, L"member_item_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[34]));
			if (wcscmp(fieldName, L"member_item_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[35]));
			if (wcscmp(fieldName, L"member_item_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[36]));
			if (wcscmp(fieldName, L"member_item_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[37]));
			if (wcscmp(fieldName, L"member_item_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[38]));
			if (wcscmp(fieldName, L"member_item_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[39]));
			if (wcscmp(fieldName, L"member_item_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[40]));
			if (wcscmp(fieldName, L"member_item_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[41]));
			if (wcscmp(fieldName, L"member_item_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[42]));
			if (wcscmp(fieldName, L"member_item_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[43]));
			if (wcscmp(fieldName, L"member_item_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[44]));
			if (wcscmp(fieldName, L"member_item_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[45]));
			if (wcscmp(fieldName, L"member_item_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[46]));
			if (wcscmp(fieldName, L"member_item_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[47]));
			if (wcscmp(fieldName, L"member_item_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[48]));
			if (wcscmp(fieldName, L"member_item_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(member_item[49]));
			if (wcscmp(fieldName, L"member_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&member_item_count);

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
Data::TableRef member_item[50];
int member_item_tableId(){return 189;};
__int8 member_item_count;

		static TableVersion Version() { return TableVersion(1, 3); }
		static __int16 TableId() { return 196; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_group_RecordPtr // : DrRecordPtr
	{
		item_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}