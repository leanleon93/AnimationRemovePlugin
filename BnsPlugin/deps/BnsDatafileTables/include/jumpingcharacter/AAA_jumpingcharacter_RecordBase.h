/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct jumpingcharacter_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"condition_level") == 0) return condition_level;
			if (wcscmp(fieldName, L"tutorial_zone") == 0) return tutorial_zone;
			if (wcscmp(fieldName, L"tutorial_zone_1") == 0) return tutorial_zone[0];
			if (wcscmp(fieldName, L"tutorial_zone_2") == 0) return tutorial_zone[1];
			if (wcscmp(fieldName, L"tutorial_zone_3") == 0) return tutorial_zone[2];
			if (wcscmp(fieldName, L"tutorial_zone_4") == 0) return tutorial_zone[3];
			if (wcscmp(fieldName, L"train_quest") == 0) return train_quest;
			if (wcscmp(fieldName, L"skip_msg_achievement") == 0) return skip_msg_achievement;
			if (wcscmp(fieldName, L"creation_enable") == 0) return creation_enable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"condition_level") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_level);
			if (wcscmp(fieldName, L"tutorial_zone_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tutorial_zone[0]));
			if (wcscmp(fieldName, L"tutorial_zone_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tutorial_zone[1]));
			if (wcscmp(fieldName, L"tutorial_zone_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tutorial_zone[2]));
			if (wcscmp(fieldName, L"tutorial_zone_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tutorial_zone[3]));
			if (wcscmp(fieldName, L"train_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&train_quest);
			if (wcscmp(fieldName, L"skip_msg_achievement") == 0) return Data::AnyFieldToStringConverter::ToString(&skip_msg_achievement);
			if (wcscmp(fieldName, L"creation_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&creation_enable);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 job;
__int16 jumping_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 condition_level;
char Pad0[3];
Data::TableRef tutorial_zone[4];
int tutorial_zone_tableId(){return 443;};
Data::TableRef train_quest;
int train_quest_tableId(){return 283;};
Data::TableRef skip_msg_achievement;
int skip_msg_achievement_tableId(){return 6;};
bool creation_enable;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 229; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) jumpingcharacter_RecordPtr // : DrRecordPtr
	{
		jumpingcharacter_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::jumpingcharacter_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}