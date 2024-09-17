/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemsound_Record : DrEl
	{
	private:
		static std::wstring Get_item_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"item_id") == 0) return item_id;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"item_type") == 0) return item_type;
			if (wcscmp(fieldName, L"item_drop_sound") == 0) return item_drop_sound;
			if (wcscmp(fieldName, L"item_move_sound") == 0) return item_move_sound;
			if (wcscmp(fieldName, L"item_equip_sound") == 0) return item_equip_sound;
			if (wcscmp(fieldName, L"item_use_sound") == 0) return item_use_sound;
			if (wcscmp(fieldName, L"item_get_sound") == 0) return item_get_sound;
			if (wcscmp(fieldName, L"fielditem_drop_sound") == 0) return fielditem_drop_sound;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"item_id") == 0) return Data::AnyFieldToStringConverter::ToString(&item_id);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"item_type") == 0) return Data::AnyFieldToStringConverter::ToString(&item_type);
			if (wcscmp(fieldName, L"item_drop_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&item_drop_sound);
			if (wcscmp(fieldName, L"item_move_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&item_move_sound);
			if (wcscmp(fieldName, L"item_equip_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&item_equip_sound);
			if (wcscmp(fieldName, L"item_use_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&item_use_sound);
			if (wcscmp(fieldName, L"item_get_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&item_get_sound);
			if (wcscmp(fieldName, L"fielditem_drop_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&fielditem_drop_sound);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
			else return;
			if (reinterpret_cast<std::uintptr_t>(item_drop_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) item_drop_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(item_drop_sound));
			if (reinterpret_cast<std::uintptr_t>(item_move_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) item_move_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(item_move_sound));
			if (reinterpret_cast<std::uintptr_t>(item_equip_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) item_equip_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(item_equip_sound));
			if (reinterpret_cast<std::uintptr_t>(item_use_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) item_use_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(item_use_sound));
			if (reinterpret_cast<std::uintptr_t>(item_get_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) item_get_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(item_get_sound));
			if (reinterpret_cast<std::uintptr_t>(fielditem_drop_sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fielditem_drop_sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fielditem_drop_sound));
		}
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 item_id;
wchar_t* name;
__int8 item_type;
std::wstring item_type_EnumValue() const {return Get_item_type_EnumValue(item_type);};
char Pad0[3];
wchar_t* item_drop_sound;
wchar_t* item_move_sound;
wchar_t* item_equip_sound;
wchar_t* item_use_sound;
wchar_t* item_get_sound;
wchar_t* fielditem_drop_sound;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 209; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemsound_RecordPtr // : DrRecordPtr
	{
		itemsound_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemsound_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}