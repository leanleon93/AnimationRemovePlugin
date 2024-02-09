#pragma once
#include "../DrEl.h"

namespace Data {
	struct ItemSkillRecord : DrEl {
		union Key {
			unsigned __int64 key;
		};
		Key key;
		wchar_t* alias;
		int skill_id;
		char skill_variation_id[8];
		bool include_inheritance_skill;
		unsigned __int64 item_sim_skill;
		unsigned __int64 name2;
		unsigned __int64 description2;
	};
}