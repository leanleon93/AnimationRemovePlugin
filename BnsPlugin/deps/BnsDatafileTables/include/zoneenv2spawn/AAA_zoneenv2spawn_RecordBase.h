/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zoneenv2spawn_Record : DrEl
	{
	private:
		static std::wstring Get_mapunit_map_depth_EnumValue(__int8 value);
		static std::wstring Get_mapunit_arena_dungeon_map_depth_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"env2") == 0) return env2;
			if (wcscmp(fieldName, L"env2place") == 0) return env2place;
			if (wcscmp(fieldName, L"random_group") == 0) return random_group;
			if (wcscmp(fieldName, L"required_env") == 0) return required_env;
			if (wcscmp(fieldName, L"mapunit_map_depth") == 0) return mapunit_map_depth;
			if (wcscmp(fieldName, L"mapunit_arena_dungeon_map_depth") == 0) return mapunit_arena_dungeon_map_depth;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"env2") == 0) return Data::AnyFieldToStringConverter::ToString(&env2);
			if (wcscmp(fieldName, L"env2place") == 0) return Data::AnyFieldToStringConverter::ToString(&env2place);
			if (wcscmp(fieldName, L"random_group") == 0) return Data::AnyFieldToStringConverter::ToString(&random_group);
			if (wcscmp(fieldName, L"required_env") == 0) return Data::AnyFieldToStringConverter::ToString(&required_env);
			if (wcscmp(fieldName, L"mapunit_map_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_map_depth);
			if (wcscmp(fieldName, L"mapunit_arena_dungeon_map_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&mapunit_arena_dungeon_map_depth);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef env2;
int env2_tableId(){return 444;};
Data::TableRef env2place;
int env2place_tableId(){return 445;};
Data::TableRef random_group;
int random_group_tableId(){return 447;};
Data::TableRef required_env;
int required_env_tableId(){return 446;};
__int8 mapunit_map_depth;
std::wstring mapunit_map_depth_EnumValue() const {return Get_mapunit_map_depth_EnumValue(mapunit_map_depth);};
__int8 mapunit_arena_dungeon_map_depth;
std::wstring mapunit_arena_dungeon_map_depth_EnumValue() const {return Get_mapunit_arena_dungeon_map_depth_EnumValue(mapunit_arena_dungeon_map_depth);};

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 446; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneenv2spawn_RecordPtr // : DrRecordPtr
	{
		zoneenv2spawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneenv2spawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}