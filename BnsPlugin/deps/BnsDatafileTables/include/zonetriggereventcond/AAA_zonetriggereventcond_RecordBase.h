/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class zonetriggereventcond_RecordSubType : __int32
    {
		zonetriggereventcond_record_sub_weekly_event = 0,
		zonetriggereventcond_record_sub_timeout_event = 1,
		zonetriggereventcond_record_sub_npc_killed_event = 2,
		zonetriggereventcond_record_sub_npc_killed_event2 = 3,
		zonetriggereventcond_record_sub_npc_survived_score_decision_timeout_event = 4,
		zonetriggereventcond_record_sub_npc_survived_timeout_event = 5,
		zonetriggereventcond_record_sub_boss_challenge_timeout_event = 6,
		zonetriggereventcond_record_sub_boss_challenge_round_score_event = 7,
		zonetriggereventcond_record_sub_boss_challenge_boss_npc_killed_event = 8,
		zonetriggereventcond_record_sub_count = 9,
    };
#pragma pack(push, 1)
	struct zonetriggereventcond_Record : DrEl
	{
	private:
		static std::wstring Get_cond_contents_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"cond_contents_type") == 0) return cond_contents_type;
			if (wcscmp(fieldName, L"cond_event_message") == 0) return cond_event_message;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"cond_contents_type") == 0) return Data::AnyFieldToStringConverter::ToString(&cond_contents_type);
			if (wcscmp(fieldName, L"cond_event_message") == 0) return Data::AnyFieldToStringConverter::ToString(&cond_event_message);

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
__int8 cond_contents_type;
std::wstring cond_contents_type_EnumValue() const {return Get_cond_contents_type_EnumValue(cond_contents_type);};
char Pad0[3];
Data::TableRef cond_event_message;
int cond_event_message_tableId(){return 151;};

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 457; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonetriggereventcond_RecordPtr // : DrRecordPtr
	{
		zonetriggereventcond_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonetriggereventcond_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}