/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct energy_point_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"enable_energy_point") == 0) return enable_energy_point;
			if (wcscmp(fieldName, L"ratio_of_point_to_exp") == 0) return ratio_of_point_to_exp;
			if (wcscmp(fieldName, L"acquired_max_energy_point") == 0) return acquired_max_energy_point;
			if (wcscmp(fieldName, L"acquired_max_energy_multiple_point") == 0) return acquired_max_energy_multiple_point;
			if (wcscmp(fieldName, L"multiple_value") == 0) return multiple_value;
			if (wcscmp(fieldName, L"multiple_value_1") == 0) return multiple_value[0];
			if (wcscmp(fieldName, L"multiple_value_2") == 0) return multiple_value[1];
			if (wcscmp(fieldName, L"multiple_value_3") == 0) return multiple_value[2];
			if (wcscmp(fieldName, L"multiple_value_4") == 0) return multiple_value[3];
			if (wcscmp(fieldName, L"multiple_value_5") == 0) return multiple_value[4];
			if (wcscmp(fieldName, L"multiple_value_6") == 0) return multiple_value[5];
			if (wcscmp(fieldName, L"multiple_value_7") == 0) return multiple_value[6];
			if (wcscmp(fieldName, L"multiple_value_8") == 0) return multiple_value[7];
			if (wcscmp(fieldName, L"multiple_value_hidden") == 0) return multiple_value_hidden;
			if (wcscmp(fieldName, L"additional_effect") == 0) return additional_effect;
			if (wcscmp(fieldName, L"reset_hour") == 0) return reset_hour;
			if (wcscmp(fieldName, L"reward_count") == 0) return reward_count;
			if (wcscmp(fieldName, L"reward") == 0) return reward;
			if (wcscmp(fieldName, L"reward_1") == 0) return reward[0];
			if (wcscmp(fieldName, L"reward_2") == 0) return reward[1];
			if (wcscmp(fieldName, L"reward_3") == 0) return reward[2];
			if (wcscmp(fieldName, L"reward_4") == 0) return reward[3];
			if (wcscmp(fieldName, L"reward_5") == 0) return reward[4];
			if (wcscmp(fieldName, L"reward_6") == 0) return reward[5];
			if (wcscmp(fieldName, L"reward_7") == 0) return reward[6];
			if (wcscmp(fieldName, L"reward_8") == 0) return reward[7];
			if (wcscmp(fieldName, L"reward_9") == 0) return reward[8];
			if (wcscmp(fieldName, L"reward_10") == 0) return reward[9];
			if (wcscmp(fieldName, L"reward_11") == 0) return reward[10];
			if (wcscmp(fieldName, L"reward_12") == 0) return reward[11];
			if (wcscmp(fieldName, L"reward_13") == 0) return reward[12];
			if (wcscmp(fieldName, L"reward_14") == 0) return reward[13];
			if (wcscmp(fieldName, L"reward_15") == 0) return reward[14];
			if (wcscmp(fieldName, L"reward_16") == 0) return reward[15];
			if (wcscmp(fieldName, L"reward_17") == 0) return reward[16];
			if (wcscmp(fieldName, L"reward_18") == 0) return reward[17];
			if (wcscmp(fieldName, L"reward_19") == 0) return reward[18];
			if (wcscmp(fieldName, L"reward_20") == 0) return reward[19];
			if (wcscmp(fieldName, L"reward_21") == 0) return reward[20];
			if (wcscmp(fieldName, L"reward_22") == 0) return reward[21];
			if (wcscmp(fieldName, L"reward_23") == 0) return reward[22];
			if (wcscmp(fieldName, L"reward_24") == 0) return reward[23];
			if (wcscmp(fieldName, L"reward_25") == 0) return reward[24];
			if (wcscmp(fieldName, L"reward_26") == 0) return reward[25];
			if (wcscmp(fieldName, L"reward_27") == 0) return reward[26];
			if (wcscmp(fieldName, L"reward_28") == 0) return reward[27];
			if (wcscmp(fieldName, L"reward_29") == 0) return reward[28];
			if (wcscmp(fieldName, L"reward_30") == 0) return reward[29];
			if (wcscmp(fieldName, L"reward_31") == 0) return reward[30];
			if (wcscmp(fieldName, L"reward_32") == 0) return reward[31];
			if (wcscmp(fieldName, L"reward_33") == 0) return reward[32];
			if (wcscmp(fieldName, L"reward_34") == 0) return reward[33];
			if (wcscmp(fieldName, L"reward_35") == 0) return reward[34];
			if (wcscmp(fieldName, L"reward_36") == 0) return reward[35];
			if (wcscmp(fieldName, L"reward_37") == 0) return reward[36];
			if (wcscmp(fieldName, L"reward_38") == 0) return reward[37];
			if (wcscmp(fieldName, L"reward_39") == 0) return reward[38];
			if (wcscmp(fieldName, L"reward_40") == 0) return reward[39];
			if (wcscmp(fieldName, L"reward_41") == 0) return reward[40];
			if (wcscmp(fieldName, L"reward_42") == 0) return reward[41];
			if (wcscmp(fieldName, L"reward_43") == 0) return reward[42];
			if (wcscmp(fieldName, L"reward_44") == 0) return reward[43];
			if (wcscmp(fieldName, L"reward_45") == 0) return reward[44];
			if (wcscmp(fieldName, L"reward_46") == 0) return reward[45];
			if (wcscmp(fieldName, L"reward_47") == 0) return reward[46];
			if (wcscmp(fieldName, L"reward_48") == 0) return reward[47];
			if (wcscmp(fieldName, L"reward_49") == 0) return reward[48];
			if (wcscmp(fieldName, L"reward_50") == 0) return reward[49];
			if (wcscmp(fieldName, L"reward_51") == 0) return reward[50];
			if (wcscmp(fieldName, L"reward_52") == 0) return reward[51];
			if (wcscmp(fieldName, L"reward_53") == 0) return reward[52];
			if (wcscmp(fieldName, L"reward_54") == 0) return reward[53];
			if (wcscmp(fieldName, L"reward_55") == 0) return reward[54];
			if (wcscmp(fieldName, L"reward_56") == 0) return reward[55];
			if (wcscmp(fieldName, L"reward_57") == 0) return reward[56];
			if (wcscmp(fieldName, L"reward_58") == 0) return reward[57];
			if (wcscmp(fieldName, L"reward_59") == 0) return reward[58];
			if (wcscmp(fieldName, L"reward_60") == 0) return reward[59];
			if (wcscmp(fieldName, L"reward_61") == 0) return reward[60];
			if (wcscmp(fieldName, L"reward_62") == 0) return reward[61];
			if (wcscmp(fieldName, L"reward_63") == 0) return reward[62];
			if (wcscmp(fieldName, L"reward_64") == 0) return reward[63];
			if (wcscmp(fieldName, L"reward_65") == 0) return reward[64];
			if (wcscmp(fieldName, L"reward_66") == 0) return reward[65];
			if (wcscmp(fieldName, L"reward_67") == 0) return reward[66];
			if (wcscmp(fieldName, L"reward_68") == 0) return reward[67];
			if (wcscmp(fieldName, L"reward_69") == 0) return reward[68];
			if (wcscmp(fieldName, L"reward_70") == 0) return reward[69];
			if (wcscmp(fieldName, L"reward_71") == 0) return reward[70];
			if (wcscmp(fieldName, L"reward_72") == 0) return reward[71];
			if (wcscmp(fieldName, L"reward_73") == 0) return reward[72];
			if (wcscmp(fieldName, L"reward_74") == 0) return reward[73];
			if (wcscmp(fieldName, L"reward_75") == 0) return reward[74];
			if (wcscmp(fieldName, L"reward_76") == 0) return reward[75];
			if (wcscmp(fieldName, L"reward_77") == 0) return reward[76];
			if (wcscmp(fieldName, L"reward_78") == 0) return reward[77];
			if (wcscmp(fieldName, L"reward_79") == 0) return reward[78];
			if (wcscmp(fieldName, L"reward_80") == 0) return reward[79];
			if (wcscmp(fieldName, L"reward_81") == 0) return reward[80];
			if (wcscmp(fieldName, L"reward_82") == 0) return reward[81];
			if (wcscmp(fieldName, L"reward_83") == 0) return reward[82];
			if (wcscmp(fieldName, L"reward_84") == 0) return reward[83];
			if (wcscmp(fieldName, L"reward_85") == 0) return reward[84];
			if (wcscmp(fieldName, L"reward_86") == 0) return reward[85];
			if (wcscmp(fieldName, L"reward_87") == 0) return reward[86];
			if (wcscmp(fieldName, L"reward_88") == 0) return reward[87];
			if (wcscmp(fieldName, L"reward_89") == 0) return reward[88];
			if (wcscmp(fieldName, L"reward_90") == 0) return reward[89];
			if (wcscmp(fieldName, L"reward_91") == 0) return reward[90];
			if (wcscmp(fieldName, L"reward_92") == 0) return reward[91];
			if (wcscmp(fieldName, L"reward_93") == 0) return reward[92];
			if (wcscmp(fieldName, L"reward_94") == 0) return reward[93];
			if (wcscmp(fieldName, L"reward_95") == 0) return reward[94];
			if (wcscmp(fieldName, L"reward_96") == 0) return reward[95];
			if (wcscmp(fieldName, L"reward_97") == 0) return reward[96];
			if (wcscmp(fieldName, L"reward_98") == 0) return reward[97];
			if (wcscmp(fieldName, L"reward_99") == 0) return reward[98];
			if (wcscmp(fieldName, L"reward_100") == 0) return reward[99];
			if (wcscmp(fieldName, L"reward_101") == 0) return reward[100];
			if (wcscmp(fieldName, L"reward_102") == 0) return reward[101];
			if (wcscmp(fieldName, L"reward_103") == 0) return reward[102];
			if (wcscmp(fieldName, L"reward_104") == 0) return reward[103];
			if (wcscmp(fieldName, L"reward_105") == 0) return reward[104];
			if (wcscmp(fieldName, L"reward_106") == 0) return reward[105];
			if (wcscmp(fieldName, L"reward_107") == 0) return reward[106];
			if (wcscmp(fieldName, L"reward_108") == 0) return reward[107];
			if (wcscmp(fieldName, L"reward_109") == 0) return reward[108];
			if (wcscmp(fieldName, L"reward_110") == 0) return reward[109];
			if (wcscmp(fieldName, L"reward_111") == 0) return reward[110];
			if (wcscmp(fieldName, L"reward_112") == 0) return reward[111];
			if (wcscmp(fieldName, L"reward_113") == 0) return reward[112];
			if (wcscmp(fieldName, L"reward_114") == 0) return reward[113];
			if (wcscmp(fieldName, L"reward_115") == 0) return reward[114];
			if (wcscmp(fieldName, L"reward_116") == 0) return reward[115];
			if (wcscmp(fieldName, L"reward_117") == 0) return reward[116];
			if (wcscmp(fieldName, L"reward_118") == 0) return reward[117];
			if (wcscmp(fieldName, L"reward_119") == 0) return reward[118];
			if (wcscmp(fieldName, L"reward_120") == 0) return reward[119];
			if (wcscmp(fieldName, L"reward_121") == 0) return reward[120];
			if (wcscmp(fieldName, L"reward_122") == 0) return reward[121];
			if (wcscmp(fieldName, L"reward_123") == 0) return reward[122];
			if (wcscmp(fieldName, L"reward_124") == 0) return reward[123];
			if (wcscmp(fieldName, L"reward_125") == 0) return reward[124];
			if (wcscmp(fieldName, L"reward_126") == 0) return reward[125];
			if (wcscmp(fieldName, L"reward_127") == 0) return reward[126];
			if (wcscmp(fieldName, L"goodsstore_search_item") == 0) return goodsstore_search_item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"enable_energy_point") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_energy_point);
			if (wcscmp(fieldName, L"ratio_of_point_to_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&ratio_of_point_to_exp);
			if (wcscmp(fieldName, L"acquired_max_energy_point") == 0) return Data::AnyFieldToStringConverter::ToString(&acquired_max_energy_point);
			if (wcscmp(fieldName, L"acquired_max_energy_multiple_point") == 0) return Data::AnyFieldToStringConverter::ToString(&acquired_max_energy_multiple_point);
			if (wcscmp(fieldName, L"multiple_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[0]));
			if (wcscmp(fieldName, L"multiple_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[1]));
			if (wcscmp(fieldName, L"multiple_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[2]));
			if (wcscmp(fieldName, L"multiple_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[3]));
			if (wcscmp(fieldName, L"multiple_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[4]));
			if (wcscmp(fieldName, L"multiple_value_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[5]));
			if (wcscmp(fieldName, L"multiple_value_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[6]));
			if (wcscmp(fieldName, L"multiple_value_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(multiple_value[7]));
			if (wcscmp(fieldName, L"multiple_value_hidden") == 0) return Data::AnyFieldToStringConverter::ToString(&multiple_value_hidden);
			if (wcscmp(fieldName, L"additional_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_effect);
			if (wcscmp(fieldName, L"reset_hour") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_hour);
			if (wcscmp(fieldName, L"reward_count") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_count);
			if (wcscmp(fieldName, L"reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[0]));
			if (wcscmp(fieldName, L"reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[1]));
			if (wcscmp(fieldName, L"reward_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[2]));
			if (wcscmp(fieldName, L"reward_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[3]));
			if (wcscmp(fieldName, L"reward_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[4]));
			if (wcscmp(fieldName, L"reward_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[5]));
			if (wcscmp(fieldName, L"reward_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[6]));
			if (wcscmp(fieldName, L"reward_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[7]));
			if (wcscmp(fieldName, L"reward_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[8]));
			if (wcscmp(fieldName, L"reward_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[9]));
			if (wcscmp(fieldName, L"reward_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[10]));
			if (wcscmp(fieldName, L"reward_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[11]));
			if (wcscmp(fieldName, L"reward_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[12]));
			if (wcscmp(fieldName, L"reward_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[13]));
			if (wcscmp(fieldName, L"reward_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[14]));
			if (wcscmp(fieldName, L"reward_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[15]));
			if (wcscmp(fieldName, L"reward_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[16]));
			if (wcscmp(fieldName, L"reward_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[17]));
			if (wcscmp(fieldName, L"reward_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[18]));
			if (wcscmp(fieldName, L"reward_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[19]));
			if (wcscmp(fieldName, L"reward_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[20]));
			if (wcscmp(fieldName, L"reward_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[21]));
			if (wcscmp(fieldName, L"reward_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[22]));
			if (wcscmp(fieldName, L"reward_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[23]));
			if (wcscmp(fieldName, L"reward_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[24]));
			if (wcscmp(fieldName, L"reward_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[25]));
			if (wcscmp(fieldName, L"reward_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[26]));
			if (wcscmp(fieldName, L"reward_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[27]));
			if (wcscmp(fieldName, L"reward_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[28]));
			if (wcscmp(fieldName, L"reward_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[29]));
			if (wcscmp(fieldName, L"reward_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[30]));
			if (wcscmp(fieldName, L"reward_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[31]));
			if (wcscmp(fieldName, L"reward_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[32]));
			if (wcscmp(fieldName, L"reward_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[33]));
			if (wcscmp(fieldName, L"reward_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[34]));
			if (wcscmp(fieldName, L"reward_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[35]));
			if (wcscmp(fieldName, L"reward_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[36]));
			if (wcscmp(fieldName, L"reward_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[37]));
			if (wcscmp(fieldName, L"reward_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[38]));
			if (wcscmp(fieldName, L"reward_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[39]));
			if (wcscmp(fieldName, L"reward_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[40]));
			if (wcscmp(fieldName, L"reward_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[41]));
			if (wcscmp(fieldName, L"reward_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[42]));
			if (wcscmp(fieldName, L"reward_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[43]));
			if (wcscmp(fieldName, L"reward_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[44]));
			if (wcscmp(fieldName, L"reward_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[45]));
			if (wcscmp(fieldName, L"reward_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[46]));
			if (wcscmp(fieldName, L"reward_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[47]));
			if (wcscmp(fieldName, L"reward_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[48]));
			if (wcscmp(fieldName, L"reward_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[49]));
			if (wcscmp(fieldName, L"reward_51") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[50]));
			if (wcscmp(fieldName, L"reward_52") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[51]));
			if (wcscmp(fieldName, L"reward_53") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[52]));
			if (wcscmp(fieldName, L"reward_54") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[53]));
			if (wcscmp(fieldName, L"reward_55") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[54]));
			if (wcscmp(fieldName, L"reward_56") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[55]));
			if (wcscmp(fieldName, L"reward_57") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[56]));
			if (wcscmp(fieldName, L"reward_58") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[57]));
			if (wcscmp(fieldName, L"reward_59") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[58]));
			if (wcscmp(fieldName, L"reward_60") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[59]));
			if (wcscmp(fieldName, L"reward_61") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[60]));
			if (wcscmp(fieldName, L"reward_62") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[61]));
			if (wcscmp(fieldName, L"reward_63") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[62]));
			if (wcscmp(fieldName, L"reward_64") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[63]));
			if (wcscmp(fieldName, L"reward_65") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[64]));
			if (wcscmp(fieldName, L"reward_66") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[65]));
			if (wcscmp(fieldName, L"reward_67") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[66]));
			if (wcscmp(fieldName, L"reward_68") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[67]));
			if (wcscmp(fieldName, L"reward_69") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[68]));
			if (wcscmp(fieldName, L"reward_70") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[69]));
			if (wcscmp(fieldName, L"reward_71") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[70]));
			if (wcscmp(fieldName, L"reward_72") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[71]));
			if (wcscmp(fieldName, L"reward_73") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[72]));
			if (wcscmp(fieldName, L"reward_74") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[73]));
			if (wcscmp(fieldName, L"reward_75") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[74]));
			if (wcscmp(fieldName, L"reward_76") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[75]));
			if (wcscmp(fieldName, L"reward_77") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[76]));
			if (wcscmp(fieldName, L"reward_78") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[77]));
			if (wcscmp(fieldName, L"reward_79") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[78]));
			if (wcscmp(fieldName, L"reward_80") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[79]));
			if (wcscmp(fieldName, L"reward_81") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[80]));
			if (wcscmp(fieldName, L"reward_82") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[81]));
			if (wcscmp(fieldName, L"reward_83") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[82]));
			if (wcscmp(fieldName, L"reward_84") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[83]));
			if (wcscmp(fieldName, L"reward_85") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[84]));
			if (wcscmp(fieldName, L"reward_86") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[85]));
			if (wcscmp(fieldName, L"reward_87") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[86]));
			if (wcscmp(fieldName, L"reward_88") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[87]));
			if (wcscmp(fieldName, L"reward_89") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[88]));
			if (wcscmp(fieldName, L"reward_90") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[89]));
			if (wcscmp(fieldName, L"reward_91") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[90]));
			if (wcscmp(fieldName, L"reward_92") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[91]));
			if (wcscmp(fieldName, L"reward_93") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[92]));
			if (wcscmp(fieldName, L"reward_94") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[93]));
			if (wcscmp(fieldName, L"reward_95") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[94]));
			if (wcscmp(fieldName, L"reward_96") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[95]));
			if (wcscmp(fieldName, L"reward_97") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[96]));
			if (wcscmp(fieldName, L"reward_98") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[97]));
			if (wcscmp(fieldName, L"reward_99") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[98]));
			if (wcscmp(fieldName, L"reward_100") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[99]));
			if (wcscmp(fieldName, L"reward_101") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[100]));
			if (wcscmp(fieldName, L"reward_102") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[101]));
			if (wcscmp(fieldName, L"reward_103") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[102]));
			if (wcscmp(fieldName, L"reward_104") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[103]));
			if (wcscmp(fieldName, L"reward_105") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[104]));
			if (wcscmp(fieldName, L"reward_106") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[105]));
			if (wcscmp(fieldName, L"reward_107") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[106]));
			if (wcscmp(fieldName, L"reward_108") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[107]));
			if (wcscmp(fieldName, L"reward_109") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[108]));
			if (wcscmp(fieldName, L"reward_110") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[109]));
			if (wcscmp(fieldName, L"reward_111") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[110]));
			if (wcscmp(fieldName, L"reward_112") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[111]));
			if (wcscmp(fieldName, L"reward_113") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[112]));
			if (wcscmp(fieldName, L"reward_114") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[113]));
			if (wcscmp(fieldName, L"reward_115") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[114]));
			if (wcscmp(fieldName, L"reward_116") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[115]));
			if (wcscmp(fieldName, L"reward_117") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[116]));
			if (wcscmp(fieldName, L"reward_118") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[117]));
			if (wcscmp(fieldName, L"reward_119") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[118]));
			if (wcscmp(fieldName, L"reward_120") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[119]));
			if (wcscmp(fieldName, L"reward_121") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[120]));
			if (wcscmp(fieldName, L"reward_122") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[121]));
			if (wcscmp(fieldName, L"reward_123") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[122]));
			if (wcscmp(fieldName, L"reward_124") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[123]));
			if (wcscmp(fieldName, L"reward_125") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[124]));
			if (wcscmp(fieldName, L"reward_126") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[125]));
			if (wcscmp(fieldName, L"reward_127") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[126]));
			if (wcscmp(fieldName, L"goodsstore_search_item") == 0) return Data::AnyFieldToStringConverter::ToString(&goodsstore_search_item);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool enable_energy_point;
char Pad0[1];
__int16 ratio_of_point_to_exp;
__int32 acquired_max_energy_point;
__int32 acquired_max_energy_multiple_point;
__int8 multiple_value[8];
__int64 multiple_value_hidden;
Data::TableRef additional_effect;
int additional_effect_tableId(){return 111;};
__int8 reset_hour;
__int8 reward_count;
char Pad1[2];
Data::TableRef reward[127];
int reward_tableId(){return 116;};
Data::TableRef goodsstore_search_item;
int goodsstore_search_item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 115; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) energy_point_RecordPtr // : DrRecordPtr
	{
		energy_point_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::energy_point_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}