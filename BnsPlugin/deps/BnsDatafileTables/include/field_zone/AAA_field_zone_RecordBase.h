/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class field_zone_RecordSubType : __int32
    {
		field_zone_record_sub_normal = 0,
		field_zone_record_sub_guild_battle_field_entrance = 1,
		field_zone_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct field_zone_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"zone_1") == 0) return zone[0];
			if (wcscmp(fieldName, L"zone_2") == 0) return zone[1];
			if (wcscmp(fieldName, L"zone_3") == 0) return zone[2];
			if (wcscmp(fieldName, L"zone_4") == 0) return zone[3];
			if (wcscmp(fieldName, L"zone_5") == 0) return zone[4];
			if (wcscmp(fieldName, L"zone_6") == 0) return zone[5];
			if (wcscmp(fieldName, L"zone_7") == 0) return zone[6];
			if (wcscmp(fieldName, L"zone_8") == 0) return zone[7];
			if (wcscmp(fieldName, L"zone_9") == 0) return zone[8];
			if (wcscmp(fieldName, L"zone_10") == 0) return zone[9];
			if (wcscmp(fieldName, L"zone_11") == 0) return zone[10];
			if (wcscmp(fieldName, L"zone_12") == 0) return zone[11];
			if (wcscmp(fieldName, L"zone_13") == 0) return zone[12];
			if (wcscmp(fieldName, L"zone_14") == 0) return zone[13];
			if (wcscmp(fieldName, L"zone_15") == 0) return zone[14];
			if (wcscmp(fieldName, L"zone_16") == 0) return zone[15];
			if (wcscmp(fieldName, L"zone_17") == 0) return zone[16];
			if (wcscmp(fieldName, L"zone_18") == 0) return zone[17];
			if (wcscmp(fieldName, L"zone_19") == 0) return zone[18];
			if (wcscmp(fieldName, L"zone_20") == 0) return zone[19];
			if (wcscmp(fieldName, L"zone_21") == 0) return zone[20];
			if (wcscmp(fieldName, L"zone_22") == 0) return zone[21];
			if (wcscmp(fieldName, L"zone_23") == 0) return zone[22];
			if (wcscmp(fieldName, L"zone_24") == 0) return zone[23];
			if (wcscmp(fieldName, L"zone_25") == 0) return zone[24];
			if (wcscmp(fieldName, L"zone_26") == 0) return zone[25];
			if (wcscmp(fieldName, L"zone_27") == 0) return zone[26];
			if (wcscmp(fieldName, L"zone_28") == 0) return zone[27];
			if (wcscmp(fieldName, L"zone_29") == 0) return zone[28];
			if (wcscmp(fieldName, L"zone_30") == 0) return zone[29];
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return respawn_confirm_text;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[0]));
			if (wcscmp(fieldName, L"zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[1]));
			if (wcscmp(fieldName, L"zone_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[2]));
			if (wcscmp(fieldName, L"zone_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[3]));
			if (wcscmp(fieldName, L"zone_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[4]));
			if (wcscmp(fieldName, L"zone_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[5]));
			if (wcscmp(fieldName, L"zone_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[6]));
			if (wcscmp(fieldName, L"zone_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[7]));
			if (wcscmp(fieldName, L"zone_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[8]));
			if (wcscmp(fieldName, L"zone_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[9]));
			if (wcscmp(fieldName, L"zone_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[10]));
			if (wcscmp(fieldName, L"zone_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[11]));
			if (wcscmp(fieldName, L"zone_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[12]));
			if (wcscmp(fieldName, L"zone_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[13]));
			if (wcscmp(fieldName, L"zone_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[14]));
			if (wcscmp(fieldName, L"zone_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[15]));
			if (wcscmp(fieldName, L"zone_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[16]));
			if (wcscmp(fieldName, L"zone_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[17]));
			if (wcscmp(fieldName, L"zone_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[18]));
			if (wcscmp(fieldName, L"zone_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[19]));
			if (wcscmp(fieldName, L"zone_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[20]));
			if (wcscmp(fieldName, L"zone_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[21]));
			if (wcscmp(fieldName, L"zone_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[22]));
			if (wcscmp(fieldName, L"zone_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[23]));
			if (wcscmp(fieldName, L"zone_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[24]));
			if (wcscmp(fieldName, L"zone_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[25]));
			if (wcscmp(fieldName, L"zone_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[26]));
			if (wcscmp(fieldName, L"zone_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[27]));
			if (wcscmp(fieldName, L"zone_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[28]));
			if (wcscmp(fieldName, L"zone_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[29]));
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_confirm_text);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef zone[30];
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad1[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};

		static TableVersion Version() { return TableVersion(0, 16); }
		static __int16 TableId() { return 140; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) field_zone_RecordPtr // : DrRecordPtr
	{
		field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}