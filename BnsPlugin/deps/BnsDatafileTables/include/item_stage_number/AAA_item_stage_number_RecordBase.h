/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_stage_number_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"stage_number_name") == 0) return stage_number_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"stage_number_name") == 0) return Data::AnyFieldToStringConverter::ToString(&stage_number_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 stage_number;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef stage_number_name;
int stage_number_name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 211; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_stage_number_RecordPtr // : DrRecordPtr
	{
		item_stage_number_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_stage_number_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}