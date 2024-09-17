/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_mission_Record : DrEl
	{
	private:
		static std::wstring Get_mission_type_EnumValue(__int8 value);
		static std::wstring Get_entity_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"mission_type") == 0) return mission_type;
			if (wcscmp(fieldName, L"entity_type") == 0) return entity_type;
			if (wcscmp(fieldName, L"entity_type_1") == 0) return entity_type[0];
			if (wcscmp(fieldName, L"entity_type_2") == 0) return entity_type[1];
			if (wcscmp(fieldName, L"entity_type_3") == 0) return entity_type[2];
			if (wcscmp(fieldName, L"entity_type_4") == 0) return entity_type[3];
			if (wcscmp(fieldName, L"entity_type_5") == 0) return entity_type[4];
			if (wcscmp(fieldName, L"entity_type_6") == 0) return entity_type[5];
			if (wcscmp(fieldName, L"entity_type_7") == 0) return entity_type[6];
			if (wcscmp(fieldName, L"entity_type_8") == 0) return entity_type[7];
			if (wcscmp(fieldName, L"entity_type_9") == 0) return entity_type[8];
			if (wcscmp(fieldName, L"entity_type_10") == 0) return entity_type[9];
			if (wcscmp(fieldName, L"condition_alias") == 0) return condition_alias;
			if (wcscmp(fieldName, L"condition_alias_1") == 0) return condition_alias[0];
			if (wcscmp(fieldName, L"condition_alias_2") == 0) return condition_alias[1];
			if (wcscmp(fieldName, L"condition_alias_3") == 0) return condition_alias[2];
			if (wcscmp(fieldName, L"condition_alias_4") == 0) return condition_alias[3];
			if (wcscmp(fieldName, L"condition_alias_5") == 0) return condition_alias[4];
			if (wcscmp(fieldName, L"condition_alias_6") == 0) return condition_alias[5];
			if (wcscmp(fieldName, L"condition_alias_7") == 0) return condition_alias[6];
			if (wcscmp(fieldName, L"condition_alias_8") == 0) return condition_alias[7];
			if (wcscmp(fieldName, L"condition_alias_9") == 0) return condition_alias[8];
			if (wcscmp(fieldName, L"condition_alias_10") == 0) return condition_alias[9];
			if (wcscmp(fieldName, L"condition") == 0) return condition;
			if (wcscmp(fieldName, L"condition_1") == 0) return condition[0];
			if (wcscmp(fieldName, L"condition_2") == 0) return condition[1];
			if (wcscmp(fieldName, L"condition_3") == 0) return condition[2];
			if (wcscmp(fieldName, L"condition_4") == 0) return condition[3];
			if (wcscmp(fieldName, L"condition_5") == 0) return condition[4];
			if (wcscmp(fieldName, L"condition_6") == 0) return condition[5];
			if (wcscmp(fieldName, L"condition_7") == 0) return condition[6];
			if (wcscmp(fieldName, L"condition_8") == 0) return condition[7];
			if (wcscmp(fieldName, L"condition_9") == 0) return condition[8];
			if (wcscmp(fieldName, L"condition_10") == 0) return condition[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"mission_type") == 0) return Data::AnyFieldToStringConverter::ToString(&mission_type);
			if (wcscmp(fieldName, L"entity_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[0]));
			if (wcscmp(fieldName, L"entity_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[1]));
			if (wcscmp(fieldName, L"entity_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[2]));
			if (wcscmp(fieldName, L"entity_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[3]));
			if (wcscmp(fieldName, L"entity_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[4]));
			if (wcscmp(fieldName, L"entity_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[5]));
			if (wcscmp(fieldName, L"entity_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[6]));
			if (wcscmp(fieldName, L"entity_type_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[7]));
			if (wcscmp(fieldName, L"entity_type_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[8]));
			if (wcscmp(fieldName, L"entity_type_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(entity_type[9]));
			if (wcscmp(fieldName, L"condition_alias_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[0]));
			if (wcscmp(fieldName, L"condition_alias_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[1]));
			if (wcscmp(fieldName, L"condition_alias_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[2]));
			if (wcscmp(fieldName, L"condition_alias_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[3]));
			if (wcscmp(fieldName, L"condition_alias_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[4]));
			if (wcscmp(fieldName, L"condition_alias_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[5]));
			if (wcscmp(fieldName, L"condition_alias_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[6]));
			if (wcscmp(fieldName, L"condition_alias_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[7]));
			if (wcscmp(fieldName, L"condition_alias_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[8]));
			if (wcscmp(fieldName, L"condition_alias_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_alias[9]));
			if (wcscmp(fieldName, L"condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[0]));
			if (wcscmp(fieldName, L"condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[1]));
			if (wcscmp(fieldName, L"condition_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[2]));
			if (wcscmp(fieldName, L"condition_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[3]));
			if (wcscmp(fieldName, L"condition_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[4]));
			if (wcscmp(fieldName, L"condition_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[5]));
			if (wcscmp(fieldName, L"condition_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[6]));
			if (wcscmp(fieldName, L"condition_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[7]));
			if (wcscmp(fieldName, L"condition_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[8]));
			if (wcscmp(fieldName, L"condition_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(condition_alias[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) condition_alias[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(condition_alias[i]));
			}
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
__int8 mission_type;
std::wstring mission_type_EnumValue() const {return Get_mission_type_EnumValue(mission_type);};
__int8 entity_type[10];
std::wstring entity_type_EnumValue(int index) const {return Get_entity_type_EnumValue(entity_type[index]);};
char Pad0[1];
wchar_t* condition_alias[10];
__int64 condition[10];

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 370; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_mission_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}