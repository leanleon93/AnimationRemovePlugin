/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"

namespace Data {
    
#pragma pack(push, 1)
	const struct skill_trait_Record : DrEl
	{
	public:
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;
char tier;
char tier_variation;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool enable;
char Pad0[3];
__int32 fixed_skill3_id[64];
__int32 variable_skill3_id[32];
char variable_skill3_variation_id[32];
__int64 name2;
__int64 icon_texture;
__int16 icon_index;
char Pad1[2];
__int64 trait_symbol;
__int16 trait_symbol_index;
char Pad2[2];
__int64 tooltip_train_name;
__int64 tooltip_train_description;
__int64 tooltip_effect_description;
__int64 tooltip_skill_systematization_group[6];
__int32 tooltip_acquire_skill_list_skill3_id[6];
__int64 tooltip_acquire_skill_list_skill3_description[6];
__int32 tooltip_variable_skill_list_skill3_id[6];
char tooltip_variable_skill_list_skill3_variation_id[6];
char Pad3[2];
__int64 tooltip_variable_skill_list_skill3_description[6];

	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_trait_RecordPtr // : DrRecordPtr
	{
		skill_trait_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_trait_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}