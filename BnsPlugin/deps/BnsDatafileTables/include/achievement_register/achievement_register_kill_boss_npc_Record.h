/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_kill_boss_npc_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_difficulty_type_EnumValue(__int8 value);
		static std::wstring Get_min_sealed_level_op_EnumValue(__int8 value);
		static std::wstring Get_max_sealed_level_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boss_npc") == 0) return boss_npc;
			if (wcscmp(fieldName, L"first_attacker") == 0) return first_attacker;
			if (wcscmp(fieldName, L"last_attacker") == 0) return last_attacker;
			if (wcscmp(fieldName, L"max_level") == 0) return max_level;
			if (wcscmp(fieldName, L"team_broadcast") == 0) return team_broadcast;
			if (wcscmp(fieldName, L"difficulty_type") == 0) return difficulty_type;
			if (wcscmp(fieldName, L"party_member_min_count") == 0) return party_member_min_count;
			if (wcscmp(fieldName, L"party_member_max_count") == 0) return party_member_max_count;
			if (wcscmp(fieldName, L"party_same_job") == 0) return party_same_job;
			if (wcscmp(fieldName, L"min_sealed_level") == 0) return min_sealed_level;
			if (wcscmp(fieldName, L"min_sealed_level_op") == 0) return min_sealed_level_op;
			if (wcscmp(fieldName, L"max_sealed_level") == 0) return max_sealed_level;
			if (wcscmp(fieldName, L"max_sealed_level_op") == 0) return max_sealed_level_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boss_npc") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc);
			if (wcscmp(fieldName, L"first_attacker") == 0) return Data::AnyFieldToStringConverter::ToString(&first_attacker);
			if (wcscmp(fieldName, L"last_attacker") == 0) return Data::AnyFieldToStringConverter::ToString(&last_attacker);
			if (wcscmp(fieldName, L"max_level") == 0) return Data::AnyFieldToStringConverter::ToString(&max_level);
			if (wcscmp(fieldName, L"team_broadcast") == 0) return Data::AnyFieldToStringConverter::ToString(&team_broadcast);
			if (wcscmp(fieldName, L"difficulty_type") == 0) return Data::AnyFieldToStringConverter::ToString(&difficulty_type);
			if (wcscmp(fieldName, L"party_member_min_count") == 0) return Data::AnyFieldToStringConverter::ToString(&party_member_min_count);
			if (wcscmp(fieldName, L"party_member_max_count") == 0) return Data::AnyFieldToStringConverter::ToString(&party_member_max_count);
			if (wcscmp(fieldName, L"party_same_job") == 0) return Data::AnyFieldToStringConverter::ToString(&party_same_job);
			if (wcscmp(fieldName, L"min_sealed_level") == 0) return Data::AnyFieldToStringConverter::ToString(&min_sealed_level);
			if (wcscmp(fieldName, L"min_sealed_level_op") == 0) return Data::AnyFieldToStringConverter::ToString(&min_sealed_level_op);
			if (wcscmp(fieldName, L"max_sealed_level") == 0) return Data::AnyFieldToStringConverter::ToString(&max_sealed_level);
			if (wcscmp(fieldName, L"max_sealed_level_op") == 0) return Data::AnyFieldToStringConverter::ToString(&max_sealed_level_op);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef boss_npc;
int boss_npc_tableId(){return 255;};
bool first_attacker;
bool last_attacker;
__int8 max_level;
bool team_broadcast;
__int8 difficulty_type;
std::wstring difficulty_type_EnumValue() const {return Get_difficulty_type_EnumValue(difficulty_type);};
__int8 party_member_min_count;
__int8 party_member_max_count;
bool party_same_job;
__int8 min_sealed_level;
__int8 min_sealed_level_op;
std::wstring min_sealed_level_op_EnumValue() const {return Get_min_sealed_level_op_EnumValue(min_sealed_level_op);};
__int8 max_sealed_level;
__int8 max_sealed_level_op;
std::wstring max_sealed_level_op_EnumValue() const {return Get_max_sealed_level_op_EnumValue(max_sealed_level_op);};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}