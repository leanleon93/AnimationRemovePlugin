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
	struct Skill3Record : DrEl {
		union Key {
			struct {
				__int32 id;
				__int8 variation_id;
			};
			unsigned __int64 key;
		};
		Key key;
		wchar_t* alias;
		char padding[0x26C];
	};
}