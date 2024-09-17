/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_season_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"soul_boost_event") == 0) return soul_boost_event;
			if (wcscmp(fieldName, L"max_pc_count") == 0) return max_pc_count;
			if (wcscmp(fieldName, L"start_time") == 0) return start_time;
			if (wcscmp(fieldName, L"end_time") == 0) return end_time;
			if (wcscmp(fieldName, L"result_expiration_time") == 0) return result_expiration_time;
			if (wcscmp(fieldName, L"season_slot_id") == 0) return season_slot_id;
			if (wcscmp(fieldName, L"season_name") == 0) return season_name;
			if (wcscmp(fieldName, L"season_name_en") == 0) return season_name_en;
			if (wcscmp(fieldName, L"season_name_fr") == 0) return season_name_fr;
			if (wcscmp(fieldName, L"season_name_de") == 0) return season_name_de;
			if (wcscmp(fieldName, L"season_name_pt") == 0) return season_name_pt;
			if (wcscmp(fieldName, L"season_name_th") == 0) return season_name_th;
			if (wcscmp(fieldName, L"season_name_vn") == 0) return season_name_vn;
			if (wcscmp(fieldName, L"season_name_text") == 0) return season_name_text;
			if (wcscmp(fieldName, L"season_banner_image_ref") == 0) return season_banner_image_ref;
			if (wcscmp(fieldName, L"is_battle_pass") == 0) return is_battle_pass;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"purchase_grade_item") == 0) return purchase_grade_item;
			if (wcscmp(fieldName, L"purchase_grade_item_1") == 0) return purchase_grade_item[0];
			if (wcscmp(fieldName, L"purchase_grade_item_2") == 0) return purchase_grade_item[1];
			if (wcscmp(fieldName, L"purchase_grade_item_3") == 0) return purchase_grade_item[2];
			if (wcscmp(fieldName, L"purchase_grade_item_4") == 0) return purchase_grade_item[3];
			if (wcscmp(fieldName, L"purchase_grade_item_5") == 0) return purchase_grade_item[4];
			if (wcscmp(fieldName, L"purchase_grade_item_6") == 0) return purchase_grade_item[5];
			if (wcscmp(fieldName, L"purchase_grade_item_7") == 0) return purchase_grade_item[6];
			if (wcscmp(fieldName, L"purchase_grade_item_8") == 0) return purchase_grade_item[7];
			if (wcscmp(fieldName, L"purchase_grade_item_9") == 0) return purchase_grade_item[8];
			if (wcscmp(fieldName, L"purchase_grade_item_10") == 0) return purchase_grade_item[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"soul_boost_event") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_boost_event);
			if (wcscmp(fieldName, L"max_pc_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_pc_count);
			if (wcscmp(fieldName, L"start_time") == 0) return Data::AnyFieldToStringConverter::ToString(&start_time);
			if (wcscmp(fieldName, L"end_time") == 0) return Data::AnyFieldToStringConverter::ToString(&end_time);
			if (wcscmp(fieldName, L"result_expiration_time") == 0) return Data::AnyFieldToStringConverter::ToString(&result_expiration_time);
			if (wcscmp(fieldName, L"season_slot_id") == 0) return Data::AnyFieldToStringConverter::ToString(&season_slot_id);
			if (wcscmp(fieldName, L"season_name") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name);
			if (wcscmp(fieldName, L"season_name_en") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_en);
			if (wcscmp(fieldName, L"season_name_fr") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_fr);
			if (wcscmp(fieldName, L"season_name_de") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_de);
			if (wcscmp(fieldName, L"season_name_pt") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_pt);
			if (wcscmp(fieldName, L"season_name_th") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_th);
			if (wcscmp(fieldName, L"season_name_vn") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_vn);
			if (wcscmp(fieldName, L"season_name_text") == 0) return Data::AnyFieldToStringConverter::ToString(&season_name_text);
			if (wcscmp(fieldName, L"season_banner_image_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&season_banner_image_ref);
			if (wcscmp(fieldName, L"is_battle_pass") == 0) return Data::AnyFieldToStringConverter::ToString(&is_battle_pass);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"purchase_grade_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[0]));
			if (wcscmp(fieldName, L"purchase_grade_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[1]));
			if (wcscmp(fieldName, L"purchase_grade_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[2]));
			if (wcscmp(fieldName, L"purchase_grade_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[3]));
			if (wcscmp(fieldName, L"purchase_grade_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[4]));
			if (wcscmp(fieldName, L"purchase_grade_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[5]));
			if (wcscmp(fieldName, L"purchase_grade_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[6]));
			if (wcscmp(fieldName, L"purchase_grade_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[7]));
			if (wcscmp(fieldName, L"purchase_grade_item_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[8]));
			if (wcscmp(fieldName, L"purchase_grade_item_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(purchase_grade_item[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_time));
			if (reinterpret_cast<std::uintptr_t>(end_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_time));
			if (reinterpret_cast<std::uintptr_t>(result_expiration_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_expiration_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_expiration_time));
			if (reinterpret_cast<std::uintptr_t>(season_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name));
			if (reinterpret_cast<std::uintptr_t>(season_name_en) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name_en = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name_en));
			if (reinterpret_cast<std::uintptr_t>(season_name_fr) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name_fr = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name_fr));
			if (reinterpret_cast<std::uintptr_t>(season_name_de) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name_de = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name_de));
			if (reinterpret_cast<std::uintptr_t>(season_name_pt) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name_pt = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name_pt));
			if (reinterpret_cast<std::uintptr_t>(season_name_th) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name_th = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name_th));
			if (reinterpret_cast<std::uintptr_t>(season_name_vn) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_name_vn = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_name_vn));
			if (reinterpret_cast<std::uintptr_t>(season_banner_image_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_banner_image_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_banner_image_ref));
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
Data::TableRef soul_boost_event;
int soul_boost_event_tableId(){return 368;};
__int8 max_pc_count;
char Pad0[3];
wchar_t* start_time;
wchar_t* end_time;
wchar_t* result_expiration_time;
__int8 season_slot_id;
char Pad1[3];
wchar_t* season_name;
wchar_t* season_name_en;
wchar_t* season_name_fr;
wchar_t* season_name_de;
wchar_t* season_name_pt;
wchar_t* season_name_th;
wchar_t* season_name_vn;
Data::TableRef season_name_text;
int season_name_text_tableId(){return 405;};
wchar_t* season_banner_image_ref;
bool is_battle_pass;
__int8 required_level;
__int8 required_mastery_level;
char Pad2[1];
Data::TableRef required_preceding_quest[2];
int required_preceding_quest_tableId(){return 283;};
Data::TableRef purchase_grade_item[10];
int purchase_grade_item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(4, 1); }
		static __int16 TableId() { return 373; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_season_RecordPtr // : DrRecordPtr
	{
		soul_boost_season_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_season_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}