/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skilltooltipattribute_Record : DrEl
	{
	private:
		static std::wstring Get_arg_type_EnumValue(__int8 value);
		static std::wstring Get_skill_modify_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"arg_type") == 0) return arg_type;
			if (wcscmp(fieldName, L"arg_type_1") == 0) return arg_type[0];
			if (wcscmp(fieldName, L"arg_type_2") == 0) return arg_type[1];
			if (wcscmp(fieldName, L"arg_type_3") == 0) return arg_type[2];
			if (wcscmp(fieldName, L"arg_type_4") == 0) return arg_type[3];
			if (wcscmp(fieldName, L"text") == 0) return text;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"skill_modify_type") == 0) return skill_modify_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"arg_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(arg_type[0]));
			if (wcscmp(fieldName, L"arg_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(arg_type[1]));
			if (wcscmp(fieldName, L"arg_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(arg_type[2]));
			if (wcscmp(fieldName, L"arg_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(arg_type[3]));
			if (wcscmp(fieldName, L"text") == 0) return Data::AnyFieldToStringConverter::ToString(&text);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"skill_modify_type") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_modify_type);

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
__int8 arg_type[4];
std::wstring arg_type_EnumValue(int index) const {return Get_arg_type_EnumValue(arg_type[index]);};
Data::TableRef text;
int text_tableId(){return 405;};
Data::IconRef icon;
__int8 skill_modify_type;
std::wstring skill_modify_type_EnumValue() const {return Get_skill_modify_type_EnumValue(skill_modify_type);};

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 350; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltooltipattribute_RecordPtr // : DrRecordPtr
	{
		skilltooltipattribute_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilltooltipattribute_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}