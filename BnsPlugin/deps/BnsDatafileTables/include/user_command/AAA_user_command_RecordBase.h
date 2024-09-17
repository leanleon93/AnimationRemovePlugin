/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class user_command_RecordSubType : __int32
    {
		user_command_record_sub_command = 0,
		user_command_record_sub_social = 1,
		user_command_record_sub_system_social = 2,
		user_command_record_sub_emoticon = 3,
		user_command_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct user_command_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"text") == 0) return text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"text") == 0) return Data::AnyFieldToStringConverter::ToString(&text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef text;
int text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 41); }
		static __int16 TableId() { return 417; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_command_RecordPtr // : DrRecordPtr
	{
		user_command_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::user_command_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}