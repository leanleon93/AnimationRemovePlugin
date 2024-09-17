/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct battlemessage_Record : DrEl
	{
	private:
		static std::wstring Get_object_type_EnumValue(__int8 value);
		static std::wstring Get_skill_result_type_EnumValue(__int8 value);
		static std::wstring Get_effect_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"game_message") == 0) return game_message;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"game_message") == 0) return Data::AnyFieldToStringConverter::ToString(&game_message);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 object_type;
__int8 skill_result_type;
__int8 effect_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef game_message;
int game_message_tableId(){return 151;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 31; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) battlemessage_RecordPtr // : DrRecordPtr
	{
		battlemessage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::battlemessage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}