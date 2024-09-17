/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guilduniformparamtypecategory_Record : DrEl
	{
	private:
		static std::wstring Get_param_type_category_EnumValue(__int8 value);
		static std::wstring Get_payment_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"param_type") == 0) return param_type;
			if (wcscmp(fieldName, L"param_type_1") == 0) return param_type[0];
			if (wcscmp(fieldName, L"param_type_2") == 0) return param_type[1];
			if (wcscmp(fieldName, L"param_type_3") == 0) return param_type[2];
			if (wcscmp(fieldName, L"param_type_4") == 0) return param_type[3];
			if (wcscmp(fieldName, L"param_type_5") == 0) return param_type[4];
			if (wcscmp(fieldName, L"param_type_6") == 0) return param_type[5];
			if (wcscmp(fieldName, L"param_type_7") == 0) return param_type[6];
			if (wcscmp(fieldName, L"param_type_8") == 0) return param_type[7];
			if (wcscmp(fieldName, L"param_type_9") == 0) return param_type[8];
			if (wcscmp(fieldName, L"param_type_10") == 0) return param_type[9];
			if (wcscmp(fieldName, L"param_type_11") == 0) return param_type[10];
			if (wcscmp(fieldName, L"param_type_12") == 0) return param_type[11];
			if (wcscmp(fieldName, L"param_type_13") == 0) return param_type[12];
			if (wcscmp(fieldName, L"param_type_14") == 0) return param_type[13];
			if (wcscmp(fieldName, L"param_type_15") == 0) return param_type[14];
			if (wcscmp(fieldName, L"param_type_16") == 0) return param_type[15];
			if (wcscmp(fieldName, L"param_type_17") == 0) return param_type[16];
			if (wcscmp(fieldName, L"param_type_18") == 0) return param_type[17];
			if (wcscmp(fieldName, L"param_type_19") == 0) return param_type[18];
			if (wcscmp(fieldName, L"param_type_20") == 0) return param_type[19];
			if (wcscmp(fieldName, L"param_type_21") == 0) return param_type[20];
			if (wcscmp(fieldName, L"param_type_22") == 0) return param_type[21];
			if (wcscmp(fieldName, L"param_type_23") == 0) return param_type[22];
			if (wcscmp(fieldName, L"param_type_24") == 0) return param_type[23];
			if (wcscmp(fieldName, L"param_type_25") == 0) return param_type[24];
			if (wcscmp(fieldName, L"param_type_26") == 0) return param_type[25];
			if (wcscmp(fieldName, L"param_type_27") == 0) return param_type[26];
			if (wcscmp(fieldName, L"param_type_28") == 0) return param_type[27];
			if (wcscmp(fieldName, L"master_param_type") == 0) return master_param_type;
			if (wcscmp(fieldName, L"category_name") == 0) return category_name;
			if (wcscmp(fieldName, L"payment_type") == 0) return payment_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"param_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[0]));
			if (wcscmp(fieldName, L"param_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[1]));
			if (wcscmp(fieldName, L"param_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[2]));
			if (wcscmp(fieldName, L"param_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[3]));
			if (wcscmp(fieldName, L"param_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[4]));
			if (wcscmp(fieldName, L"param_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[5]));
			if (wcscmp(fieldName, L"param_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[6]));
			if (wcscmp(fieldName, L"param_type_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[7]));
			if (wcscmp(fieldName, L"param_type_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[8]));
			if (wcscmp(fieldName, L"param_type_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[9]));
			if (wcscmp(fieldName, L"param_type_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[10]));
			if (wcscmp(fieldName, L"param_type_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[11]));
			if (wcscmp(fieldName, L"param_type_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[12]));
			if (wcscmp(fieldName, L"param_type_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[13]));
			if (wcscmp(fieldName, L"param_type_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[14]));
			if (wcscmp(fieldName, L"param_type_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[15]));
			if (wcscmp(fieldName, L"param_type_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[16]));
			if (wcscmp(fieldName, L"param_type_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[17]));
			if (wcscmp(fieldName, L"param_type_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[18]));
			if (wcscmp(fieldName, L"param_type_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[19]));
			if (wcscmp(fieldName, L"param_type_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[20]));
			if (wcscmp(fieldName, L"param_type_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[21]));
			if (wcscmp(fieldName, L"param_type_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[22]));
			if (wcscmp(fieldName, L"param_type_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[23]));
			if (wcscmp(fieldName, L"param_type_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[24]));
			if (wcscmp(fieldName, L"param_type_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[25]));
			if (wcscmp(fieldName, L"param_type_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[26]));
			if (wcscmp(fieldName, L"param_type_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(param_type[27]));
			if (wcscmp(fieldName, L"master_param_type") == 0) return Data::AnyFieldToStringConverter::ToString(&master_param_type);
			if (wcscmp(fieldName, L"category_name") == 0) return Data::AnyFieldToStringConverter::ToString(&category_name);
			if (wcscmp(fieldName, L"payment_type") == 0) return Data::AnyFieldToStringConverter::ToString(&payment_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 param_type_category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 param_type[28];
__int32 master_param_type;
Data::TableRef category_name;
int category_name_tableId(){return 405;};
__int8 payment_type;
std::wstring payment_type_EnumValue() const {return Get_payment_type_EnumValue(payment_type);};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 171; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformparamtypecategory_RecordPtr // : DrRecordPtr
	{
		guilduniformparamtypecategory_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformparamtypecategory_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}