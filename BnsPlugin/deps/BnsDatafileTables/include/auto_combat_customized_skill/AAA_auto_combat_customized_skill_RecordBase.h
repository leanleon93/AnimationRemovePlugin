/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct auto_combat_customized_skill_Record : DrEl
	{
	private:
		static std::wstring Get_recommend_setting_cast_condition_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"sort_id") == 0) return sort_id;
			if (wcscmp(fieldName, L"recommend_setting_slot_index") == 0) return recommend_setting_slot_index;
			if (wcscmp(fieldName, L"recommend_setting_cast_condition") == 0) return recommend_setting_cast_condition;
			if (wcscmp(fieldName, L"recommend_setting_cast_condition_1") == 0) return recommend_setting_cast_condition[0];
			if (wcscmp(fieldName, L"recommend_setting_cast_condition_2") == 0) return recommend_setting_cast_condition[1];
			if (wcscmp(fieldName, L"recommend_setting_cast_condition_op") == 0) return recommend_setting_cast_condition_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"sort_id") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_id);
			if (wcscmp(fieldName, L"recommend_setting_slot_index") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_setting_slot_index);
			if (wcscmp(fieldName, L"recommend_setting_cast_condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(recommend_setting_cast_condition[0]));
			if (wcscmp(fieldName, L"recommend_setting_cast_condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(recommend_setting_cast_condition[1]));
			if (wcscmp(fieldName, L"recommend_setting_cast_condition_op") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_setting_cast_condition_op);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
		}
		union Key
		{
            struct {
                __int32 parent_skill_id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* name;
__int8 sort_id;
__int8 recommend_setting_slot_index;
char Pad0[2];
Data::TableRef recommend_setting_cast_condition[2];
int recommend_setting_cast_condition_tableId(){return 20;};
__int8 recommend_setting_cast_condition_op;
std::wstring recommend_setting_cast_condition_op_EnumValue() const {return Get_recommend_setting_cast_condition_op_EnumValue(recommend_setting_cast_condition_op);};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 21; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_customized_skill_RecordPtr // : DrRecordPtr
	{
		auto_combat_customized_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_customized_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}