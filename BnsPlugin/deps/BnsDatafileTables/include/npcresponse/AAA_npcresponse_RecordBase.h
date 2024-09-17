/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct npcresponse_Record : DrEl
	{
	private:
		static std::wstring Get_faction_check_type_EnumValue(__int8 value);
		static std::wstring Get_faction_level_check_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"faction_check_type") == 0) return faction_check_type;
			if (wcscmp(fieldName, L"faction") == 0) return faction;
			if (wcscmp(fieldName, L"faction_1") == 0) return faction[0];
			if (wcscmp(fieldName, L"faction_2") == 0) return faction[1];
			if (wcscmp(fieldName, L"required_complete_quest") == 0) return required_complete_quest;
			if (wcscmp(fieldName, L"faction_level_check_type") == 0) return faction_level_check_type;
			if (wcscmp(fieldName, L"talk_message") == 0) return talk_message;
			if (wcscmp(fieldName, L"indicator_social") == 0) return indicator_social;
			if (wcscmp(fieldName, L"approach_social") == 0) return approach_social;
			if (wcscmp(fieldName, L"idle") == 0) return idle;
			if (wcscmp(fieldName, L"idle_visible") == 0) return idle_visible;
			if (wcscmp(fieldName, L"idle_start") == 0) return idle_start;
			if (wcscmp(fieldName, L"idle_end") == 0) return idle_end;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"faction_check_type") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_check_type);
			if (wcscmp(fieldName, L"faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(faction[0]));
			if (wcscmp(fieldName, L"faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(faction[1]));
			if (wcscmp(fieldName, L"required_complete_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&required_complete_quest);
			if (wcscmp(fieldName, L"faction_level_check_type") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_level_check_type);
			if (wcscmp(fieldName, L"talk_message") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_message);
			if (wcscmp(fieldName, L"indicator_social") == 0) return Data::AnyFieldToStringConverter::ToString(&indicator_social);
			if (wcscmp(fieldName, L"approach_social") == 0) return Data::AnyFieldToStringConverter::ToString(&approach_social);
			if (wcscmp(fieldName, L"idle") == 0) return Data::AnyFieldToStringConverter::ToString(&idle);
			if (wcscmp(fieldName, L"idle_visible") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_visible);
			if (wcscmp(fieldName, L"idle_start") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_start);
			if (wcscmp(fieldName, L"idle_end") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_end);

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
__int8 faction_check_type;
std::wstring faction_check_type_EnumValue() const {return Get_faction_check_type_EnumValue(faction_check_type);};
char Pad0[3];
Data::TableRef faction[2];
int faction_tableId(){return 130;};
Data::TableRef required_complete_quest;
int required_complete_quest_tableId(){return 283;};
__int8 faction_level_check_type;
std::wstring faction_level_check_type_EnumValue() const {return Get_faction_level_check_type_EnumValue(faction_level_check_type);};
char Pad1[3];
Data::TableRef talk_message;
int talk_message_tableId(){return 260;};
Data::TableRef indicator_social;
int indicator_social_tableId(){return 181;};
Data::TableRef approach_social;
int approach_social_tableId(){return 367;};
Data::TableRef idle;
int idle_tableId(){return 179;};
bool idle_visible;
char Pad2[3];
Data::TableRef idle_start;
int idle_start_tableId(){return 367;};
Data::TableRef idle_end;
int idle_end_tableId(){return 367;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 258; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) npcresponse_RecordPtr // : DrRecordPtr
	{
		npcresponse_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::npcresponse_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}