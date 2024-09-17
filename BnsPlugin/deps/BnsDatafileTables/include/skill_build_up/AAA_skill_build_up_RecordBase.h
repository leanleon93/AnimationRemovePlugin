/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_build_up_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"max_level") == 0) return max_level;
			if (wcscmp(fieldName, L"required_build_up_point") == 0) return required_build_up_point;
			if (wcscmp(fieldName, L"required_build_up_point_1") == 0) return required_build_up_point[0];
			if (wcscmp(fieldName, L"required_build_up_point_2") == 0) return required_build_up_point[1];
			if (wcscmp(fieldName, L"required_build_up_point_3") == 0) return required_build_up_point[2];
			if (wcscmp(fieldName, L"required_build_up_point_4") == 0) return required_build_up_point[3];
			if (wcscmp(fieldName, L"required_build_up_point_5") == 0) return required_build_up_point[4];
			if (wcscmp(fieldName, L"required_build_up_point_6") == 0) return required_build_up_point[5];
			if (wcscmp(fieldName, L"required_build_up_point_7") == 0) return required_build_up_point[6];
			if (wcscmp(fieldName, L"required_build_up_point_8") == 0) return required_build_up_point[7];
			if (wcscmp(fieldName, L"required_build_up_point_9") == 0) return required_build_up_point[8];
			if (wcscmp(fieldName, L"required_build_up_point_10") == 0) return required_build_up_point[9];
			if (wcscmp(fieldName, L"required_build_up_point_11") == 0) return required_build_up_point[10];
			if (wcscmp(fieldName, L"required_build_up_point_12") == 0) return required_build_up_point[11];
			if (wcscmp(fieldName, L"required_build_up_point_13") == 0) return required_build_up_point[12];
			if (wcscmp(fieldName, L"required_build_up_point_14") == 0) return required_build_up_point[13];
			if (wcscmp(fieldName, L"required_build_up_point_15") == 0) return required_build_up_point[14];
			if (wcscmp(fieldName, L"required_build_up_point_16") == 0) return required_build_up_point[15];
			if (wcscmp(fieldName, L"required_build_up_point_17") == 0) return required_build_up_point[16];
			if (wcscmp(fieldName, L"required_build_up_point_18") == 0) return required_build_up_point[17];
			if (wcscmp(fieldName, L"required_build_up_point_19") == 0) return required_build_up_point[18];
			if (wcscmp(fieldName, L"required_build_up_point_20") == 0) return required_build_up_point[19];
			if (wcscmp(fieldName, L"required_build_up_point_21") == 0) return required_build_up_point[20];
			if (wcscmp(fieldName, L"required_build_up_point_22") == 0) return required_build_up_point[21];
			if (wcscmp(fieldName, L"required_build_up_point_23") == 0) return required_build_up_point[22];
			if (wcscmp(fieldName, L"required_build_up_point_24") == 0) return required_build_up_point[23];
			if (wcscmp(fieldName, L"required_build_up_point_25") == 0) return required_build_up_point[24];
			if (wcscmp(fieldName, L"required_build_up_point_26") == 0) return required_build_up_point[25];
			if (wcscmp(fieldName, L"required_build_up_point_27") == 0) return required_build_up_point[26];
			if (wcscmp(fieldName, L"required_build_up_point_28") == 0) return required_build_up_point[27];
			if (wcscmp(fieldName, L"required_build_up_point_29") == 0) return required_build_up_point[28];
			if (wcscmp(fieldName, L"required_build_up_point_30") == 0) return required_build_up_point[29];
			if (wcscmp(fieldName, L"required_build_up_point_level") == 0) return required_build_up_point_level;
			if (wcscmp(fieldName, L"required_build_up_point_level_1") == 0) return required_build_up_point_level[0];
			if (wcscmp(fieldName, L"required_build_up_point_level_2") == 0) return required_build_up_point_level[1];
			if (wcscmp(fieldName, L"required_build_up_point_level_3") == 0) return required_build_up_point_level[2];
			if (wcscmp(fieldName, L"required_build_up_point_level_4") == 0) return required_build_up_point_level[3];
			if (wcscmp(fieldName, L"required_build_up_point_level_5") == 0) return required_build_up_point_level[4];
			if (wcscmp(fieldName, L"required_build_up_point_level_6") == 0) return required_build_up_point_level[5];
			if (wcscmp(fieldName, L"required_build_up_point_level_7") == 0) return required_build_up_point_level[6];
			if (wcscmp(fieldName, L"required_build_up_point_level_8") == 0) return required_build_up_point_level[7];
			if (wcscmp(fieldName, L"required_build_up_point_level_9") == 0) return required_build_up_point_level[8];
			if (wcscmp(fieldName, L"required_build_up_point_level_10") == 0) return required_build_up_point_level[9];
			if (wcscmp(fieldName, L"required_build_up_point_level_11") == 0) return required_build_up_point_level[10];
			if (wcscmp(fieldName, L"required_build_up_point_level_12") == 0) return required_build_up_point_level[11];
			if (wcscmp(fieldName, L"required_build_up_point_level_13") == 0) return required_build_up_point_level[12];
			if (wcscmp(fieldName, L"required_build_up_point_level_14") == 0) return required_build_up_point_level[13];
			if (wcscmp(fieldName, L"required_build_up_point_level_15") == 0) return required_build_up_point_level[14];
			if (wcscmp(fieldName, L"required_build_up_point_level_16") == 0) return required_build_up_point_level[15];
			if (wcscmp(fieldName, L"required_build_up_point_level_17") == 0) return required_build_up_point_level[16];
			if (wcscmp(fieldName, L"required_build_up_point_level_18") == 0) return required_build_up_point_level[17];
			if (wcscmp(fieldName, L"required_build_up_point_level_19") == 0) return required_build_up_point_level[18];
			if (wcscmp(fieldName, L"required_build_up_point_level_20") == 0) return required_build_up_point_level[19];
			if (wcscmp(fieldName, L"required_build_up_point_level_21") == 0) return required_build_up_point_level[20];
			if (wcscmp(fieldName, L"required_build_up_point_level_22") == 0) return required_build_up_point_level[21];
			if (wcscmp(fieldName, L"required_build_up_point_level_23") == 0) return required_build_up_point_level[22];
			if (wcscmp(fieldName, L"required_build_up_point_level_24") == 0) return required_build_up_point_level[23];
			if (wcscmp(fieldName, L"required_build_up_point_level_25") == 0) return required_build_up_point_level[24];
			if (wcscmp(fieldName, L"required_build_up_point_level_26") == 0) return required_build_up_point_level[25];
			if (wcscmp(fieldName, L"required_build_up_point_level_27") == 0) return required_build_up_point_level[26];
			if (wcscmp(fieldName, L"required_build_up_point_level_28") == 0) return required_build_up_point_level[27];
			if (wcscmp(fieldName, L"required_build_up_point_level_29") == 0) return required_build_up_point_level[28];
			if (wcscmp(fieldName, L"required_build_up_point_level_30") == 0) return required_build_up_point_level[29];
			if (wcscmp(fieldName, L"skill_modify_info") == 0) return skill_modify_info;
			if (wcscmp(fieldName, L"skill_modify_info_1") == 0) return skill_modify_info[0];
			if (wcscmp(fieldName, L"skill_modify_info_2") == 0) return skill_modify_info[1];
			if (wcscmp(fieldName, L"skill_modify_info_3") == 0) return skill_modify_info[2];
			if (wcscmp(fieldName, L"skill_modify_info_4") == 0) return skill_modify_info[3];
			if (wcscmp(fieldName, L"skill_modify_info_5") == 0) return skill_modify_info[4];
			if (wcscmp(fieldName, L"skill_modify_info_6") == 0) return skill_modify_info[5];
			if (wcscmp(fieldName, L"skill_modify_info_7") == 0) return skill_modify_info[6];
			if (wcscmp(fieldName, L"skill_modify_info_8") == 0) return skill_modify_info[7];
			if (wcscmp(fieldName, L"skill_modify_info_9") == 0) return skill_modify_info[8];
			if (wcscmp(fieldName, L"skill_modify_info_10") == 0) return skill_modify_info[9];
			if (wcscmp(fieldName, L"skill_modify_info_11") == 0) return skill_modify_info[10];
			if (wcscmp(fieldName, L"skill_modify_info_12") == 0) return skill_modify_info[11];
			if (wcscmp(fieldName, L"skill_modify_info_13") == 0) return skill_modify_info[12];
			if (wcscmp(fieldName, L"skill_modify_info_14") == 0) return skill_modify_info[13];
			if (wcscmp(fieldName, L"skill_modify_info_15") == 0) return skill_modify_info[14];
			if (wcscmp(fieldName, L"skill_modify_info_16") == 0) return skill_modify_info[15];
			if (wcscmp(fieldName, L"skill_modify_info_17") == 0) return skill_modify_info[16];
			if (wcscmp(fieldName, L"skill_modify_info_18") == 0) return skill_modify_info[17];
			if (wcscmp(fieldName, L"skill_modify_info_19") == 0) return skill_modify_info[18];
			if (wcscmp(fieldName, L"skill_modify_info_20") == 0) return skill_modify_info[19];
			if (wcscmp(fieldName, L"skill_modify_info_21") == 0) return skill_modify_info[20];
			if (wcscmp(fieldName, L"skill_modify_info_22") == 0) return skill_modify_info[21];
			if (wcscmp(fieldName, L"skill_modify_info_23") == 0) return skill_modify_info[22];
			if (wcscmp(fieldName, L"skill_modify_info_24") == 0) return skill_modify_info[23];
			if (wcscmp(fieldName, L"skill_modify_info_25") == 0) return skill_modify_info[24];
			if (wcscmp(fieldName, L"skill_modify_info_26") == 0) return skill_modify_info[25];
			if (wcscmp(fieldName, L"skill_modify_info_27") == 0) return skill_modify_info[26];
			if (wcscmp(fieldName, L"skill_modify_info_28") == 0) return skill_modify_info[27];
			if (wcscmp(fieldName, L"skill_modify_info_29") == 0) return skill_modify_info[28];
			if (wcscmp(fieldName, L"skill_modify_info_30") == 0) return skill_modify_info[29];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"max_level") == 0) return Data::AnyFieldToStringConverter::ToString(&max_level);
			if (wcscmp(fieldName, L"required_build_up_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[0]));
			if (wcscmp(fieldName, L"required_build_up_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[1]));
			if (wcscmp(fieldName, L"required_build_up_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[2]));
			if (wcscmp(fieldName, L"required_build_up_point_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[3]));
			if (wcscmp(fieldName, L"required_build_up_point_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[4]));
			if (wcscmp(fieldName, L"required_build_up_point_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[5]));
			if (wcscmp(fieldName, L"required_build_up_point_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[6]));
			if (wcscmp(fieldName, L"required_build_up_point_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[7]));
			if (wcscmp(fieldName, L"required_build_up_point_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[8]));
			if (wcscmp(fieldName, L"required_build_up_point_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[9]));
			if (wcscmp(fieldName, L"required_build_up_point_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[10]));
			if (wcscmp(fieldName, L"required_build_up_point_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[11]));
			if (wcscmp(fieldName, L"required_build_up_point_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[12]));
			if (wcscmp(fieldName, L"required_build_up_point_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[13]));
			if (wcscmp(fieldName, L"required_build_up_point_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[14]));
			if (wcscmp(fieldName, L"required_build_up_point_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[15]));
			if (wcscmp(fieldName, L"required_build_up_point_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[16]));
			if (wcscmp(fieldName, L"required_build_up_point_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[17]));
			if (wcscmp(fieldName, L"required_build_up_point_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[18]));
			if (wcscmp(fieldName, L"required_build_up_point_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[19]));
			if (wcscmp(fieldName, L"required_build_up_point_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[20]));
			if (wcscmp(fieldName, L"required_build_up_point_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[21]));
			if (wcscmp(fieldName, L"required_build_up_point_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[22]));
			if (wcscmp(fieldName, L"required_build_up_point_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[23]));
			if (wcscmp(fieldName, L"required_build_up_point_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[24]));
			if (wcscmp(fieldName, L"required_build_up_point_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[25]));
			if (wcscmp(fieldName, L"required_build_up_point_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[26]));
			if (wcscmp(fieldName, L"required_build_up_point_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[27]));
			if (wcscmp(fieldName, L"required_build_up_point_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[28]));
			if (wcscmp(fieldName, L"required_build_up_point_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point[29]));
			if (wcscmp(fieldName, L"required_build_up_point_level_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[0]));
			if (wcscmp(fieldName, L"required_build_up_point_level_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[1]));
			if (wcscmp(fieldName, L"required_build_up_point_level_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[2]));
			if (wcscmp(fieldName, L"required_build_up_point_level_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[3]));
			if (wcscmp(fieldName, L"required_build_up_point_level_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[4]));
			if (wcscmp(fieldName, L"required_build_up_point_level_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[5]));
			if (wcscmp(fieldName, L"required_build_up_point_level_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[6]));
			if (wcscmp(fieldName, L"required_build_up_point_level_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[7]));
			if (wcscmp(fieldName, L"required_build_up_point_level_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[8]));
			if (wcscmp(fieldName, L"required_build_up_point_level_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[9]));
			if (wcscmp(fieldName, L"required_build_up_point_level_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[10]));
			if (wcscmp(fieldName, L"required_build_up_point_level_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[11]));
			if (wcscmp(fieldName, L"required_build_up_point_level_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[12]));
			if (wcscmp(fieldName, L"required_build_up_point_level_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[13]));
			if (wcscmp(fieldName, L"required_build_up_point_level_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[14]));
			if (wcscmp(fieldName, L"required_build_up_point_level_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[15]));
			if (wcscmp(fieldName, L"required_build_up_point_level_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[16]));
			if (wcscmp(fieldName, L"required_build_up_point_level_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[17]));
			if (wcscmp(fieldName, L"required_build_up_point_level_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[18]));
			if (wcscmp(fieldName, L"required_build_up_point_level_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[19]));
			if (wcscmp(fieldName, L"required_build_up_point_level_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[20]));
			if (wcscmp(fieldName, L"required_build_up_point_level_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[21]));
			if (wcscmp(fieldName, L"required_build_up_point_level_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[22]));
			if (wcscmp(fieldName, L"required_build_up_point_level_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[23]));
			if (wcscmp(fieldName, L"required_build_up_point_level_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[24]));
			if (wcscmp(fieldName, L"required_build_up_point_level_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[25]));
			if (wcscmp(fieldName, L"required_build_up_point_level_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[26]));
			if (wcscmp(fieldName, L"required_build_up_point_level_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[27]));
			if (wcscmp(fieldName, L"required_build_up_point_level_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[28]));
			if (wcscmp(fieldName, L"required_build_up_point_level_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_build_up_point_level[29]));
			if (wcscmp(fieldName, L"skill_modify_info_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[0]));
			if (wcscmp(fieldName, L"skill_modify_info_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[1]));
			if (wcscmp(fieldName, L"skill_modify_info_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[2]));
			if (wcscmp(fieldName, L"skill_modify_info_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[3]));
			if (wcscmp(fieldName, L"skill_modify_info_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[4]));
			if (wcscmp(fieldName, L"skill_modify_info_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[5]));
			if (wcscmp(fieldName, L"skill_modify_info_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[6]));
			if (wcscmp(fieldName, L"skill_modify_info_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[7]));
			if (wcscmp(fieldName, L"skill_modify_info_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[8]));
			if (wcscmp(fieldName, L"skill_modify_info_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[9]));
			if (wcscmp(fieldName, L"skill_modify_info_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[10]));
			if (wcscmp(fieldName, L"skill_modify_info_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[11]));
			if (wcscmp(fieldName, L"skill_modify_info_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[12]));
			if (wcscmp(fieldName, L"skill_modify_info_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[13]));
			if (wcscmp(fieldName, L"skill_modify_info_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[14]));
			if (wcscmp(fieldName, L"skill_modify_info_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[15]));
			if (wcscmp(fieldName, L"skill_modify_info_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[16]));
			if (wcscmp(fieldName, L"skill_modify_info_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[17]));
			if (wcscmp(fieldName, L"skill_modify_info_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[18]));
			if (wcscmp(fieldName, L"skill_modify_info_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[19]));
			if (wcscmp(fieldName, L"skill_modify_info_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[20]));
			if (wcscmp(fieldName, L"skill_modify_info_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[21]));
			if (wcscmp(fieldName, L"skill_modify_info_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[22]));
			if (wcscmp(fieldName, L"skill_modify_info_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[23]));
			if (wcscmp(fieldName, L"skill_modify_info_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[24]));
			if (wcscmp(fieldName, L"skill_modify_info_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[25]));
			if (wcscmp(fieldName, L"skill_modify_info_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[26]));
			if (wcscmp(fieldName, L"skill_modify_info_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[27]));
			if (wcscmp(fieldName, L"skill_modify_info_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[28]));
			if (wcscmp(fieldName, L"skill_modify_info_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[29]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 parent_skill3_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 max_level;
__int8 required_build_up_point[30];
char Pad0[1];
__int16 required_build_up_point_level[30];
Data::TableRef skill_modify_info[30];
int skill_modify_info_tableId(){return 339;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 327; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_build_up_RecordPtr // : DrRecordPtr
	{
		skill_build_up_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_build_up_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}