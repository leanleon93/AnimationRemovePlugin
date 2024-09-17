/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct relic_system_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"inventory_size_x") == 0) return inventory_size_x;
			if (wcscmp(fieldName, L"inventory_size_y") == 0) return inventory_size_y;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_4") == 0) return ability[3];
			if (wcscmp(fieldName, L"ability_5") == 0) return ability[4];
			if (wcscmp(fieldName, L"ability_6") == 0) return ability[5];
			if (wcscmp(fieldName, L"ability_7") == 0) return ability[6];
			if (wcscmp(fieldName, L"ability_8") == 0) return ability[7];
			if (wcscmp(fieldName, L"ability_9") == 0) return ability[8];
			if (wcscmp(fieldName, L"ability_10") == 0) return ability[9];
			if (wcscmp(fieldName, L"ability_11") == 0) return ability[10];
			if (wcscmp(fieldName, L"ability_12") == 0) return ability[11];
			if (wcscmp(fieldName, L"ability_13") == 0) return ability[12];
			if (wcscmp(fieldName, L"ability_14") == 0) return ability[13];
			if (wcscmp(fieldName, L"ability_15") == 0) return ability[14];
			if (wcscmp(fieldName, L"ability_16") == 0) return ability[15];
			if (wcscmp(fieldName, L"ability_17") == 0) return ability[16];
			if (wcscmp(fieldName, L"ability_18") == 0) return ability[17];
			if (wcscmp(fieldName, L"ability_19") == 0) return ability[18];
			if (wcscmp(fieldName, L"ability_20") == 0) return ability[19];
			if (wcscmp(fieldName, L"ability_21") == 0) return ability[20];
			if (wcscmp(fieldName, L"ability_22") == 0) return ability[21];
			if (wcscmp(fieldName, L"ability_23") == 0) return ability[22];
			if (wcscmp(fieldName, L"ability_24") == 0) return ability[23];
			if (wcscmp(fieldName, L"ability_25") == 0) return ability[24];
			if (wcscmp(fieldName, L"ability_26") == 0) return ability[25];
			if (wcscmp(fieldName, L"ability_27") == 0) return ability[26];
			if (wcscmp(fieldName, L"ability_28") == 0) return ability[27];
			if (wcscmp(fieldName, L"ability_29") == 0) return ability[28];
			if (wcscmp(fieldName, L"ability_30") == 0) return ability[29];
			if (wcscmp(fieldName, L"ability_31") == 0) return ability[30];
			if (wcscmp(fieldName, L"ability_32") == 0) return ability[31];
			if (wcscmp(fieldName, L"ability_33") == 0) return ability[32];
			if (wcscmp(fieldName, L"ability_34") == 0) return ability[33];
			if (wcscmp(fieldName, L"ability_35") == 0) return ability[34];
			if (wcscmp(fieldName, L"ability_36") == 0) return ability[35];
			if (wcscmp(fieldName, L"ability_37") == 0) return ability[36];
			if (wcscmp(fieldName, L"ability_38") == 0) return ability[37];
			if (wcscmp(fieldName, L"ability_39") == 0) return ability[38];
			if (wcscmp(fieldName, L"ability_40") == 0) return ability[39];
			if (wcscmp(fieldName, L"ability_value_max") == 0) return ability_value_max;
			if (wcscmp(fieldName, L"ability_value_max_1") == 0) return ability_value_max[0];
			if (wcscmp(fieldName, L"ability_value_max_2") == 0) return ability_value_max[1];
			if (wcscmp(fieldName, L"ability_value_max_3") == 0) return ability_value_max[2];
			if (wcscmp(fieldName, L"ability_value_max_4") == 0) return ability_value_max[3];
			if (wcscmp(fieldName, L"ability_value_max_5") == 0) return ability_value_max[4];
			if (wcscmp(fieldName, L"ability_value_max_6") == 0) return ability_value_max[5];
			if (wcscmp(fieldName, L"ability_value_max_7") == 0) return ability_value_max[6];
			if (wcscmp(fieldName, L"ability_value_max_8") == 0) return ability_value_max[7];
			if (wcscmp(fieldName, L"ability_value_max_9") == 0) return ability_value_max[8];
			if (wcscmp(fieldName, L"ability_value_max_10") == 0) return ability_value_max[9];
			if (wcscmp(fieldName, L"ability_value_max_11") == 0) return ability_value_max[10];
			if (wcscmp(fieldName, L"ability_value_max_12") == 0) return ability_value_max[11];
			if (wcscmp(fieldName, L"ability_value_max_13") == 0) return ability_value_max[12];
			if (wcscmp(fieldName, L"ability_value_max_14") == 0) return ability_value_max[13];
			if (wcscmp(fieldName, L"ability_value_max_15") == 0) return ability_value_max[14];
			if (wcscmp(fieldName, L"ability_value_max_16") == 0) return ability_value_max[15];
			if (wcscmp(fieldName, L"ability_value_max_17") == 0) return ability_value_max[16];
			if (wcscmp(fieldName, L"ability_value_max_18") == 0) return ability_value_max[17];
			if (wcscmp(fieldName, L"ability_value_max_19") == 0) return ability_value_max[18];
			if (wcscmp(fieldName, L"ability_value_max_20") == 0) return ability_value_max[19];
			if (wcscmp(fieldName, L"ability_value_max_21") == 0) return ability_value_max[20];
			if (wcscmp(fieldName, L"ability_value_max_22") == 0) return ability_value_max[21];
			if (wcscmp(fieldName, L"ability_value_max_23") == 0) return ability_value_max[22];
			if (wcscmp(fieldName, L"ability_value_max_24") == 0) return ability_value_max[23];
			if (wcscmp(fieldName, L"ability_value_max_25") == 0) return ability_value_max[24];
			if (wcscmp(fieldName, L"ability_value_max_26") == 0) return ability_value_max[25];
			if (wcscmp(fieldName, L"ability_value_max_27") == 0) return ability_value_max[26];
			if (wcscmp(fieldName, L"ability_value_max_28") == 0) return ability_value_max[27];
			if (wcscmp(fieldName, L"ability_value_max_29") == 0) return ability_value_max[28];
			if (wcscmp(fieldName, L"ability_value_max_30") == 0) return ability_value_max[29];
			if (wcscmp(fieldName, L"ability_value_max_31") == 0) return ability_value_max[30];
			if (wcscmp(fieldName, L"ability_value_max_32") == 0) return ability_value_max[31];
			if (wcscmp(fieldName, L"ability_value_max_33") == 0) return ability_value_max[32];
			if (wcscmp(fieldName, L"ability_value_max_34") == 0) return ability_value_max[33];
			if (wcscmp(fieldName, L"ability_value_max_35") == 0) return ability_value_max[34];
			if (wcscmp(fieldName, L"ability_value_max_36") == 0) return ability_value_max[35];
			if (wcscmp(fieldName, L"ability_value_max_37") == 0) return ability_value_max[36];
			if (wcscmp(fieldName, L"ability_value_max_38") == 0) return ability_value_max[37];
			if (wcscmp(fieldName, L"ability_value_max_39") == 0) return ability_value_max[38];
			if (wcscmp(fieldName, L"ability_value_max_40") == 0) return ability_value_max[39];
			if (wcscmp(fieldName, L"ability_base_value_max") == 0) return ability_base_value_max;
			if (wcscmp(fieldName, L"ability_base_value_max_1") == 0) return ability_base_value_max[0];
			if (wcscmp(fieldName, L"ability_base_value_max_2") == 0) return ability_base_value_max[1];
			if (wcscmp(fieldName, L"ability_base_value_max_3") == 0) return ability_base_value_max[2];
			if (wcscmp(fieldName, L"ability_base_value_max_4") == 0) return ability_base_value_max[3];
			if (wcscmp(fieldName, L"ability_base_value_max_5") == 0) return ability_base_value_max[4];
			if (wcscmp(fieldName, L"ability_base_value_max_6") == 0) return ability_base_value_max[5];
			if (wcscmp(fieldName, L"ability_base_value_max_7") == 0) return ability_base_value_max[6];
			if (wcscmp(fieldName, L"ability_base_value_max_8") == 0) return ability_base_value_max[7];
			if (wcscmp(fieldName, L"ability_base_value_max_9") == 0) return ability_base_value_max[8];
			if (wcscmp(fieldName, L"ability_base_value_max_10") == 0) return ability_base_value_max[9];
			if (wcscmp(fieldName, L"ability_base_value_max_11") == 0) return ability_base_value_max[10];
			if (wcscmp(fieldName, L"ability_base_value_max_12") == 0) return ability_base_value_max[11];
			if (wcscmp(fieldName, L"ability_base_value_max_13") == 0) return ability_base_value_max[12];
			if (wcscmp(fieldName, L"ability_base_value_max_14") == 0) return ability_base_value_max[13];
			if (wcscmp(fieldName, L"ability_base_value_max_15") == 0) return ability_base_value_max[14];
			if (wcscmp(fieldName, L"ability_base_value_max_16") == 0) return ability_base_value_max[15];
			if (wcscmp(fieldName, L"ability_base_value_max_17") == 0) return ability_base_value_max[16];
			if (wcscmp(fieldName, L"ability_base_value_max_18") == 0) return ability_base_value_max[17];
			if (wcscmp(fieldName, L"ability_base_value_max_19") == 0) return ability_base_value_max[18];
			if (wcscmp(fieldName, L"ability_base_value_max_20") == 0) return ability_base_value_max[19];
			if (wcscmp(fieldName, L"ability_base_value_max_21") == 0) return ability_base_value_max[20];
			if (wcscmp(fieldName, L"ability_base_value_max_22") == 0) return ability_base_value_max[21];
			if (wcscmp(fieldName, L"ability_base_value_max_23") == 0) return ability_base_value_max[22];
			if (wcscmp(fieldName, L"ability_base_value_max_24") == 0) return ability_base_value_max[23];
			if (wcscmp(fieldName, L"ability_base_value_max_25") == 0) return ability_base_value_max[24];
			if (wcscmp(fieldName, L"ability_base_value_max_26") == 0) return ability_base_value_max[25];
			if (wcscmp(fieldName, L"ability_base_value_max_27") == 0) return ability_base_value_max[26];
			if (wcscmp(fieldName, L"ability_base_value_max_28") == 0) return ability_base_value_max[27];
			if (wcscmp(fieldName, L"ability_base_value_max_29") == 0) return ability_base_value_max[28];
			if (wcscmp(fieldName, L"ability_base_value_max_30") == 0) return ability_base_value_max[29];
			if (wcscmp(fieldName, L"ability_base_value_max_31") == 0) return ability_base_value_max[30];
			if (wcscmp(fieldName, L"ability_base_value_max_32") == 0) return ability_base_value_max[31];
			if (wcscmp(fieldName, L"ability_base_value_max_33") == 0) return ability_base_value_max[32];
			if (wcscmp(fieldName, L"ability_base_value_max_34") == 0) return ability_base_value_max[33];
			if (wcscmp(fieldName, L"ability_base_value_max_35") == 0) return ability_base_value_max[34];
			if (wcscmp(fieldName, L"ability_base_value_max_36") == 0) return ability_base_value_max[35];
			if (wcscmp(fieldName, L"ability_base_value_max_37") == 0) return ability_base_value_max[36];
			if (wcscmp(fieldName, L"ability_base_value_max_38") == 0) return ability_base_value_max[37];
			if (wcscmp(fieldName, L"ability_base_value_max_39") == 0) return ability_base_value_max[38];
			if (wcscmp(fieldName, L"ability_base_value_max_40") == 0) return ability_base_value_max[39];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"inventory_size_x") == 0) return Data::AnyFieldToStringConverter::ToString(&inventory_size_x);
			if (wcscmp(fieldName, L"inventory_size_y") == 0) return Data::AnyFieldToStringConverter::ToString(&inventory_size_y);
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[3]));
			if (wcscmp(fieldName, L"ability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[4]));
			if (wcscmp(fieldName, L"ability_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[5]));
			if (wcscmp(fieldName, L"ability_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[6]));
			if (wcscmp(fieldName, L"ability_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[7]));
			if (wcscmp(fieldName, L"ability_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[8]));
			if (wcscmp(fieldName, L"ability_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[9]));
			if (wcscmp(fieldName, L"ability_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[10]));
			if (wcscmp(fieldName, L"ability_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[11]));
			if (wcscmp(fieldName, L"ability_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[12]));
			if (wcscmp(fieldName, L"ability_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[13]));
			if (wcscmp(fieldName, L"ability_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[14]));
			if (wcscmp(fieldName, L"ability_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[15]));
			if (wcscmp(fieldName, L"ability_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[16]));
			if (wcscmp(fieldName, L"ability_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[17]));
			if (wcscmp(fieldName, L"ability_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[18]));
			if (wcscmp(fieldName, L"ability_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[19]));
			if (wcscmp(fieldName, L"ability_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[20]));
			if (wcscmp(fieldName, L"ability_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[21]));
			if (wcscmp(fieldName, L"ability_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[22]));
			if (wcscmp(fieldName, L"ability_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[23]));
			if (wcscmp(fieldName, L"ability_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[24]));
			if (wcscmp(fieldName, L"ability_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[25]));
			if (wcscmp(fieldName, L"ability_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[26]));
			if (wcscmp(fieldName, L"ability_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[27]));
			if (wcscmp(fieldName, L"ability_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[28]));
			if (wcscmp(fieldName, L"ability_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[29]));
			if (wcscmp(fieldName, L"ability_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[30]));
			if (wcscmp(fieldName, L"ability_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[31]));
			if (wcscmp(fieldName, L"ability_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[32]));
			if (wcscmp(fieldName, L"ability_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[33]));
			if (wcscmp(fieldName, L"ability_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[34]));
			if (wcscmp(fieldName, L"ability_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[35]));
			if (wcscmp(fieldName, L"ability_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[36]));
			if (wcscmp(fieldName, L"ability_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[37]));
			if (wcscmp(fieldName, L"ability_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[38]));
			if (wcscmp(fieldName, L"ability_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[39]));
			if (wcscmp(fieldName, L"ability_value_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[0]));
			if (wcscmp(fieldName, L"ability_value_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[1]));
			if (wcscmp(fieldName, L"ability_value_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[2]));
			if (wcscmp(fieldName, L"ability_value_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[3]));
			if (wcscmp(fieldName, L"ability_value_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[4]));
			if (wcscmp(fieldName, L"ability_value_max_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[5]));
			if (wcscmp(fieldName, L"ability_value_max_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[6]));
			if (wcscmp(fieldName, L"ability_value_max_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[7]));
			if (wcscmp(fieldName, L"ability_value_max_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[8]));
			if (wcscmp(fieldName, L"ability_value_max_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[9]));
			if (wcscmp(fieldName, L"ability_value_max_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[10]));
			if (wcscmp(fieldName, L"ability_value_max_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[11]));
			if (wcscmp(fieldName, L"ability_value_max_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[12]));
			if (wcscmp(fieldName, L"ability_value_max_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[13]));
			if (wcscmp(fieldName, L"ability_value_max_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[14]));
			if (wcscmp(fieldName, L"ability_value_max_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[15]));
			if (wcscmp(fieldName, L"ability_value_max_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[16]));
			if (wcscmp(fieldName, L"ability_value_max_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[17]));
			if (wcscmp(fieldName, L"ability_value_max_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[18]));
			if (wcscmp(fieldName, L"ability_value_max_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[19]));
			if (wcscmp(fieldName, L"ability_value_max_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[20]));
			if (wcscmp(fieldName, L"ability_value_max_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[21]));
			if (wcscmp(fieldName, L"ability_value_max_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[22]));
			if (wcscmp(fieldName, L"ability_value_max_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[23]));
			if (wcscmp(fieldName, L"ability_value_max_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[24]));
			if (wcscmp(fieldName, L"ability_value_max_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[25]));
			if (wcscmp(fieldName, L"ability_value_max_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[26]));
			if (wcscmp(fieldName, L"ability_value_max_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[27]));
			if (wcscmp(fieldName, L"ability_value_max_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[28]));
			if (wcscmp(fieldName, L"ability_value_max_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[29]));
			if (wcscmp(fieldName, L"ability_value_max_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[30]));
			if (wcscmp(fieldName, L"ability_value_max_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[31]));
			if (wcscmp(fieldName, L"ability_value_max_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[32]));
			if (wcscmp(fieldName, L"ability_value_max_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[33]));
			if (wcscmp(fieldName, L"ability_value_max_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[34]));
			if (wcscmp(fieldName, L"ability_value_max_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[35]));
			if (wcscmp(fieldName, L"ability_value_max_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[36]));
			if (wcscmp(fieldName, L"ability_value_max_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[37]));
			if (wcscmp(fieldName, L"ability_value_max_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[38]));
			if (wcscmp(fieldName, L"ability_value_max_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_max[39]));
			if (wcscmp(fieldName, L"ability_base_value_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[0]));
			if (wcscmp(fieldName, L"ability_base_value_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[1]));
			if (wcscmp(fieldName, L"ability_base_value_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[2]));
			if (wcscmp(fieldName, L"ability_base_value_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[3]));
			if (wcscmp(fieldName, L"ability_base_value_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[4]));
			if (wcscmp(fieldName, L"ability_base_value_max_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[5]));
			if (wcscmp(fieldName, L"ability_base_value_max_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[6]));
			if (wcscmp(fieldName, L"ability_base_value_max_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[7]));
			if (wcscmp(fieldName, L"ability_base_value_max_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[8]));
			if (wcscmp(fieldName, L"ability_base_value_max_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[9]));
			if (wcscmp(fieldName, L"ability_base_value_max_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[10]));
			if (wcscmp(fieldName, L"ability_base_value_max_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[11]));
			if (wcscmp(fieldName, L"ability_base_value_max_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[12]));
			if (wcscmp(fieldName, L"ability_base_value_max_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[13]));
			if (wcscmp(fieldName, L"ability_base_value_max_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[14]));
			if (wcscmp(fieldName, L"ability_base_value_max_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[15]));
			if (wcscmp(fieldName, L"ability_base_value_max_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[16]));
			if (wcscmp(fieldName, L"ability_base_value_max_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[17]));
			if (wcscmp(fieldName, L"ability_base_value_max_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[18]));
			if (wcscmp(fieldName, L"ability_base_value_max_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[19]));
			if (wcscmp(fieldName, L"ability_base_value_max_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[20]));
			if (wcscmp(fieldName, L"ability_base_value_max_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[21]));
			if (wcscmp(fieldName, L"ability_base_value_max_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[22]));
			if (wcscmp(fieldName, L"ability_base_value_max_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[23]));
			if (wcscmp(fieldName, L"ability_base_value_max_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[24]));
			if (wcscmp(fieldName, L"ability_base_value_max_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[25]));
			if (wcscmp(fieldName, L"ability_base_value_max_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[26]));
			if (wcscmp(fieldName, L"ability_base_value_max_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[27]));
			if (wcscmp(fieldName, L"ability_base_value_max_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[28]));
			if (wcscmp(fieldName, L"ability_base_value_max_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[29]));
			if (wcscmp(fieldName, L"ability_base_value_max_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[30]));
			if (wcscmp(fieldName, L"ability_base_value_max_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[31]));
			if (wcscmp(fieldName, L"ability_base_value_max_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[32]));
			if (wcscmp(fieldName, L"ability_base_value_max_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[33]));
			if (wcscmp(fieldName, L"ability_base_value_max_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[34]));
			if (wcscmp(fieldName, L"ability_base_value_max_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[35]));
			if (wcscmp(fieldName, L"ability_base_value_max_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[36]));
			if (wcscmp(fieldName, L"ability_base_value_max_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[37]));
			if (wcscmp(fieldName, L"ability_base_value_max_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[38]));
			if (wcscmp(fieldName, L"ability_base_value_max_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value_max[39]));

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
__int8 inventory_size_x;
__int8 inventory_size_y;
__int8 ability[40];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
char Pad0[2];
__int32 ability_value_max[40];
__int32 ability_base_value_max[40];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 312; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_system_RecordPtr // : DrRecordPtr
	{
		relic_system_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_system_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}