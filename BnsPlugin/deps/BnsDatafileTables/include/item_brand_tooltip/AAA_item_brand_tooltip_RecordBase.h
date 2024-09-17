/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_brand_tooltip_Record : DrEl
	{
	private:
		static std::wstring Get_item_condition_type_EnumValue(__int8 value);
		static std::wstring Get_game_category_3_EnumValue(__int16 value);
		static std::wstring Get_equip_job_check_EnumValue(__int8 value);
		static std::wstring Get_equip_sex_EnumValue(__int8 value);
		static std::wstring Get_equip_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"game_category_3") == 0) return game_category_3;
			if (wcscmp(fieldName, L"item_grade") == 0) return item_grade;
			if (wcscmp(fieldName, L"equip_level") == 0) return equip_level;
			if (wcscmp(fieldName, L"equip_mastery_level") == 0) return equip_mastery_level;
			if (wcscmp(fieldName, L"equip_job_check") == 0) return equip_job_check;
			if (wcscmp(fieldName, L"equip_job_check_1") == 0) return equip_job_check[0];
			if (wcscmp(fieldName, L"equip_job_check_2") == 0) return equip_job_check[1];
			if (wcscmp(fieldName, L"equip_job_check_3") == 0) return equip_job_check[2];
			if (wcscmp(fieldName, L"equip_job_check_4") == 0) return equip_job_check[3];
			if (wcscmp(fieldName, L"equip_sex") == 0) return equip_sex;
			if (wcscmp(fieldName, L"equip_race") == 0) return equip_race;
			if (wcscmp(fieldName, L"equip_solo_duel_grade") == 0) return equip_solo_duel_grade;
			if (wcscmp(fieldName, L"equip_team_duel_grade") == 0) return equip_team_duel_grade;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"tag_icon") == 0) return tag_icon;
			if (wcscmp(fieldName, L"tag_icon_grade") == 0) return tag_icon_grade;
			if (wcscmp(fieldName, L"main_info") == 0) return main_info;
			if (wcscmp(fieldName, L"sub_info") == 0) return sub_info;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"description4_title") == 0) return description4_title;
			if (wcscmp(fieldName, L"description5_title") == 0) return description5_title;
			if (wcscmp(fieldName, L"description6_title") == 0) return description6_title;
			if (wcscmp(fieldName, L"description4") == 0) return description4;
			if (wcscmp(fieldName, L"description5") == 0) return description5;
			if (wcscmp(fieldName, L"description6") == 0) return description6;
			if (wcscmp(fieldName, L"store_description") == 0) return store_description;
			if (wcscmp(fieldName, L"title_item") == 0) return title_item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"game_category_3") == 0) return Data::AnyFieldToStringConverter::ToString(&game_category_3);
			if (wcscmp(fieldName, L"item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&item_grade);
			if (wcscmp(fieldName, L"equip_level") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_level);
			if (wcscmp(fieldName, L"equip_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_mastery_level);
			if (wcscmp(fieldName, L"equip_job_check_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_job_check[0]));
			if (wcscmp(fieldName, L"equip_job_check_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_job_check[1]));
			if (wcscmp(fieldName, L"equip_job_check_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_job_check[2]));
			if (wcscmp(fieldName, L"equip_job_check_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_job_check[3]));
			if (wcscmp(fieldName, L"equip_sex") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_sex);
			if (wcscmp(fieldName, L"equip_race") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_race);
			if (wcscmp(fieldName, L"equip_solo_duel_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_solo_duel_grade);
			if (wcscmp(fieldName, L"equip_team_duel_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&equip_team_duel_grade);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"tag_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&tag_icon);
			if (wcscmp(fieldName, L"tag_icon_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&tag_icon_grade);
			if (wcscmp(fieldName, L"main_info") == 0) return Data::AnyFieldToStringConverter::ToString(&main_info);
			if (wcscmp(fieldName, L"sub_info") == 0) return Data::AnyFieldToStringConverter::ToString(&sub_info);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"description4_title") == 0) return Data::AnyFieldToStringConverter::ToString(&description4_title);
			if (wcscmp(fieldName, L"description5_title") == 0) return Data::AnyFieldToStringConverter::ToString(&description5_title);
			if (wcscmp(fieldName, L"description6_title") == 0) return Data::AnyFieldToStringConverter::ToString(&description6_title);
			if (wcscmp(fieldName, L"description4") == 0) return Data::AnyFieldToStringConverter::ToString(&description4);
			if (wcscmp(fieldName, L"description5") == 0) return Data::AnyFieldToStringConverter::ToString(&description5);
			if (wcscmp(fieldName, L"description6") == 0) return Data::AnyFieldToStringConverter::ToString(&description6);
			if (wcscmp(fieldName, L"store_description") == 0) return Data::AnyFieldToStringConverter::ToString(&store_description);
			if (wcscmp(fieldName, L"title_item") == 0) return Data::AnyFieldToStringConverter::ToString(&title_item);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 brand_id;
__int8 item_condition_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name2;
int name2_tableId(){return 405;};
__int16 game_category_3;
std::wstring game_category_3_EnumValue() const {return Get_game_category_3_EnumValue(game_category_3);};
__int8 item_grade;
__int8 equip_level;
__int8 equip_mastery_level;
__int8 equip_job_check[4];
std::wstring equip_job_check_EnumValue(int index) const {return Get_equip_job_check_EnumValue(equip_job_check[index]);};
__int8 equip_sex;
std::wstring equip_sex_EnumValue() const {return Get_equip_sex_EnumValue(equip_sex);};
__int8 equip_race;
std::wstring equip_race_EnumValue() const {return Get_equip_race_EnumValue(equip_race);};
__int8 equip_solo_duel_grade;
__int8 equip_team_duel_grade;
char Pad0[3];
Data::IconRef icon;
Data::IconRef tag_icon;
Data::IconRef tag_icon_grade;
Data::TableRef main_info;
int main_info_tableId(){return 405;};
Data::TableRef sub_info;
int sub_info_tableId(){return 405;};
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef description4_title;
int description4_title_tableId(){return 405;};
Data::TableRef description5_title;
int description5_title_tableId(){return 405;};
Data::TableRef description6_title;
int description6_title_tableId(){return 405;};
Data::TableRef description4;
int description4_tableId(){return 405;};
Data::TableRef description5;
int description5_tableId(){return 405;};
Data::TableRef description6;
int description6_tableId(){return 405;};
Data::TableRef store_description;
int store_description_tableId(){return 405;};
Data::TableRef title_item;
int title_item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 184; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_brand_tooltip_RecordPtr // : DrRecordPtr
	{
		item_brand_tooltip_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_brand_tooltip_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}