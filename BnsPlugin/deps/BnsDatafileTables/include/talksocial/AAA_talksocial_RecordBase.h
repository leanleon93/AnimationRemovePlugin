/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct talksocial_Record : DrEl
	{
	private:
		static std::wstring Get_use_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"use_at_dead") == 0) return use_at_dead;
			if (wcscmp(fieldName, L"use_at_exhaustion") == 0) return use_at_exhaustion;
			if (wcscmp(fieldName, L"use_at_restoration") == 0) return use_at_restoration;
			if (wcscmp(fieldName, L"use_at_not_dead") == 0) return use_at_not_dead;
			if (wcscmp(fieldName, L"use_in_chat_input") == 0) return use_in_chat_input;
			if (wcscmp(fieldName, L"use_at_equip_costume") == 0) return use_at_equip_costume;
			if (wcscmp(fieldName, L"use_at_achievement_title") == 0) return use_at_achievement_title;
			if (wcscmp(fieldName, L"use_at_equip_setitem") == 0) return use_at_equip_setitem;
			if (wcscmp(fieldName, L"use_at_equip_paircostume") == 0) return use_at_equip_paircostume;
			if (wcscmp(fieldName, L"use_job") == 0) return use_job;
			if (wcscmp(fieldName, L"use_at_equip_accessory") == 0) return use_at_equip_accessory;
			if (wcscmp(fieldName, L"msg") == 0) return msg;
			if (wcscmp(fieldName, L"msg_target") == 0) return msg_target;
			if (wcscmp(fieldName, L"can_move") == 0) return can_move;
			if (wcscmp(fieldName, L"can_sit") == 0) return can_sit;
			if (wcscmp(fieldName, L"duration") == 0) return duration;
			if (wcscmp(fieldName, L"show") == 0) return show;
			if (wcscmp(fieldName, L"kun_show") == 0) return kun_show;
			if (wcscmp(fieldName, L"gon_male_show") == 0) return gon_male_show;
			if (wcscmp(fieldName, L"gon_female_show") == 0) return gon_female_show;
			if (wcscmp(fieldName, L"lyn_male_show") == 0) return lyn_male_show;
			if (wcscmp(fieldName, L"lyn_female_show") == 0) return lyn_female_show;
			if (wcscmp(fieldName, L"jin_male_show") == 0) return jin_male_show;
			if (wcscmp(fieldName, L"jin_female_show") == 0) return jin_female_show;
			if (wcscmp(fieldName, L"social_mode_group_index") == 0) return social_mode_group_index;
			if (wcscmp(fieldName, L"social_mode_slot_index") == 0) return social_mode_slot_index;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"summoned_show") == 0) return summoned_show;
			if (wcscmp(fieldName, L"summoned_show_1") == 0) return summoned_show[0];
			if (wcscmp(fieldName, L"summoned_show_2") == 0) return summoned_show[1];
			if (wcscmp(fieldName, L"summoned_show_3") == 0) return summoned_show[2];
			if (wcscmp(fieldName, L"can_ride_vehicle") == 0) return can_ride_vehicle;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"use_at_dead") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_dead);
			if (wcscmp(fieldName, L"use_at_exhaustion") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_exhaustion);
			if (wcscmp(fieldName, L"use_at_restoration") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_restoration);
			if (wcscmp(fieldName, L"use_at_not_dead") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_not_dead);
			if (wcscmp(fieldName, L"use_in_chat_input") == 0) return Data::AnyFieldToStringConverter::ToString(&use_in_chat_input);
			if (wcscmp(fieldName, L"use_at_equip_costume") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_equip_costume);
			if (wcscmp(fieldName, L"use_at_achievement_title") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_achievement_title);
			if (wcscmp(fieldName, L"use_at_equip_setitem") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_equip_setitem);
			if (wcscmp(fieldName, L"use_at_equip_paircostume") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_equip_paircostume);
			if (wcscmp(fieldName, L"use_job") == 0) return Data::AnyFieldToStringConverter::ToString(&use_job);
			if (wcscmp(fieldName, L"use_at_equip_accessory") == 0) return Data::AnyFieldToStringConverter::ToString(&use_at_equip_accessory);
			if (wcscmp(fieldName, L"msg") == 0) return Data::AnyFieldToStringConverter::ToString(&msg);
			if (wcscmp(fieldName, L"msg_target") == 0) return Data::AnyFieldToStringConverter::ToString(&msg_target);
			if (wcscmp(fieldName, L"can_move") == 0) return Data::AnyFieldToStringConverter::ToString(&can_move);
			if (wcscmp(fieldName, L"can_sit") == 0) return Data::AnyFieldToStringConverter::ToString(&can_sit);
			if (wcscmp(fieldName, L"duration") == 0) return Data::AnyFieldToStringConverter::ToString(&duration);
			if (wcscmp(fieldName, L"show") == 0) return Data::AnyFieldToStringConverter::ToString(&show);
			if (wcscmp(fieldName, L"kun_show") == 0) return Data::AnyFieldToStringConverter::ToString(&kun_show);
			if (wcscmp(fieldName, L"gon_male_show") == 0) return Data::AnyFieldToStringConverter::ToString(&gon_male_show);
			if (wcscmp(fieldName, L"gon_female_show") == 0) return Data::AnyFieldToStringConverter::ToString(&gon_female_show);
			if (wcscmp(fieldName, L"lyn_male_show") == 0) return Data::AnyFieldToStringConverter::ToString(&lyn_male_show);
			if (wcscmp(fieldName, L"lyn_female_show") == 0) return Data::AnyFieldToStringConverter::ToString(&lyn_female_show);
			if (wcscmp(fieldName, L"jin_male_show") == 0) return Data::AnyFieldToStringConverter::ToString(&jin_male_show);
			if (wcscmp(fieldName, L"jin_female_show") == 0) return Data::AnyFieldToStringConverter::ToString(&jin_female_show);
			if (wcscmp(fieldName, L"social_mode_group_index") == 0) return Data::AnyFieldToStringConverter::ToString(&social_mode_group_index);
			if (wcscmp(fieldName, L"social_mode_slot_index") == 0) return Data::AnyFieldToStringConverter::ToString(&social_mode_slot_index);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"summoned_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(summoned_show[0]));
			if (wcscmp(fieldName, L"summoned_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(summoned_show[1]));
			if (wcscmp(fieldName, L"summoned_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(summoned_show[2]));
			if (wcscmp(fieldName, L"can_ride_vehicle") == 0) return Data::AnyFieldToStringConverter::ToString(&can_ride_vehicle);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(show));
			if (reinterpret_cast<std::uintptr_t>(kun_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kun_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kun_show));
			if (reinterpret_cast<std::uintptr_t>(gon_male_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_male_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_male_show));
			if (reinterpret_cast<std::uintptr_t>(gon_female_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_female_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_female_show));
			if (reinterpret_cast<std::uintptr_t>(lyn_male_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_male_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_male_show));
			if (reinterpret_cast<std::uintptr_t>(lyn_female_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_female_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_female_show));
			if (reinterpret_cast<std::uintptr_t>(jin_male_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_male_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_male_show));
			if (reinterpret_cast<std::uintptr_t>(jin_female_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_female_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_female_show));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(summoned_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoned_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoned_show[i]));
			}
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name;
int name_tableId(){return 405;};
bool use_at_dead;
bool use_at_exhaustion;
bool use_at_restoration;
bool use_at_not_dead;
bool use_in_chat_input;
bool use_at_equip_costume;
bool use_at_achievement_title;
bool use_at_equip_setitem;
bool use_at_equip_paircostume;
__int8 use_job;
std::wstring use_job_EnumValue() const {return Get_use_job_EnumValue(use_job);};
bool use_at_equip_accessory;
char Pad0[1];
Data::TableRef msg;
int msg_tableId(){return 151;};
Data::TableRef msg_target;
int msg_target_tableId(){return 151;};
bool can_move;
bool can_sit;
char Pad1[2];
__int32 duration;
wchar_t* show;
wchar_t* kun_show;
wchar_t* gon_male_show;
wchar_t* gon_female_show;
wchar_t* lyn_male_show;
wchar_t* lyn_female_show;
wchar_t* jin_male_show;
wchar_t* jin_female_show;
__int8 social_mode_group_index;
__int8 social_mode_slot_index;
char Pad2[2];
Data::IconRef icon;
wchar_t* summoned_show[3];
bool can_ride_vehicle;

		static TableVersion Version() { return TableVersion(0, 20); }
		static __int16 TableId() { return 399; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) talksocial_RecordPtr // : DrRecordPtr
	{
		talksocial_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::talksocial_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}