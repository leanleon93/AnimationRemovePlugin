/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct war_field_Record : DrEl
	{
	private:
		static std::wstring Get_required_preceding_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"main_zone") == 0) return main_zone;
			if (wcscmp(fieldName, L"battle_zone") == 0) return battle_zone;
			if (wcscmp(fieldName, L"battle_zone_1") == 0) return battle_zone[0];
			if (wcscmp(fieldName, L"battle_zone_2") == 0) return battle_zone[1];
			if (wcscmp(fieldName, L"battle_zone_3") == 0) return battle_zone[2];
			if (wcscmp(fieldName, L"battle_zone_4") == 0) return battle_zone[3];
			if (wcscmp(fieldName, L"battle_zone_5") == 0) return battle_zone[4];
			if (wcscmp(fieldName, L"battle_zone_6") == 0) return battle_zone[5];
			if (wcscmp(fieldName, L"battle_zone_7") == 0) return battle_zone[6];
			if (wcscmp(fieldName, L"battle_zone_8") == 0) return battle_zone[7];
			if (wcscmp(fieldName, L"battle_zone_9") == 0) return battle_zone[8];
			if (wcscmp(fieldName, L"battle_zone_10") == 0) return battle_zone[9];
			if (wcscmp(fieldName, L"field_break_zone") == 0) return field_break_zone;
			if (wcscmp(fieldName, L"field_break_zone_1") == 0) return field_break_zone[0];
			if (wcscmp(fieldName, L"field_break_zone_2") == 0) return field_break_zone[1];
			if (wcscmp(fieldName, L"field_break_boss_zone") == 0) return field_break_boss_zone;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_preceding_quest") == 0) return required_preceding_quest;
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return required_preceding_quest[0];
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return required_preceding_quest[1];
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return required_preceding_quest[2];
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return required_preceding_quest_check;
			if (wcscmp(fieldName, L"field_break_zone_imprint_effect") == 0) return field_break_zone_imprint_effect;
			if (wcscmp(fieldName, L"field_break_zone_imprint_env") == 0) return field_break_zone_imprint_env;
			if (wcscmp(fieldName, L"field_break_zone_imprint_env_1") == 0) return field_break_zone_imprint_env[0];
			if (wcscmp(fieldName, L"field_break_zone_imprint_env_2") == 0) return field_break_zone_imprint_env[1];
			if (wcscmp(fieldName, L"boss_battle_zone_entrance_effect") == 0) return boss_battle_zone_entrance_effect;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"finish_pc_respawn") == 0) return finish_pc_respawn;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"main_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&main_zone);
			if (wcscmp(fieldName, L"battle_zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[0]));
			if (wcscmp(fieldName, L"battle_zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[1]));
			if (wcscmp(fieldName, L"battle_zone_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[2]));
			if (wcscmp(fieldName, L"battle_zone_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[3]));
			if (wcscmp(fieldName, L"battle_zone_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[4]));
			if (wcscmp(fieldName, L"battle_zone_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[5]));
			if (wcscmp(fieldName, L"battle_zone_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[6]));
			if (wcscmp(fieldName, L"battle_zone_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[7]));
			if (wcscmp(fieldName, L"battle_zone_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[8]));
			if (wcscmp(fieldName, L"battle_zone_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(battle_zone[9]));
			if (wcscmp(fieldName, L"field_break_zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(field_break_zone[0]));
			if (wcscmp(fieldName, L"field_break_zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(field_break_zone[1]));
			if (wcscmp(fieldName, L"field_break_boss_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&field_break_boss_zone);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_preceding_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[0]));
			if (wcscmp(fieldName, L"required_preceding_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[1]));
			if (wcscmp(fieldName, L"required_preceding_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_preceding_quest[2]));
			if (wcscmp(fieldName, L"required_preceding_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_preceding_quest_check);
			if (wcscmp(fieldName, L"field_break_zone_imprint_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&field_break_zone_imprint_effect);
			if (wcscmp(fieldName, L"field_break_zone_imprint_env_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(field_break_zone_imprint_env[0]));
			if (wcscmp(fieldName, L"field_break_zone_imprint_env_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(field_break_zone_imprint_env[1]));
			if (wcscmp(fieldName, L"boss_battle_zone_entrance_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_battle_zone_entrance_effect);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"finish_pc_respawn") == 0) return Data::AnyFieldToStringConverter::ToString(&finish_pc_respawn);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef main_zone;
int main_zone_tableId(){return 443;};
Data::TableRef battle_zone[10];
int battle_zone_tableId(){return 443;};
Data::TableRef field_break_zone[2];
int field_break_zone_tableId(){return 443;};
Data::TableRef field_break_boss_zone;
int field_break_boss_zone_tableId(){return 443;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
Data::TableRef required_preceding_quest[3];
int required_preceding_quest_tableId(){return 283;};
__int8 required_preceding_quest_check;
std::wstring required_preceding_quest_check_EnumValue() const {return Get_required_preceding_quest_check_EnumValue(required_preceding_quest_check);};
char Pad1[3];
Data::TableRef field_break_zone_imprint_effect;
int field_break_zone_imprint_effect_tableId(){return 111;};
Data::TableRef field_break_zone_imprint_env[2];
int field_break_zone_imprint_env_tableId(){return 446;};
Data::TableRef boss_battle_zone_entrance_effect;
int boss_battle_zone_entrance_effect_tableId(){return 111;};
Data::TableRef group;
int group_tableId(){return 16;};
Data::TableRef finish_pc_respawn;
int finish_pc_respawn_tableId(){return 452;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 423; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) war_field_RecordPtr // : DrRecordPtr
	{
		war_field_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::war_field_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}