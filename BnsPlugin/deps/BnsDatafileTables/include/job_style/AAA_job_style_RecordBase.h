/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct job_style_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"introduce_job_style_icon") == 0) return introduce_job_style_icon;
			if (wcscmp(fieldName, L"introduce_job_style_name") == 0) return introduce_job_style_name;
			if (wcscmp(fieldName, L"introduce_job_style_play_desc") == 0) return introduce_job_style_play_desc;
			if (wcscmp(fieldName, L"introduce_job_style_specialization") == 0) return introduce_job_style_specialization;
			if (wcscmp(fieldName, L"introduce_job_style_specialization_1") == 0) return introduce_job_style_specialization[0];
			if (wcscmp(fieldName, L"introduce_job_style_specialization_2") == 0) return introduce_job_style_specialization[1];
			if (wcscmp(fieldName, L"introduce_job_style_specialization_3") == 0) return introduce_job_style_specialization[2];
			if (wcscmp(fieldName, L"introduce_job_style_specialization_4") == 0) return introduce_job_style_specialization[3];
			if (wcscmp(fieldName, L"introduce_job_style_specialization_5") == 0) return introduce_job_style_specialization[4];
			if (wcscmp(fieldName, L"additive_attachment") == 0) return additive_attachment;
			if (wcscmp(fieldName, L"combat_start_fx_show") == 0) return combat_start_fx_show;
			if (wcscmp(fieldName, L"combat_end_fx_show") == 0) return combat_end_fx_show;
			if (wcscmp(fieldName, L"right_weapon_particle_ref") == 0) return right_weapon_particle_ref;
			if (wcscmp(fieldName, L"right_weapon_particle_socket") == 0) return right_weapon_particle_socket;
			if (wcscmp(fieldName, L"left_weapon_particle_ref") == 0) return left_weapon_particle_ref;
			if (wcscmp(fieldName, L"left_weapon_particle_socket") == 0) return left_weapon_particle_socket;
			if (wcscmp(fieldName, L"phantom_weapon_ribbon_particle_ref") == 0) return phantom_weapon_ribbon_particle_ref;
			if (wcscmp(fieldName, L"auto_combat_attack_distance") == 0) return auto_combat_attack_distance;
			if (wcscmp(fieldName, L"auto_combat_converted_distance_attacker_enemy") == 0) return auto_combat_converted_distance_attacker_enemy;
			if (wcscmp(fieldName, L"auto_combat_converted_distance_pouch") == 0) return auto_combat_converted_distance_pouch;
			if (wcscmp(fieldName, L"auto_combat_converted_distance_enemy") == 0) return auto_combat_converted_distance_enemy;
			if (wcscmp(fieldName, L"enable_job_style_gauge_ui") == 0) return enable_job_style_gauge_ui;
			if (wcscmp(fieldName, L"job_style_gauge_unit") == 0) return job_style_gauge_unit;
			if (wcscmp(fieldName, L"job_style_gauge_full_charge_icon") == 0) return job_style_gauge_full_charge_icon;
			if (wcscmp(fieldName, L"job_style_gauge_full_charge_particle_ref") == 0) return job_style_gauge_full_charge_particle_ref;
			if (wcscmp(fieldName, L"job_style_gauge_full_charge_particle_scale") == 0) return job_style_gauge_full_charge_particle_scale;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"introduce_job_style_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&introduce_job_style_icon);
			if (wcscmp(fieldName, L"introduce_job_style_name") == 0) return Data::AnyFieldToStringConverter::ToString(&introduce_job_style_name);
			if (wcscmp(fieldName, L"introduce_job_style_play_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&introduce_job_style_play_desc);
			if (wcscmp(fieldName, L"introduce_job_style_specialization_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(introduce_job_style_specialization[0]));
			if (wcscmp(fieldName, L"introduce_job_style_specialization_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(introduce_job_style_specialization[1]));
			if (wcscmp(fieldName, L"introduce_job_style_specialization_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(introduce_job_style_specialization[2]));
			if (wcscmp(fieldName, L"introduce_job_style_specialization_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(introduce_job_style_specialization[3]));
			if (wcscmp(fieldName, L"introduce_job_style_specialization_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(introduce_job_style_specialization[4]));
			if (wcscmp(fieldName, L"additive_attachment") == 0) return Data::AnyFieldToStringConverter::ToString(&additive_attachment);
			if (wcscmp(fieldName, L"combat_start_fx_show") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_start_fx_show);
			if (wcscmp(fieldName, L"combat_end_fx_show") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_end_fx_show);
			if (wcscmp(fieldName, L"right_weapon_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&right_weapon_particle_ref);
			if (wcscmp(fieldName, L"right_weapon_particle_socket") == 0) return Data::AnyFieldToStringConverter::ToString(&right_weapon_particle_socket);
			if (wcscmp(fieldName, L"left_weapon_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&left_weapon_particle_ref);
			if (wcscmp(fieldName, L"left_weapon_particle_socket") == 0) return Data::AnyFieldToStringConverter::ToString(&left_weapon_particle_socket);
			if (wcscmp(fieldName, L"phantom_weapon_ribbon_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&phantom_weapon_ribbon_particle_ref);
			if (wcscmp(fieldName, L"auto_combat_attack_distance") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_combat_attack_distance);
			if (wcscmp(fieldName, L"auto_combat_converted_distance_attacker_enemy") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_combat_converted_distance_attacker_enemy);
			if (wcscmp(fieldName, L"auto_combat_converted_distance_pouch") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_combat_converted_distance_pouch);
			if (wcscmp(fieldName, L"auto_combat_converted_distance_enemy") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_combat_converted_distance_enemy);
			if (wcscmp(fieldName, L"enable_job_style_gauge_ui") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_job_style_gauge_ui);
			if (wcscmp(fieldName, L"job_style_gauge_unit") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style_gauge_unit);
			if (wcscmp(fieldName, L"job_style_gauge_full_charge_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style_gauge_full_charge_icon);
			if (wcscmp(fieldName, L"job_style_gauge_full_charge_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style_gauge_full_charge_particle_ref);
			if (wcscmp(fieldName, L"job_style_gauge_full_charge_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style_gauge_full_charge_particle_scale);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(introduce_job_style_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) introduce_job_style_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(introduce_job_style_icon));
			if (reinterpret_cast<std::uintptr_t>(combat_start_fx_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_start_fx_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_start_fx_show));
			if (reinterpret_cast<std::uintptr_t>(combat_end_fx_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_end_fx_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_end_fx_show));
			if (reinterpret_cast<std::uintptr_t>(right_weapon_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) right_weapon_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(right_weapon_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(right_weapon_particle_socket) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) right_weapon_particle_socket = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(right_weapon_particle_socket));
			if (reinterpret_cast<std::uintptr_t>(left_weapon_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) left_weapon_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(left_weapon_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(left_weapon_particle_socket) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) left_weapon_particle_socket = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(left_weapon_particle_socket));
			if (reinterpret_cast<std::uintptr_t>(phantom_weapon_ribbon_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) phantom_weapon_ribbon_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(phantom_weapon_ribbon_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(job_style_gauge_full_charge_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) job_style_gauge_full_charge_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(job_style_gauge_full_charge_particle_ref));
		}
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* introduce_job_style_icon;
Data::TableRef introduce_job_style_name;
int introduce_job_style_name_tableId(){return 405;};
Data::TableRef introduce_job_style_play_desc;
int introduce_job_style_play_desc_tableId(){return 405;};
Data::TableRef introduce_job_style_specialization[5];
int introduce_job_style_specialization_tableId(){return 226;};
Data::TableRef additive_attachment;
int additive_attachment_tableId(){return 14;};
wchar_t* combat_start_fx_show;
wchar_t* combat_end_fx_show;
wchar_t* right_weapon_particle_ref;
wchar_t* right_weapon_particle_socket;
wchar_t* left_weapon_particle_ref;
wchar_t* left_weapon_particle_socket;
wchar_t* phantom_weapon_ribbon_particle_ref;
__int16 auto_combat_attack_distance;
__int16 auto_combat_converted_distance_attacker_enemy;
__int16 auto_combat_converted_distance_pouch;
__int16 auto_combat_converted_distance_enemy;
bool enable_job_style_gauge_ui;
__int8 job_style_gauge_unit;
bool job_style_gauge_full_charge_icon;
char Pad0[1];
wchar_t* job_style_gauge_full_charge_particle_ref;
float job_style_gauge_full_charge_particle_scale;

		static TableVersion Version() { return TableVersion(0, 15); }
		static __int16 TableId() { return 225; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_style_RecordPtr // : DrRecordPtr
	{
		job_style_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_style_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}