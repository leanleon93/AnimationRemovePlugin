/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class skipquest_RecordSubType : __int32
    {
		skipquest_record_sub_epic = 0,
		skipquest_record_sub_normal = 1,
		skipquest_record_sub_job = 2,
		skipquest_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skipquest_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"mastery_level") == 0) return mastery_level;
			if (wcscmp(fieldName, L"quest") == 0) return quest;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mastery_level);
			if (wcscmp(fieldName, L"quest") == 0) return Data::AnyFieldToStringConverter::ToString(&quest);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 level;
__int16 mastery_level;
char Pad0[2];
Data::TableRef quest;
int quest_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 362; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skipquest_RecordPtr // : DrRecordPtr
	{
		skipquest_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skipquest_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}