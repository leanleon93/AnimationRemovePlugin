/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct campfire_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"additional_heal_percent") == 0) return additional_heal_percent;
			if (wcscmp(fieldName, L"remain_duration") == 0) return remain_duration;
			if (wcscmp(fieldName, L"mesh_id") == 0) return mesh_id;
			if (wcscmp(fieldName, L"animset_name") == 0) return animset_name;
			if (wcscmp(fieldName, L"anim_show") == 0) return anim_show;
			if (wcscmp(fieldName, L"despawn_show") == 0) return despawn_show;
			if (wcscmp(fieldName, L"party_match") == 0) return party_match;
			if (wcscmp(fieldName, L"map_tooltip") == 0) return map_tooltip;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"additional_heal_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_heal_percent);
			if (wcscmp(fieldName, L"remain_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&remain_duration);
			if (wcscmp(fieldName, L"mesh_id") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_id);
			if (wcscmp(fieldName, L"animset_name") == 0) return Data::AnyFieldToStringConverter::ToString(&animset_name);
			if (wcscmp(fieldName, L"anim_show") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_show);
			if (wcscmp(fieldName, L"despawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show);
			if (wcscmp(fieldName, L"party_match") == 0) return Data::AnyFieldToStringConverter::ToString(&party_match);
			if (wcscmp(fieldName, L"map_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&map_tooltip);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(mesh_id) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_id = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_id));
			if (reinterpret_cast<std::uintptr_t>(animset_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) animset_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(animset_name));
			if (reinterpret_cast<std::uintptr_t>(anim_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_show));
			if (reinterpret_cast<std::uintptr_t>(despawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 additional_heal_percent;
char Pad0[2];
__int32 remain_duration;
wchar_t* mesh_id;
wchar_t* animset_name;
wchar_t* anim_show;
wchar_t* despawn_show;
Data::TableRef party_match;
int party_match_tableId(){return 263;};
Data::TableRef map_tooltip;
int map_tooltip_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 47; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) campfire_RecordPtr // : DrRecordPtr
	{
		campfire_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::campfire_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}