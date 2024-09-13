/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
    
#pragma pack(push, 1)
	const struct effect_group_Record : DrEl
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
__int64 effect[8];

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) effect_group_RecordPtr // : DrRecordPtr
	{
		effect_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::effect_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}