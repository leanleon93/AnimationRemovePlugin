/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zonerule_Record : DrEl
	{
	private:
		static std::wstring Get_apply_content_ban_id_EnumValue(__int8 value);
		static std::wstring Get_auto_mode_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return enable_infinite_hyper_energy;
			if (wcscmp(fieldName, L"enable_reset_combat_mode") == 0) return enable_reset_combat_mode;
			if (wcscmp(fieldName, L"reset_combat_mode_recycle_duration") == 0) return reset_combat_mode_recycle_duration;
			if (wcscmp(fieldName, L"enable_co_ownership_pouch") == 0) return enable_co_ownership_pouch;
			if (wcscmp(fieldName, L"enable_pvp") == 0) return enable_pvp;
			if (wcscmp(fieldName, L"required_inactivated_main_faction") == 0) return required_inactivated_main_faction;
			if (wcscmp(fieldName, L"required_activated_main_faction") == 0) return required_activated_main_faction;
			if (wcscmp(fieldName, L"apply_content_ban_id") == 0) return apply_content_ban_id;
			if (wcscmp(fieldName, L"allow_invite_party_in_arena") == 0) return allow_invite_party_in_arena;
			if (wcscmp(fieldName, L"show_leave_zone_popup_when_no_party_in_arena_enterance") == 0) return show_leave_zone_popup_when_no_party_in_arena_enterance;
			if (wcscmp(fieldName, L"required_available_weekly_time") == 0) return required_available_weekly_time;
			if (wcscmp(fieldName, L"town") == 0) return town;
			if (wcscmp(fieldName, L"reentrance_pcspawn_check_later_when_enterworld") == 0) return reentrance_pcspawn_check_later_when_enterworld;
			if (wcscmp(fieldName, L"infinite_durability") == 0) return infinite_durability;
			if (wcscmp(fieldName, L"enable_auto_mode") == 0) return enable_auto_mode;
			if (wcscmp(fieldName, L"auto_mode_type") == 0) return auto_mode_type;
			if (wcscmp(fieldName, L"enable_auto_item_support") == 0) return enable_auto_item_support;
			if (wcscmp(fieldName, L"activate_vehicle") == 0) return activate_vehicle;
			if (wcscmp(fieldName, L"enable_change_channel") == 0) return enable_change_channel;
			if (wcscmp(fieldName, L"allow_invite_party_in_same_channel_only") == 0) return allow_invite_party_in_same_channel_only;
			if (wcscmp(fieldName, L"enable_performance_option") == 0) return enable_performance_option;
			if (wcscmp(fieldName, L"is_world_boss_spawn_zone") == 0) return is_world_boss_spawn_zone;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"enable_infinite_hyper_energy") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_infinite_hyper_energy);
			if (wcscmp(fieldName, L"enable_reset_combat_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_reset_combat_mode);
			if (wcscmp(fieldName, L"reset_combat_mode_recycle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_combat_mode_recycle_duration);
			if (wcscmp(fieldName, L"enable_co_ownership_pouch") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_co_ownership_pouch);
			if (wcscmp(fieldName, L"enable_pvp") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_pvp);
			if (wcscmp(fieldName, L"required_inactivated_main_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&required_inactivated_main_faction);
			if (wcscmp(fieldName, L"required_activated_main_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&required_activated_main_faction);
			if (wcscmp(fieldName, L"apply_content_ban_id") == 0) return Data::AnyFieldToStringConverter::ToString(&apply_content_ban_id);
			if (wcscmp(fieldName, L"allow_invite_party_in_arena") == 0) return Data::AnyFieldToStringConverter::ToString(&allow_invite_party_in_arena);
			if (wcscmp(fieldName, L"show_leave_zone_popup_when_no_party_in_arena_enterance") == 0) return Data::AnyFieldToStringConverter::ToString(&show_leave_zone_popup_when_no_party_in_arena_enterance);
			if (wcscmp(fieldName, L"required_available_weekly_time") == 0) return Data::AnyFieldToStringConverter::ToString(&required_available_weekly_time);
			if (wcscmp(fieldName, L"town") == 0) return Data::AnyFieldToStringConverter::ToString(&town);
			if (wcscmp(fieldName, L"reentrance_pcspawn_check_later_when_enterworld") == 0) return Data::AnyFieldToStringConverter::ToString(&reentrance_pcspawn_check_later_when_enterworld);
			if (wcscmp(fieldName, L"infinite_durability") == 0) return Data::AnyFieldToStringConverter::ToString(&infinite_durability);
			if (wcscmp(fieldName, L"enable_auto_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_auto_mode);
			if (wcscmp(fieldName, L"auto_mode_type") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_mode_type);
			if (wcscmp(fieldName, L"enable_auto_item_support") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_auto_item_support);
			if (wcscmp(fieldName, L"activate_vehicle") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_vehicle);
			if (wcscmp(fieldName, L"enable_change_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_change_channel);
			if (wcscmp(fieldName, L"allow_invite_party_in_same_channel_only") == 0) return Data::AnyFieldToStringConverter::ToString(&allow_invite_party_in_same_channel_only);
			if (wcscmp(fieldName, L"enable_performance_option") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_performance_option);
			if (wcscmp(fieldName, L"is_world_boss_spawn_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&is_world_boss_spawn_zone);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 zone;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool enable_infinite_hyper_energy;
bool enable_reset_combat_mode;
char Pad0[2];
__int32 reset_combat_mode_recycle_duration;
bool enable_co_ownership_pouch;
bool enable_pvp;
bool required_inactivated_main_faction;
bool required_activated_main_faction;
__int8 apply_content_ban_id;
std::wstring apply_content_ban_id_EnumValue() const {return Get_apply_content_ban_id_EnumValue(apply_content_ban_id);};
bool allow_invite_party_in_arena;
bool show_leave_zone_popup_when_no_party_in_arena_enterance;
char Pad1[1];
Data::TableRef required_available_weekly_time;
int required_available_weekly_time_tableId(){return 431;};
bool town;
bool reentrance_pcspawn_check_later_when_enterworld;
bool infinite_durability;
bool enable_auto_mode;
__int8 auto_mode_type;
std::wstring auto_mode_type_EnumValue() const {return Get_auto_mode_type_EnumValue(auto_mode_type);};
bool enable_auto_item_support;
bool activate_vehicle;
bool enable_change_channel;
bool allow_invite_party_in_same_channel_only;
bool enable_performance_option;
bool is_world_boss_spawn_zone;

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 454; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonerule_RecordPtr // : DrRecordPtr
	{
		zonerule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonerule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}