#pragma once
#include "../DrEl.h"
#include "Skill3RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct __declspec(align(4)) Skill3ActiveSkillRecord : Skill3Record {
		char padding[0x28];
		unsigned __int64 passive_effect[8];
		char padding2[0x18];
		__declspec(align(4)) unsigned __int64 children_skill[4];
		char padding3[0x14];
		unsigned __int64 cast_effect[6];
		char padding4[0x88];
		unsigned __int64 swing_caster_effect_1[4];
		unsigned __int64 swing_caster_effect_2[4];
		unsigned __int64 swing_caster_effect_3[4];
		unsigned __int64 swing_caster_effect_4[4];
		unsigned __int64 swing_caster_effect_5[4];
		unsigned __int64 exec_caster_effect_1[4];
		unsigned __int64 exec_caster_effect_2[4];
		unsigned __int64 exec_caster_effect_3[4];
		unsigned __int64 exec_caster_effect_4[4];
		unsigned __int64 exec_caster_effect_5[4];
		char padding5[0xD4];
		unsigned __int64 exec_effect_1[8];
		char padding6[0x1C];
		unsigned __int64 exec_effect_2[8];
		char padding7[0x1C];
		unsigned __int64 exec_effect_3[8];
		char padding8[0x1C];
		unsigned __int64 exec_effect_4[8];
		char padding9[0x1C];
		unsigned __int64 exec_effect_5[8];
	};
#pragma pack(pop)
}