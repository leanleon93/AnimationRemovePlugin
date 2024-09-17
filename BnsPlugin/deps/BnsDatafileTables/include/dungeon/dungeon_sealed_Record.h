/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_dungeon_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct dungeon_sealed_Record : dungeon_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = dungeon_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"max_sealed_level") == 0) return max_sealed_level;
			if (wcscmp(fieldName, L"modify_data") == 0) return modify_data;
			if (wcscmp(fieldName, L"bind_quota") == 0) return bind_quota;
			if (wcscmp(fieldName, L"theme_version") == 0) return theme_version;
			if (wcscmp(fieldName, L"theme_arena_entrance_zone") == 0) return theme_arena_entrance_zone;
			if (wcscmp(fieldName, L"gimmick_week_start_date_time") == 0) return gimmick_week_start_date_time;
			if (wcscmp(fieldName, L"ui_scroll_slot_index") == 0) return ui_scroll_slot_index;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = dungeon_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"max_sealed_level") == 0) return Data::AnyFieldToStringConverter::ToString(&max_sealed_level);
			if (wcscmp(fieldName, L"modify_data") == 0) return Data::AnyFieldToStringConverter::ToString(&modify_data);
			if (wcscmp(fieldName, L"bind_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&bind_quota);
			if (wcscmp(fieldName, L"theme_version") == 0) return Data::AnyFieldToStringConverter::ToString(&theme_version);
			if (wcscmp(fieldName, L"theme_arena_entrance_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&theme_arena_entrance_zone);
			if (wcscmp(fieldName, L"gimmick_week_start_date_time") == 0) return Data::AnyFieldToStringConverter::ToString(&gimmick_week_start_date_time);
			if (wcscmp(fieldName, L"ui_scroll_slot_index") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_scroll_slot_index);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			dungeon_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(gimmick_week_start_date_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gimmick_week_start_date_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gimmick_week_start_date_time));
		}
		__int8 max_sealed_level;
char Pad_sub_0[3];
Data::TableRef modify_data;
int modify_data_tableId(){return 316;};
Data::TableRef bind_quota;
int bind_quota_tableId(){return 66;};
__int16 theme_version;
char Pad_sub_1[2];
Data::TableRef theme_arena_entrance_zone;
int theme_arena_entrance_zone_tableId(){return 443;};
wchar_t* gimmick_week_start_date_time;
__int8 ui_scroll_slot_index;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}