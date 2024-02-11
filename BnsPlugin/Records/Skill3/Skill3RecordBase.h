#pragma once
#include "../DrEl.h"

namespace Data {
	enum class Skill3RecordSubType : __int32
	{
		SKILL3_RECORD_SUB_ACTIVE_SKILL = 0x0,
		SKILL3_RECORD_SUB_PASSIVE_SKILL = 0x1,
		SKILL3_RECORD_SUB_ACTION = 0x2,
		SKILL3_RECORD_SUB_COUNT = 0x3,
	};
#pragma pack(push, 1)
	struct Skill3Record : DrEl {
		union Key {
			struct {
				__int32 id;
				__int8 variation_id;
			};
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__declspec(align(8)) wchar_t* alias;
		__int16 revised_event_probability_in_exec[5];
		__unaligned __declspec(align(4)) unsigned __int64 skill_modify_limit;
		bool is_ego_skill;
		bool use_ego_skill_training_sequence;
		__unaligned __declspec(align(4)) unsigned __int64 systematization[16];
		char padding2[0x1D6];
	};
#pragma pack(pop)
}