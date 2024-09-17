/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_training_room_Record : DrEl
	{
	private:
		static std::wstring Get_required_preceding_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return required_preceding_quest[2];
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return required_preceding_quest_check;
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world") == 0) return jumping_character_quest_for_back_to_world;
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world_1") == 0) return jumping_character_quest_for_back_to_world[0];
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world_2") == 0) return jumping_character_quest_for_back_to_world[1];
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world_3") == 0) return jumping_character_quest_for_back_to_world[2];
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"skill_training_room_name2") == 0) return skill_training_room_name2;
			if (wcscmp(fieldName, L"start_default_kismet_name") == 0) return start_default_kismet_name;
			if (wcscmp(fieldName, L"start_default_kismet_name_1") == 0) return start_default_kismet_name[0];
			if (wcscmp(fieldName, L"start_default_kismet_name_2") == 0) return start_default_kismet_name[1];
			if (wcscmp(fieldName, L"end_default_kismet_name") == 0) return end_default_kismet_name;
			if (wcscmp(fieldName, L"end_default_kismet_name_1") == 0) return end_default_kismet_name[0];
			if (wcscmp(fieldName, L"end_default_kismet_name_2") == 0) return end_default_kismet_name[1];
			if (wcscmp(fieldName, L"stage_change_show") == 0) return stage_change_show;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[2]));
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_quest_check);
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(jumping_character_quest_for_back_to_world[0]));
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(jumping_character_quest_for_back_to_world[1]));
			if (wcscmp(fieldName, L"jumping_character_quest_for_back_to_world_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(jumping_character_quest_for_back_to_world[2]));
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"skill_training_room_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_training_room_name2);
			if (wcscmp(fieldName, L"start_default_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_default_kismet_name[0]));
			if (wcscmp(fieldName, L"start_default_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_default_kismet_name[1]));
			if (wcscmp(fieldName, L"end_default_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(end_default_kismet_name[0]));
			if (wcscmp(fieldName, L"end_default_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(end_default_kismet_name[1]));
			if (wcscmp(fieldName, L"stage_change_show") == 0) return Data::AnyFieldToStringConverter::ToString(&stage_change_show);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(start_default_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_default_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_default_kismet_name[i]));
			}
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(end_default_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_default_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_default_kismet_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(stage_change_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) stage_change_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(stage_change_show));
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
Data::TableRef zone;
int zone_tableId(){return 443;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
std::wstring required_preceding_quest_check_EnumValue() const {return Get_required_preceding_quest_check_EnumValue(required_preceding_quest_check);};
char Pad1[3];
Data::TableRef jumping_character_quest_for_back_to_world[3];
int jumping_character_quest_for_back_to_world_tableId(){return 283;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef skill_training_room_name2;
int skill_training_room_name2_tableId(){return 405;};
wchar_t* start_default_kismet_name[2];
wchar_t* end_default_kismet_name[2];
wchar_t* stage_change_show;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 356; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_RecordPtr // : DrRecordPtr
	{
		skill_training_room_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_room_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}