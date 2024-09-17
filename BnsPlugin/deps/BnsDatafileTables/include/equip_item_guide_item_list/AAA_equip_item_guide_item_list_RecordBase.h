/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct equip_item_guide_item_list_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_improve_level") == 0) return item_improve_level;
			if (wcscmp(fieldName, L"item_stage_number") == 0) return item_stage_number;
			if (wcscmp(fieldName, L"item_guide") == 0) return item_guide;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);
			if (wcscmp(fieldName, L"item_improve_level") == 0) return Data::AnyFieldToStringConverter::ToString(&item_improve_level);
			if (wcscmp(fieldName, L"item_stage_number") == 0) return Data::AnyFieldToStringConverter::ToString(&item_stage_number);
			if (wcscmp(fieldName, L"item_guide") == 0) return Data::AnyFieldToStringConverter::ToString(&item_guide);

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
		Data::TableRef item;
int item_tableId(){return 189;};
__int8 item_improve_level;
__int8 item_stage_number;
char Pad0[2];
Data::TableRef item_guide;
int item_guide_tableId(){return 121;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 122; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_guide_item_list_RecordPtr // : DrRecordPtr
	{
		equip_item_guide_item_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_item_guide_item_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}