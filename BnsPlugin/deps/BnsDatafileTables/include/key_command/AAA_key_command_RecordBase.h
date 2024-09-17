/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct key_command_Record : DrEl
	{
	private:
		static std::wstring Get_command_EnumValue(__int16 value);
		static std::wstring Get_pc_job_EnumValue(__int8 value);
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_joypad_category_EnumValue(__int8 value);
		static std::wstring Get_usable_joypad_mode_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"joypad_category") == 0) return joypad_category;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"default_keycap") == 0) return default_keycap;
			if (wcscmp(fieldName, L"modifier_enabled") == 0) return modifier_enabled;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"layer") == 0) return layer;
			if (wcscmp(fieldName, L"option_sort_no") == 0) return option_sort_no;
			if (wcscmp(fieldName, L"usable_joypad_mode") == 0) return usable_joypad_mode;
			if (wcscmp(fieldName, L"joypad_customize_enabled") == 0) return joypad_customize_enabled;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"joypad_category") == 0) return Data::AnyFieldToStringConverter::ToString(&joypad_category);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"default_keycap") == 0) return Data::AnyFieldToStringConverter::ToString(&default_keycap);
			if (wcscmp(fieldName, L"modifier_enabled") == 0) return Data::AnyFieldToStringConverter::ToString(&modifier_enabled);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"layer") == 0) return Data::AnyFieldToStringConverter::ToString(&layer);
			if (wcscmp(fieldName, L"option_sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&option_sort_no);
			if (wcscmp(fieldName, L"usable_joypad_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&usable_joypad_mode);
			if (wcscmp(fieldName, L"joypad_customize_enabled") == 0) return Data::AnyFieldToStringConverter::ToString(&joypad_customize_enabled);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(default_keycap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) default_keycap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(default_keycap));
		}
		union Key
		{
            struct {
                __int16 command;
__int8 pc_job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
__int8 joypad_category;
std::wstring joypad_category_EnumValue() const {return Get_joypad_category_EnumValue(joypad_category);};
char Pad0[2];
Data::TableRef name;
int name_tableId(){return 405;};
wchar_t* default_keycap;
bool modifier_enabled;
__int8 sort_no;
__int8 layer;
char Pad1[1];
__int16 option_sort_no;
__int8 usable_joypad_mode;
std::wstring usable_joypad_mode_EnumValue() const {return Get_usable_joypad_mode_EnumValue(usable_joypad_mode);};
bool joypad_customize_enabled;

		static TableVersion Version() { return TableVersion(1, 3); }
		static __int16 TableId() { return 231; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) key_command_RecordPtr // : DrRecordPtr
	{
		key_command_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::key_command_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}