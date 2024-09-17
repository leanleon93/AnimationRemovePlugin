/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemcategory_Record : DrEl
	{
	private:
		static std::wstring Get_game_category_3_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"sort_order") == 0) return sort_order;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"sort_order") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_order);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 game_category_3;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 sort_order;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 186; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemcategory_RecordPtr // : DrRecordPtr
	{
		itemcategory_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemcategory_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}