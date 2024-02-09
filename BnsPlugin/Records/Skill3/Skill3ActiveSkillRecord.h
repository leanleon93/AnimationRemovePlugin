#pragma once
#include "../DrEl.h"
#include "Skill3RecordBase.h"

namespace Data {
	struct Skill3ActiveSkillRecord : Skill3Record {
		char padding[0x7C];
		unsigned __int64 children_skill[4];
	};
}