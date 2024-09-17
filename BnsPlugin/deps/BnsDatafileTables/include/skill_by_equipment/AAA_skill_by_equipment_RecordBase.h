/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_by_equipment_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skill3_id") == 0) return skill3_id;
			if (wcscmp(fieldName, L"skill3_id_1") == 0) return skill3_id[0];
			if (wcscmp(fieldName, L"skill3_id_2") == 0) return skill3_id[1];
			if (wcscmp(fieldName, L"skill3_id_3") == 0) return skill3_id[2];
			if (wcscmp(fieldName, L"skill3_id_4") == 0) return skill3_id[3];
			if (wcscmp(fieldName, L"block_skill3_id") == 0) return block_skill3_id;
			if (wcscmp(fieldName, L"block_skill3_id_1") == 0) return block_skill3_id[0];
			if (wcscmp(fieldName, L"block_skill3_id_2") == 0) return block_skill3_id[1];
			if (wcscmp(fieldName, L"block_skill3_id_3") == 0) return block_skill3_id[2];
			if (wcscmp(fieldName, L"block_skill3_id_4") == 0) return block_skill3_id[3];
			if (wcscmp(fieldName, L"skill_tree_id") == 0) return skill_tree_id;
			if (wcscmp(fieldName, L"skill_tree_id_1") == 0) return skill_tree_id[0];
			if (wcscmp(fieldName, L"skill_tree_id_2") == 0) return skill_tree_id[1];
			if (wcscmp(fieldName, L"skill_tree_id_3") == 0) return skill_tree_id[2];
			if (wcscmp(fieldName, L"skill_tree_id_4") == 0) return skill_tree_id[3];
			if (wcscmp(fieldName, L"context_script") == 0) return context_script;
			if (wcscmp(fieldName, L"context_script_1") == 0) return context_script[0];
			if (wcscmp(fieldName, L"context_script_2") == 0) return context_script[1];
			if (wcscmp(fieldName, L"context_script_3") == 0) return context_script[2];
			if (wcscmp(fieldName, L"context_script_4") == 0) return context_script[3];
			if (wcscmp(fieldName, L"tooltip_text") == 0) return tooltip_text;
			if (wcscmp(fieldName, L"tooltip_text_1") == 0) return tooltip_text[0];
			if (wcscmp(fieldName, L"tooltip_text_2") == 0) return tooltip_text[1];
			if (wcscmp(fieldName, L"tooltip_text_3") == 0) return tooltip_text[2];
			if (wcscmp(fieldName, L"tooltip_text_4") == 0) return tooltip_text[3];
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot") == 0) return skill_attack_power_min_param1_slot;
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_1") == 0) return skill_attack_power_min_param1_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_2") == 0) return skill_attack_power_min_param1_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_3") == 0) return skill_attack_power_min_param1_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_4") == 0) return skill_attack_power_min_param1_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot") == 0) return skill_attack_power_max_param1_slot;
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_1") == 0) return skill_attack_power_max_param1_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_2") == 0) return skill_attack_power_max_param1_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_3") == 0) return skill_attack_power_max_param1_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_4") == 0) return skill_attack_power_max_param1_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot") == 0) return skill_attack_power_min_param2_slot;
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_1") == 0) return skill_attack_power_min_param2_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_2") == 0) return skill_attack_power_min_param2_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_3") == 0) return skill_attack_power_min_param2_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_4") == 0) return skill_attack_power_min_param2_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot") == 0) return skill_attack_power_max_param2_slot;
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_1") == 0) return skill_attack_power_max_param2_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_2") == 0) return skill_attack_power_max_param2_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_3") == 0) return skill_attack_power_max_param2_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_4") == 0) return skill_attack_power_max_param2_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot") == 0) return skill_attack_power_min_param3_slot;
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_1") == 0) return skill_attack_power_min_param3_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_2") == 0) return skill_attack_power_min_param3_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_3") == 0) return skill_attack_power_min_param3_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_4") == 0) return skill_attack_power_min_param3_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot") == 0) return skill_attack_power_max_param3_slot;
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_1") == 0) return skill_attack_power_max_param3_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_2") == 0) return skill_attack_power_max_param3_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_3") == 0) return skill_attack_power_max_param3_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_4") == 0) return skill_attack_power_max_param3_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot") == 0) return skill_attack_power_min_param4_slot;
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_1") == 0) return skill_attack_power_min_param4_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_2") == 0) return skill_attack_power_min_param4_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_3") == 0) return skill_attack_power_min_param4_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_4") == 0) return skill_attack_power_min_param4_slot[3];
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot") == 0) return skill_attack_power_max_param4_slot;
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_1") == 0) return skill_attack_power_max_param4_slot[0];
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_2") == 0) return skill_attack_power_max_param4_slot[1];
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_3") == 0) return skill_attack_power_max_param4_slot[2];
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_4") == 0) return skill_attack_power_max_param4_slot[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skill3_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3_id[0]));
			if (wcscmp(fieldName, L"skill3_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3_id[1]));
			if (wcscmp(fieldName, L"skill3_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3_id[2]));
			if (wcscmp(fieldName, L"skill3_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3_id[3]));
			if (wcscmp(fieldName, L"block_skill3_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_skill3_id[0]));
			if (wcscmp(fieldName, L"block_skill3_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_skill3_id[1]));
			if (wcscmp(fieldName, L"block_skill3_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_skill3_id[2]));
			if (wcscmp(fieldName, L"block_skill3_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_skill3_id[3]));
			if (wcscmp(fieldName, L"skill_tree_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_tree_id[0]));
			if (wcscmp(fieldName, L"skill_tree_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_tree_id[1]));
			if (wcscmp(fieldName, L"skill_tree_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_tree_id[2]));
			if (wcscmp(fieldName, L"skill_tree_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_tree_id[3]));
			if (wcscmp(fieldName, L"context_script_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(context_script[0]));
			if (wcscmp(fieldName, L"context_script_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(context_script[1]));
			if (wcscmp(fieldName, L"context_script_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(context_script[2]));
			if (wcscmp(fieldName, L"context_script_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(context_script[3]));
			if (wcscmp(fieldName, L"tooltip_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_text[0]));
			if (wcscmp(fieldName, L"tooltip_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_text[1]));
			if (wcscmp(fieldName, L"tooltip_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_text[2]));
			if (wcscmp(fieldName, L"tooltip_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_text[3]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param1_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param1_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param1_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param1_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param1_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param1_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param1_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param1_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param1_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param1_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param2_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param2_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param2_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param2_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param2_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param2_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param2_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param2_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param2_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param2_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param3_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param3_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param3_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param3_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param3_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param3_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param3_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param3_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param3_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param3_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param4_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param4_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param4_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_min_param4_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_min_param4_slot[3]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param4_slot[0]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param4_slot[1]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param4_slot[2]));
			if (wcscmp(fieldName, L"skill_attack_power_max_param4_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_attack_power_max_param4_slot[3]));

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
__int32 skill3_id[4];
__int32 block_skill3_id[4];
__int32 skill_tree_id[4];
Data::TableRef context_script[4];
int context_script_tableId(){return 74;};
Data::TableRef tooltip_text[4];
int tooltip_text_tableId(){return 405;};
__int32 skill_attack_power_min_param1_slot[4];
__int32 skill_attack_power_max_param1_slot[4];
__int32 skill_attack_power_min_param2_slot[4];
__int32 skill_attack_power_max_param2_slot[4];
__int32 skill_attack_power_min_param3_slot[4];
__int32 skill_attack_power_max_param3_slot[4];
__int32 skill_attack_power_min_param4_slot[4];
__int32 skill_attack_power_max_param4_slot[4];

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 330; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_by_equipment_RecordPtr // : DrRecordPtr
	{
		skill_by_equipment_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_by_equipment_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}