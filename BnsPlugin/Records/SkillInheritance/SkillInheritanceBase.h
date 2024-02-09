#pragma once
#include "../DrEl.h"

namespace Data {
#pragma pack(push, 1)
	struct __declspec(align(4)) SkillInheritanceRecord : DrEl
	{
		union Key {
			unsigned __int64 key;
			int skill_id;
		};
		__declspec(align(4)) Key key;
		int parent_skill_id;
	};
#pragma pack(pop)
}