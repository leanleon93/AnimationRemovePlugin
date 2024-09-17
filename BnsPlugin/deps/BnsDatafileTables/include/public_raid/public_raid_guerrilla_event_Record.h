/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct public_raid_guerrilla_event_Record : public_raid_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = public_raid_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"system_menu_icon") == 0) return system_menu_icon;
			if (wcscmp(fieldName, L"hud_notification_menu_name") == 0) return hud_notification_menu_name;
			if (wcscmp(fieldName, L"arena_portal") == 0) return arena_portal;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = public_raid_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"system_menu_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&system_menu_icon);
			if (wcscmp(fieldName, L"hud_notification_menu_name") == 0) return Data::AnyFieldToStringConverter::ToString(&hud_notification_menu_name);
			if (wcscmp(fieldName, L"arena_portal") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_portal);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			public_raid_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(system_menu_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) system_menu_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(system_menu_icon));
		}
		wchar_t* system_menu_icon;
Data::TableRef hud_notification_menu_name;
int hud_notification_menu_name_tableId(){return 405;};
Data::TableRef arena_portal;
int arena_portal_tableId(){return 13;};

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}