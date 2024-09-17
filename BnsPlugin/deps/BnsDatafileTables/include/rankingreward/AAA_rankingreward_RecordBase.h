/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct rankingreward_Record : DrEl
	{
	private:
		static std::wstring Get_season_reward_guild_bank_item_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"week_reward_exp") == 0) return week_reward_exp;
			if (wcscmp(fieldName, L"week_reward_money") == 0) return week_reward_money;
			if (wcscmp(fieldName, L"week_reward_item") == 0) return week_reward_item;
			if (wcscmp(fieldName, L"week_reward_item_1") == 0) return week_reward_item[0];
			if (wcscmp(fieldName, L"week_reward_item_2") == 0) return week_reward_item[1];
			if (wcscmp(fieldName, L"week_reward_item_3") == 0) return week_reward_item[2];
			if (wcscmp(fieldName, L"week_reward_item_4") == 0) return week_reward_item[3];
			if (wcscmp(fieldName, L"week_reward_item_amount") == 0) return week_reward_item_amount;
			if (wcscmp(fieldName, L"week_reward_item_amount_1") == 0) return week_reward_item_amount[0];
			if (wcscmp(fieldName, L"week_reward_item_amount_2") == 0) return week_reward_item_amount[1];
			if (wcscmp(fieldName, L"week_reward_item_amount_3") == 0) return week_reward_item_amount[2];
			if (wcscmp(fieldName, L"week_reward_item_amount_4") == 0) return week_reward_item_amount[3];
			if (wcscmp(fieldName, L"season_reward_exp") == 0) return season_reward_exp;
			if (wcscmp(fieldName, L"season_reward_money") == 0) return season_reward_money;
			if (wcscmp(fieldName, L"season_reward_item") == 0) return season_reward_item;
			if (wcscmp(fieldName, L"season_reward_item_1") == 0) return season_reward_item[0];
			if (wcscmp(fieldName, L"season_reward_item_2") == 0) return season_reward_item[1];
			if (wcscmp(fieldName, L"season_reward_item_3") == 0) return season_reward_item[2];
			if (wcscmp(fieldName, L"season_reward_item_4") == 0) return season_reward_item[3];
			if (wcscmp(fieldName, L"season_reward_item_amount") == 0) return season_reward_item_amount;
			if (wcscmp(fieldName, L"season_reward_item_amount_1") == 0) return season_reward_item_amount[0];
			if (wcscmp(fieldName, L"season_reward_item_amount_2") == 0) return season_reward_item_amount[1];
			if (wcscmp(fieldName, L"season_reward_item_amount_3") == 0) return season_reward_item_amount[2];
			if (wcscmp(fieldName, L"season_reward_item_amount_4") == 0) return season_reward_item_amount[3];
			if (wcscmp(fieldName, L"week_reward_combat_exp_bonus_rate") == 0) return week_reward_combat_exp_bonus_rate;
			if (wcscmp(fieldName, L"week_reward_duel_point_bonus_rate") == 0) return week_reward_duel_point_bonus_rate;
			if (wcscmp(fieldName, L"week_reward_party_battle_point_bonus_rate") == 0) return week_reward_party_battle_point_bonus_rate;
			if (wcscmp(fieldName, L"week_reward_field_point_bonus_rate") == 0) return week_reward_field_point_bonus_rate;
			if (wcscmp(fieldName, L"season_reward_combat_exp_bonus_rate") == 0) return season_reward_combat_exp_bonus_rate;
			if (wcscmp(fieldName, L"season_reward_duel_point_bonus_rate") == 0) return season_reward_duel_point_bonus_rate;
			if (wcscmp(fieldName, L"season_reward_party_battle_point_bonus_rate") == 0) return season_reward_party_battle_point_bonus_rate;
			if (wcscmp(fieldName, L"season_reward_field_point_bonus_rate") == 0) return season_reward_field_point_bonus_rate;
			if (wcscmp(fieldName, L"season_reward_guild_bank_money") == 0) return season_reward_guild_bank_money;
			if (wcscmp(fieldName, L"season_reward_guild_bank_item") == 0) return season_reward_guild_bank_item;
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_1") == 0) return season_reward_guild_bank_item[0];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_2") == 0) return season_reward_guild_bank_item[1];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_3") == 0) return season_reward_guild_bank_item[2];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_4") == 0) return season_reward_guild_bank_item[3];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_5") == 0) return season_reward_guild_bank_item[4];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount") == 0) return season_reward_guild_bank_item_amount;
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_1") == 0) return season_reward_guild_bank_item_amount[0];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_2") == 0) return season_reward_guild_bank_item_amount[1];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_3") == 0) return season_reward_guild_bank_item_amount[2];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_4") == 0) return season_reward_guild_bank_item_amount[3];
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_5") == 0) return season_reward_guild_bank_item_amount[4];
			if (wcscmp(fieldName, L"guild_ranking_reward_effect") == 0) return guild_ranking_reward_effect;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"week_reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&week_reward_exp);
			if (wcscmp(fieldName, L"week_reward_money") == 0) return Data::AnyFieldToStringConverter::ToString(&week_reward_money);
			if (wcscmp(fieldName, L"week_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item[0]));
			if (wcscmp(fieldName, L"week_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item[1]));
			if (wcscmp(fieldName, L"week_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item[2]));
			if (wcscmp(fieldName, L"week_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item[3]));
			if (wcscmp(fieldName, L"week_reward_item_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item_amount[0]));
			if (wcscmp(fieldName, L"week_reward_item_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item_amount[1]));
			if (wcscmp(fieldName, L"week_reward_item_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item_amount[2]));
			if (wcscmp(fieldName, L"week_reward_item_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(week_reward_item_amount[3]));
			if (wcscmp(fieldName, L"season_reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_exp);
			if (wcscmp(fieldName, L"season_reward_money") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_money);
			if (wcscmp(fieldName, L"season_reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item[0]));
			if (wcscmp(fieldName, L"season_reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item[1]));
			if (wcscmp(fieldName, L"season_reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item[2]));
			if (wcscmp(fieldName, L"season_reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item[3]));
			if (wcscmp(fieldName, L"season_reward_item_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item_amount[0]));
			if (wcscmp(fieldName, L"season_reward_item_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item_amount[1]));
			if (wcscmp(fieldName, L"season_reward_item_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item_amount[2]));
			if (wcscmp(fieldName, L"season_reward_item_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_item_amount[3]));
			if (wcscmp(fieldName, L"week_reward_combat_exp_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&week_reward_combat_exp_bonus_rate);
			if (wcscmp(fieldName, L"week_reward_duel_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&week_reward_duel_point_bonus_rate);
			if (wcscmp(fieldName, L"week_reward_party_battle_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&week_reward_party_battle_point_bonus_rate);
			if (wcscmp(fieldName, L"week_reward_field_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&week_reward_field_point_bonus_rate);
			if (wcscmp(fieldName, L"season_reward_combat_exp_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_combat_exp_bonus_rate);
			if (wcscmp(fieldName, L"season_reward_duel_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_duel_point_bonus_rate);
			if (wcscmp(fieldName, L"season_reward_party_battle_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_party_battle_point_bonus_rate);
			if (wcscmp(fieldName, L"season_reward_field_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_field_point_bonus_rate);
			if (wcscmp(fieldName, L"season_reward_guild_bank_money") == 0) return Data::AnyFieldToStringConverter::ToString(&season_reward_guild_bank_money);
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item[0]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item[1]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item[2]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item[3]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item[4]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item_amount[0]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item_amount[1]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item_amount[2]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item_amount[3]));
			if (wcscmp(fieldName, L"season_reward_guild_bank_item_amount_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_reward_guild_bank_item_amount[4]));
			if (wcscmp(fieldName, L"guild_ranking_reward_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_ranking_reward_effect);

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
__int32 week_reward_exp;
__int32 week_reward_money;
Data::TableRef week_reward_item[4];
int week_reward_item_tableId(){return 189;};
__int32 week_reward_item_amount[4];
__int32 season_reward_exp;
__int32 season_reward_money;
Data::TableRef season_reward_item[4];
int season_reward_item_tableId(){return 189;};
__int32 season_reward_item_amount[4];
__int16 week_reward_combat_exp_bonus_rate;
__int16 week_reward_duel_point_bonus_rate;
__int16 week_reward_party_battle_point_bonus_rate;
__int16 week_reward_field_point_bonus_rate;
__int16 season_reward_combat_exp_bonus_rate;
__int16 season_reward_duel_point_bonus_rate;
__int16 season_reward_party_battle_point_bonus_rate;
__int16 season_reward_field_point_bonus_rate;
__int32 season_reward_guild_bank_money;
__int8 season_reward_guild_bank_item[5];
std::wstring season_reward_guild_bank_item_EnumValue(int index) const {return Get_season_reward_guild_bank_item_EnumValue(season_reward_guild_bank_item[index]);};
char Pad0[3];
__int32 season_reward_guild_bank_item_amount[5];
Data::TableRef guild_ranking_reward_effect;
int guild_ranking_reward_effect_tableId(){return 111;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 305; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) rankingreward_RecordPtr // : DrRecordPtr
	{
		rankingreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::rankingreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}