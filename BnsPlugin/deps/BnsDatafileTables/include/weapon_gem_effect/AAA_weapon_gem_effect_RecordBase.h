/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct weapon_gem_effect_Record : DrEl
	{
	private:
		static std::wstring Get_weapon_gem_type_EnumValue(__int8 value);
		static std::wstring Get_weapon_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"effect_show") == 0) return effect_show;
			if (wcscmp(fieldName, L"effect_color") == 0) return effect_color;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"effect_show") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_show);
			if (wcscmp(fieldName, L"effect_color") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_color);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(effect_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_show));
		}
		union Key
		{
            struct {
                __int8 level;
__int8 weapon_gem_type;
__int8 weapon_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* effect_show;
Data::RGB effect_color;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 428; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_gem_effect_RecordPtr // : DrRecordPtr
	{
		weapon_gem_effect_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapon_gem_effect_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}