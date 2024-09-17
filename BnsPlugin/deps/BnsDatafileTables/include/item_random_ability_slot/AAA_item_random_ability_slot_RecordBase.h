/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_random_ability_slot_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"value_min") == 0) return value_min;
			if (wcscmp(fieldName, L"value_max") == 0) return value_max;
			if (wcscmp(fieldName, L"initial_value_max") == 0) return initial_value_max;
			if (wcscmp(fieldName, L"item_ability_section_percent") == 0) return item_ability_section_percent;
			if (wcscmp(fieldName, L"item_ability_section_percent_1") == 0) return item_ability_section_percent[0];
			if (wcscmp(fieldName, L"item_ability_section_percent_2") == 0) return item_ability_section_percent[1];
			if (wcscmp(fieldName, L"item_ability_section_percent_3") == 0) return item_ability_section_percent[2];
			if (wcscmp(fieldName, L"item_ability_section") == 0) return item_ability_section;
			if (wcscmp(fieldName, L"item_ability_section_1") == 0) return item_ability_section[0];
			if (wcscmp(fieldName, L"item_ability_section_2") == 0) return item_ability_section[1];
			if (wcscmp(fieldName, L"item_ability_section_3") == 0) return item_ability_section[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"ability") == 0) return Data::AnyFieldToStringConverter::ToString(&ability);
			if (wcscmp(fieldName, L"value_min") == 0) return Data::AnyFieldToStringConverter::ToString(&value_min);
			if (wcscmp(fieldName, L"value_max") == 0) return Data::AnyFieldToStringConverter::ToString(&value_max);
			if (wcscmp(fieldName, L"initial_value_max") == 0) return Data::AnyFieldToStringConverter::ToString(&initial_value_max);
			if (wcscmp(fieldName, L"item_ability_section_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_ability_section_percent[0]));
			if (wcscmp(fieldName, L"item_ability_section_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_ability_section_percent[1]));
			if (wcscmp(fieldName, L"item_ability_section_percent_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_ability_section_percent[2]));
			if (wcscmp(fieldName, L"item_ability_section_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_ability_section[0]));
			if (wcscmp(fieldName, L"item_ability_section_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_ability_section[1]));
			if (wcscmp(fieldName, L"item_ability_section_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_ability_section[2]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
__int8 ability;
std::wstring ability_EnumValue() const {return Get_ability_EnumValue(ability);};
char Pad0[3];
__int32 value_min;
__int32 value_max;
__int32 initial_value_max;
__int8 item_ability_section_percent[3];
char Pad1[1];
Data::TableRef item_ability_section[3];
int item_ability_section_tableId(){return 204;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 205; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_ability_slot_RecordPtr // : DrRecordPtr
	{
		item_random_ability_slot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_random_ability_slot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}