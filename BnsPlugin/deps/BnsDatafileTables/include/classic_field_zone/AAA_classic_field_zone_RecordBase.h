/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct classic_field_zone_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"zone_1") == 0) return zone[0];
			if (wcscmp(fieldName, L"zone_2") == 0) return zone[1];
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return respawn_confirm_text;
			if (wcscmp(fieldName, L"escape_cave_confirm_text") == 0) return escape_cave_confirm_text;
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return recommend_attack_power;
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return standard_gear_weapon;
			if (wcscmp(fieldName, L"classic_field_zone_name2") == 0) return classic_field_zone_name2;
			if (wcscmp(fieldName, L"classic_field_zone_desc") == 0) return classic_field_zone_desc;
			if (wcscmp(fieldName, L"thumbnail_image") == 0) return thumbnail_image;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"tactic") == 0) return tactic;
			if (wcscmp(fieldName, L"recommend_alias") == 0) return recommend_alias;
			if (wcscmp(fieldName, L"recommend_level_min") == 0) return recommend_level_min;
			if (wcscmp(fieldName, L"recommend_level_max") == 0) return recommend_level_max;
			if (wcscmp(fieldName, L"recommend_mastery_level_min") == 0) return recommend_mastery_level_min;
			if (wcscmp(fieldName, L"recommend_mastery_level_max") == 0) return recommend_mastery_level_max;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[0]));
			if (wcscmp(fieldName, L"zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(zone[1]));
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_confirm_text);
			if (wcscmp(fieldName, L"escape_cave_confirm_text") == 0) return Data::AnyFieldToStringConverter::ToString(&escape_cave_confirm_text);
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_attack_power);
			if (wcscmp(fieldName, L"standard_gear_weapon") == 0) return Data::AnyFieldToStringConverter::ToString(&standard_gear_weapon);
			if (wcscmp(fieldName, L"classic_field_zone_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&classic_field_zone_name2);
			if (wcscmp(fieldName, L"classic_field_zone_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&classic_field_zone_desc);
			if (wcscmp(fieldName, L"thumbnail_image") == 0) return Data::AnyFieldToStringConverter::ToString(&thumbnail_image);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"tactic") == 0) return Data::AnyFieldToStringConverter::ToString(&tactic);
			if (wcscmp(fieldName, L"recommend_alias") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_alias);
			if (wcscmp(fieldName, L"recommend_level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_level_min);
			if (wcscmp(fieldName, L"recommend_level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_level_max);
			if (wcscmp(fieldName, L"recommend_mastery_level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_mastery_level_min);
			if (wcscmp(fieldName, L"recommend_mastery_level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_mastery_level_max);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(thumbnail_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) thumbnail_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(thumbnail_image));
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
Data::TableRef zone[2];
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef attraction_quest[5];
int attraction_quest_tableId(){return 283;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef escape_cave_confirm_text;
int escape_cave_confirm_text_tableId(){return 405;};
__int16 recommend_attack_power;
char Pad1[2];
Data::TableRef standard_gear_weapon;
int standard_gear_weapon_tableId(){return 189;};
Data::TableRef classic_field_zone_name2;
int classic_field_zone_name2_tableId(){return 405;};
Data::TableRef classic_field_zone_desc;
int classic_field_zone_desc_tableId(){return 405;};
wchar_t* thumbnail_image;
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
__int8 ui_text_grade;
char Pad2[3];
Data::TableRef tactic;
int tactic_tableId(){return 405;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};
__int8 recommend_level_min;
__int8 recommend_level_max;
__int8 recommend_mastery_level_min;
__int8 recommend_mastery_level_max;

		static TableVersion Version() { return TableVersion(0, 17); }
		static __int16 TableId() { return 57; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) classic_field_zone_RecordPtr // : DrRecordPtr
	{
		classic_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::classic_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}