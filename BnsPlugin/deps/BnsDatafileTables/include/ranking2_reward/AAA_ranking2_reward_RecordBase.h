/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_reward_Record : DrEl
	{
	private:
		static std::wstring Get_guild_bank_item_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"exp") == 0) return exp;
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_1") == 0) return item[0];
			if (wcscmp(fieldName, L"item_2") == 0) return item[1];
			if (wcscmp(fieldName, L"item_3") == 0) return item[2];
			if (wcscmp(fieldName, L"item_4") == 0) return item[3];
			if (wcscmp(fieldName, L"item_count") == 0) return item_count;
			if (wcscmp(fieldName, L"item_count_1") == 0) return item_count[0];
			if (wcscmp(fieldName, L"item_count_2") == 0) return item_count[1];
			if (wcscmp(fieldName, L"item_count_3") == 0) return item_count[2];
			if (wcscmp(fieldName, L"item_count_4") == 0) return item_count[3];
			if (wcscmp(fieldName, L"combat_exp_bonus_rate") == 0) return combat_exp_bonus_rate;
			if (wcscmp(fieldName, L"duel_point_bonus_rate") == 0) return duel_point_bonus_rate;
			if (wcscmp(fieldName, L"party_battle_point_bonus_rate") == 0) return party_battle_point_bonus_rate;
			if (wcscmp(fieldName, L"field_point_bonus_rate") == 0) return field_point_bonus_rate;
			if (wcscmp(fieldName, L"guild_bank_money") == 0) return guild_bank_money;
			if (wcscmp(fieldName, L"guild_bank_item") == 0) return guild_bank_item;
			if (wcscmp(fieldName, L"guild_bank_item_1") == 0) return guild_bank_item[0];
			if (wcscmp(fieldName, L"guild_bank_item_2") == 0) return guild_bank_item[1];
			if (wcscmp(fieldName, L"guild_bank_item_3") == 0) return guild_bank_item[2];
			if (wcscmp(fieldName, L"guild_bank_item_4") == 0) return guild_bank_item[3];
			if (wcscmp(fieldName, L"guild_bank_item_5") == 0) return guild_bank_item[4];
			if (wcscmp(fieldName, L"guild_bank_item_count") == 0) return guild_bank_item_count;
			if (wcscmp(fieldName, L"guild_bank_item_count_1") == 0) return guild_bank_item_count[0];
			if (wcscmp(fieldName, L"guild_bank_item_count_2") == 0) return guild_bank_item_count[1];
			if (wcscmp(fieldName, L"guild_bank_item_count_3") == 0) return guild_bank_item_count[2];
			if (wcscmp(fieldName, L"guild_bank_item_count_4") == 0) return guild_bank_item_count[3];
			if (wcscmp(fieldName, L"guild_bank_item_count_5") == 0) return guild_bank_item_count[4];
			if (wcscmp(fieldName, L"guild_ranking_reward_effect") == 0) return guild_ranking_reward_effect;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"exp") == 0) return Data::AnyFieldToStringConverter::ToString(&exp);
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[0]));
			if (wcscmp(fieldName, L"item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[1]));
			if (wcscmp(fieldName, L"item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[2]));
			if (wcscmp(fieldName, L"item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[3]));
			if (wcscmp(fieldName, L"item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[0]));
			if (wcscmp(fieldName, L"item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[1]));
			if (wcscmp(fieldName, L"item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[2]));
			if (wcscmp(fieldName, L"item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[3]));
			if (wcscmp(fieldName, L"combat_exp_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_exp_bonus_rate);
			if (wcscmp(fieldName, L"duel_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_point_bonus_rate);
			if (wcscmp(fieldName, L"party_battle_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_point_bonus_rate);
			if (wcscmp(fieldName, L"field_point_bonus_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&field_point_bonus_rate);
			if (wcscmp(fieldName, L"guild_bank_money") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_bank_money);
			if (wcscmp(fieldName, L"guild_bank_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item[0]));
			if (wcscmp(fieldName, L"guild_bank_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item[1]));
			if (wcscmp(fieldName, L"guild_bank_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item[2]));
			if (wcscmp(fieldName, L"guild_bank_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item[3]));
			if (wcscmp(fieldName, L"guild_bank_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item[4]));
			if (wcscmp(fieldName, L"guild_bank_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item_count[0]));
			if (wcscmp(fieldName, L"guild_bank_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item_count[1]));
			if (wcscmp(fieldName, L"guild_bank_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item_count[2]));
			if (wcscmp(fieldName, L"guild_bank_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item_count[3]));
			if (wcscmp(fieldName, L"guild_bank_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(guild_bank_item_count[4]));
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
__int32 exp;
__int32 money;
Data::TableRef item[4];
int item_tableId(){return 189;};
__int32 item_count[4];
__int16 combat_exp_bonus_rate;
__int16 duel_point_bonus_rate;
__int16 party_battle_point_bonus_rate;
__int16 field_point_bonus_rate;
__int32 guild_bank_money;
__int8 guild_bank_item[5];
std::wstring guild_bank_item_EnumValue(int index) const {return Get_guild_bank_item_EnumValue(guild_bank_item[index]);};
char Pad0[3];
__int32 guild_bank_item_count[5];
Data::TableRef guild_ranking_reward_effect;
int guild_ranking_reward_effect_tableId(){return 111;};

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 298; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_reward_RecordPtr // : DrRecordPtr
	{
		ranking2_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}