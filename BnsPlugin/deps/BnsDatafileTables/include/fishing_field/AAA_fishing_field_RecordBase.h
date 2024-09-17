/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fishing_field_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"grade_ss_fish") == 0) return grade_ss_fish;
			if (wcscmp(fieldName, L"grade_ss_fish_1") == 0) return grade_ss_fish[0];
			if (wcscmp(fieldName, L"grade_ss_fish_2") == 0) return grade_ss_fish[1];
			if (wcscmp(fieldName, L"grade_ss_fish_3") == 0) return grade_ss_fish[2];
			if (wcscmp(fieldName, L"grade_ss_fish_4") == 0) return grade_ss_fish[3];
			if (wcscmp(fieldName, L"grade_ss_fish_5") == 0) return grade_ss_fish[4];
			if (wcscmp(fieldName, L"grade_ss_fish_6") == 0) return grade_ss_fish[5];
			if (wcscmp(fieldName, L"grade_ss_fish_7") == 0) return grade_ss_fish[6];
			if (wcscmp(fieldName, L"grade_ss_fish_8") == 0) return grade_ss_fish[7];
			if (wcscmp(fieldName, L"grade_ss_fish_9") == 0) return grade_ss_fish[8];
			if (wcscmp(fieldName, L"grade_ss_fish_10") == 0) return grade_ss_fish[9];
			if (wcscmp(fieldName, L"grade_ss_fish_11") == 0) return grade_ss_fish[10];
			if (wcscmp(fieldName, L"grade_ss_fish_12") == 0) return grade_ss_fish[11];
			if (wcscmp(fieldName, L"grade_ss_fish_13") == 0) return grade_ss_fish[12];
			if (wcscmp(fieldName, L"grade_ss_fish_14") == 0) return grade_ss_fish[13];
			if (wcscmp(fieldName, L"grade_ss_fish_15") == 0) return grade_ss_fish[14];
			if (wcscmp(fieldName, L"grade_ss_fish_16") == 0) return grade_ss_fish[15];
			if (wcscmp(fieldName, L"grade_ss_fish_17") == 0) return grade_ss_fish[16];
			if (wcscmp(fieldName, L"grade_ss_fish_18") == 0) return grade_ss_fish[17];
			if (wcscmp(fieldName, L"grade_ss_fish_19") == 0) return grade_ss_fish[18];
			if (wcscmp(fieldName, L"grade_ss_fish_20") == 0) return grade_ss_fish[19];
			if (wcscmp(fieldName, L"grade_s_fish") == 0) return grade_s_fish;
			if (wcscmp(fieldName, L"grade_s_fish_1") == 0) return grade_s_fish[0];
			if (wcscmp(fieldName, L"grade_s_fish_2") == 0) return grade_s_fish[1];
			if (wcscmp(fieldName, L"grade_s_fish_3") == 0) return grade_s_fish[2];
			if (wcscmp(fieldName, L"grade_s_fish_4") == 0) return grade_s_fish[3];
			if (wcscmp(fieldName, L"grade_s_fish_5") == 0) return grade_s_fish[4];
			if (wcscmp(fieldName, L"grade_s_fish_6") == 0) return grade_s_fish[5];
			if (wcscmp(fieldName, L"grade_s_fish_7") == 0) return grade_s_fish[6];
			if (wcscmp(fieldName, L"grade_s_fish_8") == 0) return grade_s_fish[7];
			if (wcscmp(fieldName, L"grade_s_fish_9") == 0) return grade_s_fish[8];
			if (wcscmp(fieldName, L"grade_s_fish_10") == 0) return grade_s_fish[9];
			if (wcscmp(fieldName, L"grade_s_fish_11") == 0) return grade_s_fish[10];
			if (wcscmp(fieldName, L"grade_s_fish_12") == 0) return grade_s_fish[11];
			if (wcscmp(fieldName, L"grade_s_fish_13") == 0) return grade_s_fish[12];
			if (wcscmp(fieldName, L"grade_s_fish_14") == 0) return grade_s_fish[13];
			if (wcscmp(fieldName, L"grade_s_fish_15") == 0) return grade_s_fish[14];
			if (wcscmp(fieldName, L"grade_s_fish_16") == 0) return grade_s_fish[15];
			if (wcscmp(fieldName, L"grade_s_fish_17") == 0) return grade_s_fish[16];
			if (wcscmp(fieldName, L"grade_s_fish_18") == 0) return grade_s_fish[17];
			if (wcscmp(fieldName, L"grade_s_fish_19") == 0) return grade_s_fish[18];
			if (wcscmp(fieldName, L"grade_s_fish_20") == 0) return grade_s_fish[19];
			if (wcscmp(fieldName, L"grade_a_fish") == 0) return grade_a_fish;
			if (wcscmp(fieldName, L"grade_a_fish_1") == 0) return grade_a_fish[0];
			if (wcscmp(fieldName, L"grade_a_fish_2") == 0) return grade_a_fish[1];
			if (wcscmp(fieldName, L"grade_a_fish_3") == 0) return grade_a_fish[2];
			if (wcscmp(fieldName, L"grade_a_fish_4") == 0) return grade_a_fish[3];
			if (wcscmp(fieldName, L"grade_a_fish_5") == 0) return grade_a_fish[4];
			if (wcscmp(fieldName, L"grade_a_fish_6") == 0) return grade_a_fish[5];
			if (wcscmp(fieldName, L"grade_a_fish_7") == 0) return grade_a_fish[6];
			if (wcscmp(fieldName, L"grade_a_fish_8") == 0) return grade_a_fish[7];
			if (wcscmp(fieldName, L"grade_a_fish_9") == 0) return grade_a_fish[8];
			if (wcscmp(fieldName, L"grade_a_fish_10") == 0) return grade_a_fish[9];
			if (wcscmp(fieldName, L"grade_a_fish_11") == 0) return grade_a_fish[10];
			if (wcscmp(fieldName, L"grade_a_fish_12") == 0) return grade_a_fish[11];
			if (wcscmp(fieldName, L"grade_a_fish_13") == 0) return grade_a_fish[12];
			if (wcscmp(fieldName, L"grade_a_fish_14") == 0) return grade_a_fish[13];
			if (wcscmp(fieldName, L"grade_a_fish_15") == 0) return grade_a_fish[14];
			if (wcscmp(fieldName, L"grade_a_fish_16") == 0) return grade_a_fish[15];
			if (wcscmp(fieldName, L"grade_a_fish_17") == 0) return grade_a_fish[16];
			if (wcscmp(fieldName, L"grade_a_fish_18") == 0) return grade_a_fish[17];
			if (wcscmp(fieldName, L"grade_a_fish_19") == 0) return grade_a_fish[18];
			if (wcscmp(fieldName, L"grade_a_fish_20") == 0) return grade_a_fish[19];
			if (wcscmp(fieldName, L"grade_b_fish") == 0) return grade_b_fish;
			if (wcscmp(fieldName, L"grade_b_fish_1") == 0) return grade_b_fish[0];
			if (wcscmp(fieldName, L"grade_b_fish_2") == 0) return grade_b_fish[1];
			if (wcscmp(fieldName, L"grade_b_fish_3") == 0) return grade_b_fish[2];
			if (wcscmp(fieldName, L"grade_b_fish_4") == 0) return grade_b_fish[3];
			if (wcscmp(fieldName, L"grade_b_fish_5") == 0) return grade_b_fish[4];
			if (wcscmp(fieldName, L"grade_b_fish_6") == 0) return grade_b_fish[5];
			if (wcscmp(fieldName, L"grade_b_fish_7") == 0) return grade_b_fish[6];
			if (wcscmp(fieldName, L"grade_b_fish_8") == 0) return grade_b_fish[7];
			if (wcscmp(fieldName, L"grade_b_fish_9") == 0) return grade_b_fish[8];
			if (wcscmp(fieldName, L"grade_b_fish_10") == 0) return grade_b_fish[9];
			if (wcscmp(fieldName, L"grade_b_fish_11") == 0) return grade_b_fish[10];
			if (wcscmp(fieldName, L"grade_b_fish_12") == 0) return grade_b_fish[11];
			if (wcscmp(fieldName, L"grade_b_fish_13") == 0) return grade_b_fish[12];
			if (wcscmp(fieldName, L"grade_b_fish_14") == 0) return grade_b_fish[13];
			if (wcscmp(fieldName, L"grade_b_fish_15") == 0) return grade_b_fish[14];
			if (wcscmp(fieldName, L"grade_b_fish_16") == 0) return grade_b_fish[15];
			if (wcscmp(fieldName, L"grade_b_fish_17") == 0) return grade_b_fish[16];
			if (wcscmp(fieldName, L"grade_b_fish_18") == 0) return grade_b_fish[17];
			if (wcscmp(fieldName, L"grade_b_fish_19") == 0) return grade_b_fish[18];
			if (wcscmp(fieldName, L"grade_b_fish_20") == 0) return grade_b_fish[19];
			if (wcscmp(fieldName, L"grade_c_fish") == 0) return grade_c_fish;
			if (wcscmp(fieldName, L"grade_c_fish_1") == 0) return grade_c_fish[0];
			if (wcscmp(fieldName, L"grade_c_fish_2") == 0) return grade_c_fish[1];
			if (wcscmp(fieldName, L"grade_c_fish_3") == 0) return grade_c_fish[2];
			if (wcscmp(fieldName, L"grade_c_fish_4") == 0) return grade_c_fish[3];
			if (wcscmp(fieldName, L"grade_c_fish_5") == 0) return grade_c_fish[4];
			if (wcscmp(fieldName, L"grade_c_fish_6") == 0) return grade_c_fish[5];
			if (wcscmp(fieldName, L"grade_c_fish_7") == 0) return grade_c_fish[6];
			if (wcscmp(fieldName, L"grade_c_fish_8") == 0) return grade_c_fish[7];
			if (wcscmp(fieldName, L"grade_c_fish_9") == 0) return grade_c_fish[8];
			if (wcscmp(fieldName, L"grade_c_fish_10") == 0) return grade_c_fish[9];
			if (wcscmp(fieldName, L"grade_c_fish_11") == 0) return grade_c_fish[10];
			if (wcscmp(fieldName, L"grade_c_fish_12") == 0) return grade_c_fish[11];
			if (wcscmp(fieldName, L"grade_c_fish_13") == 0) return grade_c_fish[12];
			if (wcscmp(fieldName, L"grade_c_fish_14") == 0) return grade_c_fish[13];
			if (wcscmp(fieldName, L"grade_c_fish_15") == 0) return grade_c_fish[14];
			if (wcscmp(fieldName, L"grade_c_fish_16") == 0) return grade_c_fish[15];
			if (wcscmp(fieldName, L"grade_c_fish_17") == 0) return grade_c_fish[16];
			if (wcscmp(fieldName, L"grade_c_fish_18") == 0) return grade_c_fish[17];
			if (wcscmp(fieldName, L"grade_c_fish_19") == 0) return grade_c_fish[18];
			if (wcscmp(fieldName, L"grade_c_fish_20") == 0) return grade_c_fish[19];
			if (wcscmp(fieldName, L"bonus_time") == 0) return bonus_time;
			if (wcscmp(fieldName, L"fishing_field_group") == 0) return fishing_field_group;
			if (wcscmp(fieldName, L"bonus_time_effect") == 0) return bonus_time_effect;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"grade_ss_fish_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[0]));
			if (wcscmp(fieldName, L"grade_ss_fish_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[1]));
			if (wcscmp(fieldName, L"grade_ss_fish_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[2]));
			if (wcscmp(fieldName, L"grade_ss_fish_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[3]));
			if (wcscmp(fieldName, L"grade_ss_fish_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[4]));
			if (wcscmp(fieldName, L"grade_ss_fish_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[5]));
			if (wcscmp(fieldName, L"grade_ss_fish_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[6]));
			if (wcscmp(fieldName, L"grade_ss_fish_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[7]));
			if (wcscmp(fieldName, L"grade_ss_fish_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[8]));
			if (wcscmp(fieldName, L"grade_ss_fish_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[9]));
			if (wcscmp(fieldName, L"grade_ss_fish_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[10]));
			if (wcscmp(fieldName, L"grade_ss_fish_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[11]));
			if (wcscmp(fieldName, L"grade_ss_fish_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[12]));
			if (wcscmp(fieldName, L"grade_ss_fish_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[13]));
			if (wcscmp(fieldName, L"grade_ss_fish_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[14]));
			if (wcscmp(fieldName, L"grade_ss_fish_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[15]));
			if (wcscmp(fieldName, L"grade_ss_fish_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[16]));
			if (wcscmp(fieldName, L"grade_ss_fish_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[17]));
			if (wcscmp(fieldName, L"grade_ss_fish_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[18]));
			if (wcscmp(fieldName, L"grade_ss_fish_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_ss_fish[19]));
			if (wcscmp(fieldName, L"grade_s_fish_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[0]));
			if (wcscmp(fieldName, L"grade_s_fish_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[1]));
			if (wcscmp(fieldName, L"grade_s_fish_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[2]));
			if (wcscmp(fieldName, L"grade_s_fish_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[3]));
			if (wcscmp(fieldName, L"grade_s_fish_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[4]));
			if (wcscmp(fieldName, L"grade_s_fish_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[5]));
			if (wcscmp(fieldName, L"grade_s_fish_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[6]));
			if (wcscmp(fieldName, L"grade_s_fish_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[7]));
			if (wcscmp(fieldName, L"grade_s_fish_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[8]));
			if (wcscmp(fieldName, L"grade_s_fish_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[9]));
			if (wcscmp(fieldName, L"grade_s_fish_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[10]));
			if (wcscmp(fieldName, L"grade_s_fish_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[11]));
			if (wcscmp(fieldName, L"grade_s_fish_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[12]));
			if (wcscmp(fieldName, L"grade_s_fish_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[13]));
			if (wcscmp(fieldName, L"grade_s_fish_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[14]));
			if (wcscmp(fieldName, L"grade_s_fish_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[15]));
			if (wcscmp(fieldName, L"grade_s_fish_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[16]));
			if (wcscmp(fieldName, L"grade_s_fish_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[17]));
			if (wcscmp(fieldName, L"grade_s_fish_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[18]));
			if (wcscmp(fieldName, L"grade_s_fish_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_s_fish[19]));
			if (wcscmp(fieldName, L"grade_a_fish_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[0]));
			if (wcscmp(fieldName, L"grade_a_fish_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[1]));
			if (wcscmp(fieldName, L"grade_a_fish_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[2]));
			if (wcscmp(fieldName, L"grade_a_fish_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[3]));
			if (wcscmp(fieldName, L"grade_a_fish_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[4]));
			if (wcscmp(fieldName, L"grade_a_fish_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[5]));
			if (wcscmp(fieldName, L"grade_a_fish_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[6]));
			if (wcscmp(fieldName, L"grade_a_fish_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[7]));
			if (wcscmp(fieldName, L"grade_a_fish_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[8]));
			if (wcscmp(fieldName, L"grade_a_fish_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[9]));
			if (wcscmp(fieldName, L"grade_a_fish_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[10]));
			if (wcscmp(fieldName, L"grade_a_fish_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[11]));
			if (wcscmp(fieldName, L"grade_a_fish_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[12]));
			if (wcscmp(fieldName, L"grade_a_fish_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[13]));
			if (wcscmp(fieldName, L"grade_a_fish_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[14]));
			if (wcscmp(fieldName, L"grade_a_fish_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[15]));
			if (wcscmp(fieldName, L"grade_a_fish_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[16]));
			if (wcscmp(fieldName, L"grade_a_fish_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[17]));
			if (wcscmp(fieldName, L"grade_a_fish_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[18]));
			if (wcscmp(fieldName, L"grade_a_fish_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_a_fish[19]));
			if (wcscmp(fieldName, L"grade_b_fish_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[0]));
			if (wcscmp(fieldName, L"grade_b_fish_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[1]));
			if (wcscmp(fieldName, L"grade_b_fish_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[2]));
			if (wcscmp(fieldName, L"grade_b_fish_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[3]));
			if (wcscmp(fieldName, L"grade_b_fish_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[4]));
			if (wcscmp(fieldName, L"grade_b_fish_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[5]));
			if (wcscmp(fieldName, L"grade_b_fish_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[6]));
			if (wcscmp(fieldName, L"grade_b_fish_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[7]));
			if (wcscmp(fieldName, L"grade_b_fish_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[8]));
			if (wcscmp(fieldName, L"grade_b_fish_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[9]));
			if (wcscmp(fieldName, L"grade_b_fish_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[10]));
			if (wcscmp(fieldName, L"grade_b_fish_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[11]));
			if (wcscmp(fieldName, L"grade_b_fish_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[12]));
			if (wcscmp(fieldName, L"grade_b_fish_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[13]));
			if (wcscmp(fieldName, L"grade_b_fish_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[14]));
			if (wcscmp(fieldName, L"grade_b_fish_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[15]));
			if (wcscmp(fieldName, L"grade_b_fish_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[16]));
			if (wcscmp(fieldName, L"grade_b_fish_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[17]));
			if (wcscmp(fieldName, L"grade_b_fish_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[18]));
			if (wcscmp(fieldName, L"grade_b_fish_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_b_fish[19]));
			if (wcscmp(fieldName, L"grade_c_fish_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[0]));
			if (wcscmp(fieldName, L"grade_c_fish_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[1]));
			if (wcscmp(fieldName, L"grade_c_fish_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[2]));
			if (wcscmp(fieldName, L"grade_c_fish_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[3]));
			if (wcscmp(fieldName, L"grade_c_fish_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[4]));
			if (wcscmp(fieldName, L"grade_c_fish_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[5]));
			if (wcscmp(fieldName, L"grade_c_fish_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[6]));
			if (wcscmp(fieldName, L"grade_c_fish_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[7]));
			if (wcscmp(fieldName, L"grade_c_fish_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[8]));
			if (wcscmp(fieldName, L"grade_c_fish_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[9]));
			if (wcscmp(fieldName, L"grade_c_fish_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[10]));
			if (wcscmp(fieldName, L"grade_c_fish_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[11]));
			if (wcscmp(fieldName, L"grade_c_fish_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[12]));
			if (wcscmp(fieldName, L"grade_c_fish_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[13]));
			if (wcscmp(fieldName, L"grade_c_fish_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[14]));
			if (wcscmp(fieldName, L"grade_c_fish_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[15]));
			if (wcscmp(fieldName, L"grade_c_fish_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[16]));
			if (wcscmp(fieldName, L"grade_c_fish_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[17]));
			if (wcscmp(fieldName, L"grade_c_fish_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[18]));
			if (wcscmp(fieldName, L"grade_c_fish_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(grade_c_fish[19]));
			if (wcscmp(fieldName, L"bonus_time") == 0) return Data::AnyFieldToStringConverter::ToString(&bonus_time);
			if (wcscmp(fieldName, L"fishing_field_group") == 0) return Data::AnyFieldToStringConverter::ToString(&fishing_field_group);
			if (wcscmp(fieldName, L"bonus_time_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&bonus_time_effect);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(bonus_time_effect) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) bonus_time_effect = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(bonus_time_effect));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef grade_ss_fish[20];
int grade_ss_fish_tableId(){return 142;};
Data::TableRef grade_s_fish[20];
int grade_s_fish_tableId(){return 142;};
Data::TableRef grade_a_fish[20];
int grade_a_fish_tableId(){return 142;};
Data::TableRef grade_b_fish[20];
int grade_b_fish_tableId(){return 142;};
Data::TableRef grade_c_fish[20];
int grade_c_fish_tableId(){return 142;};
Data::TableRef bonus_time;
int bonus_time_tableId(){return 431;};
Data::TableRef fishing_field_group;
int fishing_field_group_tableId(){return 145;};
wchar_t* bonus_time_effect;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 144; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_field_RecordPtr // : DrRecordPtr
	{
		fishing_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}