/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct slatescrollstone_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"scroll") == 0) return scroll;
			if (wcscmp(fieldName, L"stone") == 0) return stone;
			if (wcscmp(fieldName, L"tooltip") == 0) return tooltip;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"scroll") == 0) return Data::AnyFieldToStringConverter::ToString(&scroll);
			if (wcscmp(fieldName, L"stone") == 0) return Data::AnyFieldToStringConverter::ToString(&stone);
			if (wcscmp(fieldName, L"tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip);

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
		Data::TableRef scroll;
int scroll_tableId(){return 364;};
Data::TableRef stone;
int stone_tableId(){return 366;};
bool tooltip;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 365; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) slatescrollstone_RecordPtr // : DrRecordPtr
	{
		slatescrollstone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::slatescrollstone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}