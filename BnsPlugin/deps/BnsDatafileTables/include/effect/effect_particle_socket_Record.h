/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_particle_socket_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_particle") == 0) return effect_particle;
			if (wcscmp(fieldName, L"effect_particle2") == 0) return effect_particle2;
			if (wcscmp(fieldName, L"effect_particle3") == 0) return effect_particle3;
			if (wcscmp(fieldName, L"effect_particle4") == 0) return effect_particle4;
			if (wcscmp(fieldName, L"effect_particle5") == 0) return effect_particle5;
			if (wcscmp(fieldName, L"effect_particle_followup_time_min") == 0) return effect_particle_followup_time_min;
			if (wcscmp(fieldName, L"effect_particle_followup_time_max") == 0) return effect_particle_followup_time_max;
			if (wcscmp(fieldName, L"spawn_show") == 0) return spawn_show;
			if (wcscmp(fieldName, L"spawn_show2") == 0) return spawn_show2;
			if (wcscmp(fieldName, L"spawn_show3") == 0) return spawn_show3;
			if (wcscmp(fieldName, L"spawn_show4") == 0) return spawn_show4;
			if (wcscmp(fieldName, L"spawn_show5") == 0) return spawn_show5;
			if (wcscmp(fieldName, L"despawn_show") == 0) return despawn_show;
			if (wcscmp(fieldName, L"despawn_show2") == 0) return despawn_show2;
			if (wcscmp(fieldName, L"despawn_show3") == 0) return despawn_show3;
			if (wcscmp(fieldName, L"despawn_show4") == 0) return despawn_show4;
			if (wcscmp(fieldName, L"despawn_show5") == 0) return despawn_show5;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle);
			if (wcscmp(fieldName, L"effect_particle2") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle2);
			if (wcscmp(fieldName, L"effect_particle3") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle3);
			if (wcscmp(fieldName, L"effect_particle4") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle4);
			if (wcscmp(fieldName, L"effect_particle5") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle5);
			if (wcscmp(fieldName, L"effect_particle_followup_time_min") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle_followup_time_min);
			if (wcscmp(fieldName, L"effect_particle_followup_time_max") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_particle_followup_time_max);
			if (wcscmp(fieldName, L"spawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show);
			if (wcscmp(fieldName, L"spawn_show2") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show2);
			if (wcscmp(fieldName, L"spawn_show3") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show3);
			if (wcscmp(fieldName, L"spawn_show4") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show4);
			if (wcscmp(fieldName, L"spawn_show5") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show5);
			if (wcscmp(fieldName, L"despawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show);
			if (wcscmp(fieldName, L"despawn_show2") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show2);
			if (wcscmp(fieldName, L"despawn_show3") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show3);
			if (wcscmp(fieldName, L"despawn_show4") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show4);
			if (wcscmp(fieldName, L"despawn_show5") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show5);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(effect_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_particle));
			else return;
			if (reinterpret_cast<std::uintptr_t>(effect_particle2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_particle2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_particle2));
			if (reinterpret_cast<std::uintptr_t>(effect_particle3) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_particle3 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_particle3));
			if (reinterpret_cast<std::uintptr_t>(effect_particle4) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_particle4 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_particle4));
			if (reinterpret_cast<std::uintptr_t>(effect_particle5) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_particle5 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_particle5));
			if (reinterpret_cast<std::uintptr_t>(spawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show));
			if (reinterpret_cast<std::uintptr_t>(spawn_show2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show2));
			if (reinterpret_cast<std::uintptr_t>(spawn_show3) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show3 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show3));
			if (reinterpret_cast<std::uintptr_t>(spawn_show4) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show4 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show4));
			if (reinterpret_cast<std::uintptr_t>(spawn_show5) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show5 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show5));
			if (reinterpret_cast<std::uintptr_t>(despawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show));
			if (reinterpret_cast<std::uintptr_t>(despawn_show2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show2));
			if (reinterpret_cast<std::uintptr_t>(despawn_show3) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show3 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show3));
			if (reinterpret_cast<std::uintptr_t>(despawn_show4) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show4 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show4));
			if (reinterpret_cast<std::uintptr_t>(despawn_show5) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show5 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show5));
		}
		wchar_t* effect_particle;
wchar_t* effect_particle2;
wchar_t* effect_particle3;
wchar_t* effect_particle4;
wchar_t* effect_particle5;
float effect_particle_followup_time_min;
float effect_particle_followup_time_max;
wchar_t* spawn_show;
wchar_t* spawn_show2;
wchar_t* spawn_show3;
wchar_t* spawn_show4;
wchar_t* spawn_show5;
wchar_t* despawn_show;
wchar_t* despawn_show2;
wchar_t* despawn_show3;
wchar_t* despawn_show4;
wchar_t* despawn_show5;

		static __int32 SubType() { return 868; }
	};
#pragma pack(pop)
}