/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct craft2_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"none_selected_icon_texture") == 0) return none_selected_icon_texture;
			if (wcscmp(fieldName, L"none_selected_icon_index") == 0) return none_selected_icon_index;
			if (wcscmp(fieldName, L"join_msg") == 0) return join_msg;
			if (wcscmp(fieldName, L"level_up_msg") == 0) return level_up_msg;
			if (wcscmp(fieldName, L"max_level_msg") == 0) return max_level_msg;
			if (wcscmp(fieldName, L"need_exp_for_level") == 0) return need_exp_for_level;
			if (wcscmp(fieldName, L"need_exp_for_level_1") == 0) return need_exp_for_level[0];
			if (wcscmp(fieldName, L"need_exp_for_level_2") == 0) return need_exp_for_level[1];
			if (wcscmp(fieldName, L"need_exp_for_level_3") == 0) return need_exp_for_level[2];
			if (wcscmp(fieldName, L"need_exp_for_level_4") == 0) return need_exp_for_level[3];
			if (wcscmp(fieldName, L"need_exp_for_level_5") == 0) return need_exp_for_level[4];
			if (wcscmp(fieldName, L"need_exp_for_level_6") == 0) return need_exp_for_level[5];
			if (wcscmp(fieldName, L"need_exp_for_level_7") == 0) return need_exp_for_level[6];
			if (wcscmp(fieldName, L"need_exp_for_level_8") == 0) return need_exp_for_level[7];
			if (wcscmp(fieldName, L"need_exp_for_level_9") == 0) return need_exp_for_level[8];
			if (wcscmp(fieldName, L"need_exp_for_level_10") == 0) return need_exp_for_level[9];
			if (wcscmp(fieldName, L"need_exp_for_level_11") == 0) return need_exp_for_level[10];
			if (wcscmp(fieldName, L"need_exp_for_level_12") == 0) return need_exp_for_level[11];
			if (wcscmp(fieldName, L"need_exp_for_level_13") == 0) return need_exp_for_level[12];
			if (wcscmp(fieldName, L"need_exp_for_level_14") == 0) return need_exp_for_level[13];
			if (wcscmp(fieldName, L"need_exp_for_level_15") == 0) return need_exp_for_level[14];
			if (wcscmp(fieldName, L"need_exp_for_level_16") == 0) return need_exp_for_level[15];
			if (wcscmp(fieldName, L"need_exp_for_level_17") == 0) return need_exp_for_level[16];
			if (wcscmp(fieldName, L"need_exp_for_level_18") == 0) return need_exp_for_level[17];
			if (wcscmp(fieldName, L"need_exp_for_level_19") == 0) return need_exp_for_level[18];
			if (wcscmp(fieldName, L"need_exp_for_level_20") == 0) return need_exp_for_level[19];
			if (wcscmp(fieldName, L"need_exp_for_level_21") == 0) return need_exp_for_level[20];
			if (wcscmp(fieldName, L"need_exp_for_level_22") == 0) return need_exp_for_level[21];
			if (wcscmp(fieldName, L"need_exp_for_level_23") == 0) return need_exp_for_level[22];
			if (wcscmp(fieldName, L"need_exp_for_level_24") == 0) return need_exp_for_level[23];
			if (wcscmp(fieldName, L"need_exp_for_level_25") == 0) return need_exp_for_level[24];
			if (wcscmp(fieldName, L"need_exp_for_level_26") == 0) return need_exp_for_level[25];
			if (wcscmp(fieldName, L"need_exp_for_level_27") == 0) return need_exp_for_level[26];
			if (wcscmp(fieldName, L"need_exp_for_level_28") == 0) return need_exp_for_level[27];
			if (wcscmp(fieldName, L"need_exp_for_level_29") == 0) return need_exp_for_level[28];
			if (wcscmp(fieldName, L"need_exp_for_level_30") == 0) return need_exp_for_level[29];
			if (wcscmp(fieldName, L"need_exp_for_level_31") == 0) return need_exp_for_level[30];
			if (wcscmp(fieldName, L"need_exp_for_level_32") == 0) return need_exp_for_level[31];
			if (wcscmp(fieldName, L"need_exp_for_level_33") == 0) return need_exp_for_level[32];
			if (wcscmp(fieldName, L"need_exp_for_level_34") == 0) return need_exp_for_level[33];
			if (wcscmp(fieldName, L"need_exp_for_level_35") == 0) return need_exp_for_level[34];
			if (wcscmp(fieldName, L"need_exp_for_level_36") == 0) return need_exp_for_level[35];
			if (wcscmp(fieldName, L"need_exp_for_level_37") == 0) return need_exp_for_level[36];
			if (wcscmp(fieldName, L"need_exp_for_level_38") == 0) return need_exp_for_level[37];
			if (wcscmp(fieldName, L"need_exp_for_level_39") == 0) return need_exp_for_level[38];
			if (wcscmp(fieldName, L"need_exp_for_level_40") == 0) return need_exp_for_level[39];
			if (wcscmp(fieldName, L"need_exp_for_level_41") == 0) return need_exp_for_level[40];
			if (wcscmp(fieldName, L"need_exp_for_level_42") == 0) return need_exp_for_level[41];
			if (wcscmp(fieldName, L"need_exp_for_level_43") == 0) return need_exp_for_level[42];
			if (wcscmp(fieldName, L"need_exp_for_level_44") == 0) return need_exp_for_level[43];
			if (wcscmp(fieldName, L"need_exp_for_level_45") == 0) return need_exp_for_level[44];
			if (wcscmp(fieldName, L"need_exp_for_level_46") == 0) return need_exp_for_level[45];
			if (wcscmp(fieldName, L"need_exp_for_level_47") == 0) return need_exp_for_level[46];
			if (wcscmp(fieldName, L"need_exp_for_level_48") == 0) return need_exp_for_level[47];
			if (wcscmp(fieldName, L"need_exp_for_level_49") == 0) return need_exp_for_level[48];
			if (wcscmp(fieldName, L"need_exp_for_level_50") == 0) return need_exp_for_level[49];
			if (wcscmp(fieldName, L"need_exp_for_level_51") == 0) return need_exp_for_level[50];
			if (wcscmp(fieldName, L"need_exp_for_level_52") == 0) return need_exp_for_level[51];
			if (wcscmp(fieldName, L"need_exp_for_level_53") == 0) return need_exp_for_level[52];
			if (wcscmp(fieldName, L"need_exp_for_level_54") == 0) return need_exp_for_level[53];
			if (wcscmp(fieldName, L"need_exp_for_level_55") == 0) return need_exp_for_level[54];
			if (wcscmp(fieldName, L"need_exp_for_level_56") == 0) return need_exp_for_level[55];
			if (wcscmp(fieldName, L"need_exp_for_level_57") == 0) return need_exp_for_level[56];
			if (wcscmp(fieldName, L"need_exp_for_level_58") == 0) return need_exp_for_level[57];
			if (wcscmp(fieldName, L"need_exp_for_level_59") == 0) return need_exp_for_level[58];
			if (wcscmp(fieldName, L"need_exp_for_level_60") == 0) return need_exp_for_level[59];
			if (wcscmp(fieldName, L"need_exp_for_level_61") == 0) return need_exp_for_level[60];
			if (wcscmp(fieldName, L"need_exp_for_level_62") == 0) return need_exp_for_level[61];
			if (wcscmp(fieldName, L"need_exp_for_level_63") == 0) return need_exp_for_level[62];
			if (wcscmp(fieldName, L"need_exp_for_level_64") == 0) return need_exp_for_level[63];
			if (wcscmp(fieldName, L"need_exp_for_level_65") == 0) return need_exp_for_level[64];
			if (wcscmp(fieldName, L"need_exp_for_level_66") == 0) return need_exp_for_level[65];
			if (wcscmp(fieldName, L"need_exp_for_level_67") == 0) return need_exp_for_level[66];
			if (wcscmp(fieldName, L"need_exp_for_level_68") == 0) return need_exp_for_level[67];
			if (wcscmp(fieldName, L"need_exp_for_level_69") == 0) return need_exp_for_level[68];
			if (wcscmp(fieldName, L"need_exp_for_level_70") == 0) return need_exp_for_level[69];
			if (wcscmp(fieldName, L"need_exp_for_level_71") == 0) return need_exp_for_level[70];
			if (wcscmp(fieldName, L"need_exp_for_level_72") == 0) return need_exp_for_level[71];
			if (wcscmp(fieldName, L"need_exp_for_level_73") == 0) return need_exp_for_level[72];
			if (wcscmp(fieldName, L"need_exp_for_level_74") == 0) return need_exp_for_level[73];
			if (wcscmp(fieldName, L"need_exp_for_level_75") == 0) return need_exp_for_level[74];
			if (wcscmp(fieldName, L"need_exp_for_level_76") == 0) return need_exp_for_level[75];
			if (wcscmp(fieldName, L"need_exp_for_level_77") == 0) return need_exp_for_level[76];
			if (wcscmp(fieldName, L"need_exp_for_level_78") == 0) return need_exp_for_level[77];
			if (wcscmp(fieldName, L"need_exp_for_level_79") == 0) return need_exp_for_level[78];
			if (wcscmp(fieldName, L"need_exp_for_level_80") == 0) return need_exp_for_level[79];
			if (wcscmp(fieldName, L"need_exp_for_level_81") == 0) return need_exp_for_level[80];
			if (wcscmp(fieldName, L"need_exp_for_level_82") == 0) return need_exp_for_level[81];
			if (wcscmp(fieldName, L"need_exp_for_level_83") == 0) return need_exp_for_level[82];
			if (wcscmp(fieldName, L"need_exp_for_level_84") == 0) return need_exp_for_level[83];
			if (wcscmp(fieldName, L"need_exp_for_level_85") == 0) return need_exp_for_level[84];
			if (wcscmp(fieldName, L"need_exp_for_level_86") == 0) return need_exp_for_level[85];
			if (wcscmp(fieldName, L"need_exp_for_level_87") == 0) return need_exp_for_level[86];
			if (wcscmp(fieldName, L"need_exp_for_level_88") == 0) return need_exp_for_level[87];
			if (wcscmp(fieldName, L"need_exp_for_level_89") == 0) return need_exp_for_level[88];
			if (wcscmp(fieldName, L"need_exp_for_level_90") == 0) return need_exp_for_level[89];
			if (wcscmp(fieldName, L"need_exp_for_level_91") == 0) return need_exp_for_level[90];
			if (wcscmp(fieldName, L"need_exp_for_level_92") == 0) return need_exp_for_level[91];
			if (wcscmp(fieldName, L"need_exp_for_level_93") == 0) return need_exp_for_level[92];
			if (wcscmp(fieldName, L"need_exp_for_level_94") == 0) return need_exp_for_level[93];
			if (wcscmp(fieldName, L"need_exp_for_level_95") == 0) return need_exp_for_level[94];
			if (wcscmp(fieldName, L"need_exp_for_level_96") == 0) return need_exp_for_level[95];
			if (wcscmp(fieldName, L"need_exp_for_level_97") == 0) return need_exp_for_level[96];
			if (wcscmp(fieldName, L"need_exp_for_level_98") == 0) return need_exp_for_level[97];
			if (wcscmp(fieldName, L"need_exp_for_level_99") == 0) return need_exp_for_level[98];
			if (wcscmp(fieldName, L"need_exp_for_level_100") == 0) return need_exp_for_level[99];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"none_selected_icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&none_selected_icon_texture);
			if (wcscmp(fieldName, L"none_selected_icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&none_selected_icon_index);
			if (wcscmp(fieldName, L"join_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&join_msg);
			if (wcscmp(fieldName, L"level_up_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&level_up_msg);
			if (wcscmp(fieldName, L"max_level_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&max_level_msg);
			if (wcscmp(fieldName, L"need_exp_for_level_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[0]));
			if (wcscmp(fieldName, L"need_exp_for_level_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[1]));
			if (wcscmp(fieldName, L"need_exp_for_level_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[2]));
			if (wcscmp(fieldName, L"need_exp_for_level_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[3]));
			if (wcscmp(fieldName, L"need_exp_for_level_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[4]));
			if (wcscmp(fieldName, L"need_exp_for_level_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[5]));
			if (wcscmp(fieldName, L"need_exp_for_level_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[6]));
			if (wcscmp(fieldName, L"need_exp_for_level_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[7]));
			if (wcscmp(fieldName, L"need_exp_for_level_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[8]));
			if (wcscmp(fieldName, L"need_exp_for_level_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[9]));
			if (wcscmp(fieldName, L"need_exp_for_level_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[10]));
			if (wcscmp(fieldName, L"need_exp_for_level_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[11]));
			if (wcscmp(fieldName, L"need_exp_for_level_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[12]));
			if (wcscmp(fieldName, L"need_exp_for_level_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[13]));
			if (wcscmp(fieldName, L"need_exp_for_level_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[14]));
			if (wcscmp(fieldName, L"need_exp_for_level_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[15]));
			if (wcscmp(fieldName, L"need_exp_for_level_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[16]));
			if (wcscmp(fieldName, L"need_exp_for_level_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[17]));
			if (wcscmp(fieldName, L"need_exp_for_level_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[18]));
			if (wcscmp(fieldName, L"need_exp_for_level_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[19]));
			if (wcscmp(fieldName, L"need_exp_for_level_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[20]));
			if (wcscmp(fieldName, L"need_exp_for_level_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[21]));
			if (wcscmp(fieldName, L"need_exp_for_level_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[22]));
			if (wcscmp(fieldName, L"need_exp_for_level_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[23]));
			if (wcscmp(fieldName, L"need_exp_for_level_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[24]));
			if (wcscmp(fieldName, L"need_exp_for_level_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[25]));
			if (wcscmp(fieldName, L"need_exp_for_level_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[26]));
			if (wcscmp(fieldName, L"need_exp_for_level_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[27]));
			if (wcscmp(fieldName, L"need_exp_for_level_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[28]));
			if (wcscmp(fieldName, L"need_exp_for_level_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[29]));
			if (wcscmp(fieldName, L"need_exp_for_level_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[30]));
			if (wcscmp(fieldName, L"need_exp_for_level_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[31]));
			if (wcscmp(fieldName, L"need_exp_for_level_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[32]));
			if (wcscmp(fieldName, L"need_exp_for_level_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[33]));
			if (wcscmp(fieldName, L"need_exp_for_level_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[34]));
			if (wcscmp(fieldName, L"need_exp_for_level_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[35]));
			if (wcscmp(fieldName, L"need_exp_for_level_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[36]));
			if (wcscmp(fieldName, L"need_exp_for_level_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[37]));
			if (wcscmp(fieldName, L"need_exp_for_level_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[38]));
			if (wcscmp(fieldName, L"need_exp_for_level_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[39]));
			if (wcscmp(fieldName, L"need_exp_for_level_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[40]));
			if (wcscmp(fieldName, L"need_exp_for_level_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[41]));
			if (wcscmp(fieldName, L"need_exp_for_level_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[42]));
			if (wcscmp(fieldName, L"need_exp_for_level_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[43]));
			if (wcscmp(fieldName, L"need_exp_for_level_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[44]));
			if (wcscmp(fieldName, L"need_exp_for_level_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[45]));
			if (wcscmp(fieldName, L"need_exp_for_level_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[46]));
			if (wcscmp(fieldName, L"need_exp_for_level_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[47]));
			if (wcscmp(fieldName, L"need_exp_for_level_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[48]));
			if (wcscmp(fieldName, L"need_exp_for_level_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[49]));
			if (wcscmp(fieldName, L"need_exp_for_level_51") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[50]));
			if (wcscmp(fieldName, L"need_exp_for_level_52") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[51]));
			if (wcscmp(fieldName, L"need_exp_for_level_53") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[52]));
			if (wcscmp(fieldName, L"need_exp_for_level_54") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[53]));
			if (wcscmp(fieldName, L"need_exp_for_level_55") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[54]));
			if (wcscmp(fieldName, L"need_exp_for_level_56") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[55]));
			if (wcscmp(fieldName, L"need_exp_for_level_57") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[56]));
			if (wcscmp(fieldName, L"need_exp_for_level_58") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[57]));
			if (wcscmp(fieldName, L"need_exp_for_level_59") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[58]));
			if (wcscmp(fieldName, L"need_exp_for_level_60") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[59]));
			if (wcscmp(fieldName, L"need_exp_for_level_61") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[60]));
			if (wcscmp(fieldName, L"need_exp_for_level_62") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[61]));
			if (wcscmp(fieldName, L"need_exp_for_level_63") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[62]));
			if (wcscmp(fieldName, L"need_exp_for_level_64") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[63]));
			if (wcscmp(fieldName, L"need_exp_for_level_65") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[64]));
			if (wcscmp(fieldName, L"need_exp_for_level_66") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[65]));
			if (wcscmp(fieldName, L"need_exp_for_level_67") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[66]));
			if (wcscmp(fieldName, L"need_exp_for_level_68") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[67]));
			if (wcscmp(fieldName, L"need_exp_for_level_69") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[68]));
			if (wcscmp(fieldName, L"need_exp_for_level_70") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[69]));
			if (wcscmp(fieldName, L"need_exp_for_level_71") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[70]));
			if (wcscmp(fieldName, L"need_exp_for_level_72") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[71]));
			if (wcscmp(fieldName, L"need_exp_for_level_73") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[72]));
			if (wcscmp(fieldName, L"need_exp_for_level_74") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[73]));
			if (wcscmp(fieldName, L"need_exp_for_level_75") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[74]));
			if (wcscmp(fieldName, L"need_exp_for_level_76") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[75]));
			if (wcscmp(fieldName, L"need_exp_for_level_77") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[76]));
			if (wcscmp(fieldName, L"need_exp_for_level_78") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[77]));
			if (wcscmp(fieldName, L"need_exp_for_level_79") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[78]));
			if (wcscmp(fieldName, L"need_exp_for_level_80") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[79]));
			if (wcscmp(fieldName, L"need_exp_for_level_81") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[80]));
			if (wcscmp(fieldName, L"need_exp_for_level_82") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[81]));
			if (wcscmp(fieldName, L"need_exp_for_level_83") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[82]));
			if (wcscmp(fieldName, L"need_exp_for_level_84") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[83]));
			if (wcscmp(fieldName, L"need_exp_for_level_85") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[84]));
			if (wcscmp(fieldName, L"need_exp_for_level_86") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[85]));
			if (wcscmp(fieldName, L"need_exp_for_level_87") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[86]));
			if (wcscmp(fieldName, L"need_exp_for_level_88") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[87]));
			if (wcscmp(fieldName, L"need_exp_for_level_89") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[88]));
			if (wcscmp(fieldName, L"need_exp_for_level_90") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[89]));
			if (wcscmp(fieldName, L"need_exp_for_level_91") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[90]));
			if (wcscmp(fieldName, L"need_exp_for_level_92") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[91]));
			if (wcscmp(fieldName, L"need_exp_for_level_93") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[92]));
			if (wcscmp(fieldName, L"need_exp_for_level_94") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[93]));
			if (wcscmp(fieldName, L"need_exp_for_level_95") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[94]));
			if (wcscmp(fieldName, L"need_exp_for_level_96") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[95]));
			if (wcscmp(fieldName, L"need_exp_for_level_97") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[96]));
			if (wcscmp(fieldName, L"need_exp_for_level_98") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[97]));
			if (wcscmp(fieldName, L"need_exp_for_level_99") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[98]));
			if (wcscmp(fieldName, L"need_exp_for_level_100") == 0) return Data::AnyFieldToStringConverter::ToString(&(need_exp_for_level[99]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad0[2];
Data::TableRef none_selected_icon_texture;
int none_selected_icon_texture_tableId(){return 178;};
__int16 none_selected_icon_index;
char Pad1[2];
Data::TableRef join_msg;
int join_msg_tableId(){return 151;};
Data::TableRef level_up_msg;
int level_up_msg_tableId(){return 151;};
Data::TableRef max_level_msg;
int max_level_msg_tableId(){return 151;};
__int32 need_exp_for_level[100];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 77; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft2_RecordPtr // : DrRecordPtr
	{
		craft2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}