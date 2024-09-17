/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_mission_step_Record : DrEl
	{
	private:
		static std::wstring Get_open_condition_type_EnumValue(__int8 value);
		static std::wstring Get_viewable_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"event") == 0) return event;
			if (wcscmp(fieldName, L"step_number") == 0) return step_number;
			if (wcscmp(fieldName, L"open_condition_type") == 0) return open_condition_type;
			if (wcscmp(fieldName, L"open_condition_value") == 0) return open_condition_value;
			if (wcscmp(fieldName, L"viewable_type") == 0) return viewable_type;
			if (wcscmp(fieldName, L"mission_task") == 0) return mission_task;
			if (wcscmp(fieldName, L"mission_task_1") == 0) return mission_task[0];
			if (wcscmp(fieldName, L"mission_task_2") == 0) return mission_task[1];
			if (wcscmp(fieldName, L"mission_task_3") == 0) return mission_task[2];
			if (wcscmp(fieldName, L"mission_task_4") == 0) return mission_task[3];
			if (wcscmp(fieldName, L"mission_task_5") == 0) return mission_task[4];
			if (wcscmp(fieldName, L"mission_task_6") == 0) return mission_task[5];
			if (wcscmp(fieldName, L"mission_task_7") == 0) return mission_task[6];
			if (wcscmp(fieldName, L"mission_task_8") == 0) return mission_task[7];
			if (wcscmp(fieldName, L"mission_task_9") == 0) return mission_task[8];
			if (wcscmp(fieldName, L"mission_task_10") == 0) return mission_task[9];
			if (wcscmp(fieldName, L"mission_task_11") == 0) return mission_task[10];
			if (wcscmp(fieldName, L"mission_task_12") == 0) return mission_task[11];
			if (wcscmp(fieldName, L"mission_task_13") == 0) return mission_task[12];
			if (wcscmp(fieldName, L"mission_task_14") == 0) return mission_task[13];
			if (wcscmp(fieldName, L"mission_task_15") == 0) return mission_task[14];
			if (wcscmp(fieldName, L"mission_task_16") == 0) return mission_task[15];
			if (wcscmp(fieldName, L"mission_task_17") == 0) return mission_task[16];
			if (wcscmp(fieldName, L"mission_task_18") == 0) return mission_task[17];
			if (wcscmp(fieldName, L"mission_task_19") == 0) return mission_task[18];
			if (wcscmp(fieldName, L"mission_task_20") == 0) return mission_task[19];
			if (wcscmp(fieldName, L"mission_task_21") == 0) return mission_task[20];
			if (wcscmp(fieldName, L"mission_task_22") == 0) return mission_task[21];
			if (wcscmp(fieldName, L"mission_task_23") == 0) return mission_task[22];
			if (wcscmp(fieldName, L"mission_task_24") == 0) return mission_task[23];
			if (wcscmp(fieldName, L"mission_task_25") == 0) return mission_task[24];
			if (wcscmp(fieldName, L"mission_task_26") == 0) return mission_task[25];
			if (wcscmp(fieldName, L"mission_task_27") == 0) return mission_task[26];
			if (wcscmp(fieldName, L"mission_task_28") == 0) return mission_task[27];
			if (wcscmp(fieldName, L"mission_task_29") == 0) return mission_task[28];
			if (wcscmp(fieldName, L"mission_task_30") == 0) return mission_task[29];
			if (wcscmp(fieldName, L"mission_task_31") == 0) return mission_task[30];
			if (wcscmp(fieldName, L"mission_task_32") == 0) return mission_task[31];
			if (wcscmp(fieldName, L"mission_task_33") == 0) return mission_task[32];
			if (wcscmp(fieldName, L"mission_task_34") == 0) return mission_task[33];
			if (wcscmp(fieldName, L"mission_task_35") == 0) return mission_task[34];
			if (wcscmp(fieldName, L"mission_task_36") == 0) return mission_task[35];
			if (wcscmp(fieldName, L"mission_task_37") == 0) return mission_task[36];
			if (wcscmp(fieldName, L"mission_task_38") == 0) return mission_task[37];
			if (wcscmp(fieldName, L"mission_task_39") == 0) return mission_task[38];
			if (wcscmp(fieldName, L"mission_task_40") == 0) return mission_task[39];
			if (wcscmp(fieldName, L"mission_task_41") == 0) return mission_task[40];
			if (wcscmp(fieldName, L"mission_task_42") == 0) return mission_task[41];
			if (wcscmp(fieldName, L"mission_task_43") == 0) return mission_task[42];
			if (wcscmp(fieldName, L"mission_task_44") == 0) return mission_task[43];
			if (wcscmp(fieldName, L"mission_task_45") == 0) return mission_task[44];
			if (wcscmp(fieldName, L"mission_task_46") == 0) return mission_task[45];
			if (wcscmp(fieldName, L"mission_task_47") == 0) return mission_task[46];
			if (wcscmp(fieldName, L"mission_task_48") == 0) return mission_task[47];
			if (wcscmp(fieldName, L"mission_task_49") == 0) return mission_task[48];
			if (wcscmp(fieldName, L"mission_task_50") == 0) return mission_task[49];
			if (wcscmp(fieldName, L"mission_step_reward_item") == 0) return mission_step_reward_item;
			if (wcscmp(fieldName, L"mission_step_reward_item_1") == 0) return mission_step_reward_item[0];
			if (wcscmp(fieldName, L"mission_step_reward_item_2") == 0) return mission_step_reward_item[1];
			if (wcscmp(fieldName, L"mission_step_reward_item_3") == 0) return mission_step_reward_item[2];
			if (wcscmp(fieldName, L"mission_step_reward_item_4") == 0) return mission_step_reward_item[3];
			if (wcscmp(fieldName, L"mission_step_reward_item_count") == 0) return mission_step_reward_item_count;
			if (wcscmp(fieldName, L"mission_step_reward_item_count_1") == 0) return mission_step_reward_item_count[0];
			if (wcscmp(fieldName, L"mission_step_reward_item_count_2") == 0) return mission_step_reward_item_count[1];
			if (wcscmp(fieldName, L"mission_step_reward_item_count_3") == 0) return mission_step_reward_item_count[2];
			if (wcscmp(fieldName, L"mission_step_reward_item_count_4") == 0) return mission_step_reward_item_count[3];
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name_en") == 0) return name_en;
			if (wcscmp(fieldName, L"name_fr") == 0) return name_fr;
			if (wcscmp(fieldName, L"name_de") == 0) return name_de;
			if (wcscmp(fieldName, L"name_pt") == 0) return name_pt;
			if (wcscmp(fieldName, L"name_th") == 0) return name_th;
			if (wcscmp(fieldName, L"name_vn") == 0) return name_vn;
			if (wcscmp(fieldName, L"name_text") == 0) return name_text;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"description_en") == 0) return description_en;
			if (wcscmp(fieldName, L"description_fr") == 0) return description_fr;
			if (wcscmp(fieldName, L"description_de") == 0) return description_de;
			if (wcscmp(fieldName, L"description_pt") == 0) return description_pt;
			if (wcscmp(fieldName, L"description_th") == 0) return description_th;
			if (wcscmp(fieldName, L"description_vn") == 0) return description_vn;
			if (wcscmp(fieldName, L"description_text") == 0) return description_text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"event") == 0) return Data::AnyFieldToStringConverter::ToString(&event);
			if (wcscmp(fieldName, L"step_number") == 0) return Data::AnyFieldToStringConverter::ToString(&step_number);
			if (wcscmp(fieldName, L"open_condition_type") == 0) return Data::AnyFieldToStringConverter::ToString(&open_condition_type);
			if (wcscmp(fieldName, L"open_condition_value") == 0) return Data::AnyFieldToStringConverter::ToString(&open_condition_value);
			if (wcscmp(fieldName, L"viewable_type") == 0) return Data::AnyFieldToStringConverter::ToString(&viewable_type);
			if (wcscmp(fieldName, L"mission_task_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[0]));
			if (wcscmp(fieldName, L"mission_task_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[1]));
			if (wcscmp(fieldName, L"mission_task_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[2]));
			if (wcscmp(fieldName, L"mission_task_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[3]));
			if (wcscmp(fieldName, L"mission_task_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[4]));
			if (wcscmp(fieldName, L"mission_task_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[5]));
			if (wcscmp(fieldName, L"mission_task_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[6]));
			if (wcscmp(fieldName, L"mission_task_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[7]));
			if (wcscmp(fieldName, L"mission_task_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[8]));
			if (wcscmp(fieldName, L"mission_task_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[9]));
			if (wcscmp(fieldName, L"mission_task_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[10]));
			if (wcscmp(fieldName, L"mission_task_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[11]));
			if (wcscmp(fieldName, L"mission_task_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[12]));
			if (wcscmp(fieldName, L"mission_task_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[13]));
			if (wcscmp(fieldName, L"mission_task_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[14]));
			if (wcscmp(fieldName, L"mission_task_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[15]));
			if (wcscmp(fieldName, L"mission_task_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[16]));
			if (wcscmp(fieldName, L"mission_task_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[17]));
			if (wcscmp(fieldName, L"mission_task_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[18]));
			if (wcscmp(fieldName, L"mission_task_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[19]));
			if (wcscmp(fieldName, L"mission_task_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[20]));
			if (wcscmp(fieldName, L"mission_task_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[21]));
			if (wcscmp(fieldName, L"mission_task_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[22]));
			if (wcscmp(fieldName, L"mission_task_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[23]));
			if (wcscmp(fieldName, L"mission_task_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[24]));
			if (wcscmp(fieldName, L"mission_task_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[25]));
			if (wcscmp(fieldName, L"mission_task_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[26]));
			if (wcscmp(fieldName, L"mission_task_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[27]));
			if (wcscmp(fieldName, L"mission_task_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[28]));
			if (wcscmp(fieldName, L"mission_task_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[29]));
			if (wcscmp(fieldName, L"mission_task_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[30]));
			if (wcscmp(fieldName, L"mission_task_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[31]));
			if (wcscmp(fieldName, L"mission_task_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[32]));
			if (wcscmp(fieldName, L"mission_task_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[33]));
			if (wcscmp(fieldName, L"mission_task_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[34]));
			if (wcscmp(fieldName, L"mission_task_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[35]));
			if (wcscmp(fieldName, L"mission_task_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[36]));
			if (wcscmp(fieldName, L"mission_task_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[37]));
			if (wcscmp(fieldName, L"mission_task_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[38]));
			if (wcscmp(fieldName, L"mission_task_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[39]));
			if (wcscmp(fieldName, L"mission_task_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[40]));
			if (wcscmp(fieldName, L"mission_task_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[41]));
			if (wcscmp(fieldName, L"mission_task_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[42]));
			if (wcscmp(fieldName, L"mission_task_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[43]));
			if (wcscmp(fieldName, L"mission_task_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[44]));
			if (wcscmp(fieldName, L"mission_task_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[45]));
			if (wcscmp(fieldName, L"mission_task_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[46]));
			if (wcscmp(fieldName, L"mission_task_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[47]));
			if (wcscmp(fieldName, L"mission_task_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[48]));
			if (wcscmp(fieldName, L"mission_task_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_task[49]));
			if (wcscmp(fieldName, L"mission_step_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item[0]));
			if (wcscmp(fieldName, L"mission_step_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item[1]));
			if (wcscmp(fieldName, L"mission_step_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item[2]));
			if (wcscmp(fieldName, L"mission_step_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item[3]));
			if (wcscmp(fieldName, L"mission_step_reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item_count[0]));
			if (wcscmp(fieldName, L"mission_step_reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item_count[1]));
			if (wcscmp(fieldName, L"mission_step_reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item_count[2]));
			if (wcscmp(fieldName, L"mission_step_reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(mission_step_reward_item_count[3]));
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name_en") == 0) return Data::AnyFieldToStringConverter::ToString(&name_en);
			if (wcscmp(fieldName, L"name_fr") == 0) return Data::AnyFieldToStringConverter::ToString(&name_fr);
			if (wcscmp(fieldName, L"name_de") == 0) return Data::AnyFieldToStringConverter::ToString(&name_de);
			if (wcscmp(fieldName, L"name_pt") == 0) return Data::AnyFieldToStringConverter::ToString(&name_pt);
			if (wcscmp(fieldName, L"name_th") == 0) return Data::AnyFieldToStringConverter::ToString(&name_th);
			if (wcscmp(fieldName, L"name_vn") == 0) return Data::AnyFieldToStringConverter::ToString(&name_vn);
			if (wcscmp(fieldName, L"name_text") == 0) return Data::AnyFieldToStringConverter::ToString(&name_text);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"description_en") == 0) return Data::AnyFieldToStringConverter::ToString(&description_en);
			if (wcscmp(fieldName, L"description_fr") == 0) return Data::AnyFieldToStringConverter::ToString(&description_fr);
			if (wcscmp(fieldName, L"description_de") == 0) return Data::AnyFieldToStringConverter::ToString(&description_de);
			if (wcscmp(fieldName, L"description_pt") == 0) return Data::AnyFieldToStringConverter::ToString(&description_pt);
			if (wcscmp(fieldName, L"description_th") == 0) return Data::AnyFieldToStringConverter::ToString(&description_th);
			if (wcscmp(fieldName, L"description_vn") == 0) return Data::AnyFieldToStringConverter::ToString(&description_vn);
			if (wcscmp(fieldName, L"description_text") == 0) return Data::AnyFieldToStringConverter::ToString(&description_text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
			if (reinterpret_cast<std::uintptr_t>(name_en) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_en = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_en));
			if (reinterpret_cast<std::uintptr_t>(name_fr) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_fr = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_fr));
			if (reinterpret_cast<std::uintptr_t>(name_de) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_de = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_de));
			if (reinterpret_cast<std::uintptr_t>(name_pt) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_pt = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_pt));
			if (reinterpret_cast<std::uintptr_t>(name_th) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_th = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_th));
			if (reinterpret_cast<std::uintptr_t>(name_vn) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_vn = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_vn));
			if (reinterpret_cast<std::uintptr_t>(description) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description));
			if (reinterpret_cast<std::uintptr_t>(description_en) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_en = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_en));
			if (reinterpret_cast<std::uintptr_t>(description_fr) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_fr = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_fr));
			if (reinterpret_cast<std::uintptr_t>(description_de) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_de = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_de));
			if (reinterpret_cast<std::uintptr_t>(description_pt) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_pt = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_pt));
			if (reinterpret_cast<std::uintptr_t>(description_th) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_th = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_th));
			if (reinterpret_cast<std::uintptr_t>(description_vn) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_vn = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_vn));
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
Data::TableRef event;
int event_tableId(){return 368;};
__int8 step_number;
__int8 open_condition_type;
std::wstring open_condition_type_EnumValue() const {return Get_open_condition_type_EnumValue(open_condition_type);};
__int16 open_condition_value;
__int8 viewable_type;
std::wstring viewable_type_EnumValue() const {return Get_viewable_type_EnumValue(viewable_type);};
char Pad0[3];
Data::TableRef mission_task[50];
int mission_task_tableId(){return 372;};
Data::TableRef mission_step_reward_item[4];
int mission_step_reward_item_tableId(){return 189;};
__int16 mission_step_reward_item_count[4];
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
Data::TableRef name_text;
int name_text_tableId(){return 405;};
wchar_t* description;
wchar_t* description_en;
wchar_t* description_fr;
wchar_t* description_de;
wchar_t* description_pt;
wchar_t* description_th;
wchar_t* description_vn;
Data::TableRef description_text;
int description_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(7, 1); }
		static __int16 TableId() { return 371; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_step_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_step_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_mission_step_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}