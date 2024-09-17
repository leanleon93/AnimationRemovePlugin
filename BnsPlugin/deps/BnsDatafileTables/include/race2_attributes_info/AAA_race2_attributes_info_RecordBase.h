/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct race2_attributes_info_Record : DrEl
	{
	private:
		static std::wstring Get_main_type_race2_EnumValue(__int8 value);
		static std::wstring Get_main_type_attributes_EnumValue(__int8 value);
		static std::wstring Get_attack_type_EnumValue(__int8 value);
		static std::wstring Get_defend_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"main_type_name") == 0) return main_type_name;
			if (wcscmp(fieldName, L"main_type_icon") == 0) return main_type_icon;
			if (wcscmp(fieldName, L"attack_type") == 0) return attack_type;
			if (wcscmp(fieldName, L"attack_type_name") == 0) return attack_type_name;
			if (wcscmp(fieldName, L"attack_type_icon") == 0) return attack_type_icon;
			if (wcscmp(fieldName, L"defend_type") == 0) return defend_type;
			if (wcscmp(fieldName, L"defend_type_name") == 0) return defend_type_name;
			if (wcscmp(fieldName, L"defend_type_icon") == 0) return defend_type_icon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"main_type_name") == 0) return Data::AnyFieldToStringConverter::ToString(&main_type_name);
			if (wcscmp(fieldName, L"main_type_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&main_type_icon);
			if (wcscmp(fieldName, L"attack_type") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_type);
			if (wcscmp(fieldName, L"attack_type_name") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_type_name);
			if (wcscmp(fieldName, L"attack_type_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_type_icon);
			if (wcscmp(fieldName, L"defend_type") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_type);
			if (wcscmp(fieldName, L"defend_type_name") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_type_name);
			if (wcscmp(fieldName, L"defend_type_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&defend_type_icon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(main_type_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) main_type_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(main_type_icon));
			else return;
			if (reinterpret_cast<std::uintptr_t>(attack_type_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attack_type_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attack_type_icon));
			if (reinterpret_cast<std::uintptr_t>(defend_type_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) defend_type_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(defend_type_icon));
		}
		union Key
		{
            struct {
                __int8 main_type_race2;
__int8 main_type_attributes;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef main_type_name;
int main_type_name_tableId(){return 405;};
wchar_t* main_type_icon;
__int8 attack_type;
std::wstring attack_type_EnumValue() const {return Get_attack_type_EnumValue(attack_type);};
char Pad0[3];
Data::TableRef attack_type_name;
int attack_type_name_tableId(){return 405;};
wchar_t* attack_type_icon;
__int8 defend_type;
std::wstring defend_type_EnumValue() const {return Get_defend_type_EnumValue(defend_type);};
char Pad1[3];
Data::TableRef defend_type_name;
int defend_type_name_tableId(){return 405;};
wchar_t* defend_type_icon;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 287; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race2_attributes_info_RecordPtr // : DrRecordPtr
	{
		race2_attributes_info_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::race2_attributes_info_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}