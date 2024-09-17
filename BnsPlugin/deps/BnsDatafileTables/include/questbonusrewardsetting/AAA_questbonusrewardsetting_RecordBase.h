/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class questbonusrewardsetting_RecordSubType : __int32
    {
		questbonusrewardsetting_record_sub_sealed_level = 0,
		questbonusrewardsetting_record_sub_difficulty_type = 1,
		questbonusrewardsetting_record_sub_ignore_difficulty = 2,
		questbonusrewardsetting_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct questbonusrewardsetting_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"quest") == 0) return quest;
			if (wcscmp(fieldName, L"reward") == 0) return reward;
			if (wcscmp(fieldName, L"basic_quota") == 0) return basic_quota;
			if (wcscmp(fieldName, L"contents_reset") == 0) return contents_reset;
			if (wcscmp(fieldName, L"contents_reset_1") == 0) return contents_reset[0];
			if (wcscmp(fieldName, L"contents_reset_2") == 0) return contents_reset[1];
			if (wcscmp(fieldName, L"contents_reset_3") == 0) return contents_reset[2];
			if (wcscmp(fieldName, L"contents_reset_4") == 0) return contents_reset[3];
			if (wcscmp(fieldName, L"contents_reset_5") == 0) return contents_reset[4];
			if (wcscmp(fieldName, L"contents_reset_6") == 0) return contents_reset[5];
			if (wcscmp(fieldName, L"contents_reset_7") == 0) return contents_reset[6];
			if (wcscmp(fieldName, L"contents_reset_8") == 0) return contents_reset[7];
			if (wcscmp(fieldName, L"contents_reset_9") == 0) return contents_reset[8];
			if (wcscmp(fieldName, L"contents_reset_10") == 0) return contents_reset[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"quest") == 0) return Data::AnyFieldToStringConverter::ToString(&quest);
			if (wcscmp(fieldName, L"reward") == 0) return Data::AnyFieldToStringConverter::ToString(&reward);
			if (wcscmp(fieldName, L"basic_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&basic_quota);
			if (wcscmp(fieldName, L"contents_reset_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[0]));
			if (wcscmp(fieldName, L"contents_reset_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[1]));
			if (wcscmp(fieldName, L"contents_reset_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[2]));
			if (wcscmp(fieldName, L"contents_reset_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[3]));
			if (wcscmp(fieldName, L"contents_reset_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[4]));
			if (wcscmp(fieldName, L"contents_reset_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[5]));
			if (wcscmp(fieldName, L"contents_reset_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[6]));
			if (wcscmp(fieldName, L"contents_reset_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[7]));
			if (wcscmp(fieldName, L"contents_reset_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[8]));
			if (wcscmp(fieldName, L"contents_reset_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(contents_reset[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef quest;
int quest_tableId(){return 283;};
Data::TableRef reward;
int reward_tableId(){return 281;};
Data::TableRef basic_quota;
int basic_quota_tableId(){return 66;};
Data::TableRef contents_reset[10];
int contents_reset_tableId(){return 72;};

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 282; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questbonusrewardsetting_RecordPtr // : DrRecordPtr
	{
		questbonusrewardsetting_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::questbonusrewardsetting_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}