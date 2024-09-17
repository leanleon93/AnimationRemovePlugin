/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_boss_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return npc;
			if (wcscmp(fieldName, L"combat_imageset") == 0) return combat_imageset;
			if (wcscmp(fieldName, L"combat_over_imageset") == 0) return combat_over_imageset;
			if (wcscmp(fieldName, L"combat_pressed_imageset") == 0) return combat_pressed_imageset;
			if (wcscmp(fieldName, L"combat_outofsight_imageset") == 0) return combat_outofsight_imageset;
			if (wcscmp(fieldName, L"combat_outofsight_over_imageset") == 0) return combat_outofsight_over_imageset;
			if (wcscmp(fieldName, L"combat_outofsight_pressed_imageset") == 0) return combat_outofsight_pressed_imageset;
			if (wcscmp(fieldName, L"many_counts") == 0) return many_counts;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return Data::AnyFieldToStringConverter::ToString(&npc);
			if (wcscmp(fieldName, L"combat_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_imageset);
			if (wcscmp(fieldName, L"combat_over_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_over_imageset);
			if (wcscmp(fieldName, L"combat_pressed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_pressed_imageset);
			if (wcscmp(fieldName, L"combat_outofsight_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_outofsight_imageset);
			if (wcscmp(fieldName, L"combat_outofsight_over_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_outofsight_over_imageset);
			if (wcscmp(fieldName, L"combat_outofsight_pressed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_outofsight_pressed_imageset);
			if (wcscmp(fieldName, L"many_counts") == 0) return Data::AnyFieldToStringConverter::ToString(&many_counts);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(combat_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_imageset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(combat_over_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_over_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_over_imageset));
			if (reinterpret_cast<std::uintptr_t>(combat_pressed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_pressed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_pressed_imageset));
			if (reinterpret_cast<std::uintptr_t>(combat_outofsight_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_outofsight_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_outofsight_imageset));
			if (reinterpret_cast<std::uintptr_t>(combat_outofsight_over_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_outofsight_over_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_outofsight_over_imageset));
			if (reinterpret_cast<std::uintptr_t>(combat_outofsight_pressed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_outofsight_pressed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_outofsight_pressed_imageset));
		}
		Data::TableRef npc;
int npc_tableId(){return 255;};
wchar_t* combat_imageset;
wchar_t* combat_over_imageset;
wchar_t* combat_pressed_imageset;
wchar_t* combat_outofsight_imageset;
wchar_t* combat_outofsight_over_imageset;
wchar_t* combat_outofsight_pressed_imageset;
bool many_counts;

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}