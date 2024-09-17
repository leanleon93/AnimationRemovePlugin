/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ability_list_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
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
			if (wcscmp(fieldName, L"ability_weight") == 0) return ability_weight;
			if (wcscmp(fieldName, L"ability_weight_1") == 0) return ability_weight[0];
			if (wcscmp(fieldName, L"ability_weight_2") == 0) return ability_weight[1];
			if (wcscmp(fieldName, L"ability_weight_3") == 0) return ability_weight[2];
			if (wcscmp(fieldName, L"ability_weight_4") == 0) return ability_weight[3];
			if (wcscmp(fieldName, L"ability_weight_5") == 0) return ability_weight[4];
			if (wcscmp(fieldName, L"ability_weight_6") == 0) return ability_weight[5];
			if (wcscmp(fieldName, L"ability_weight_7") == 0) return ability_weight[6];
			if (wcscmp(fieldName, L"ability_weight_8") == 0) return ability_weight[7];
			if (wcscmp(fieldName, L"ability_weight_9") == 0) return ability_weight[8];
			if (wcscmp(fieldName, L"ability_weight_10") == 0) return ability_weight[9];
			if (wcscmp(fieldName, L"ability_weight_11") == 0) return ability_weight[10];
			if (wcscmp(fieldName, L"ability_weight_12") == 0) return ability_weight[11];
			if (wcscmp(fieldName, L"ability_weight_13") == 0) return ability_weight[12];
			if (wcscmp(fieldName, L"ability_weight_14") == 0) return ability_weight[13];
			if (wcscmp(fieldName, L"ability_weight_15") == 0) return ability_weight[14];
			if (wcscmp(fieldName, L"ability_weight_16") == 0) return ability_weight[15];
			if (wcscmp(fieldName, L"ability_weight_17") == 0) return ability_weight[16];
			if (wcscmp(fieldName, L"ability_weight_18") == 0) return ability_weight[17];
			if (wcscmp(fieldName, L"ability_weight_19") == 0) return ability_weight[18];
			if (wcscmp(fieldName, L"ability_weight_20") == 0) return ability_weight[19];
			if (wcscmp(fieldName, L"ability_total_weight") == 0) return ability_total_weight;
			if (wcscmp(fieldName, L"ability_total_count") == 0) return ability_total_count;
			if (wcscmp(fieldName, L"ability_value_min") == 0) return ability_value_min;
			if (wcscmp(fieldName, L"ability_value_min_1") == 0) return ability_value_min[0];
			if (wcscmp(fieldName, L"ability_value_min_2") == 0) return ability_value_min[1];
			if (wcscmp(fieldName, L"ability_value_min_3") == 0) return ability_value_min[2];
			if (wcscmp(fieldName, L"ability_value_min_4") == 0) return ability_value_min[3];
			if (wcscmp(fieldName, L"ability_value_min_5") == 0) return ability_value_min[4];
			if (wcscmp(fieldName, L"ability_value_min_6") == 0) return ability_value_min[5];
			if (wcscmp(fieldName, L"ability_value_min_7") == 0) return ability_value_min[6];
			if (wcscmp(fieldName, L"ability_value_min_8") == 0) return ability_value_min[7];
			if (wcscmp(fieldName, L"ability_value_min_9") == 0) return ability_value_min[8];
			if (wcscmp(fieldName, L"ability_value_min_10") == 0) return ability_value_min[9];
			if (wcscmp(fieldName, L"ability_value_min_11") == 0) return ability_value_min[10];
			if (wcscmp(fieldName, L"ability_value_min_12") == 0) return ability_value_min[11];
			if (wcscmp(fieldName, L"ability_value_min_13") == 0) return ability_value_min[12];
			if (wcscmp(fieldName, L"ability_value_min_14") == 0) return ability_value_min[13];
			if (wcscmp(fieldName, L"ability_value_min_15") == 0) return ability_value_min[14];
			if (wcscmp(fieldName, L"ability_value_min_16") == 0) return ability_value_min[15];
			if (wcscmp(fieldName, L"ability_value_min_17") == 0) return ability_value_min[16];
			if (wcscmp(fieldName, L"ability_value_min_18") == 0) return ability_value_min[17];
			if (wcscmp(fieldName, L"ability_value_min_19") == 0) return ability_value_min[18];
			if (wcscmp(fieldName, L"ability_value_min_20") == 0) return ability_value_min[19];
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
			if (wcscmp(fieldName, L"ability_value_distribution") == 0) return ability_value_distribution;
			if (wcscmp(fieldName, L"ability_value_distribution_1") == 0) return ability_value_distribution[0];
			if (wcscmp(fieldName, L"ability_value_distribution_2") == 0) return ability_value_distribution[1];
			if (wcscmp(fieldName, L"ability_value_distribution_3") == 0) return ability_value_distribution[2];
			if (wcscmp(fieldName, L"ability_value_distribution_4") == 0) return ability_value_distribution[3];
			if (wcscmp(fieldName, L"ability_value_distribution_5") == 0) return ability_value_distribution[4];
			if (wcscmp(fieldName, L"ability_value_distribution_6") == 0) return ability_value_distribution[5];
			if (wcscmp(fieldName, L"ability_value_distribution_7") == 0) return ability_value_distribution[6];
			if (wcscmp(fieldName, L"ability_value_distribution_8") == 0) return ability_value_distribution[7];
			if (wcscmp(fieldName, L"ability_value_distribution_9") == 0) return ability_value_distribution[8];
			if (wcscmp(fieldName, L"ability_value_distribution_10") == 0) return ability_value_distribution[9];
			if (wcscmp(fieldName, L"ability_value_distribution_11") == 0) return ability_value_distribution[10];
			if (wcscmp(fieldName, L"ability_value_distribution_12") == 0) return ability_value_distribution[11];
			if (wcscmp(fieldName, L"ability_value_distribution_13") == 0) return ability_value_distribution[12];
			if (wcscmp(fieldName, L"ability_value_distribution_14") == 0) return ability_value_distribution[13];
			if (wcscmp(fieldName, L"ability_value_distribution_15") == 0) return ability_value_distribution[14];
			if (wcscmp(fieldName, L"ability_value_distribution_16") == 0) return ability_value_distribution[15];
			if (wcscmp(fieldName, L"ability_value_distribution_17") == 0) return ability_value_distribution[16];
			if (wcscmp(fieldName, L"ability_value_distribution_18") == 0) return ability_value_distribution[17];
			if (wcscmp(fieldName, L"ability_value_distribution_19") == 0) return ability_value_distribution[18];
			if (wcscmp(fieldName, L"ability_value_distribution_20") == 0) return ability_value_distribution[19];
			if (wcscmp(fieldName, L"draw_enable") == 0) return draw_enable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
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
			if (wcscmp(fieldName, L"ability_weight_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[0]));
			if (wcscmp(fieldName, L"ability_weight_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[1]));
			if (wcscmp(fieldName, L"ability_weight_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[2]));
			if (wcscmp(fieldName, L"ability_weight_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[3]));
			if (wcscmp(fieldName, L"ability_weight_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[4]));
			if (wcscmp(fieldName, L"ability_weight_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[5]));
			if (wcscmp(fieldName, L"ability_weight_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[6]));
			if (wcscmp(fieldName, L"ability_weight_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[7]));
			if (wcscmp(fieldName, L"ability_weight_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[8]));
			if (wcscmp(fieldName, L"ability_weight_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[9]));
			if (wcscmp(fieldName, L"ability_weight_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[10]));
			if (wcscmp(fieldName, L"ability_weight_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[11]));
			if (wcscmp(fieldName, L"ability_weight_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[12]));
			if (wcscmp(fieldName, L"ability_weight_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[13]));
			if (wcscmp(fieldName, L"ability_weight_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[14]));
			if (wcscmp(fieldName, L"ability_weight_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[15]));
			if (wcscmp(fieldName, L"ability_weight_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[16]));
			if (wcscmp(fieldName, L"ability_weight_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[17]));
			if (wcscmp(fieldName, L"ability_weight_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[18]));
			if (wcscmp(fieldName, L"ability_weight_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_weight[19]));
			if (wcscmp(fieldName, L"ability_total_weight") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_total_weight);
			if (wcscmp(fieldName, L"ability_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_total_count);
			if (wcscmp(fieldName, L"ability_value_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[0]));
			if (wcscmp(fieldName, L"ability_value_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[1]));
			if (wcscmp(fieldName, L"ability_value_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[2]));
			if (wcscmp(fieldName, L"ability_value_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[3]));
			if (wcscmp(fieldName, L"ability_value_min_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[4]));
			if (wcscmp(fieldName, L"ability_value_min_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[5]));
			if (wcscmp(fieldName, L"ability_value_min_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[6]));
			if (wcscmp(fieldName, L"ability_value_min_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[7]));
			if (wcscmp(fieldName, L"ability_value_min_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[8]));
			if (wcscmp(fieldName, L"ability_value_min_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[9]));
			if (wcscmp(fieldName, L"ability_value_min_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[10]));
			if (wcscmp(fieldName, L"ability_value_min_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[11]));
			if (wcscmp(fieldName, L"ability_value_min_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[12]));
			if (wcscmp(fieldName, L"ability_value_min_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[13]));
			if (wcscmp(fieldName, L"ability_value_min_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[14]));
			if (wcscmp(fieldName, L"ability_value_min_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[15]));
			if (wcscmp(fieldName, L"ability_value_min_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[16]));
			if (wcscmp(fieldName, L"ability_value_min_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[17]));
			if (wcscmp(fieldName, L"ability_value_min_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[18]));
			if (wcscmp(fieldName, L"ability_value_min_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_min[19]));
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
			if (wcscmp(fieldName, L"ability_value_distribution_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[0]));
			if (wcscmp(fieldName, L"ability_value_distribution_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[1]));
			if (wcscmp(fieldName, L"ability_value_distribution_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[2]));
			if (wcscmp(fieldName, L"ability_value_distribution_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[3]));
			if (wcscmp(fieldName, L"ability_value_distribution_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[4]));
			if (wcscmp(fieldName, L"ability_value_distribution_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[5]));
			if (wcscmp(fieldName, L"ability_value_distribution_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[6]));
			if (wcscmp(fieldName, L"ability_value_distribution_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[7]));
			if (wcscmp(fieldName, L"ability_value_distribution_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[8]));
			if (wcscmp(fieldName, L"ability_value_distribution_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[9]));
			if (wcscmp(fieldName, L"ability_value_distribution_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[10]));
			if (wcscmp(fieldName, L"ability_value_distribution_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[11]));
			if (wcscmp(fieldName, L"ability_value_distribution_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[12]));
			if (wcscmp(fieldName, L"ability_value_distribution_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[13]));
			if (wcscmp(fieldName, L"ability_value_distribution_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[14]));
			if (wcscmp(fieldName, L"ability_value_distribution_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[15]));
			if (wcscmp(fieldName, L"ability_value_distribution_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[16]));
			if (wcscmp(fieldName, L"ability_value_distribution_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[17]));
			if (wcscmp(fieldName, L"ability_value_distribution_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[18]));
			if (wcscmp(fieldName, L"ability_value_distribution_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value_distribution[19]));
			if (wcscmp(fieldName, L"draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_enable);

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
__int8 ability[20];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
__int16 ability_weight[20];
__int32 ability_total_weight;
__int8 ability_total_count;
char Pad0[1];
__int16 ability_value_min[20];
__int16 ability_value_max[20];
char Pad1[2];
Data::TableRef ability_value_distribution[20];
int ability_value_distribution_tableId(){return 291;};
bool draw_enable;

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 1; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ability_list_RecordPtr // : DrRecordPtr
	{
		ability_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ability_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}