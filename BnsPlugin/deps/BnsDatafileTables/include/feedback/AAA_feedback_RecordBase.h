/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct feedback_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"max_score_except_boss_npc") == 0) return max_score_except_boss_npc;
			if (wcscmp(fieldName, L"boss_npc_kill_count") == 0) return boss_npc_kill_count;
			if (wcscmp(fieldName, L"boss_npc") == 0) return boss_npc;
			if (wcscmp(fieldName, L"boss_npc_1") == 0) return boss_npc[0];
			if (wcscmp(fieldName, L"boss_npc_2") == 0) return boss_npc[1];
			if (wcscmp(fieldName, L"boss_npc_3") == 0) return boss_npc[2];
			if (wcscmp(fieldName, L"boss_npc_4") == 0) return boss_npc[3];
			if (wcscmp(fieldName, L"use_progress_info_ui") == 0) return use_progress_info_ui;
			if (wcscmp(fieldName, L"use_simple_result_ui") == 0) return use_simple_result_ui;
			if (wcscmp(fieldName, L"use_combat_signal_ui") == 0) return use_combat_signal_ui;
			if (wcscmp(fieldName, L"attack_damage_rank") == 0) return attack_damage_rank;
			if (wcscmp(fieldName, L"received_damage_rank") == 0) return received_damage_rank;
			if (wcscmp(fieldName, L"attack_response_rank") == 0) return attack_response_rank;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"max_score_except_boss_npc") == 0) return Data::AnyFieldToStringConverter::ToString(&max_score_except_boss_npc);
			if (wcscmp(fieldName, L"boss_npc_kill_count") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc_kill_count);
			if (wcscmp(fieldName, L"boss_npc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc[0]));
			if (wcscmp(fieldName, L"boss_npc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc[1]));
			if (wcscmp(fieldName, L"boss_npc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc[2]));
			if (wcscmp(fieldName, L"boss_npc_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(boss_npc[3]));
			if (wcscmp(fieldName, L"use_progress_info_ui") == 0) return Data::AnyFieldToStringConverter::ToString(&use_progress_info_ui);
			if (wcscmp(fieldName, L"use_simple_result_ui") == 0) return Data::AnyFieldToStringConverter::ToString(&use_simple_result_ui);
			if (wcscmp(fieldName, L"use_combat_signal_ui") == 0) return Data::AnyFieldToStringConverter::ToString(&use_combat_signal_ui);
			if (wcscmp(fieldName, L"attack_damage_rank") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_damage_rank);
			if (wcscmp(fieldName, L"received_damage_rank") == 0) return Data::AnyFieldToStringConverter::ToString(&received_damage_rank);
			if (wcscmp(fieldName, L"attack_response_rank") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_response_rank);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 max_score_except_boss_npc;
__int8 boss_npc_kill_count;
char Pad0[3];
Data::TableRef boss_npc[4];
int boss_npc_tableId(){return 132;};
bool use_progress_info_ui;
bool use_simple_result_ui;
bool use_combat_signal_ui;
char Pad1[1];
Data::TableRef attack_damage_rank;
int attack_damage_rank_tableId(){return 134;};
Data::TableRef received_damage_rank;
int received_damage_rank_tableId(){return 134;};
Data::TableRef attack_response_rank;
int attack_response_rank_tableId(){return 134;};

		static TableVersion Version() { return TableVersion(4, 4); }
		static __int16 TableId() { return 133; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_RecordPtr // : DrRecordPtr
	{
		feedback_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}