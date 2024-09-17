/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class partychatchannel_RecordSubType : __int32
    {
		partychatchannel_record_sub_normal = 0,
		partychatchannel_record_sub_main_faction = 1,
		partychatchannel_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct partychatchannel_Record : DrEl
	{
	private:
		static std::wstring Get_chnnelid_EnumValue(__int8 value);
		static std::wstring Get_arrange_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"chnnelid") == 0) return chnnelid;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name_party_number") == 0) return name_party_number;
			if (wcscmp(fieldName, L"district") == 0) return district;
			if (wcscmp(fieldName, L"map_group_1") == 0) return map_group_1;
			if (wcscmp(fieldName, L"arrange_type") == 0) return arrange_type;
			if (wcscmp(fieldName, L"group_name") == 0) return group_name;
			if (wcscmp(fieldName, L"grade") == 0) return grade;
			if (wcscmp(fieldName, L"auto_recruittime") == 0) return auto_recruittime;
			if (wcscmp(fieldName, L"use_team_type") == 0) return use_team_type;
			if (wcscmp(fieldName, L"use_difficulty_type") == 0) return use_difficulty_type;
			if (wcscmp(fieldName, L"use_difficulty_type_1") == 0) return use_difficulty_type[0];
			if (wcscmp(fieldName, L"use_difficulty_type_2") == 0) return use_difficulty_type[1];
			if (wcscmp(fieldName, L"use_difficulty_type_3") == 0) return use_difficulty_type[2];
			if (wcscmp(fieldName, L"interdungeon") == 0) return interdungeon;
			if (wcscmp(fieldName, L"party_match") == 0) return party_match;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"chnnelid") == 0) return Data::AnyFieldToStringConverter::ToString(&chnnelid);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name_party_number") == 0) return Data::AnyFieldToStringConverter::ToString(&name_party_number);
			if (wcscmp(fieldName, L"district") == 0) return Data::AnyFieldToStringConverter::ToString(&district);
			if (wcscmp(fieldName, L"map_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&map_group_1);
			if (wcscmp(fieldName, L"arrange_type") == 0) return Data::AnyFieldToStringConverter::ToString(&arrange_type);
			if (wcscmp(fieldName, L"group_name") == 0) return Data::AnyFieldToStringConverter::ToString(&group_name);
			if (wcscmp(fieldName, L"grade") == 0) return Data::AnyFieldToStringConverter::ToString(&grade);
			if (wcscmp(fieldName, L"auto_recruittime") == 0) return Data::AnyFieldToStringConverter::ToString(&auto_recruittime);
			if (wcscmp(fieldName, L"use_team_type") == 0) return Data::AnyFieldToStringConverter::ToString(&use_team_type);
			if (wcscmp(fieldName, L"use_difficulty_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_difficulty_type[0]));
			if (wcscmp(fieldName, L"use_difficulty_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_difficulty_type[1]));
			if (wcscmp(fieldName, L"use_difficulty_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(use_difficulty_type[2]));
			if (wcscmp(fieldName, L"interdungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&interdungeon);
			if (wcscmp(fieldName, L"party_match") == 0) return Data::AnyFieldToStringConverter::ToString(&party_match);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 chnnelid;
std::wstring chnnelid_EnumValue() const {return Get_chnnelid_EnumValue(chnnelid);};
char Pad0[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef name_party_number;
int name_party_number_tableId(){return 405;};
Data::TableRef district;
int district_tableId(){return 100;};
Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
__int8 arrange_type;
std::wstring arrange_type_EnumValue() const {return Get_arrange_type_EnumValue(arrange_type);};
char Pad1[3];
Data::TableRef group_name;
int group_name_tableId(){return 405;};
__int8 grade;
char Pad2[1];
__int16 auto_recruittime;
bool use_team_type;
bool use_difficulty_type[3];
Data::TableRef interdungeon;
int interdungeon_tableId(){return 182;};
Data::TableRef party_match;
int party_match_tableId(){return 263;};

		static TableVersion Version() { return TableVersion(0, 98); }
		static __int16 TableId() { return 262; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) partychatchannel_RecordPtr // : DrRecordPtr
	{
		partychatchannel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::partychatchannel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}