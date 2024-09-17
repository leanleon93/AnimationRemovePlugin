/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_observer_skill_slot_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_ui_view_type_EnumValue(__int8 value);
		static std::wstring Get_condition_check_flag_EnumValue(__int16 value);
		static std::wstring Get_condition_check_flag_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"slot") == 0) return slot;
			if (wcscmp(fieldName, L"skill3") == 0) return skill3;
			if (wcscmp(fieldName, L"skill3_1") == 0) return skill3[0];
			if (wcscmp(fieldName, L"skill3_2") == 0) return skill3[1];
			if (wcscmp(fieldName, L"skill3_3") == 0) return skill3[2];
			if (wcscmp(fieldName, L"skill3_4") == 0) return skill3[3];
			if (wcscmp(fieldName, L"skill3_5") == 0) return skill3[4];
			if (wcscmp(fieldName, L"skill3_6") == 0) return skill3[5];
			if (wcscmp(fieldName, L"skill3_7") == 0) return skill3[6];
			if (wcscmp(fieldName, L"skill3_8") == 0) return skill3[7];
			if (wcscmp(fieldName, L"skill3_9") == 0) return skill3[8];
			if (wcscmp(fieldName, L"skill3_10") == 0) return skill3[9];
			if (wcscmp(fieldName, L"skill3_11") == 0) return skill3[10];
			if (wcscmp(fieldName, L"skill3_12") == 0) return skill3[11];
			if (wcscmp(fieldName, L"skill3_13") == 0) return skill3[12];
			if (wcscmp(fieldName, L"skill3_14") == 0) return skill3[13];
			if (wcscmp(fieldName, L"skill3_15") == 0) return skill3[14];
			if (wcscmp(fieldName, L"skill3_16") == 0) return skill3[15];
			if (wcscmp(fieldName, L"skill3_17") == 0) return skill3[16];
			if (wcscmp(fieldName, L"skill3_18") == 0) return skill3[17];
			if (wcscmp(fieldName, L"skill3_19") == 0) return skill3[18];
			if (wcscmp(fieldName, L"skill3_20") == 0) return skill3[19];
			if (wcscmp(fieldName, L"skill3_21") == 0) return skill3[20];
			if (wcscmp(fieldName, L"skill3_22") == 0) return skill3[21];
			if (wcscmp(fieldName, L"skill3_23") == 0) return skill3[22];
			if (wcscmp(fieldName, L"skill3_24") == 0) return skill3[23];
			if (wcscmp(fieldName, L"skill3_25") == 0) return skill3[24];
			if (wcscmp(fieldName, L"skill3_26") == 0) return skill3[25];
			if (wcscmp(fieldName, L"skill3_27") == 0) return skill3[26];
			if (wcscmp(fieldName, L"skill3_28") == 0) return skill3[27];
			if (wcscmp(fieldName, L"skill3_29") == 0) return skill3[28];
			if (wcscmp(fieldName, L"skill3_30") == 0) return skill3[29];
			if (wcscmp(fieldName, L"skill3_31") == 0) return skill3[30];
			if (wcscmp(fieldName, L"skill3_32") == 0) return skill3[31];
			if (wcscmp(fieldName, L"skill3_33") == 0) return skill3[32];
			if (wcscmp(fieldName, L"skill3_34") == 0) return skill3[33];
			if (wcscmp(fieldName, L"skill3_35") == 0) return skill3[34];
			if (wcscmp(fieldName, L"skill3_36") == 0) return skill3[35];
			if (wcscmp(fieldName, L"skill3_37") == 0) return skill3[36];
			if (wcscmp(fieldName, L"skill3_38") == 0) return skill3[37];
			if (wcscmp(fieldName, L"skill3_39") == 0) return skill3[38];
			if (wcscmp(fieldName, L"skill3_40") == 0) return skill3[39];
			if (wcscmp(fieldName, L"ui_action_alias") == 0) return ui_action_alias;
			if (wcscmp(fieldName, L"ui_action_alias_1") == 0) return ui_action_alias[0];
			if (wcscmp(fieldName, L"ui_action_alias_2") == 0) return ui_action_alias[1];
			if (wcscmp(fieldName, L"ui_action_alias_3") == 0) return ui_action_alias[2];
			if (wcscmp(fieldName, L"ui_action_alias_4") == 0) return ui_action_alias[3];
			if (wcscmp(fieldName, L"ui_action_alias_5") == 0) return ui_action_alias[4];
			if (wcscmp(fieldName, L"ui_action_alias_6") == 0) return ui_action_alias[5];
			if (wcscmp(fieldName, L"ui_action_alias_7") == 0) return ui_action_alias[6];
			if (wcscmp(fieldName, L"ui_action_alias_8") == 0) return ui_action_alias[7];
			if (wcscmp(fieldName, L"ui_action_alias_9") == 0) return ui_action_alias[8];
			if (wcscmp(fieldName, L"ui_action_alias_10") == 0) return ui_action_alias[9];
			if (wcscmp(fieldName, L"ui_action_alias_11") == 0) return ui_action_alias[10];
			if (wcscmp(fieldName, L"ui_action_alias_12") == 0) return ui_action_alias[11];
			if (wcscmp(fieldName, L"ui_action_alias_13") == 0) return ui_action_alias[12];
			if (wcscmp(fieldName, L"ui_action_alias_14") == 0) return ui_action_alias[13];
			if (wcscmp(fieldName, L"ui_action_alias_15") == 0) return ui_action_alias[14];
			if (wcscmp(fieldName, L"ui_action_alias_16") == 0) return ui_action_alias[15];
			if (wcscmp(fieldName, L"ui_action_alias_17") == 0) return ui_action_alias[16];
			if (wcscmp(fieldName, L"ui_action_alias_18") == 0) return ui_action_alias[17];
			if (wcscmp(fieldName, L"ui_action_alias_19") == 0) return ui_action_alias[18];
			if (wcscmp(fieldName, L"ui_action_alias_20") == 0) return ui_action_alias[19];
			if (wcscmp(fieldName, L"ui_action_alias_21") == 0) return ui_action_alias[20];
			if (wcscmp(fieldName, L"ui_action_alias_22") == 0) return ui_action_alias[21];
			if (wcscmp(fieldName, L"ui_action_alias_23") == 0) return ui_action_alias[22];
			if (wcscmp(fieldName, L"ui_action_alias_24") == 0) return ui_action_alias[23];
			if (wcscmp(fieldName, L"ui_action_alias_25") == 0) return ui_action_alias[24];
			if (wcscmp(fieldName, L"ui_action_alias_26") == 0) return ui_action_alias[25];
			if (wcscmp(fieldName, L"ui_action_alias_27") == 0) return ui_action_alias[26];
			if (wcscmp(fieldName, L"ui_action_alias_28") == 0) return ui_action_alias[27];
			if (wcscmp(fieldName, L"ui_action_alias_29") == 0) return ui_action_alias[28];
			if (wcscmp(fieldName, L"ui_action_alias_30") == 0) return ui_action_alias[29];
			if (wcscmp(fieldName, L"ui_action_alias_31") == 0) return ui_action_alias[30];
			if (wcscmp(fieldName, L"ui_action_alias_32") == 0) return ui_action_alias[31];
			if (wcscmp(fieldName, L"ui_action_alias_33") == 0) return ui_action_alias[32];
			if (wcscmp(fieldName, L"ui_action_alias_34") == 0) return ui_action_alias[33];
			if (wcscmp(fieldName, L"ui_action_alias_35") == 0) return ui_action_alias[34];
			if (wcscmp(fieldName, L"ui_action_alias_36") == 0) return ui_action_alias[35];
			if (wcscmp(fieldName, L"ui_action_alias_37") == 0) return ui_action_alias[36];
			if (wcscmp(fieldName, L"ui_action_alias_38") == 0) return ui_action_alias[37];
			if (wcscmp(fieldName, L"ui_action_alias_39") == 0) return ui_action_alias[38];
			if (wcscmp(fieldName, L"ui_action_alias_40") == 0) return ui_action_alias[39];
			if (wcscmp(fieldName, L"ui_view_type") == 0) return ui_view_type;
			if (wcscmp(fieldName, L"use_ui_context") == 0) return use_ui_context;
			if (wcscmp(fieldName, L"use_observer_only") == 0) return use_observer_only;
			if (wcscmp(fieldName, L"use_ui_defence_skill") == 0) return use_ui_defence_skill;
			if (wcscmp(fieldName, L"condition_check") == 0) return condition_check;
			if (wcscmp(fieldName, L"condition_check_flag") == 0) return condition_check_flag;
			if (wcscmp(fieldName, L"condition_check_flag_1") == 0) return condition_check_flag[0];
			if (wcscmp(fieldName, L"condition_check_flag_2") == 0) return condition_check_flag[1];
			if (wcscmp(fieldName, L"condition_check_flag_3") == 0) return condition_check_flag[2];
			if (wcscmp(fieldName, L"condition_check_flag_4") == 0) return condition_check_flag[3];
			if (wcscmp(fieldName, L"condition_check_flag_op") == 0) return condition_check_flag_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"job") == 0) return Data::AnyFieldToStringConverter::ToString(&job);
			if (wcscmp(fieldName, L"slot") == 0) return Data::AnyFieldToStringConverter::ToString(&slot);
			if (wcscmp(fieldName, L"skill3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[0]));
			if (wcscmp(fieldName, L"skill3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[1]));
			if (wcscmp(fieldName, L"skill3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[2]));
			if (wcscmp(fieldName, L"skill3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[3]));
			if (wcscmp(fieldName, L"skill3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[4]));
			if (wcscmp(fieldName, L"skill3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[5]));
			if (wcscmp(fieldName, L"skill3_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[6]));
			if (wcscmp(fieldName, L"skill3_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[7]));
			if (wcscmp(fieldName, L"skill3_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[8]));
			if (wcscmp(fieldName, L"skill3_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[9]));
			if (wcscmp(fieldName, L"skill3_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[10]));
			if (wcscmp(fieldName, L"skill3_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[11]));
			if (wcscmp(fieldName, L"skill3_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[12]));
			if (wcscmp(fieldName, L"skill3_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[13]));
			if (wcscmp(fieldName, L"skill3_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[14]));
			if (wcscmp(fieldName, L"skill3_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[15]));
			if (wcscmp(fieldName, L"skill3_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[16]));
			if (wcscmp(fieldName, L"skill3_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[17]));
			if (wcscmp(fieldName, L"skill3_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[18]));
			if (wcscmp(fieldName, L"skill3_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[19]));
			if (wcscmp(fieldName, L"skill3_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[20]));
			if (wcscmp(fieldName, L"skill3_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[21]));
			if (wcscmp(fieldName, L"skill3_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[22]));
			if (wcscmp(fieldName, L"skill3_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[23]));
			if (wcscmp(fieldName, L"skill3_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[24]));
			if (wcscmp(fieldName, L"skill3_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[25]));
			if (wcscmp(fieldName, L"skill3_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[26]));
			if (wcscmp(fieldName, L"skill3_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[27]));
			if (wcscmp(fieldName, L"skill3_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[28]));
			if (wcscmp(fieldName, L"skill3_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[29]));
			if (wcscmp(fieldName, L"skill3_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[30]));
			if (wcscmp(fieldName, L"skill3_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[31]));
			if (wcscmp(fieldName, L"skill3_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[32]));
			if (wcscmp(fieldName, L"skill3_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[33]));
			if (wcscmp(fieldName, L"skill3_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[34]));
			if (wcscmp(fieldName, L"skill3_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[35]));
			if (wcscmp(fieldName, L"skill3_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[36]));
			if (wcscmp(fieldName, L"skill3_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[37]));
			if (wcscmp(fieldName, L"skill3_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[38]));
			if (wcscmp(fieldName, L"skill3_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[39]));
			if (wcscmp(fieldName, L"ui_action_alias_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[0]));
			if (wcscmp(fieldName, L"ui_action_alias_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[1]));
			if (wcscmp(fieldName, L"ui_action_alias_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[2]));
			if (wcscmp(fieldName, L"ui_action_alias_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[3]));
			if (wcscmp(fieldName, L"ui_action_alias_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[4]));
			if (wcscmp(fieldName, L"ui_action_alias_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[5]));
			if (wcscmp(fieldName, L"ui_action_alias_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[6]));
			if (wcscmp(fieldName, L"ui_action_alias_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[7]));
			if (wcscmp(fieldName, L"ui_action_alias_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[8]));
			if (wcscmp(fieldName, L"ui_action_alias_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[9]));
			if (wcscmp(fieldName, L"ui_action_alias_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[10]));
			if (wcscmp(fieldName, L"ui_action_alias_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[11]));
			if (wcscmp(fieldName, L"ui_action_alias_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[12]));
			if (wcscmp(fieldName, L"ui_action_alias_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[13]));
			if (wcscmp(fieldName, L"ui_action_alias_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[14]));
			if (wcscmp(fieldName, L"ui_action_alias_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[15]));
			if (wcscmp(fieldName, L"ui_action_alias_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[16]));
			if (wcscmp(fieldName, L"ui_action_alias_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[17]));
			if (wcscmp(fieldName, L"ui_action_alias_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[18]));
			if (wcscmp(fieldName, L"ui_action_alias_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[19]));
			if (wcscmp(fieldName, L"ui_action_alias_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[20]));
			if (wcscmp(fieldName, L"ui_action_alias_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[21]));
			if (wcscmp(fieldName, L"ui_action_alias_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[22]));
			if (wcscmp(fieldName, L"ui_action_alias_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[23]));
			if (wcscmp(fieldName, L"ui_action_alias_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[24]));
			if (wcscmp(fieldName, L"ui_action_alias_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[25]));
			if (wcscmp(fieldName, L"ui_action_alias_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[26]));
			if (wcscmp(fieldName, L"ui_action_alias_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[27]));
			if (wcscmp(fieldName, L"ui_action_alias_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[28]));
			if (wcscmp(fieldName, L"ui_action_alias_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[29]));
			if (wcscmp(fieldName, L"ui_action_alias_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[30]));
			if (wcscmp(fieldName, L"ui_action_alias_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[31]));
			if (wcscmp(fieldName, L"ui_action_alias_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[32]));
			if (wcscmp(fieldName, L"ui_action_alias_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[33]));
			if (wcscmp(fieldName, L"ui_action_alias_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[34]));
			if (wcscmp(fieldName, L"ui_action_alias_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[35]));
			if (wcscmp(fieldName, L"ui_action_alias_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[36]));
			if (wcscmp(fieldName, L"ui_action_alias_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[37]));
			if (wcscmp(fieldName, L"ui_action_alias_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[38]));
			if (wcscmp(fieldName, L"ui_action_alias_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_action_alias[39]));
			if (wcscmp(fieldName, L"ui_view_type") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_view_type);
			if (wcscmp(fieldName, L"use_ui_context") == 0) return Data::AnyFieldToStringConverter::ToString(&use_ui_context);
			if (wcscmp(fieldName, L"use_observer_only") == 0) return Data::AnyFieldToStringConverter::ToString(&use_observer_only);
			if (wcscmp(fieldName, L"use_ui_defence_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&use_ui_defence_skill);
			if (wcscmp(fieldName, L"condition_check") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_check);
			if (wcscmp(fieldName, L"condition_check_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_check_flag[0]));
			if (wcscmp(fieldName, L"condition_check_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_check_flag[1]));
			if (wcscmp(fieldName, L"condition_check_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_check_flag[2]));
			if (wcscmp(fieldName, L"condition_check_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_check_flag[3]));
			if (wcscmp(fieldName, L"condition_check_flag_op") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_check_flag_op);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			for (int i = 0; i < 40; i++) {
				if (reinterpret_cast<std::uintptr_t>(ui_action_alias[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) ui_action_alias[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(ui_action_alias[i]));
			}
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 job;
std::wstring job_EnumValue() const {return Get_job_EnumValue(job);};
char Pad0[3];
__int32 slot;
Data::TableRef skill3[40];
int skill3_tableId(){return 324;};
wchar_t* ui_action_alias[40];
__int8 ui_view_type;
std::wstring ui_view_type_EnumValue() const {return Get_ui_view_type_EnumValue(ui_view_type);};
bool use_ui_context;
bool use_observer_only;
bool use_ui_defence_skill;
bool condition_check;
char Pad1[1];
__int16 condition_check_flag[4];
std::wstring condition_check_flag_EnumValue(int index) const {return Get_condition_check_flag_EnumValue(condition_check_flag[index]);};
__int8 condition_check_flag_op;
std::wstring condition_check_flag_op_EnumValue() const {return Get_condition_check_flag_op_EnumValue(condition_check_flag_op);};

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 109; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_observer_skill_slot_RecordPtr // : DrRecordPtr
	{
		duel_observer_skill_slot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_observer_skill_slot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}