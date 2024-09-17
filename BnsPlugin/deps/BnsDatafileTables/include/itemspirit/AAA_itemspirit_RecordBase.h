/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemspirit_Record : DrEl
	{
	private:
		static std::wstring Get_applicable_part_EnumValue(__int8 value);
		static std::wstring Get_attach_ability_EnumValue(__int8 value);
		static std::wstring Get_warning_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"main_ingredient") == 0) return main_ingredient;
			if (wcscmp(fieldName, L"applicable_part") == 0) return applicable_part;
			if (wcscmp(fieldName, L"applicable_part_1") == 0) return applicable_part[0];
			if (wcscmp(fieldName, L"applicable_part_2") == 0) return applicable_part[1];
			if (wcscmp(fieldName, L"applicable_part_3") == 0) return applicable_part[2];
			if (wcscmp(fieldName, L"applicable_part_4") == 0) return applicable_part[3];
			if (wcscmp(fieldName, L"use_random_ability_value") == 0) return use_random_ability_value;
			if (wcscmp(fieldName, L"success_probability") == 0) return success_probability;
			if (wcscmp(fieldName, L"money_cost") == 0) return money_cost;
			if (wcscmp(fieldName, L"distribution_type") == 0) return distribution_type;
			if (wcscmp(fieldName, L"fixed_ingredient") == 0) return fixed_ingredient;
			if (wcscmp(fieldName, L"fixed_ingredient_1") == 0) return fixed_ingredient[0];
			if (wcscmp(fieldName, L"fixed_ingredient_2") == 0) return fixed_ingredient[1];
			if (wcscmp(fieldName, L"fixed_ingredient_3") == 0) return fixed_ingredient[2];
			if (wcscmp(fieldName, L"fixed_ingredient_4") == 0) return fixed_ingredient[3];
			if (wcscmp(fieldName, L"fixed_ingredient_5") == 0) return fixed_ingredient[4];
			if (wcscmp(fieldName, L"fixed_ingredient_6") == 0) return fixed_ingredient[5];
			if (wcscmp(fieldName, L"fixed_ingredient_7") == 0) return fixed_ingredient[6];
			if (wcscmp(fieldName, L"fixed_ingredient_8") == 0) return fixed_ingredient[7];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count") == 0) return fixed_ingredient_stack_count;
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_1") == 0) return fixed_ingredient_stack_count[0];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_2") == 0) return fixed_ingredient_stack_count[1];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_3") == 0) return fixed_ingredient_stack_count[2];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_4") == 0) return fixed_ingredient_stack_count[3];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_5") == 0) return fixed_ingredient_stack_count[4];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_6") == 0) return fixed_ingredient_stack_count[5];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_7") == 0) return fixed_ingredient_stack_count[6];
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_8") == 0) return fixed_ingredient_stack_count[7];
			if (wcscmp(fieldName, L"attach_ability") == 0) return attach_ability;
			if (wcscmp(fieldName, L"attach_ability_1") == 0) return attach_ability[0];
			if (wcscmp(fieldName, L"attach_ability_2") == 0) return attach_ability[1];
			if (wcscmp(fieldName, L"ability_min") == 0) return ability_min;
			if (wcscmp(fieldName, L"ability_min_1") == 0) return ability_min[0];
			if (wcscmp(fieldName, L"ability_min_2") == 0) return ability_min[1];
			if (wcscmp(fieldName, L"ability_max") == 0) return ability_max;
			if (wcscmp(fieldName, L"ability_max_1") == 0) return ability_max[0];
			if (wcscmp(fieldName, L"ability_max_2") == 0) return ability_max[1];
			if (wcscmp(fieldName, L"once_attach_ability_min") == 0) return once_attach_ability_min;
			if (wcscmp(fieldName, L"once_attach_ability_min_1") == 0) return once_attach_ability_min[0];
			if (wcscmp(fieldName, L"once_attach_ability_min_2") == 0) return once_attach_ability_min[1];
			if (wcscmp(fieldName, L"once_attach_ability_max") == 0) return once_attach_ability_max;
			if (wcscmp(fieldName, L"once_attach_ability_max_1") == 0) return once_attach_ability_max[0];
			if (wcscmp(fieldName, L"once_attach_ability_max_2") == 0) return once_attach_ability_max[1];
			if (wcscmp(fieldName, L"warning") == 0) return warning;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"main_ingredient") == 0) return Data::AnyFieldToStringConverter::ToString(&main_ingredient);
			if (wcscmp(fieldName, L"applicable_part_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(applicable_part[0]));
			if (wcscmp(fieldName, L"applicable_part_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(applicable_part[1]));
			if (wcscmp(fieldName, L"applicable_part_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(applicable_part[2]));
			if (wcscmp(fieldName, L"applicable_part_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(applicable_part[3]));
			if (wcscmp(fieldName, L"use_random_ability_value") == 0) return Data::AnyFieldToStringConverter::ToString(&use_random_ability_value);
			if (wcscmp(fieldName, L"success_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&success_probability);
			if (wcscmp(fieldName, L"money_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&money_cost);
			if (wcscmp(fieldName, L"distribution_type") == 0) return Data::AnyFieldToStringConverter::ToString(&distribution_type);
			if (wcscmp(fieldName, L"fixed_ingredient_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[0]));
			if (wcscmp(fieldName, L"fixed_ingredient_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[1]));
			if (wcscmp(fieldName, L"fixed_ingredient_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[2]));
			if (wcscmp(fieldName, L"fixed_ingredient_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[3]));
			if (wcscmp(fieldName, L"fixed_ingredient_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[4]));
			if (wcscmp(fieldName, L"fixed_ingredient_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[5]));
			if (wcscmp(fieldName, L"fixed_ingredient_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[6]));
			if (wcscmp(fieldName, L"fixed_ingredient_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient[7]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[0]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[1]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[2]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[3]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[4]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[5]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[6]));
			if (wcscmp(fieldName, L"fixed_ingredient_stack_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_ingredient_stack_count[7]));
			if (wcscmp(fieldName, L"attach_ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attach_ability[0]));
			if (wcscmp(fieldName, L"attach_ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attach_ability[1]));
			if (wcscmp(fieldName, L"ability_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_min[0]));
			if (wcscmp(fieldName, L"ability_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_min[1]));
			if (wcscmp(fieldName, L"ability_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_max[0]));
			if (wcscmp(fieldName, L"ability_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_max[1]));
			if (wcscmp(fieldName, L"once_attach_ability_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(once_attach_ability_min[0]));
			if (wcscmp(fieldName, L"once_attach_ability_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(once_attach_ability_min[1]));
			if (wcscmp(fieldName, L"once_attach_ability_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(once_attach_ability_max[0]));
			if (wcscmp(fieldName, L"once_attach_ability_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(once_attach_ability_max[1]));
			if (wcscmp(fieldName, L"warning") == 0) return Data::AnyFieldToStringConverter::ToString(&warning);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef main_ingredient;
int main_ingredient_tableId(){return 189;};
__int8 applicable_part[4];
std::wstring applicable_part_EnumValue(int index) const {return Get_applicable_part_EnumValue(applicable_part[index]);};
bool use_random_ability_value;
__int8 success_probability;
char Pad0[2];
__int32 money_cost;
Data::TableRef distribution_type;
int distribution_type_tableId(){return 291;};
Data::TableRef fixed_ingredient[8];
int fixed_ingredient_tableId(){return 189;};
__int16 fixed_ingredient_stack_count[8];
__int8 attach_ability[2];
std::wstring attach_ability_EnumValue(int index) const {return Get_attach_ability_EnumValue(attach_ability[index]);};
char Pad1[2];
__int32 ability_min[2];
__int32 ability_max[2];
__int32 once_attach_ability_min[2];
__int32 once_attach_ability_max[2];
__int8 warning;
std::wstring warning_EnumValue() const {return Get_warning_EnumValue(warning);};

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 210; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemspirit_RecordPtr // : DrRecordPtr
	{
		itemspirit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemspirit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}