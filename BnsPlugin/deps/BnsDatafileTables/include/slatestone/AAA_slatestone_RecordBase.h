/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct slatestone_Record : DrEl
	{
	private:
		static std::wstring Get_modify_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"grade") == 0) return grade;
			if (wcscmp(fieldName, L"duplication_permission") == 0) return duplication_permission;
			if (wcscmp(fieldName, L"modify_ability") == 0) return modify_ability;
			if (wcscmp(fieldName, L"modify_ability_1") == 0) return modify_ability[0];
			if (wcscmp(fieldName, L"modify_ability_2") == 0) return modify_ability[1];
			if (wcscmp(fieldName, L"modify_ability_3") == 0) return modify_ability[2];
			if (wcscmp(fieldName, L"modify_ability_4") == 0) return modify_ability[3];
			if (wcscmp(fieldName, L"init_ability_value") == 0) return init_ability_value;
			if (wcscmp(fieldName, L"init_ability_value_1") == 0) return init_ability_value[0];
			if (wcscmp(fieldName, L"init_ability_value_2") == 0) return init_ability_value[1];
			if (wcscmp(fieldName, L"init_ability_value_3") == 0) return init_ability_value[2];
			if (wcscmp(fieldName, L"init_ability_value_4") == 0) return init_ability_value[3];
			if (wcscmp(fieldName, L"unit_ability_value") == 0) return unit_ability_value;
			if (wcscmp(fieldName, L"unit_ability_value_1") == 0) return unit_ability_value[0];
			if (wcscmp(fieldName, L"unit_ability_value_2") == 0) return unit_ability_value[1];
			if (wcscmp(fieldName, L"unit_ability_value_3") == 0) return unit_ability_value[2];
			if (wcscmp(fieldName, L"unit_ability_value_4") == 0) return unit_ability_value[3];
			if (wcscmp(fieldName, L"max_ability_value") == 0) return max_ability_value;
			if (wcscmp(fieldName, L"max_ability_value_1") == 0) return max_ability_value[0];
			if (wcscmp(fieldName, L"max_ability_value_2") == 0) return max_ability_value[1];
			if (wcscmp(fieldName, L"max_ability_value_3") == 0) return max_ability_value[2];
			if (wcscmp(fieldName, L"max_ability_value_4") == 0) return max_ability_value[3];
			if (wcscmp(fieldName, L"init_ability_base_value") == 0) return init_ability_base_value;
			if (wcscmp(fieldName, L"init_ability_base_value_1") == 0) return init_ability_base_value[0];
			if (wcscmp(fieldName, L"init_ability_base_value_2") == 0) return init_ability_base_value[1];
			if (wcscmp(fieldName, L"init_ability_base_value_3") == 0) return init_ability_base_value[2];
			if (wcscmp(fieldName, L"init_ability_base_value_4") == 0) return init_ability_base_value[3];
			if (wcscmp(fieldName, L"unit_ability_base_value") == 0) return unit_ability_base_value;
			if (wcscmp(fieldName, L"unit_ability_base_value_1") == 0) return unit_ability_base_value[0];
			if (wcscmp(fieldName, L"unit_ability_base_value_2") == 0) return unit_ability_base_value[1];
			if (wcscmp(fieldName, L"unit_ability_base_value_3") == 0) return unit_ability_base_value[2];
			if (wcscmp(fieldName, L"unit_ability_base_value_4") == 0) return unit_ability_base_value[3];
			if (wcscmp(fieldName, L"max_ability_base_value") == 0) return max_ability_base_value;
			if (wcscmp(fieldName, L"max_ability_base_value_1") == 0) return max_ability_base_value[0];
			if (wcscmp(fieldName, L"max_ability_base_value_2") == 0) return max_ability_base_value[1];
			if (wcscmp(fieldName, L"max_ability_base_value_3") == 0) return max_ability_base_value[2];
			if (wcscmp(fieldName, L"max_ability_base_value_4") == 0) return max_ability_base_value[3];
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"icon_case") == 0) return icon_case;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"grade") == 0) return Data::AnyFieldToStringConverter::ToString(&grade);
			if (wcscmp(fieldName, L"duplication_permission") == 0) return Data::AnyFieldToStringConverter::ToString(&duplication_permission);
			if (wcscmp(fieldName, L"modify_ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[0]));
			if (wcscmp(fieldName, L"modify_ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[1]));
			if (wcscmp(fieldName, L"modify_ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[2]));
			if (wcscmp(fieldName, L"modify_ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability[3]));
			if (wcscmp(fieldName, L"init_ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_value[0]));
			if (wcscmp(fieldName, L"init_ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_value[1]));
			if (wcscmp(fieldName, L"init_ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_value[2]));
			if (wcscmp(fieldName, L"init_ability_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_value[3]));
			if (wcscmp(fieldName, L"unit_ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_value[0]));
			if (wcscmp(fieldName, L"unit_ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_value[1]));
			if (wcscmp(fieldName, L"unit_ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_value[2]));
			if (wcscmp(fieldName, L"unit_ability_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_value[3]));
			if (wcscmp(fieldName, L"max_ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_value[0]));
			if (wcscmp(fieldName, L"max_ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_value[1]));
			if (wcscmp(fieldName, L"max_ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_value[2]));
			if (wcscmp(fieldName, L"max_ability_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_value[3]));
			if (wcscmp(fieldName, L"init_ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_base_value[0]));
			if (wcscmp(fieldName, L"init_ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_base_value[1]));
			if (wcscmp(fieldName, L"init_ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_base_value[2]));
			if (wcscmp(fieldName, L"init_ability_base_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(init_ability_base_value[3]));
			if (wcscmp(fieldName, L"unit_ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_base_value[0]));
			if (wcscmp(fieldName, L"unit_ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_base_value[1]));
			if (wcscmp(fieldName, L"unit_ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_base_value[2]));
			if (wcscmp(fieldName, L"unit_ability_base_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(unit_ability_base_value[3]));
			if (wcscmp(fieldName, L"max_ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_base_value[0]));
			if (wcscmp(fieldName, L"max_ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_base_value[1]));
			if (wcscmp(fieldName, L"max_ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_base_value[2]));
			if (wcscmp(fieldName, L"max_ability_base_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(max_ability_base_value[3]));
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"icon_case") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_case);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name;
int name_tableId(){return 405;};
__int16 group;
__int8 grade;
bool duplication_permission;
__int8 modify_ability[4];
std::wstring modify_ability_EnumValue(int index) const {return Get_modify_ability_EnumValue(modify_ability[index]);};
__int32 init_ability_value[4];
__int32 unit_ability_value[4];
__int32 max_ability_value[4];
__int32 init_ability_base_value[4];
__int32 unit_ability_base_value[4];
__int32 max_ability_base_value[4];
Data::IconRef icon;
Data::IconRef icon_case;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 366; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatestone_RecordPtr // : DrRecordPtr
	{
		slatestone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::slatestone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}