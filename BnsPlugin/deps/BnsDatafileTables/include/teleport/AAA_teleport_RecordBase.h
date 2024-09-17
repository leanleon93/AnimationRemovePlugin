/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct teleport_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"retired") == 0) return retired;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"teleport_position") == 0) return teleport_position;
			if (wcscmp(fieldName, L"distance_from_start_teleport") == 0) return distance_from_start_teleport;
			if (wcscmp(fieldName, L"price_percent") == 0) return price_percent;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"activated_faction") == 0) return activated_faction;
			if (wcscmp(fieldName, L"joined_faction") == 0) return joined_faction;
			if (wcscmp(fieldName, L"required_pc_level") == 0) return required_pc_level;
			if (wcscmp(fieldName, L"required_pc_mastery_level") == 0) return required_pc_mastery_level;
			if (wcscmp(fieldName, L"required_faction_level") == 0) return required_faction_level;
			if (wcscmp(fieldName, L"ui_preceding_quest") == 0) return ui_preceding_quest;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"retired") == 0) return Data::AnyFieldToStringConverter::ToString(&retired);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"teleport_position") == 0) return Data::AnyFieldToStringConverter::ToString(&teleport_position);
			if (wcscmp(fieldName, L"distance_from_start_teleport") == 0) return Data::AnyFieldToStringConverter::ToString(&distance_from_start_teleport);
			if (wcscmp(fieldName, L"price_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&price_percent);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"activated_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&activated_faction);
			if (wcscmp(fieldName, L"joined_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&joined_faction);
			if (wcscmp(fieldName, L"required_pc_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_pc_level);
			if (wcscmp(fieldName, L"required_pc_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_pc_mastery_level);
			if (wcscmp(fieldName, L"required_faction_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_faction_level);
			if (wcscmp(fieldName, L"ui_preceding_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_preceding_quest);

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
bool retired;
char Pad0[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef teleport_position;
int teleport_position_tableId(){return 455;};
__int16 distance_from_start_teleport;
char Pad1[2];
__int32 price_percent;
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef activated_faction;
int activated_faction_tableId(){return 130;};
bool joined_faction;
__int8 required_pc_level;
__int8 required_pc_mastery_level;
__int8 required_faction_level;
Data::TableRef ui_preceding_quest;
int ui_preceding_quest_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(0, 23); }
		static __int16 TableId() { return 401; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) teleport_RecordPtr // : DrRecordPtr
	{
		teleport_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::teleport_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}