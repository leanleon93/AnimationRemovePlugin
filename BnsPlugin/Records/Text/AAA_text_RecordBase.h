/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
    
#pragma pack(push, 1)
	const struct text_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
union TextRef {struct{__int32 Unk; wchar_t* ReadableText; };};TextRef text;

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) text_RecordPtr // : DrRecordPtr
	{
		text_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::text_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}