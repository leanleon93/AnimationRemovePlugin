/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fishgrade_Record : DrEl
	{
	private:
		static std::wstring Get_grade_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"grade_symbol") == 0) return grade_symbol;
			if (wcscmp(fieldName, L"grade") == 0) return grade;
			if (wcscmp(fieldName, L"boundary_min") == 0) return boundary_min;
			if (wcscmp(fieldName, L"rare") == 0) return rare;
			if (wcscmp(fieldName, L"cannot_use") == 0) return cannot_use;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"grade_symbol") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_symbol);
			if (wcscmp(fieldName, L"grade") == 0) return Data::AnyFieldToStringConverter::ToString(&grade);
			if (wcscmp(fieldName, L"boundary_min") == 0) return Data::AnyFieldToStringConverter::ToString(&boundary_min);
			if (wcscmp(fieldName, L"rare") == 0) return Data::AnyFieldToStringConverter::ToString(&rare);
			if (wcscmp(fieldName, L"cannot_use") == 0) return Data::AnyFieldToStringConverter::ToString(&cannot_use);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(grade_symbol) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) grade_symbol = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(grade_symbol));
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
wchar_t* grade_symbol;
__int8 grade;
std::wstring grade_EnumValue() const {return Get_grade_EnumValue(grade);};
char Pad0[1];
__int16 boundary_min;
bool rare;
bool cannot_use;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 143; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishgrade_RecordPtr // : DrRecordPtr
	{
		fishgrade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishgrade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}