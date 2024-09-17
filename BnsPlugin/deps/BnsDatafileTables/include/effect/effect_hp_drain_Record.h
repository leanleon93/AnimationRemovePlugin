/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_hp_drain_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hp_diff") == 0) return hp_diff;
			if (wcscmp(fieldName, L"hp_percent") == 0) return hp_percent;
			if (wcscmp(fieldName, L"pve_boss_level_npc_hp_diff") == 0) return pve_boss_level_npc_hp_diff;
			if (wcscmp(fieldName, L"pve_boss_level_npc_hp_percent") == 0) return pve_boss_level_npc_hp_percent;
			if (wcscmp(fieldName, L"pvp_hp_diff") == 0) return pvp_hp_diff;
			if (wcscmp(fieldName, L"pvp_hp_percent") == 0) return pvp_hp_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"hp_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_diff);
			if (wcscmp(fieldName, L"hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_percent);
			if (wcscmp(fieldName, L"pve_boss_level_npc_hp_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&pve_boss_level_npc_hp_diff);
			if (wcscmp(fieldName, L"pve_boss_level_npc_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&pve_boss_level_npc_hp_percent);
			if (wcscmp(fieldName, L"pvp_hp_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&pvp_hp_diff);
			if (wcscmp(fieldName, L"pvp_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&pvp_hp_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 hp_diff;
__int16 hp_percent;
char Pad_sub_0[2];
__int32 pve_boss_level_npc_hp_diff;
__int16 pve_boss_level_npc_hp_percent;
char Pad_sub_1[2];
__int32 pvp_hp_diff;
__int16 pvp_hp_percent;

		static __int32 SubType() { return 36; }
	};
#pragma pack(pop)
}