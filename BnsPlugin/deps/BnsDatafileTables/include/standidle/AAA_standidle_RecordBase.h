/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct standidle_Record : DrEl
	{
	private:
		static std::wstring Get_idle_event_type_1_EnumValue(__int8 value);
		static std::wstring Get_idle_event_type_2_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skip_time") == 0) return skip_time;
			if (wcscmp(fieldName, L"event_time") == 0) return event_time;
			if (wcscmp(fieldName, L"idle_event_ani_1") == 0) return idle_event_ani_1;
			if (wcscmp(fieldName, L"idle_event_ani_1_1") == 0) return idle_event_ani_1[0];
			if (wcscmp(fieldName, L"idle_event_ani_1_2") == 0) return idle_event_ani_1[1];
			if (wcscmp(fieldName, L"idle_event_ani_1_3") == 0) return idle_event_ani_1[2];
			if (wcscmp(fieldName, L"idle_event_ani_1_4") == 0) return idle_event_ani_1[3];
			if (wcscmp(fieldName, L"idle_event_ani_rate_1") == 0) return idle_event_ani_rate_1;
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_1") == 0) return idle_event_ani_rate_1[0];
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_2") == 0) return idle_event_ani_rate_1[1];
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_3") == 0) return idle_event_ani_rate_1[2];
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_4") == 0) return idle_event_ani_rate_1[3];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1") == 0) return lobby_idle_event_ani_rate_1;
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_1") == 0) return lobby_idle_event_ani_rate_1[0];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_2") == 0) return lobby_idle_event_ani_rate_1[1];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_3") == 0) return lobby_idle_event_ani_rate_1[2];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_4") == 0) return lobby_idle_event_ani_rate_1[3];
			if (wcscmp(fieldName, L"idle_event_type_1") == 0) return idle_event_type_1;
			if (wcscmp(fieldName, L"idle_event_type_1_1") == 0) return idle_event_type_1[0];
			if (wcscmp(fieldName, L"idle_event_type_1_2") == 0) return idle_event_type_1[1];
			if (wcscmp(fieldName, L"idle_event_type_1_3") == 0) return idle_event_type_1[2];
			if (wcscmp(fieldName, L"idle_event_type_1_4") == 0) return idle_event_type_1[3];
			if (wcscmp(fieldName, L"idle_event_need_weapon_1") == 0) return idle_event_need_weapon_1;
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_1") == 0) return idle_event_need_weapon_1[0];
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_2") == 0) return idle_event_need_weapon_1[1];
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_3") == 0) return idle_event_need_weapon_1[2];
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_4") == 0) return idle_event_need_weapon_1[3];
			if (wcscmp(fieldName, L"second_idle") == 0) return second_idle;
			if (wcscmp(fieldName, L"idle_event_ani_2") == 0) return idle_event_ani_2;
			if (wcscmp(fieldName, L"idle_event_ani_2_1") == 0) return idle_event_ani_2[0];
			if (wcscmp(fieldName, L"idle_event_ani_2_2") == 0) return idle_event_ani_2[1];
			if (wcscmp(fieldName, L"idle_event_ani_2_3") == 0) return idle_event_ani_2[2];
			if (wcscmp(fieldName, L"idle_event_ani_2_4") == 0) return idle_event_ani_2[3];
			if (wcscmp(fieldName, L"idle_event_ani_rate_2") == 0) return idle_event_ani_rate_2;
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_1") == 0) return idle_event_ani_rate_2[0];
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_2") == 0) return idle_event_ani_rate_2[1];
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_3") == 0) return idle_event_ani_rate_2[2];
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_4") == 0) return idle_event_ani_rate_2[3];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2") == 0) return lobby_idle_event_ani_rate_2;
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_1") == 0) return lobby_idle_event_ani_rate_2[0];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_2") == 0) return lobby_idle_event_ani_rate_2[1];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_3") == 0) return lobby_idle_event_ani_rate_2[2];
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_4") == 0) return lobby_idle_event_ani_rate_2[3];
			if (wcscmp(fieldName, L"idle_event_type_2") == 0) return idle_event_type_2;
			if (wcscmp(fieldName, L"idle_event_type_2_1") == 0) return idle_event_type_2[0];
			if (wcscmp(fieldName, L"idle_event_type_2_2") == 0) return idle_event_type_2[1];
			if (wcscmp(fieldName, L"idle_event_type_2_3") == 0) return idle_event_type_2[2];
			if (wcscmp(fieldName, L"idle_event_type_2_4") == 0) return idle_event_type_2[3];
			if (wcscmp(fieldName, L"idle_event_need_weapon_2") == 0) return idle_event_need_weapon_2;
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_1") == 0) return idle_event_need_weapon_2[0];
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_2") == 0) return idle_event_need_weapon_2[1];
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_3") == 0) return idle_event_need_weapon_2[2];
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_4") == 0) return idle_event_need_weapon_2[3];
			if (wcscmp(fieldName, L"hp_idle_rate") == 0) return hp_idle_rate;
			if (wcscmp(fieldName, L"hp_idle") == 0) return hp_idle;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skip_time") == 0) return Data::AnyFieldToStringConverter::ToString(&skip_time);
			if (wcscmp(fieldName, L"event_time") == 0) return Data::AnyFieldToStringConverter::ToString(&event_time);
			if (wcscmp(fieldName, L"idle_event_ani_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_1[0]));
			if (wcscmp(fieldName, L"idle_event_ani_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_1[1]));
			if (wcscmp(fieldName, L"idle_event_ani_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_1[2]));
			if (wcscmp(fieldName, L"idle_event_ani_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_1[3]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_1[0]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_1[1]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_1[2]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_1[3]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_1[0]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_1[1]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_1[2]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_1[3]));
			if (wcscmp(fieldName, L"idle_event_type_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_1[0]));
			if (wcscmp(fieldName, L"idle_event_type_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_1[1]));
			if (wcscmp(fieldName, L"idle_event_type_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_1[2]));
			if (wcscmp(fieldName, L"idle_event_type_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_1[3]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_1[0]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_1[1]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_1[2]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_1[3]));
			if (wcscmp(fieldName, L"second_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&second_idle);
			if (wcscmp(fieldName, L"idle_event_ani_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_2[0]));
			if (wcscmp(fieldName, L"idle_event_ani_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_2[1]));
			if (wcscmp(fieldName, L"idle_event_ani_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_2[2]));
			if (wcscmp(fieldName, L"idle_event_ani_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_2[3]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_2[0]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_2[1]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_2[2]));
			if (wcscmp(fieldName, L"idle_event_ani_rate_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_ani_rate_2[3]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_2[0]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_2[1]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_2[2]));
			if (wcscmp(fieldName, L"lobby_idle_event_ani_rate_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(lobby_idle_event_ani_rate_2[3]));
			if (wcscmp(fieldName, L"idle_event_type_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_2[0]));
			if (wcscmp(fieldName, L"idle_event_type_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_2[1]));
			if (wcscmp(fieldName, L"idle_event_type_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_2[2]));
			if (wcscmp(fieldName, L"idle_event_type_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_type_2[3]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_2[0]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_2[1]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_2[2]));
			if (wcscmp(fieldName, L"idle_event_need_weapon_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle_event_need_weapon_2[3]));
			if (wcscmp(fieldName, L"hp_idle_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_idle_rate);
			if (wcscmp(fieldName, L"hp_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_idle);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 4; i++) {
				if (reinterpret_cast<std::uintptr_t>(idle_event_ani_1[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) idle_event_ani_1[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(idle_event_ani_1[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(second_idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) second_idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(second_idle));
			for (int i = 0; i < 4; i++) {
				if (reinterpret_cast<std::uintptr_t>(idle_event_ani_2[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) idle_event_ani_2[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(idle_event_ani_2[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(hp_idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) hp_idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(hp_idle));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 skip_time;
__int32 event_time;
wchar_t* idle_event_ani_1[4];
__int16 idle_event_ani_rate_1[4];
__int16 lobby_idle_event_ani_rate_1[4];
__int8 idle_event_type_1[4];
std::wstring idle_event_type_1_EnumValue(int index) const {return Get_idle_event_type_1_EnumValue(idle_event_type_1[index]);};
bool idle_event_need_weapon_1[4];
wchar_t* second_idle;
wchar_t* idle_event_ani_2[4];
__int16 idle_event_ani_rate_2[4];
__int16 lobby_idle_event_ani_rate_2[4];
__int8 idle_event_type_2[4];
std::wstring idle_event_type_2_EnumValue(int index) const {return Get_idle_event_type_2_EnumValue(idle_event_type_2[index]);};
bool idle_event_need_weapon_2[4];
__int16 hp_idle_rate;
char Pad0[2];
wchar_t* hp_idle;

		static TableVersion Version() { return TableVersion(0, 10); }
		static __int16 TableId() { return 379; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) standidle_RecordPtr // : DrRecordPtr
	{
		standidle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::standidle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}