/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
    
#pragma pack(push, 1)
	const struct skill_inheritance_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int32 skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 parent_skill_id;

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_inheritance_RecordPtr // : DrRecordPtr
	{
		skill_inheritance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_inheritance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}