/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct benefit_ability_set_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_4") == 0) return ability[3];
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"ability_value_1") == 0) return ability_value[0];
			if (wcscmp(fieldName, L"ability_value_2") == 0) return ability_value[1];
			if (wcscmp(fieldName, L"ability_value_3") == 0) return ability_value[2];
			if (wcscmp(fieldName, L"ability_value_4") == 0) return ability_value[3];
			if (wcscmp(fieldName, L"ability_base_value") == 0) return ability_base_value;
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return ability_base_value[0];
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return ability_base_value[1];
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return ability_base_value[2];
			if (wcscmp(fieldName, L"ability_base_value_4") == 0) return ability_base_value[3];
			if (wcscmp(fieldName, L"name2") == 0) return name2;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[3]));
			if (wcscmp(fieldName, L"ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[0]));
			if (wcscmp(fieldName, L"ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[1]));
			if (wcscmp(fieldName, L"ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[2]));
			if (wcscmp(fieldName, L"ability_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[3]));
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[0]));
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[1]));
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[2]));
			if (wcscmp(fieldName, L"ability_base_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[3]));
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 ability[4];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
__int32 ability_value[4];
__int32 ability_base_value[4];
Data::TableRef name2;
int name2_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 38; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) benefit_ability_set_RecordPtr // : DrRecordPtr
	{
		benefit_ability_set_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::benefit_ability_set_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}