/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class arenaportal_RecordSubType : __int32
    {
		arenaportal_record_sub_duel = 0,
		arenaportal_record_sub_dungeon = 1,
		arenaportal_record_sub_public_raid = 2,
		arenaportal_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct arenaportal_Record : DrEl
	{
	private:
		static std::wstring Get_required_quest_check_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"faction") == 0) return faction;
			if (wcscmp(fieldName, L"faction_1") == 0) return faction[0];
			if (wcscmp(fieldName, L"faction_2") == 0) return faction[1];
			if (wcscmp(fieldName, L"required_quest_check") == 0) return required_quest_check;
			if (wcscmp(fieldName, L"required_quest") == 0) return required_quest;
			if (wcscmp(fieldName, L"required_quest_1") == 0) return required_quest[0];
			if (wcscmp(fieldName, L"required_quest_2") == 0) return required_quest[1];
			if (wcscmp(fieldName, L"required_quest_3") == 0) return required_quest[2];
			if (wcscmp(fieldName, L"required_quest_4") == 0) return required_quest[3];
			if (wcscmp(fieldName, L"required_quest_5") == 0) return required_quest[4];
			if (wcscmp(fieldName, L"required_quest_6") == 0) return required_quest[5];
			if (wcscmp(fieldName, L"required_min_level") == 0) return required_min_level;
			if (wcscmp(fieldName, L"required_min_faction_level") == 0) return required_min_faction_level;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"position_x") == 0) return position_x;
			if (wcscmp(fieldName, L"position_y") == 0) return position_y;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(faction[0]));
			if (wcscmp(fieldName, L"faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(faction[1]));
			if (wcscmp(fieldName, L"required_quest_check") == 0) return Data::AnyFieldToStringConverter::ToString(&required_quest_check);
			if (wcscmp(fieldName, L"required_quest_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest[0]));
			if (wcscmp(fieldName, L"required_quest_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest[1]));
			if (wcscmp(fieldName, L"required_quest_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest[2]));
			if (wcscmp(fieldName, L"required_quest_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest[3]));
			if (wcscmp(fieldName, L"required_quest_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest[4]));
			if (wcscmp(fieldName, L"required_quest_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest[5]));
			if (wcscmp(fieldName, L"required_min_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_min_level);
			if (wcscmp(fieldName, L"required_min_faction_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_min_faction_level);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"position_x") == 0) return Data::AnyFieldToStringConverter::ToString(&position_x);
			if (wcscmp(fieldName, L"position_y") == 0) return Data::AnyFieldToStringConverter::ToString(&position_y);

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
Data::TableRef faction[2];
int faction_tableId(){return 130;};
__int8 required_quest_check;
std::wstring required_quest_check_EnumValue() const {return Get_required_quest_check_EnumValue(required_quest_check);};
char Pad0[3];
Data::TableRef required_quest[6];
int required_quest_tableId(){return 283;};
__int8 required_min_level;
char Pad1[1];
__int16 required_min_faction_level;
Data::TableRef zone;
int zone_tableId(){return 443;};
float position_x;
float position_y;

		static TableVersion Version() { return TableVersion(6, 0); }
		static __int16 TableId() { return 13; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) arenaportal_RecordPtr // : DrRecordPtr
	{
		arenaportal_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::arenaportal_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}