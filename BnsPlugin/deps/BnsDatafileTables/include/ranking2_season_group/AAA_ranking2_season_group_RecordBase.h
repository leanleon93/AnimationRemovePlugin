/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_season_group_Record : DrEl
	{
	private:
		static std::wstring Get_contents_score_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"contents") == 0) return contents;
			if (wcscmp(fieldName, L"season") == 0) return season;
			if (wcscmp(fieldName, L"season_1") == 0) return season[0];
			if (wcscmp(fieldName, L"season_2") == 0) return season[1];
			if (wcscmp(fieldName, L"season_3") == 0) return season[2];
			if (wcscmp(fieldName, L"season_4") == 0) return season[3];
			if (wcscmp(fieldName, L"season_5") == 0) return season[4];
			if (wcscmp(fieldName, L"season_6") == 0) return season[5];
			if (wcscmp(fieldName, L"season_7") == 0) return season[6];
			if (wcscmp(fieldName, L"season_8") == 0) return season[7];
			if (wcscmp(fieldName, L"season_9") == 0) return season[8];
			if (wcscmp(fieldName, L"season_10") == 0) return season[9];
			if (wcscmp(fieldName, L"main_season") == 0) return main_season;
			if (wcscmp(fieldName, L"contents_score_type") == 0) return contents_score_type;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"tier_contents_seasons") == 0) return tier_contents_seasons;
			if (wcscmp(fieldName, L"tier_contents_seasons_1") == 0) return tier_contents_seasons[0];
			if (wcscmp(fieldName, L"tier_contents_seasons_2") == 0) return tier_contents_seasons[1];
			if (wcscmp(fieldName, L"tier_contents_seasons_3") == 0) return tier_contents_seasons[2];
			if (wcscmp(fieldName, L"tier_contents_seasons_4") == 0) return tier_contents_seasons[3];
			if (wcscmp(fieldName, L"tier_contents_seasons_5") == 0) return tier_contents_seasons[4];
			if (wcscmp(fieldName, L"tier_contents_seasons_6") == 0) return tier_contents_seasons[5];
			if (wcscmp(fieldName, L"tier_contents_seasons_7") == 0) return tier_contents_seasons[6];
			if (wcscmp(fieldName, L"tier_contents_seasons_8") == 0) return tier_contents_seasons[7];
			if (wcscmp(fieldName, L"tier_contents_seasons_9") == 0) return tier_contents_seasons[8];
			if (wcscmp(fieldName, L"tier_contents_seasons_10") == 0) return tier_contents_seasons[9];
			if (wcscmp(fieldName, L"tier_contents_seasons_11") == 0) return tier_contents_seasons[10];
			if (wcscmp(fieldName, L"tier_contents_seasons_12") == 0) return tier_contents_seasons[11];
			if (wcscmp(fieldName, L"tier_contents_seasons_13") == 0) return tier_contents_seasons[12];
			if (wcscmp(fieldName, L"tier_contents_seasons_14") == 0) return tier_contents_seasons[13];
			if (wcscmp(fieldName, L"tier_contents_seasons_15") == 0) return tier_contents_seasons[14];
			if (wcscmp(fieldName, L"tier") == 0) return tier;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"contents") == 0) return Data::AnyFieldToStringConverter::ToString(&contents);
			if (wcscmp(fieldName, L"season_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[0]));
			if (wcscmp(fieldName, L"season_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[1]));
			if (wcscmp(fieldName, L"season_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[2]));
			if (wcscmp(fieldName, L"season_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[3]));
			if (wcscmp(fieldName, L"season_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[4]));
			if (wcscmp(fieldName, L"season_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[5]));
			if (wcscmp(fieldName, L"season_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[6]));
			if (wcscmp(fieldName, L"season_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[7]));
			if (wcscmp(fieldName, L"season_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[8]));
			if (wcscmp(fieldName, L"season_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(season[9]));
			if (wcscmp(fieldName, L"main_season") == 0) return Data::AnyFieldToStringConverter::ToString(&main_season);
			if (wcscmp(fieldName, L"contents_score_type") == 0) return Data::AnyFieldToStringConverter::ToString(&contents_score_type);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"tier_contents_seasons_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[0]));
			if (wcscmp(fieldName, L"tier_contents_seasons_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[1]));
			if (wcscmp(fieldName, L"tier_contents_seasons_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[2]));
			if (wcscmp(fieldName, L"tier_contents_seasons_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[3]));
			if (wcscmp(fieldName, L"tier_contents_seasons_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[4]));
			if (wcscmp(fieldName, L"tier_contents_seasons_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[5]));
			if (wcscmp(fieldName, L"tier_contents_seasons_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[6]));
			if (wcscmp(fieldName, L"tier_contents_seasons_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[7]));
			if (wcscmp(fieldName, L"tier_contents_seasons_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[8]));
			if (wcscmp(fieldName, L"tier_contents_seasons_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[9]));
			if (wcscmp(fieldName, L"tier_contents_seasons_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[10]));
			if (wcscmp(fieldName, L"tier_contents_seasons_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[11]));
			if (wcscmp(fieldName, L"tier_contents_seasons_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[12]));
			if (wcscmp(fieldName, L"tier_contents_seasons_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[13]));
			if (wcscmp(fieldName, L"tier_contents_seasons_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_contents_seasons[14]));
			if (wcscmp(fieldName, L"tier") == 0) return Data::AnyFieldToStringConverter::ToString(&tier);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef contents;
int contents_tableId(){return 296;};
Data::TableRef season[10];
int season_tableId(){return 300;};
Data::TableRef main_season;
int main_season_tableId(){return 300;};
__int8 contents_score_type;
std::wstring contents_score_type_EnumValue() const {return Get_contents_score_type_EnumValue(contents_score_type);};
char Pad0[3];
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef tier_contents_seasons[15];
int tier_contents_seasons_tableId(){return 301;};
Data::TableRef tier;
int tier_tableId(){return 303;};

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 301; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_group_RecordPtr // : DrRecordPtr
	{
		ranking2_season_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}