/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_tendency_field_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct tendency_field_buyudo_Record : tendency_field_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = tendency_field_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"playable_time") == 0) return playable_time;
			if (wcscmp(fieldName, L"check_score_required_min_faction_member_count") == 0) return check_score_required_min_faction_member_count;
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss") == 0) return tendency_1_faction1_warfare_boss;
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_1") == 0) return tendency_1_faction1_warfare_boss[0];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_2") == 0) return tendency_1_faction1_warfare_boss[1];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_3") == 0) return tendency_1_faction1_warfare_boss[2];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_4") == 0) return tendency_1_faction1_warfare_boss[3];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_5") == 0) return tendency_1_faction1_warfare_boss[4];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss") == 0) return tendency_1_faction2_warfare_boss;
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_1") == 0) return tendency_1_faction2_warfare_boss[0];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_2") == 0) return tendency_1_faction2_warfare_boss[1];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_3") == 0) return tendency_1_faction2_warfare_boss[2];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_4") == 0) return tendency_1_faction2_warfare_boss[3];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_5") == 0) return tendency_1_faction2_warfare_boss[4];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss") == 0) return tendency_2_faction1_warfare_boss;
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_1") == 0) return tendency_2_faction1_warfare_boss[0];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_2") == 0) return tendency_2_faction1_warfare_boss[1];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_3") == 0) return tendency_2_faction1_warfare_boss[2];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_4") == 0) return tendency_2_faction1_warfare_boss[3];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_5") == 0) return tendency_2_faction1_warfare_boss[4];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss") == 0) return tendency_2_faction2_warfare_boss;
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_1") == 0) return tendency_2_faction2_warfare_boss[0];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_2") == 0) return tendency_2_faction2_warfare_boss[1];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_3") == 0) return tendency_2_faction2_warfare_boss[2];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_4") == 0) return tendency_2_faction2_warfare_boss[3];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_5") == 0) return tendency_2_faction2_warfare_boss[4];
			if (wcscmp(fieldName, L"tendency_3_warfare_boss") == 0) return tendency_3_warfare_boss;
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_1") == 0) return tendency_3_warfare_boss[0];
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_2") == 0) return tendency_3_warfare_boss[1];
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_3") == 0) return tendency_3_warfare_boss[2];
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_4") == 0) return tendency_3_warfare_boss[3];
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_5") == 0) return tendency_3_warfare_boss[4];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest") == 0) return tendency_1_faction1_warfare_quest;
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_1") == 0) return tendency_1_faction1_warfare_quest[0];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_2") == 0) return tendency_1_faction1_warfare_quest[1];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_3") == 0) return tendency_1_faction1_warfare_quest[2];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_4") == 0) return tendency_1_faction1_warfare_quest[3];
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_5") == 0) return tendency_1_faction1_warfare_quest[4];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest") == 0) return tendency_1_faction2_warfare_quest;
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_1") == 0) return tendency_1_faction2_warfare_quest[0];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_2") == 0) return tendency_1_faction2_warfare_quest[1];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_3") == 0) return tendency_1_faction2_warfare_quest[2];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_4") == 0) return tendency_1_faction2_warfare_quest[3];
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_5") == 0) return tendency_1_faction2_warfare_quest[4];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest") == 0) return tendency_2_faction1_warfare_quest;
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_1") == 0) return tendency_2_faction1_warfare_quest[0];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_2") == 0) return tendency_2_faction1_warfare_quest[1];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_3") == 0) return tendency_2_faction1_warfare_quest[2];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_4") == 0) return tendency_2_faction1_warfare_quest[3];
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_5") == 0) return tendency_2_faction1_warfare_quest[4];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest") == 0) return tendency_2_faction2_warfare_quest;
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_1") == 0) return tendency_2_faction2_warfare_quest[0];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_2") == 0) return tendency_2_faction2_warfare_quest[1];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_3") == 0) return tendency_2_faction2_warfare_quest[2];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_4") == 0) return tendency_2_faction2_warfare_quest[3];
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_5") == 0) return tendency_2_faction2_warfare_quest[4];
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest") == 0) return tendency_3_faction1_warfare_quest;
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_1") == 0) return tendency_3_faction1_warfare_quest[0];
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_2") == 0) return tendency_3_faction1_warfare_quest[1];
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_3") == 0) return tendency_3_faction1_warfare_quest[2];
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_4") == 0) return tendency_3_faction1_warfare_quest[3];
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_5") == 0) return tendency_3_faction1_warfare_quest[4];
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest") == 0) return tendency_3_faction2_warfare_quest;
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_1") == 0) return tendency_3_faction2_warfare_quest[0];
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_2") == 0) return tendency_3_faction2_warfare_quest[1];
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_3") == 0) return tendency_3_faction2_warfare_quest[2];
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_4") == 0) return tendency_3_faction2_warfare_quest[3];
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_5") == 0) return tendency_3_faction2_warfare_quest[4];
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest") == 0) return tendency_1_faction1_sub_quest;
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_1") == 0) return tendency_1_faction1_sub_quest[0];
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_2") == 0) return tendency_1_faction1_sub_quest[1];
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_3") == 0) return tendency_1_faction1_sub_quest[2];
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_4") == 0) return tendency_1_faction1_sub_quest[3];
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_5") == 0) return tendency_1_faction1_sub_quest[4];
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest") == 0) return tendency_1_faction2_sub_quest;
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_1") == 0) return tendency_1_faction2_sub_quest[0];
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_2") == 0) return tendency_1_faction2_sub_quest[1];
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_3") == 0) return tendency_1_faction2_sub_quest[2];
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_4") == 0) return tendency_1_faction2_sub_quest[3];
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_5") == 0) return tendency_1_faction2_sub_quest[4];
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest") == 0) return tendency_2_faction1_sub_quest;
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_1") == 0) return tendency_2_faction1_sub_quest[0];
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_2") == 0) return tendency_2_faction1_sub_quest[1];
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_3") == 0) return tendency_2_faction1_sub_quest[2];
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_4") == 0) return tendency_2_faction1_sub_quest[3];
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_5") == 0) return tendency_2_faction1_sub_quest[4];
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest") == 0) return tendency_2_faction2_sub_quest;
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_1") == 0) return tendency_2_faction2_sub_quest[0];
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_2") == 0) return tendency_2_faction2_sub_quest[1];
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_3") == 0) return tendency_2_faction2_sub_quest[2];
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_4") == 0) return tendency_2_faction2_sub_quest[3];
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_5") == 0) return tendency_2_faction2_sub_quest[4];
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest") == 0) return tendency_3_faction1_sub_quest;
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_1") == 0) return tendency_3_faction1_sub_quest[0];
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_2") == 0) return tendency_3_faction1_sub_quest[1];
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_3") == 0) return tendency_3_faction1_sub_quest[2];
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_4") == 0) return tendency_3_faction1_sub_quest[3];
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_5") == 0) return tendency_3_faction1_sub_quest[4];
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest") == 0) return tendency_3_faction2_sub_quest;
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_1") == 0) return tendency_3_faction2_sub_quest[0];
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_2") == 0) return tendency_3_faction2_sub_quest[1];
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_3") == 0) return tendency_3_faction2_sub_quest[2];
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_4") == 0) return tendency_3_faction2_sub_quest[3];
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_5") == 0) return tendency_3_faction2_sub_quest[4];
			if (wcscmp(fieldName, L"faction1_kill_quest") == 0) return faction1_kill_quest;
			if (wcscmp(fieldName, L"faction2_kill_quest") == 0) return faction2_kill_quest;
			if (wcscmp(fieldName, L"defeat_field_play_point_bonus_percent") == 0) return defeat_field_play_point_bonus_percent;
			if (wcscmp(fieldName, L"defeat_faction_score_bonus_percent") == 0) return defeat_faction_score_bonus_percent;
			if (wcscmp(fieldName, L"defeat_bonus_point_percent") == 0) return defeat_bonus_point_percent;
			if (wcscmp(fieldName, L"reentrance_faction1_spawn") == 0) return reentrance_faction1_spawn;
			if (wcscmp(fieldName, L"reentrance_faction2_spawn") == 0) return reentrance_faction2_spawn;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = tendency_field_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"playable_time") == 0) return Data::AnyFieldToStringConverter::ToString(&playable_time);
			if (wcscmp(fieldName, L"check_score_required_min_faction_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&check_score_required_min_faction_member_count);
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_boss[0]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_boss[1]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_boss[2]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_boss[3]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_boss_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_boss[4]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_boss[0]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_boss[1]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_boss[2]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_boss[3]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_boss_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_boss[4]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_boss[0]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_boss[1]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_boss[2]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_boss[3]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_boss_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_boss[4]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_boss[0]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_boss[1]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_boss[2]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_boss[3]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_boss_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_boss[4]));
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_warfare_boss[0]));
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_warfare_boss[1]));
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_warfare_boss[2]));
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_warfare_boss[3]));
			if (wcscmp(fieldName, L"tendency_3_warfare_boss_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_warfare_boss[4]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_quest[0]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_quest[1]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_quest[2]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_quest[3]));
			if (wcscmp(fieldName, L"tendency_1_faction1_warfare_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_warfare_quest[4]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_quest[0]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_quest[1]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_quest[2]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_quest[3]));
			if (wcscmp(fieldName, L"tendency_1_faction2_warfare_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_warfare_quest[4]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_quest[0]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_quest[1]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_quest[2]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_quest[3]));
			if (wcscmp(fieldName, L"tendency_2_faction1_warfare_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_warfare_quest[4]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_quest[0]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_quest[1]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_quest[2]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_quest[3]));
			if (wcscmp(fieldName, L"tendency_2_faction2_warfare_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_warfare_quest[4]));
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_warfare_quest[0]));
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_warfare_quest[1]));
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_warfare_quest[2]));
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_warfare_quest[3]));
			if (wcscmp(fieldName, L"tendency_3_faction1_warfare_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_warfare_quest[4]));
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_warfare_quest[0]));
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_warfare_quest[1]));
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_warfare_quest[2]));
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_warfare_quest[3]));
			if (wcscmp(fieldName, L"tendency_3_faction2_warfare_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_warfare_quest[4]));
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_sub_quest[0]));
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_sub_quest[1]));
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_sub_quest[2]));
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_sub_quest[3]));
			if (wcscmp(fieldName, L"tendency_1_faction1_sub_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction1_sub_quest[4]));
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_sub_quest[0]));
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_sub_quest[1]));
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_sub_quest[2]));
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_sub_quest[3]));
			if (wcscmp(fieldName, L"tendency_1_faction2_sub_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_1_faction2_sub_quest[4]));
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_sub_quest[0]));
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_sub_quest[1]));
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_sub_quest[2]));
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_sub_quest[3]));
			if (wcscmp(fieldName, L"tendency_2_faction1_sub_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction1_sub_quest[4]));
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_sub_quest[0]));
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_sub_quest[1]));
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_sub_quest[2]));
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_sub_quest[3]));
			if (wcscmp(fieldName, L"tendency_2_faction2_sub_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_2_faction2_sub_quest[4]));
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_sub_quest[0]));
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_sub_quest[1]));
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_sub_quest[2]));
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_sub_quest[3]));
			if (wcscmp(fieldName, L"tendency_3_faction1_sub_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction1_sub_quest[4]));
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_sub_quest[0]));
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_sub_quest[1]));
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_sub_quest[2]));
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_sub_quest[3]));
			if (wcscmp(fieldName, L"tendency_3_faction2_sub_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tendency_3_faction2_sub_quest[4]));
			if (wcscmp(fieldName, L"faction1_kill_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&faction1_kill_quest);
			if (wcscmp(fieldName, L"faction2_kill_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&faction2_kill_quest);
			if (wcscmp(fieldName, L"defeat_field_play_point_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defeat_field_play_point_bonus_percent);
			if (wcscmp(fieldName, L"defeat_faction_score_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defeat_faction_score_bonus_percent);
			if (wcscmp(fieldName, L"defeat_bonus_point_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&defeat_bonus_point_percent);
			if (wcscmp(fieldName, L"reentrance_faction1_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&reentrance_faction1_spawn);
			if (wcscmp(fieldName, L"reentrance_faction2_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&reentrance_faction2_spawn);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			tendency_field_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef playable_time;
int playable_time_tableId(){return 431;};
__int16 check_score_required_min_faction_member_count;
char Pad_sub_0[2];
Data::TableRef tendency_1_faction1_warfare_boss[5];
int tendency_1_faction1_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_1_faction2_warfare_boss[5];
int tendency_1_faction2_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_2_faction1_warfare_boss[5];
int tendency_2_faction1_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_2_faction2_warfare_boss[5];
int tendency_2_faction2_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_3_warfare_boss[5];
int tendency_3_warfare_boss_tableId(){return 255;};
Data::TableRef tendency_1_faction1_warfare_quest[5];
int tendency_1_faction1_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_1_faction2_warfare_quest[5];
int tendency_1_faction2_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction1_warfare_quest[5];
int tendency_2_faction1_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction2_warfare_quest[5];
int tendency_2_faction2_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction1_warfare_quest[5];
int tendency_3_faction1_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction2_warfare_quest[5];
int tendency_3_faction2_warfare_quest_tableId(){return 283;};
Data::TableRef tendency_1_faction1_sub_quest[5];
int tendency_1_faction1_sub_quest_tableId(){return 283;};
Data::TableRef tendency_1_faction2_sub_quest[5];
int tendency_1_faction2_sub_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction1_sub_quest[5];
int tendency_2_faction1_sub_quest_tableId(){return 283;};
Data::TableRef tendency_2_faction2_sub_quest[5];
int tendency_2_faction2_sub_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction1_sub_quest[5];
int tendency_3_faction1_sub_quest_tableId(){return 283;};
Data::TableRef tendency_3_faction2_sub_quest[5];
int tendency_3_faction2_sub_quest_tableId(){return 283;};
Data::TableRef faction1_kill_quest;
int faction1_kill_quest_tableId(){return 283;};
Data::TableRef faction2_kill_quest;
int faction2_kill_quest_tableId(){return 283;};
__int32 defeat_field_play_point_bonus_percent;
__int32 defeat_faction_score_bonus_percent;
__int32 defeat_bonus_point_percent;
Data::TableRef reentrance_faction1_spawn;
int reentrance_faction1_spawn_tableId(){return 452;};
Data::TableRef reentrance_faction2_spawn;
int reentrance_faction2_spawn_tableId(){return 452;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}