/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct battleroyalfieldeffectpouchmesh_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skeletal_mesh") == 0) return skeletal_mesh;
			if (wcscmp(fieldName, L"anim_set") == 0) return anim_set;
			if (wcscmp(fieldName, L"physics_asset") == 0) return physics_asset;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"owner_particle") == 0) return owner_particle;
			if (wcscmp(fieldName, L"mark_particle") == 0) return mark_particle;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skeletal_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&skeletal_mesh);
			if (wcscmp(fieldName, L"anim_set") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_set);
			if (wcscmp(fieldName, L"physics_asset") == 0) return Data::AnyFieldToStringConverter::ToString(&physics_asset);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"owner_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&owner_particle);
			if (wcscmp(fieldName, L"mark_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&mark_particle);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(skeletal_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) skeletal_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(skeletal_mesh));
			if (reinterpret_cast<std::uintptr_t>(anim_set) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_set = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_set));
			if (reinterpret_cast<std::uintptr_t>(physics_asset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) physics_asset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(physics_asset));
			if (reinterpret_cast<std::uintptr_t>(owner_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) owner_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(owner_particle));
			if (reinterpret_cast<std::uintptr_t>(mark_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mark_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mark_particle));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* skeletal_mesh;
wchar_t* anim_set;
wchar_t* physics_asset;
Data::IconRef icon;
wchar_t* owner_particle;
wchar_t* mark_particle;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 34; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battleroyalfieldeffectpouchmesh_RecordPtr // : DrRecordPtr
	{
		battleroyalfieldeffectpouchmesh_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battleroyalfieldeffectpouchmesh_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}