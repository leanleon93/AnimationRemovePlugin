/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pccafebenefits_Record : DrEl
	{
	private:
		static std::wstring Get_code_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"duel_effect") == 0) return duel_effect;
			if (wcscmp(fieldName, L"party_battle_point_bonus_percent") == 0) return party_battle_point_bonus_percent;
			if (wcscmp(fieldName, L"party_battle_exp_bonus_percent") == 0) return party_battle_exp_bonus_percent;
			if (wcscmp(fieldName, L"duel_point_bonus_percent") == 0) return duel_point_bonus_percent;
			if (wcscmp(fieldName, L"duel_exp_bonus_percent") == 0) return duel_exp_bonus_percent;
			if (wcscmp(fieldName, L"field_play_point_bonus_percent") == 0) return field_play_point_bonus_percent;
			if (wcscmp(fieldName, L"npc_looting_money_reward_percent") == 0) return npc_looting_money_reward_percent;
			if (wcscmp(fieldName, L"weapon_accessory_transform_money_cost_discount_rate") == 0) return weapon_accessory_transform_money_cost_discount_rate;
			if (wcscmp(fieldName, L"weapon_gem_transform_money_cost_discount_rate") == 0) return weapon_gem_transform_money_cost_discount_rate;
			if (wcscmp(fieldName, L"item_awakening_money_cost_discount_rate") == 0) return item_awakening_money_cost_discount_rate;
			if (wcscmp(fieldName, L"detach_weapon_gem_money_cost_discount_rate") == 0) return detach_weapon_gem_money_cost_discount_rate;
			if (wcscmp(fieldName, L"purify_item_discount_rate") == 0) return purify_item_discount_rate;
			if (wcscmp(fieldName, L"market_register_amount_tax_discount_rate") == 0) return market_register_amount_tax_discount_rate;
			if (wcscmp(fieldName, L"unlocated_warehouse") == 0) return unlocated_warehouse;
			if (wcscmp(fieldName, L"quest_reward") == 0) return quest_reward;
			if (wcscmp(fieldName, L"quest_reward_account_exp_bonus_percent") == 0) return quest_reward_account_exp_bonus_percent;
			if (wcscmp(fieldName, L"tendency_quest_reward_account_exp_bonus_percent") == 0) return tendency_quest_reward_account_exp_bonus_percent;
			if (wcscmp(fieldName, L"challenge_reward_account_exp_bonus_percent") == 0) return challenge_reward_account_exp_bonus_percent;
			if (wcscmp(fieldName, L"pet_gem_transform_money_cost_discount_rate") == 0) return pet_gem_transform_money_cost_discount_rate;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"effect") == 0) return Data::AnyFieldToStringConverter::ToString(&effect);
			if (wcscmp(fieldName, L"duel_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_effect);
			if (wcscmp(fieldName, L"party_battle_point_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_point_bonus_percent);
			if (wcscmp(fieldName, L"party_battle_exp_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_exp_bonus_percent);
			if (wcscmp(fieldName, L"duel_point_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_point_bonus_percent);
			if (wcscmp(fieldName, L"duel_exp_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_exp_bonus_percent);
			if (wcscmp(fieldName, L"field_play_point_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&field_play_point_bonus_percent);
			if (wcscmp(fieldName, L"npc_looting_money_reward_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&npc_looting_money_reward_percent);
			if (wcscmp(fieldName, L"weapon_accessory_transform_money_cost_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_accessory_transform_money_cost_discount_rate);
			if (wcscmp(fieldName, L"weapon_gem_transform_money_cost_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_gem_transform_money_cost_discount_rate);
			if (wcscmp(fieldName, L"item_awakening_money_cost_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&item_awakening_money_cost_discount_rate);
			if (wcscmp(fieldName, L"detach_weapon_gem_money_cost_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_weapon_gem_money_cost_discount_rate);
			if (wcscmp(fieldName, L"purify_item_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&purify_item_discount_rate);
			if (wcscmp(fieldName, L"market_register_amount_tax_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&market_register_amount_tax_discount_rate);
			if (wcscmp(fieldName, L"unlocated_warehouse") == 0) return Data::AnyFieldToStringConverter::ToString(&unlocated_warehouse);
			if (wcscmp(fieldName, L"quest_reward") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_reward);
			if (wcscmp(fieldName, L"quest_reward_account_exp_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_reward_account_exp_bonus_percent);
			if (wcscmp(fieldName, L"tendency_quest_reward_account_exp_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_quest_reward_account_exp_bonus_percent);
			if (wcscmp(fieldName, L"challenge_reward_account_exp_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&challenge_reward_account_exp_bonus_percent);
			if (wcscmp(fieldName, L"pet_gem_transform_money_cost_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&pet_gem_transform_money_cost_discount_rate);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 code;
__int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef effect;
int effect_tableId(){return 111;};
Data::TableRef duel_effect;
int duel_effect_tableId(){return 111;};
__int32 party_battle_point_bonus_percent;
__int32 party_battle_exp_bonus_percent;
__int32 duel_point_bonus_percent;
__int32 duel_exp_bonus_percent;
__int32 field_play_point_bonus_percent;
__int32 npc_looting_money_reward_percent;
__int8 weapon_accessory_transform_money_cost_discount_rate;
__int8 weapon_gem_transform_money_cost_discount_rate;
__int8 item_awakening_money_cost_discount_rate;
__int8 detach_weapon_gem_money_cost_discount_rate;
__int8 purify_item_discount_rate;
__int8 market_register_amount_tax_discount_rate;
bool unlocated_warehouse;
bool quest_reward;
__int32 quest_reward_account_exp_bonus_percent;
__int32 tendency_quest_reward_account_exp_bonus_percent;
__int32 challenge_reward_account_exp_bonus_percent;
__int8 pet_gem_transform_money_cost_discount_rate;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 266; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pccafebenefits_RecordPtr // : DrRecordPtr
	{
		pccafebenefits_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pccafebenefits_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}