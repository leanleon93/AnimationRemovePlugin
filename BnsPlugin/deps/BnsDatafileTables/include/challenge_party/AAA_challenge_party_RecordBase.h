/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct challenge_party_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"arena_minimap") == 0) return arena_minimap;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"use_training_mode") == 0) return use_training_mode;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"play_time") == 0) return play_time;
			if (wcscmp(fieldName, L"pattern_time") == 0) return pattern_time;
			if (wcscmp(fieldName, L"pattern_time_1") == 0) return pattern_time[0];
			if (wcscmp(fieldName, L"pattern_time_2") == 0) return pattern_time[1];
			if (wcscmp(fieldName, L"pattern_time_3") == 0) return pattern_time[2];
			if (wcscmp(fieldName, L"pattern_time_4") == 0) return pattern_time[3];
			if (wcscmp(fieldName, L"pattern_time_5") == 0) return pattern_time[4];
			if (wcscmp(fieldName, L"pattern_time_6") == 0) return pattern_time[5];
			if (wcscmp(fieldName, L"pattern_time_7") == 0) return pattern_time[6];
			if (wcscmp(fieldName, L"pattern_time_8") == 0) return pattern_time[7];
			if (wcscmp(fieldName, L"score_per_evaluate") == 0) return score_per_evaluate;
			if (wcscmp(fieldName, L"kill_score") == 0) return kill_score;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"arena_minimap") == 0) return Data::AnyFieldToStringConverter::ToString(&arena_minimap);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"use_training_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&use_training_mode);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"play_time") == 0) return Data::AnyFieldToStringConverter::ToString(&play_time);
			if (wcscmp(fieldName, L"pattern_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[0]));
			if (wcscmp(fieldName, L"pattern_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[1]));
			if (wcscmp(fieldName, L"pattern_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[2]));
			if (wcscmp(fieldName, L"pattern_time_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[3]));
			if (wcscmp(fieldName, L"pattern_time_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[4]));
			if (wcscmp(fieldName, L"pattern_time_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[5]));
			if (wcscmp(fieldName, L"pattern_time_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[6]));
			if (wcscmp(fieldName, L"pattern_time_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(pattern_time[7]));
			if (wcscmp(fieldName, L"score_per_evaluate") == 0) return Data::AnyFieldToStringConverter::ToString(&score_per_evaluate);
			if (wcscmp(fieldName, L"kill_score") == 0) return Data::AnyFieldToStringConverter::ToString(&kill_score);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(arena_minimap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) arena_minimap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(arena_minimap));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef name2;
int name2_tableId(){return 405;};
wchar_t* arena_minimap;
Data::TableRef required_item[2];
int required_item_tableId(){return 189;};
__int16 required_item_count[2];
bool use_training_mode;
char Pad0[3];
Data::TableRef group;
int group_tableId(){return 16;};
__int32 play_time;
__int32 pattern_time[8];
__int32 score_per_evaluate;
__int32 kill_score;

		static TableVersion Version() { return TableVersion(0, 14); }
		static __int16 TableId() { return 53; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challenge_party_RecordPtr // : DrRecordPtr
	{
		challenge_party_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::challenge_party_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}