/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fishing_show_Record : DrEl
	{
	private:
		static std::wstring Get_show_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"show_type") == 0) return show_type;
			if (wcscmp(fieldName, L"player_show") == 0) return player_show;
			if (wcscmp(fieldName, L"fishing_rod_anim") == 0) return fishing_rod_anim;
			if (wcscmp(fieldName, L"fishing_float_show") == 0) return fishing_float_show;
			if (wcscmp(fieldName, L"fish_anim") == 0) return fish_anim;
			if (wcscmp(fieldName, L"fishing_show_duration") == 0) return fishing_show_duration;
			if (wcscmp(fieldName, L"loop") == 0) return loop;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"show_type") == 0) return Data::AnyFieldToStringConverter::ToString(&show_type);
			if (wcscmp(fieldName, L"player_show") == 0) return Data::AnyFieldToStringConverter::ToString(&player_show);
			if (wcscmp(fieldName, L"fishing_rod_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&fishing_rod_anim);
			if (wcscmp(fieldName, L"fishing_float_show") == 0) return Data::AnyFieldToStringConverter::ToString(&fishing_float_show);
			if (wcscmp(fieldName, L"fish_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&fish_anim);
			if (wcscmp(fieldName, L"fishing_show_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&fishing_show_duration);
			if (wcscmp(fieldName, L"loop") == 0) return Data::AnyFieldToStringConverter::ToString(&loop);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(player_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) player_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(player_show));
			if (reinterpret_cast<std::uintptr_t>(fishing_rod_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fishing_rod_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fishing_rod_anim));
			if (reinterpret_cast<std::uintptr_t>(fishing_float_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fishing_float_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fishing_float_show));
			if (reinterpret_cast<std::uintptr_t>(fish_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fish_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fish_anim));
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
__int8 show_type;
std::wstring show_type_EnumValue() const {return Get_show_type_EnumValue(show_type);};
char Pad0[3];
wchar_t* player_show;
wchar_t* fishing_rod_anim;
wchar_t* fishing_float_show;
wchar_t* fish_anim;
__int32 fishing_show_duration;
bool loop;

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 147; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_show_RecordPtr // : DrRecordPtr
	{
		fishing_show_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_show_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}