/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct wantedmission_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"target_npc") == 0) return target_npc;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_4") == 0) return reward_item[3];
			if (wcscmp(fieldName, L"reward_item_5") == 0) return reward_item[4];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return reward_item_count[3];
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return reward_item_count[4];
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"mesh_ui_npc_pos_x") == 0) return mesh_ui_npc_pos_x;
			if (wcscmp(fieldName, L"mesh_ui_npc_pos_y") == 0) return mesh_ui_npc_pos_y;
			if (wcscmp(fieldName, L"mesh_ui_npc_pos_z") == 0) return mesh_ui_npc_pos_z;
			if (wcscmp(fieldName, L"mesh_ui_npc_scale") == 0) return mesh_ui_npc_scale;
			if (wcscmp(fieldName, L"mesh_ui_npc_idle_anim") == 0) return mesh_ui_npc_idle_anim;
			if (wcscmp(fieldName, L"mesh_ui_npc_activated_anim") == 0) return mesh_ui_npc_activated_anim;
			if (wcscmp(fieldName, L"mesh_ui_npc_voice") == 0) return mesh_ui_npc_voice;
			if (wcscmp(fieldName, L"npc_weapon_id") == 0) return npc_weapon_id;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"target_npc") == 0) return Data::AnyFieldToStringConverter::ToString(&target_npc);
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[3]));
			if (wcscmp(fieldName, L"reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[4]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[3]));
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[4]));
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"mesh_ui_npc_pos_x") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_pos_x);
			if (wcscmp(fieldName, L"mesh_ui_npc_pos_y") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_pos_y);
			if (wcscmp(fieldName, L"mesh_ui_npc_pos_z") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_pos_z);
			if (wcscmp(fieldName, L"mesh_ui_npc_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_scale);
			if (wcscmp(fieldName, L"mesh_ui_npc_idle_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_idle_anim);
			if (wcscmp(fieldName, L"mesh_ui_npc_activated_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_activated_anim);
			if (wcscmp(fieldName, L"mesh_ui_npc_voice") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_ui_npc_voice);
			if (wcscmp(fieldName, L"npc_weapon_id") == 0) return Data::AnyFieldToStringConverter::ToString(&npc_weapon_id);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(mesh_ui_npc_idle_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_ui_npc_idle_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_ui_npc_idle_anim));
			if (reinterpret_cast<std::uintptr_t>(mesh_ui_npc_activated_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_ui_npc_activated_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_ui_npc_activated_anim));
			if (reinterpret_cast<std::uintptr_t>(mesh_ui_npc_voice) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_ui_npc_voice = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_ui_npc_voice));
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
Data::TableRef target_npc;
int target_npc_tableId(){return 255;};
Data::TableRef reward_item[5];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[5];
char Pad0[2];
Data::TableRef desc;
int desc_tableId(){return 405;};
float mesh_ui_npc_pos_x;
float mesh_ui_npc_pos_y;
float mesh_ui_npc_pos_z;
float mesh_ui_npc_scale;
wchar_t* mesh_ui_npc_idle_anim;
wchar_t* mesh_ui_npc_activated_anim;
wchar_t* mesh_ui_npc_voice;
Data::TableRef npc_weapon_id;
int npc_weapon_id_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(1, 4); }
		static __int16 TableId() { return 422; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wantedmission_RecordPtr // : DrRecordPtr
	{
		wantedmission_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::wantedmission_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}