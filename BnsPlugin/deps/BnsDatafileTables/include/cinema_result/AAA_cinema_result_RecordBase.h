/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct cinema_result_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_game_mode_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"result_cinematic") == 0) return result_cinematic;
			if (wcscmp(fieldName, L"panel_name") == 0) return panel_name;
			if (wcscmp(fieldName, L"level_seq_event_name") == 0) return level_seq_event_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"result_cinematic") == 0) return Data::AnyFieldToStringConverter::ToString(&result_cinematic);
			if (wcscmp(fieldName, L"panel_name") == 0) return Data::AnyFieldToStringConverter::ToString(&panel_name);
			if (wcscmp(fieldName, L"level_seq_event_name") == 0) return Data::AnyFieldToStringConverter::ToString(&level_seq_event_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(panel_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) panel_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(panel_name));
			else return;
			if (reinterpret_cast<std::uintptr_t>(level_seq_event_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) level_seq_event_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(level_seq_event_name));
		}
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
bool success;
__int8 game_mode;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef result_cinematic;
int result_cinematic_tableId(){return 56;};
wchar_t* panel_name;
wchar_t* level_seq_event_name;

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 55; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cinema_result_RecordPtr // : DrRecordPtr
	{
		cinema_result_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cinema_result_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}