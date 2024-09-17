/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct auto_combat_customized_skill_cast_condition_Record : DrEl
	{
	private:
		static std::wstring Get_target_type_EnumValue(__int8 value);
		static std::wstring Get_check_hp_percent_op_EnumValue(__int8 value);
		static std::wstring Get_check_success_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_success_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_fail_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_check_fail_effect_flag_EnumValue(__int16 value);
		static std::wstring Get_check_npc_grade2_EnumValue(__int8 value);
		static std::wstring Get_check_npc_grade2_op_EnumValue(__int8 value);
		static std::wstring Get_check_target_distance_op_EnumValue(__int8 value);
		static std::wstring Get_check_around_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"sort_id") == 0) return sort_id;
			if (wcscmp(fieldName, L"unique_group") == 0) return unique_group;
			if (wcscmp(fieldName, L"target_type") == 0) return target_type;
			if (wcscmp(fieldName, L"check_hp_percent") == 0) return check_hp_percent;
			if (wcscmp(fieldName, L"check_hp_percent_op") == 0) return check_hp_percent_op;
			if (wcscmp(fieldName, L"check_success_effect_attribute") == 0) return check_success_effect_attribute;
			if (wcscmp(fieldName, L"check_success_effect_flag") == 0) return check_success_effect_flag;
			if (wcscmp(fieldName, L"check_fail_effect_attribute") == 0) return check_fail_effect_attribute;
			if (wcscmp(fieldName, L"check_fail_effect_flag") == 0) return check_fail_effect_flag;
			if (wcscmp(fieldName, L"check_npc_grade2") == 0) return check_npc_grade2;
			if (wcscmp(fieldName, L"check_npc_grade2_op") == 0) return check_npc_grade2_op;
			if (wcscmp(fieldName, L"check_target_distance") == 0) return check_target_distance;
			if (wcscmp(fieldName, L"check_target_distance_op") == 0) return check_target_distance_op;
			if (wcscmp(fieldName, L"check_around_enemy_count") == 0) return check_around_enemy_count;
			if (wcscmp(fieldName, L"check_around_enemy_targeting") == 0) return check_around_enemy_targeting;
			if (wcscmp(fieldName, L"check_around_range") == 0) return check_around_range;
			if (wcscmp(fieldName, L"check_around_op") == 0) return check_around_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"sort_id") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_id);
			if (wcscmp(fieldName, L"unique_group") == 0) return Data::AnyFieldToStringConverter::ToString(&unique_group);
			if (wcscmp(fieldName, L"target_type") == 0) return Data::AnyFieldToStringConverter::ToString(&target_type);
			if (wcscmp(fieldName, L"check_hp_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&check_hp_percent);
			if (wcscmp(fieldName, L"check_hp_percent_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_hp_percent_op);
			if (wcscmp(fieldName, L"check_success_effect_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&check_success_effect_attribute);
			if (wcscmp(fieldName, L"check_success_effect_flag") == 0) return Data::AnyFieldToStringConverter::ToString(&check_success_effect_flag);
			if (wcscmp(fieldName, L"check_fail_effect_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&check_fail_effect_attribute);
			if (wcscmp(fieldName, L"check_fail_effect_flag") == 0) return Data::AnyFieldToStringConverter::ToString(&check_fail_effect_flag);
			if (wcscmp(fieldName, L"check_npc_grade2") == 0) return Data::AnyFieldToStringConverter::ToString(&check_npc_grade2);
			if (wcscmp(fieldName, L"check_npc_grade2_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_npc_grade2_op);
			if (wcscmp(fieldName, L"check_target_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_distance);
			if (wcscmp(fieldName, L"check_target_distance_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_target_distance_op);
			if (wcscmp(fieldName, L"check_around_enemy_count") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_enemy_count);
			if (wcscmp(fieldName, L"check_around_enemy_targeting") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_enemy_targeting);
			if (wcscmp(fieldName, L"check_around_range") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_range);
			if (wcscmp(fieldName, L"check_around_op") == 0) return Data::AnyFieldToStringConverter::ToString(&check_around_op);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 sort_id;
__int8 unique_group;
__int8 target_type;
std::wstring target_type_EnumValue() const {return Get_target_type_EnumValue(target_type);};
char Pad0[1];
__int16 check_hp_percent;
__int8 check_hp_percent_op;
std::wstring check_hp_percent_op_EnumValue() const {return Get_check_hp_percent_op_EnumValue(check_hp_percent_op);};
char Pad1[1];
__int16 check_success_effect_attribute;
std::wstring check_success_effect_attribute_EnumValue() const {return Get_check_success_effect_attribute_EnumValue(check_success_effect_attribute);};
__int16 check_success_effect_flag;
std::wstring check_success_effect_flag_EnumValue() const {return Get_check_success_effect_flag_EnumValue(check_success_effect_flag);};
__int16 check_fail_effect_attribute;
std::wstring check_fail_effect_attribute_EnumValue() const {return Get_check_fail_effect_attribute_EnumValue(check_fail_effect_attribute);};
__int16 check_fail_effect_flag;
std::wstring check_fail_effect_flag_EnumValue() const {return Get_check_fail_effect_flag_EnumValue(check_fail_effect_flag);};
__int8 check_npc_grade2;
std::wstring check_npc_grade2_EnumValue() const {return Get_check_npc_grade2_EnumValue(check_npc_grade2);};
__int8 check_npc_grade2_op;
std::wstring check_npc_grade2_op_EnumValue() const {return Get_check_npc_grade2_op_EnumValue(check_npc_grade2_op);};
__int16 check_target_distance;
__int8 check_target_distance_op;
std::wstring check_target_distance_op_EnumValue() const {return Get_check_target_distance_op_EnumValue(check_target_distance_op);};
char Pad2[1];
__int16 check_around_enemy_count;
bool check_around_enemy_targeting;
char Pad3[1];
__int16 check_around_range;
__int8 check_around_op;
std::wstring check_around_op_EnumValue() const {return Get_check_around_op_EnumValue(check_around_op);};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 20; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_customized_skill_cast_condition_RecordPtr // : DrRecordPtr
	{
		auto_combat_customized_skill_cast_condition_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_customized_skill_cast_condition_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}