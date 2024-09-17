/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pet_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"mesh_name") == 0) return mesh_name;
			if (wcscmp(fieldName, L"mesh_scale") == 0) return mesh_scale;
			if (wcscmp(fieldName, L"material_name") == 0) return material_name;
			if (wcscmp(fieldName, L"material_name_1") == 0) return material_name[0];
			if (wcscmp(fieldName, L"material_name_2") == 0) return material_name[1];
			if (wcscmp(fieldName, L"material_name_3") == 0) return material_name[2];
			if (wcscmp(fieldName, L"anim_set_name") == 0) return anim_set_name;
			if (wcscmp(fieldName, L"anim_tree_name") == 0) return anim_tree_name;
			if (wcscmp(fieldName, L"caster_spawn_show") == 0) return caster_spawn_show;
			if (wcscmp(fieldName, L"caster_despawn_show") == 0) return caster_despawn_show;
			if (wcscmp(fieldName, L"idle_anim") == 0) return idle_anim;
			if (wcscmp(fieldName, L"combat_idle_anim") == 0) return combat_idle_anim;
			if (wcscmp(fieldName, L"spawn_show") == 0) return spawn_show;
			if (wcscmp(fieldName, L"effect_show") == 0) return effect_show;
			if (wcscmp(fieldName, L"despawn_show") == 0) return despawn_show;
			if (wcscmp(fieldName, L"food_show") == 0) return food_show;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"mesh_name") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_name);
			if (wcscmp(fieldName, L"mesh_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_scale);
			if (wcscmp(fieldName, L"material_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[0]));
			if (wcscmp(fieldName, L"material_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[1]));
			if (wcscmp(fieldName, L"material_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[2]));
			if (wcscmp(fieldName, L"anim_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_set_name);
			if (wcscmp(fieldName, L"anim_tree_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_tree_name);
			if (wcscmp(fieldName, L"caster_spawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&caster_spawn_show);
			if (wcscmp(fieldName, L"caster_despawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&caster_despawn_show);
			if (wcscmp(fieldName, L"idle_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_anim);
			if (wcscmp(fieldName, L"combat_idle_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&combat_idle_anim);
			if (wcscmp(fieldName, L"spawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_show);
			if (wcscmp(fieldName, L"effect_show") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_show);
			if (wcscmp(fieldName, L"despawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&despawn_show);
			if (wcscmp(fieldName, L"food_show") == 0) return Data::AnyFieldToStringConverter::ToString(&food_show);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(mesh_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_name));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(material_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) material_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(material_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(anim_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_set_name));
			if (reinterpret_cast<std::uintptr_t>(anim_tree_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_tree_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_tree_name));
			if (reinterpret_cast<std::uintptr_t>(caster_spawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) caster_spawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(caster_spawn_show));
			if (reinterpret_cast<std::uintptr_t>(caster_despawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) caster_despawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(caster_despawn_show));
			if (reinterpret_cast<std::uintptr_t>(idle_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) idle_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(idle_anim));
			if (reinterpret_cast<std::uintptr_t>(combat_idle_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) combat_idle_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(combat_idle_anim));
			if (reinterpret_cast<std::uintptr_t>(spawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) spawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(spawn_show));
			if (reinterpret_cast<std::uintptr_t>(effect_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_show));
			if (reinterpret_cast<std::uintptr_t>(despawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show));
			if (reinterpret_cast<std::uintptr_t>(food_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) food_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(food_show));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* mesh_name;
float mesh_scale;
wchar_t* material_name[3];
wchar_t* anim_set_name;
wchar_t* anim_tree_name;
wchar_t* caster_spawn_show;
wchar_t* caster_despawn_show;
wchar_t* idle_anim;
wchar_t* combat_idle_anim;
wchar_t* spawn_show;
wchar_t* effect_show;
wchar_t* despawn_show;
wchar_t* food_show;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 274; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_RecordPtr // : DrRecordPtr
	{
		pet_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pet_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}