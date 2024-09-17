/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct faction_battle_field_zone_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return ui_filter_attraction_quest_only;
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return respawn_confirm_text;
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return attraction_quest[0];
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return attraction_quest[1];
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return attraction_quest[2];
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return attraction_quest[3];
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return attraction_quest[4];
			if (wcscmp(fieldName, L"attraction_quest_6") == 0) return attraction_quest[5];
			if (wcscmp(fieldName, L"attraction_quest_7") == 0) return attraction_quest[6];
			if (wcscmp(fieldName, L"attraction_quest_8") == 0) return attraction_quest[7];
			if (wcscmp(fieldName, L"attraction_quest_9") == 0) return attraction_quest[8];
			if (wcscmp(fieldName, L"attraction_quest_10") == 0) return attraction_quest[9];
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_faction_level") == 0) return required_faction_level;
			if (wcscmp(fieldName, L"faction_battle_field_zone_name2") == 0) return faction_battle_field_zone_name2;
			if (wcscmp(fieldName, L"faction_battle_field_zone_desc") == 0) return faction_battle_field_zone_desc;
			if (wcscmp(fieldName, L"thumbnail_image") == 0) return thumbnail_image;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"entrance_quota") == 0) return entrance_quota;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"ui_filter_attraction_quest_only") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_filter_attraction_quest_only);
			if (wcscmp(fieldName, L"respawn_confirm_text") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_confirm_text);
			if (wcscmp(fieldName, L"attraction_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[0]));
			if (wcscmp(fieldName, L"attraction_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[1]));
			if (wcscmp(fieldName, L"attraction_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[2]));
			if (wcscmp(fieldName, L"attraction_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[3]));
			if (wcscmp(fieldName, L"attraction_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[4]));
			if (wcscmp(fieldName, L"attraction_quest_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[5]));
			if (wcscmp(fieldName, L"attraction_quest_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[6]));
			if (wcscmp(fieldName, L"attraction_quest_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[7]));
			if (wcscmp(fieldName, L"attraction_quest_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[8]));
			if (wcscmp(fieldName, L"attraction_quest_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_quest[9]));
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_faction_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_faction_level);
			if (wcscmp(fieldName, L"faction_battle_field_zone_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_battle_field_zone_name2);
			if (wcscmp(fieldName, L"faction_battle_field_zone_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_battle_field_zone_desc);
			if (wcscmp(fieldName, L"thumbnail_image") == 0) return Data::AnyFieldToStringConverter::ToString(&thumbnail_image);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"entrance_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&entrance_quota);

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
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef group;
int group_tableId(){return 16;};
bool ui_filter_attraction_quest_only;
char Pad0[3];
Data::TableRef respawn_confirm_text;
int respawn_confirm_text_tableId(){return 405;};
Data::TableRef attraction_quest[10];
int attraction_quest_tableId(){return 283;};
__int8 required_level;
__int8 required_faction_level;
char Pad1[2];
Data::TableRef faction_battle_field_zone_name2;
int faction_battle_field_zone_name2_tableId(){return 405;};
Data::TableRef faction_battle_field_zone_desc;
int faction_battle_field_zone_desc_tableId(){return 405;};
wchar_t* thumbnail_image;
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
Data::TableRef entrance_quota;
int entrance_quota_tableId(){return 66;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 129; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_battle_field_zone_RecordPtr // : DrRecordPtr
	{
		faction_battle_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::faction_battle_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}