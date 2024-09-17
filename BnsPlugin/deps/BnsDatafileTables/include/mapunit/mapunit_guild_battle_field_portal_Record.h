/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_guild_battle_field_portal_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"env2spawn") == 0) return env2spawn;
			if (wcscmp(fieldName, L"disable_imageset") == 0) return disable_imageset;
			if (wcscmp(fieldName, L"disable_over_imageset") == 0) return disable_over_imageset;
			if (wcscmp(fieldName, L"disable_pressed_imageset") == 0) return disable_pressed_imageset;
			if (wcscmp(fieldName, L"disable_outofsight_imageset") == 0) return disable_outofsight_imageset;
			if (wcscmp(fieldName, L"disable_outofsight_over_imageset") == 0) return disable_outofsight_over_imageset;
			if (wcscmp(fieldName, L"disable_outofsight_pressed_imageset") == 0) return disable_outofsight_pressed_imageset;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"env2spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&env2spawn);
			if (wcscmp(fieldName, L"disable_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_imageset);
			if (wcscmp(fieldName, L"disable_over_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_over_imageset);
			if (wcscmp(fieldName, L"disable_pressed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_pressed_imageset);
			if (wcscmp(fieldName, L"disable_outofsight_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_outofsight_imageset);
			if (wcscmp(fieldName, L"disable_outofsight_over_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_outofsight_over_imageset);
			if (wcscmp(fieldName, L"disable_outofsight_pressed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&disable_outofsight_pressed_imageset);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(disable_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) disable_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(disable_imageset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(disable_over_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) disable_over_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(disable_over_imageset));
			if (reinterpret_cast<std::uintptr_t>(disable_pressed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) disable_pressed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(disable_pressed_imageset));
			if (reinterpret_cast<std::uintptr_t>(disable_outofsight_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) disable_outofsight_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(disable_outofsight_imageset));
			if (reinterpret_cast<std::uintptr_t>(disable_outofsight_over_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) disable_outofsight_over_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(disable_outofsight_over_imageset));
			if (reinterpret_cast<std::uintptr_t>(disable_outofsight_pressed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) disable_outofsight_pressed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(disable_outofsight_pressed_imageset));
		}
		Data::TableRef env2spawn;
int env2spawn_tableId(){return 446;};
wchar_t* disable_imageset;
wchar_t* disable_over_imageset;
wchar_t* disable_pressed_imageset;
wchar_t* disable_outofsight_imageset;
wchar_t* disable_outofsight_over_imageset;
wchar_t* disable_outofsight_pressed_imageset;

		static __int32 SubType() { return 9; }
	};
#pragma pack(pop)
}