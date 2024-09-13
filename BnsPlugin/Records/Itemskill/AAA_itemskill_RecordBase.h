/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
    
#pragma pack(push, 1)
	const struct itemskill_Record : DrEl
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
__int32 skill_id;
char skill_variation_id[8];
bool include_inheritance_skill;
char Pad0[3];
__int64 item_sim_skill;
__int64 name2;
__int64 description2;
__int64 item_skill_tooltip;

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemskill_RecordPtr // : DrRecordPtr
	{
		itemskill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemskill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}