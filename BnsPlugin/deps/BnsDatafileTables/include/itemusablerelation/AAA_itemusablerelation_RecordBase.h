/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemusablerelation_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"attraction_group") == 0) return attraction_group;
			if (wcscmp(fieldName, L"all") == 0) return all;
			if (wcscmp(fieldName, L"default_val") == 0) return default_val;
			if (wcscmp(fieldName, L"duel") == 0) return duel;
			if (wcscmp(fieldName, L"unusable") == 0) return unusable;
			if (wcscmp(fieldName, L"jeryoungrim") == 0) return jeryoungrim;
			if (wcscmp(fieldName, L"deasamak") == 0) return deasamak;
			if (wcscmp(fieldName, L"suwal") == 0) return suwal;
			if (wcscmp(fieldName, L"beakchung") == 0) return beakchung;
			if (wcscmp(fieldName, L"gunwon") == 0) return gunwon;
			if (wcscmp(fieldName, L"epichigh") == 0) return epichigh;
			if (wcscmp(fieldName, L"pacheonseongdo") == 0) return pacheonseongdo;
			if (wcscmp(fieldName, L"musin1_15") == 0) return musin1_15;
			if (wcscmp(fieldName, L"cave_dungeon") == 0) return cave_dungeon;
			if (wcscmp(fieldName, L"potion") == 0) return potion;
			if (wcscmp(fieldName, L"talisman") == 0) return talisman;
			if (wcscmp(fieldName, L"techeonwangreung") == 0) return techeonwangreung;
			if (wcscmp(fieldName, L"event1") == 0) return event1;
			if (wcscmp(fieldName, L"event2") == 0) return event2;
			if (wcscmp(fieldName, L"special_potion") == 0) return special_potion;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"attraction_group") == 0) return Data::AnyFieldToStringConverter::ToString(&attraction_group);
			if (wcscmp(fieldName, L"all") == 0) return Data::AnyFieldToStringConverter::ToString(&all);
			if (wcscmp(fieldName, L"default_val") == 0) return Data::AnyFieldToStringConverter::ToString(&default_val);
			if (wcscmp(fieldName, L"duel") == 0) return Data::AnyFieldToStringConverter::ToString(&duel);
			if (wcscmp(fieldName, L"unusable") == 0) return Data::AnyFieldToStringConverter::ToString(&unusable);
			if (wcscmp(fieldName, L"jeryoungrim") == 0) return Data::AnyFieldToStringConverter::ToString(&jeryoungrim);
			if (wcscmp(fieldName, L"deasamak") == 0) return Data::AnyFieldToStringConverter::ToString(&deasamak);
			if (wcscmp(fieldName, L"suwal") == 0) return Data::AnyFieldToStringConverter::ToString(&suwal);
			if (wcscmp(fieldName, L"beakchung") == 0) return Data::AnyFieldToStringConverter::ToString(&beakchung);
			if (wcscmp(fieldName, L"gunwon") == 0) return Data::AnyFieldToStringConverter::ToString(&gunwon);
			if (wcscmp(fieldName, L"epichigh") == 0) return Data::AnyFieldToStringConverter::ToString(&epichigh);
			if (wcscmp(fieldName, L"pacheonseongdo") == 0) return Data::AnyFieldToStringConverter::ToString(&pacheonseongdo);
			if (wcscmp(fieldName, L"musin1_15") == 0) return Data::AnyFieldToStringConverter::ToString(&musin1_15);
			if (wcscmp(fieldName, L"cave_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&cave_dungeon);
			if (wcscmp(fieldName, L"potion") == 0) return Data::AnyFieldToStringConverter::ToString(&potion);
			if (wcscmp(fieldName, L"talisman") == 0) return Data::AnyFieldToStringConverter::ToString(&talisman);
			if (wcscmp(fieldName, L"techeonwangreung") == 0) return Data::AnyFieldToStringConverter::ToString(&techeonwangreung);
			if (wcscmp(fieldName, L"event1") == 0) return Data::AnyFieldToStringConverter::ToString(&event1);
			if (wcscmp(fieldName, L"event2") == 0) return Data::AnyFieldToStringConverter::ToString(&event2);
			if (wcscmp(fieldName, L"special_potion") == 0) return Data::AnyFieldToStringConverter::ToString(&special_potion);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef attraction_group;
int attraction_group_tableId(){return 16;};
bool all;
bool default_val;
bool duel;
bool unusable;
bool jeryoungrim;
bool deasamak;
bool suwal;
bool beakchung;
bool gunwon;
bool epichigh;
bool pacheonseongdo;
bool musin1_15;
bool cave_dungeon;
bool potion;
bool talisman;
bool techeonwangreung;
bool event1;
bool event2;
bool special_potion;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 216; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemusablerelation_RecordPtr // : DrRecordPtr
	{
		itemusablerelation_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemusablerelation_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}