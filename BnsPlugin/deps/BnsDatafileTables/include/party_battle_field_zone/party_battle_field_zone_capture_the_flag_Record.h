/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_party_battle_field_zone_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct party_battle_field_zone_capture_the_flag_Record : party_battle_field_zone_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = party_battle_field_zone_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"flag_spawn_env") == 0) return flag_spawn_env;
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second") == 0) return flag_spawn_env_respawn_duration_second;
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_1") == 0) return flag_spawn_env_respawn_duration_second[0];
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_2") == 0) return flag_spawn_env_respawn_duration_second[1];
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_3") == 0) return flag_spawn_env_respawn_duration_second[2];
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_4") == 0) return flag_spawn_env_respawn_duration_second[3];
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_5") == 0) return flag_spawn_env_respawn_duration_second[4];
			if (wcscmp(fieldName, L"flag_spawn_limit_count") == 0) return flag_spawn_limit_count;
			if (wcscmp(fieldName, L"alpha_control_point") == 0) return alpha_control_point;
			if (wcscmp(fieldName, L"alpha_control_point_1") == 0) return alpha_control_point[0];
			if (wcscmp(fieldName, L"alpha_control_point_2") == 0) return alpha_control_point[1];
			if (wcscmp(fieldName, L"alpha_control_point_3") == 0) return alpha_control_point[2];
			if (wcscmp(fieldName, L"beta_control_point") == 0) return beta_control_point;
			if (wcscmp(fieldName, L"beta_control_point_1") == 0) return beta_control_point[0];
			if (wcscmp(fieldName, L"beta_control_point_2") == 0) return beta_control_point[1];
			if (wcscmp(fieldName, L"beta_control_point_3") == 0) return beta_control_point[2];
			if (wcscmp(fieldName, L"double_occupation_bonus_score") == 0) return double_occupation_bonus_score;
			if (wcscmp(fieldName, L"vote_delay_second") == 0) return vote_delay_second;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = party_battle_field_zone_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"flag_spawn_env") == 0) return Data::AnyFieldToStringConverter::ToString(&flag_spawn_env);
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag_spawn_env_respawn_duration_second[0]));
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag_spawn_env_respawn_duration_second[1]));
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag_spawn_env_respawn_duration_second[2]));
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag_spawn_env_respawn_duration_second[3]));
			if (wcscmp(fieldName, L"flag_spawn_env_respawn_duration_second_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(flag_spawn_env_respawn_duration_second[4]));
			if (wcscmp(fieldName, L"flag_spawn_limit_count") == 0) return Data::AnyFieldToStringConverter::ToString(&flag_spawn_limit_count);
			if (wcscmp(fieldName, L"alpha_control_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(alpha_control_point[0]));
			if (wcscmp(fieldName, L"alpha_control_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(alpha_control_point[1]));
			if (wcscmp(fieldName, L"alpha_control_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(alpha_control_point[2]));
			if (wcscmp(fieldName, L"beta_control_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(beta_control_point[0]));
			if (wcscmp(fieldName, L"beta_control_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(beta_control_point[1]));
			if (wcscmp(fieldName, L"beta_control_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(beta_control_point[2]));
			if (wcscmp(fieldName, L"double_occupation_bonus_score") == 0) return Data::AnyFieldToStringConverter::ToString(&double_occupation_bonus_score);
			if (wcscmp(fieldName, L"vote_delay_second") == 0) return Data::AnyFieldToStringConverter::ToString(&vote_delay_second);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			party_battle_field_zone_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[2];
Data::TableRef flag_spawn_env;
int flag_spawn_env_tableId(){return 446;};
__int16 flag_spawn_env_respawn_duration_second[5];
__int8 flag_spawn_limit_count;
char Pad_sub_1[1];
Data::TableRef alpha_control_point[3];
int alpha_control_point_tableId(){return 446;};
Data::TableRef beta_control_point[3];
int beta_control_point_tableId(){return 446;};
__int16 double_occupation_bonus_score;
__int16 vote_delay_second;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}