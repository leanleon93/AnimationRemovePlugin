/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct auto_combat_skill_Record : DrEl
	{
	private:
		static std::wstring Get_cast_condition_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"priority") == 0) return priority;
			if (wcscmp(fieldName, L"cast_condition") == 0) return cast_condition;
			if (wcscmp(fieldName, L"cast_condition_1") == 0) return cast_condition[0];
			if (wcscmp(fieldName, L"cast_condition_2") == 0) return cast_condition[1];
			if (wcscmp(fieldName, L"cast_condition_op") == 0) return cast_condition_op;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"priority") == 0) return Data::AnyFieldToStringConverter::ToString(&priority);
			if (wcscmp(fieldName, L"cast_condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_condition[0]));
			if (wcscmp(fieldName, L"cast_condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_condition[1]));
			if (wcscmp(fieldName, L"cast_condition_op") == 0) return Data::AnyFieldToStringConverter::ToString(&cast_condition_op);

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
__int8 priority;
char Pad0[3];
Data::TableRef cast_condition[2];
int cast_condition_tableId(){return 22;};
__int8 cast_condition_op;
std::wstring cast_condition_op_EnumValue() const {return Get_cast_condition_op_EnumValue(cast_condition_op);};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 23; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) auto_combat_skill_RecordPtr // : DrRecordPtr
	{
		auto_combat_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::auto_combat_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}