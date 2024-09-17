/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct creatureappearance_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"race") == 0) return race;
			if (wcscmp(fieldName, L"sex") == 0) return sex;
			if (wcscmp(fieldName, L"face_anim_set_name") == 0) return face_anim_set_name;
			if (wcscmp(fieldName, L"anim_tree_name") == 0) return anim_tree_name;
			if (wcscmp(fieldName, L"face_mesh_name") == 0) return face_mesh_name;
			if (wcscmp(fieldName, L"body_mesh_name") == 0) return body_mesh_name;
			if (wcscmp(fieldName, L"voice_set_name") == 0) return voice_set_name;
			if (wcscmp(fieldName, L"npc_dialogue_set") == 0) return npc_dialogue_set;
			if (wcscmp(fieldName, L"attach_effect") == 0) return attach_effect;
			if (wcscmp(fieldName, L"body_material_name") == 0) return body_material_name;
			if (wcscmp(fieldName, L"face_material_name") == 0) return face_material_name;
			if (wcscmp(fieldName, L"npcattach1") == 0) return npcattach1;
			if (wcscmp(fieldName, L"npcattach2") == 0) return npcattach2;
			if (wcscmp(fieldName, L"npcattach_material1") == 0) return npcattach_material1;
			if (wcscmp(fieldName, L"npcattach_material2") == 0) return npcattach_material2;
			if (wcscmp(fieldName, L"enable_physbrst") == 0) return enable_physbrst;
			if (wcscmp(fieldName, L"pc_customize") == 0) return pc_customize;
			if (wcscmp(fieldName, L"unique_soundcue") == 0) return unique_soundcue;
			if (wcscmp(fieldName, L"unique_soundculldist") == 0) return unique_soundculldist;
			if (wcscmp(fieldName, L"unique_soundfadetime") == 0) return unique_soundfadetime;
			if (wcscmp(fieldName, L"unique_delaystoptime") == 0) return unique_delaystoptime;
			if (wcscmp(fieldName, L"sound_attenuation_scale") == 0) return sound_attenuation_scale;
			if (wcscmp(fieldName, L"sound_volume_scale") == 0) return sound_volume_scale;
			if (wcscmp(fieldName, L"param8") == 0) return param8;
			if (wcscmp(fieldName, L"param8_1") == 0) return param8[0];
			if (wcscmp(fieldName, L"param8_2") == 0) return param8[1];
			if (wcscmp(fieldName, L"param8_3") == 0) return param8[2];
			if (wcscmp(fieldName, L"param8_4") == 0) return param8[3];
			if (wcscmp(fieldName, L"param8_5") == 0) return param8[4];
			if (wcscmp(fieldName, L"param8_6") == 0) return param8[5];
			if (wcscmp(fieldName, L"param8_7") == 0) return param8[6];
			if (wcscmp(fieldName, L"param8_8") == 0) return param8[7];
			if (wcscmp(fieldName, L"param8_9") == 0) return param8[8];
			if (wcscmp(fieldName, L"param8_10") == 0) return param8[9];
			if (wcscmp(fieldName, L"param8_11") == 0) return param8[10];
			if (wcscmp(fieldName, L"param8_12") == 0) return param8[11];
			if (wcscmp(fieldName, L"param8_13") == 0) return param8[12];
			if (wcscmp(fieldName, L"param8_14") == 0) return param8[13];
			if (wcscmp(fieldName, L"param8_15") == 0) return param8[14];
			if (wcscmp(fieldName, L"param8_16") == 0) return param8[15];
			if (wcscmp(fieldName, L"param8_17") == 0) return param8[16];
			if (wcscmp(fieldName, L"param8_18") == 0) return param8[17];
			if (wcscmp(fieldName, L"param8_19") == 0) return param8[18];
			if (wcscmp(fieldName, L"param8_20") == 0) return param8[19];
			if (wcscmp(fieldName, L"param8_21") == 0) return param8[20];
			if (wcscmp(fieldName, L"param8_22") == 0) return param8[21];
			if (wcscmp(fieldName, L"param8_23") == 0) return param8[22];
			if (wcscmp(fieldName, L"param8_24") == 0) return param8[23];
			if (wcscmp(fieldName, L"param8_25") == 0) return param8[24];
			if (wcscmp(fieldName, L"param8_26") == 0) return param8[25];
			if (wcscmp(fieldName, L"param8_27") == 0) return param8[26];
			if (wcscmp(fieldName, L"param8_28") == 0) return param8[27];
			if (wcscmp(fieldName, L"param8_29") == 0) return param8[28];
			if (wcscmp(fieldName, L"param8_30") == 0) return param8[29];
			if (wcscmp(fieldName, L"param8_31") == 0) return param8[30];
			if (wcscmp(fieldName, L"param8_32") == 0) return param8[31];
			if (wcscmp(fieldName, L"param8_33") == 0) return param8[32];
			if (wcscmp(fieldName, L"param8_34") == 0) return param8[33];
			if (wcscmp(fieldName, L"param8_35") == 0) return param8[34];
			if (wcscmp(fieldName, L"param8_36") == 0) return param8[35];
			if (wcscmp(fieldName, L"param8_37") == 0) return param8[36];
			if (wcscmp(fieldName, L"param8_38") == 0) return param8[37];
			if (wcscmp(fieldName, L"param8_39") == 0) return param8[38];
			if (wcscmp(fieldName, L"param8_40") == 0) return param8[39];
			if (wcscmp(fieldName, L"param8_41") == 0) return param8[40];
			if (wcscmp(fieldName, L"param8_42") == 0) return param8[41];
			if (wcscmp(fieldName, L"param8_43") == 0) return param8[42];
			if (wcscmp(fieldName, L"param8_44") == 0) return param8[43];
			if (wcscmp(fieldName, L"param8_45") == 0) return param8[44];
			if (wcscmp(fieldName, L"param8_46") == 0) return param8[45];
			if (wcscmp(fieldName, L"param8_47") == 0) return param8[46];
			if (wcscmp(fieldName, L"param8_48") == 0) return param8[47];
			if (wcscmp(fieldName, L"param8_49") == 0) return param8[48];
			if (wcscmp(fieldName, L"param8_50") == 0) return param8[49];
			if (wcscmp(fieldName, L"param8_51") == 0) return param8[50];
			if (wcscmp(fieldName, L"param8_52") == 0) return param8[51];
			if (wcscmp(fieldName, L"param8_53") == 0) return param8[52];
			if (wcscmp(fieldName, L"param8_54") == 0) return param8[53];
			if (wcscmp(fieldName, L"param8_55") == 0) return param8[54];
			if (wcscmp(fieldName, L"param8_56") == 0) return param8[55];
			if (wcscmp(fieldName, L"param8_57") == 0) return param8[56];
			if (wcscmp(fieldName, L"param8_58") == 0) return param8[57];
			if (wcscmp(fieldName, L"param8_59") == 0) return param8[58];
			if (wcscmp(fieldName, L"param8_60") == 0) return param8[59];
			if (wcscmp(fieldName, L"param8_61") == 0) return param8[60];
			if (wcscmp(fieldName, L"param8_62") == 0) return param8[61];
			if (wcscmp(fieldName, L"param8_63") == 0) return param8[62];
			if (wcscmp(fieldName, L"param8_64") == 0) return param8[63];
			if (wcscmp(fieldName, L"param8_65") == 0) return param8[64];
			if (wcscmp(fieldName, L"param8_66") == 0) return param8[65];
			if (wcscmp(fieldName, L"param8_67") == 0) return param8[66];
			if (wcscmp(fieldName, L"param8_68") == 0) return param8[67];
			if (wcscmp(fieldName, L"param8_69") == 0) return param8[68];
			if (wcscmp(fieldName, L"param8_70") == 0) return param8[69];
			if (wcscmp(fieldName, L"param8_71") == 0) return param8[70];
			if (wcscmp(fieldName, L"param8_72") == 0) return param8[71];
			if (wcscmp(fieldName, L"param8_73") == 0) return param8[72];
			if (wcscmp(fieldName, L"param8_74") == 0) return param8[73];
			if (wcscmp(fieldName, L"param8_75") == 0) return param8[74];
			if (wcscmp(fieldName, L"param8_76") == 0) return param8[75];
			if (wcscmp(fieldName, L"param8_77") == 0) return param8[76];
			if (wcscmp(fieldName, L"param8_78") == 0) return param8[77];
			if (wcscmp(fieldName, L"param8_79") == 0) return param8[78];
			if (wcscmp(fieldName, L"param8_80") == 0) return param8[79];
			if (wcscmp(fieldName, L"param8_81") == 0) return param8[80];
			if (wcscmp(fieldName, L"param8_82") == 0) return param8[81];
			if (wcscmp(fieldName, L"param8_83") == 0) return param8[82];
			if (wcscmp(fieldName, L"param8_84") == 0) return param8[83];
			if (wcscmp(fieldName, L"param8_85") == 0) return param8[84];
			if (wcscmp(fieldName, L"param8_86") == 0) return param8[85];
			if (wcscmp(fieldName, L"param8_87") == 0) return param8[86];
			if (wcscmp(fieldName, L"param8_88") == 0) return param8[87];
			if (wcscmp(fieldName, L"param8_89") == 0) return param8[88];
			if (wcscmp(fieldName, L"param8_90") == 0) return param8[89];
			if (wcscmp(fieldName, L"param8_91") == 0) return param8[90];
			if (wcscmp(fieldName, L"param8_92") == 0) return param8[91];
			if (wcscmp(fieldName, L"decal_radius") == 0) return decal_radius;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"race") == 0) return Data::AnyFieldToStringConverter::ToString(&race);
			if (wcscmp(fieldName, L"sex") == 0) return Data::AnyFieldToStringConverter::ToString(&sex);
			if (wcscmp(fieldName, L"face_anim_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&face_anim_set_name);
			if (wcscmp(fieldName, L"anim_tree_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_tree_name);
			if (wcscmp(fieldName, L"face_mesh_name") == 0) return Data::AnyFieldToStringConverter::ToString(&face_mesh_name);
			if (wcscmp(fieldName, L"body_mesh_name") == 0) return Data::AnyFieldToStringConverter::ToString(&body_mesh_name);
			if (wcscmp(fieldName, L"voice_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&voice_set_name);
			if (wcscmp(fieldName, L"npc_dialogue_set") == 0) return Data::AnyFieldToStringConverter::ToString(&npc_dialogue_set);
			if (wcscmp(fieldName, L"attach_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&attach_effect);
			if (wcscmp(fieldName, L"body_material_name") == 0) return Data::AnyFieldToStringConverter::ToString(&body_material_name);
			if (wcscmp(fieldName, L"face_material_name") == 0) return Data::AnyFieldToStringConverter::ToString(&face_material_name);
			if (wcscmp(fieldName, L"npcattach1") == 0) return Data::AnyFieldToStringConverter::ToString(&npcattach1);
			if (wcscmp(fieldName, L"npcattach2") == 0) return Data::AnyFieldToStringConverter::ToString(&npcattach2);
			if (wcscmp(fieldName, L"npcattach_material1") == 0) return Data::AnyFieldToStringConverter::ToString(&npcattach_material1);
			if (wcscmp(fieldName, L"npcattach_material2") == 0) return Data::AnyFieldToStringConverter::ToString(&npcattach_material2);
			if (wcscmp(fieldName, L"enable_physbrst") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_physbrst);
			if (wcscmp(fieldName, L"pc_customize") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_customize);
			if (wcscmp(fieldName, L"unique_soundcue") == 0) return Data::AnyFieldToStringConverter::ToString(&unique_soundcue);
			if (wcscmp(fieldName, L"unique_soundculldist") == 0) return Data::AnyFieldToStringConverter::ToString(&unique_soundculldist);
			if (wcscmp(fieldName, L"unique_soundfadetime") == 0) return Data::AnyFieldToStringConverter::ToString(&unique_soundfadetime);
			if (wcscmp(fieldName, L"unique_delaystoptime") == 0) return Data::AnyFieldToStringConverter::ToString(&unique_delaystoptime);
			if (wcscmp(fieldName, L"sound_attenuation_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sound_attenuation_scale);
			if (wcscmp(fieldName, L"sound_volume_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&sound_volume_scale);
			if (wcscmp(fieldName, L"param8_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[0]));
			if (wcscmp(fieldName, L"param8_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[1]));
			if (wcscmp(fieldName, L"param8_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[2]));
			if (wcscmp(fieldName, L"param8_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[3]));
			if (wcscmp(fieldName, L"param8_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[4]));
			if (wcscmp(fieldName, L"param8_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[5]));
			if (wcscmp(fieldName, L"param8_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[6]));
			if (wcscmp(fieldName, L"param8_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[7]));
			if (wcscmp(fieldName, L"param8_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[8]));
			if (wcscmp(fieldName, L"param8_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[9]));
			if (wcscmp(fieldName, L"param8_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[10]));
			if (wcscmp(fieldName, L"param8_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[11]));
			if (wcscmp(fieldName, L"param8_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[12]));
			if (wcscmp(fieldName, L"param8_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[13]));
			if (wcscmp(fieldName, L"param8_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[14]));
			if (wcscmp(fieldName, L"param8_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[15]));
			if (wcscmp(fieldName, L"param8_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[16]));
			if (wcscmp(fieldName, L"param8_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[17]));
			if (wcscmp(fieldName, L"param8_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[18]));
			if (wcscmp(fieldName, L"param8_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[19]));
			if (wcscmp(fieldName, L"param8_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[20]));
			if (wcscmp(fieldName, L"param8_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[21]));
			if (wcscmp(fieldName, L"param8_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[22]));
			if (wcscmp(fieldName, L"param8_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[23]));
			if (wcscmp(fieldName, L"param8_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[24]));
			if (wcscmp(fieldName, L"param8_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[25]));
			if (wcscmp(fieldName, L"param8_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[26]));
			if (wcscmp(fieldName, L"param8_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[27]));
			if (wcscmp(fieldName, L"param8_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[28]));
			if (wcscmp(fieldName, L"param8_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[29]));
			if (wcscmp(fieldName, L"param8_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[30]));
			if (wcscmp(fieldName, L"param8_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[31]));
			if (wcscmp(fieldName, L"param8_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[32]));
			if (wcscmp(fieldName, L"param8_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[33]));
			if (wcscmp(fieldName, L"param8_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[34]));
			if (wcscmp(fieldName, L"param8_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[35]));
			if (wcscmp(fieldName, L"param8_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[36]));
			if (wcscmp(fieldName, L"param8_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[37]));
			if (wcscmp(fieldName, L"param8_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[38]));
			if (wcscmp(fieldName, L"param8_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[39]));
			if (wcscmp(fieldName, L"param8_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[40]));
			if (wcscmp(fieldName, L"param8_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[41]));
			if (wcscmp(fieldName, L"param8_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[42]));
			if (wcscmp(fieldName, L"param8_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[43]));
			if (wcscmp(fieldName, L"param8_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[44]));
			if (wcscmp(fieldName, L"param8_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[45]));
			if (wcscmp(fieldName, L"param8_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[46]));
			if (wcscmp(fieldName, L"param8_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[47]));
			if (wcscmp(fieldName, L"param8_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[48]));
			if (wcscmp(fieldName, L"param8_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[49]));
			if (wcscmp(fieldName, L"param8_51") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[50]));
			if (wcscmp(fieldName, L"param8_52") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[51]));
			if (wcscmp(fieldName, L"param8_53") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[52]));
			if (wcscmp(fieldName, L"param8_54") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[53]));
			if (wcscmp(fieldName, L"param8_55") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[54]));
			if (wcscmp(fieldName, L"param8_56") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[55]));
			if (wcscmp(fieldName, L"param8_57") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[56]));
			if (wcscmp(fieldName, L"param8_58") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[57]));
			if (wcscmp(fieldName, L"param8_59") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[58]));
			if (wcscmp(fieldName, L"param8_60") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[59]));
			if (wcscmp(fieldName, L"param8_61") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[60]));
			if (wcscmp(fieldName, L"param8_62") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[61]));
			if (wcscmp(fieldName, L"param8_63") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[62]));
			if (wcscmp(fieldName, L"param8_64") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[63]));
			if (wcscmp(fieldName, L"param8_65") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[64]));
			if (wcscmp(fieldName, L"param8_66") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[65]));
			if (wcscmp(fieldName, L"param8_67") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[66]));
			if (wcscmp(fieldName, L"param8_68") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[67]));
			if (wcscmp(fieldName, L"param8_69") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[68]));
			if (wcscmp(fieldName, L"param8_70") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[69]));
			if (wcscmp(fieldName, L"param8_71") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[70]));
			if (wcscmp(fieldName, L"param8_72") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[71]));
			if (wcscmp(fieldName, L"param8_73") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[72]));
			if (wcscmp(fieldName, L"param8_74") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[73]));
			if (wcscmp(fieldName, L"param8_75") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[74]));
			if (wcscmp(fieldName, L"param8_76") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[75]));
			if (wcscmp(fieldName, L"param8_77") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[76]));
			if (wcscmp(fieldName, L"param8_78") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[77]));
			if (wcscmp(fieldName, L"param8_79") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[78]));
			if (wcscmp(fieldName, L"param8_80") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[79]));
			if (wcscmp(fieldName, L"param8_81") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[80]));
			if (wcscmp(fieldName, L"param8_82") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[81]));
			if (wcscmp(fieldName, L"param8_83") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[82]));
			if (wcscmp(fieldName, L"param8_84") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[83]));
			if (wcscmp(fieldName, L"param8_85") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[84]));
			if (wcscmp(fieldName, L"param8_86") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[85]));
			if (wcscmp(fieldName, L"param8_87") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[86]));
			if (wcscmp(fieldName, L"param8_88") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[87]));
			if (wcscmp(fieldName, L"param8_89") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[88]));
			if (wcscmp(fieldName, L"param8_90") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[89]));
			if (wcscmp(fieldName, L"param8_91") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[90]));
			if (wcscmp(fieldName, L"param8_92") == 0) return Data::AnyFieldToStringConverter::ToString(&(param8[91]));
			if (wcscmp(fieldName, L"decal_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&decal_radius);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(face_anim_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) face_anim_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(face_anim_set_name));
			if (reinterpret_cast<std::uintptr_t>(anim_tree_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_tree_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_tree_name));
			if (reinterpret_cast<std::uintptr_t>(face_mesh_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) face_mesh_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(face_mesh_name));
			if (reinterpret_cast<std::uintptr_t>(body_mesh_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) body_mesh_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(body_mesh_name));
			if (reinterpret_cast<std::uintptr_t>(voice_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) voice_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(voice_set_name));
			if (reinterpret_cast<std::uintptr_t>(npc_dialogue_set) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) npc_dialogue_set = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(npc_dialogue_set));
			if (reinterpret_cast<std::uintptr_t>(attach_effect) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attach_effect = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attach_effect));
			if (reinterpret_cast<std::uintptr_t>(body_material_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) body_material_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(body_material_name));
			if (reinterpret_cast<std::uintptr_t>(face_material_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) face_material_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(face_material_name));
			if (reinterpret_cast<std::uintptr_t>(npcattach1) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) npcattach1 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(npcattach1));
			if (reinterpret_cast<std::uintptr_t>(npcattach2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) npcattach2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(npcattach2));
			if (reinterpret_cast<std::uintptr_t>(npcattach_material1) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) npcattach_material1 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(npcattach_material1));
			if (reinterpret_cast<std::uintptr_t>(npcattach_material2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) npcattach_material2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(npcattach_material2));
			if (reinterpret_cast<std::uintptr_t>(unique_soundcue) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) unique_soundcue = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(unique_soundcue));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 race;
std::wstring race_EnumValue() const {return Get_race_EnumValue(race);};
__int8 sex;
std::wstring sex_EnumValue() const {return Get_sex_EnumValue(sex);};
char Pad0[2];
wchar_t* face_anim_set_name;
wchar_t* anim_tree_name;
wchar_t* face_mesh_name;
wchar_t* body_mesh_name;
wchar_t* voice_set_name;
wchar_t* npc_dialogue_set;
wchar_t* attach_effect;
wchar_t* body_material_name;
wchar_t* face_material_name;
wchar_t* npcattach1;
wchar_t* npcattach2;
wchar_t* npcattach_material1;
wchar_t* npcattach_material2;
bool enable_physbrst;
bool pc_customize;
char Pad1[2];
wchar_t* unique_soundcue;
float unique_soundculldist;
float unique_soundfadetime;
float unique_delaystoptime;
float sound_attenuation_scale;
float sound_volume_scale;
__int8 param8[92];
float decal_radius;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 84; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) creatureappearance_RecordPtr // : DrRecordPtr
	{
		creatureappearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::creatureappearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}