/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mentoring_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"enable") == 0) return enable;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"text") == 0) return text;
			if (wcscmp(fieldName, L"max_mentee_count") == 0) return max_mentee_count;
			if (wcscmp(fieldName, L"first_quest_id") == 0) return first_quest_id;
			if (wcscmp(fieldName, L"last_quest_id") == 0) return last_quest_id;
			if (wcscmp(fieldName, L"limit_finish_count") == 0) return limit_finish_count;
			if (wcscmp(fieldName, L"mentor_level") == 0) return mentor_level;
			if (wcscmp(fieldName, L"mentor_mastery_level") == 0) return mentor_mastery_level;
			if (wcscmp(fieldName, L"mentor_completed_quest") == 0) return mentor_completed_quest;
			if (wcscmp(fieldName, L"mentor_completed_achievement") == 0) return mentor_completed_achievement;
			if (wcscmp(fieldName, L"mentee_level") == 0) return mentee_level;
			if (wcscmp(fieldName, L"mentee_mastery_level") == 0) return mentee_mastery_level;
			if (wcscmp(fieldName, L"mentee_completed_quest") == 0) return mentee_completed_quest;
			if (wcscmp(fieldName, L"mentee_completed_achievement") == 0) return mentee_completed_achievement;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"enable") == 0) return Data::AnyFieldToStringConverter::ToString(&enable);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"text") == 0) return Data::AnyFieldToStringConverter::ToString(&text);
			if (wcscmp(fieldName, L"max_mentee_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_mentee_count);
			if (wcscmp(fieldName, L"first_quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&first_quest_id);
			if (wcscmp(fieldName, L"last_quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&last_quest_id);
			if (wcscmp(fieldName, L"limit_finish_count") == 0) return Data::AnyFieldToStringConverter::ToString(&limit_finish_count);
			if (wcscmp(fieldName, L"mentor_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mentor_level);
			if (wcscmp(fieldName, L"mentor_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mentor_mastery_level);
			if (wcscmp(fieldName, L"mentor_completed_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&mentor_completed_quest);
			if (wcscmp(fieldName, L"mentor_completed_achievement") == 0) return Data::AnyFieldToStringConverter::ToString(&mentor_completed_achievement);
			if (wcscmp(fieldName, L"mentee_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mentee_level);
			if (wcscmp(fieldName, L"mentee_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mentee_mastery_level);
			if (wcscmp(fieldName, L"mentee_completed_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&mentee_completed_quest);
			if (wcscmp(fieldName, L"mentee_completed_achievement") == 0) return Data::AnyFieldToStringConverter::ToString(&mentee_completed_achievement);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 version;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool enable;
char Pad0[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef text;
int text_tableId(){return 405;};
__int8 max_mentee_count;
char Pad1[3];
Data::TableRef first_quest_id;
int first_quest_id_tableId(){return 283;};
Data::TableRef last_quest_id;
int last_quest_id_tableId(){return 283;};
__int8 limit_finish_count;
__int8 mentor_level;
__int8 mentor_mastery_level;
char Pad2[1];
Data::TableRef mentor_completed_quest;
int mentor_completed_quest_tableId(){return 283;};
Data::TableRef mentor_completed_achievement;
int mentor_completed_achievement_tableId(){return 6;};
__int8 mentee_level;
__int8 mentee_mastery_level;
char Pad3[2];
Data::TableRef mentee_completed_quest;
int mentee_completed_quest_tableId(){return 283;};
Data::TableRef mentee_completed_achievement;
int mentee_completed_achievement_tableId(){return 6;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 249; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mentoring_RecordPtr // : DrRecordPtr
	{
		mentoring_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mentoring_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}