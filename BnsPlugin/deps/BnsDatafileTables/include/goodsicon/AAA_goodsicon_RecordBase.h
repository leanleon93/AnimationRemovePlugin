/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct goodsicon_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"icon") == 0) return icon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);

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
		Data::IconRef icon;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 157; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) goodsicon_RecordPtr // : DrRecordPtr
	{
		goodsicon_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::goodsicon_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}