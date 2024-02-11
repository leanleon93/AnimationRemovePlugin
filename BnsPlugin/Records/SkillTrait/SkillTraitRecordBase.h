#pragma once
#include "../DrEl.h"

namespace  Data {
#pragma pack(push, 1)
	const struct __declspec(align(4)) SkillTraitRecord : DrEl {
		enum class SkillTraitJobStyleType : char
		{
			SKILLTRAIT_JOB_STYLE_BASE_1 = 0x0,
			SKILLTRAIT_JOB_STYLE_BASE_2 = 0x1,
			SKILLTRAIT_JOB_STYLE_BASE_3 = 0x2,
			SKILLTRAIT_JOB_STYLE_BASE_4 = 0x3,
			SKILLTRAIT_JOB_STYLE_BASE_5 = 0x4,
			SKILLTRAIT_JOB_STYLE_ADVANCED_1 = 0x5,
			SKILLTRAIT_JOB_STYLE_ADVANCED_2 = 0x6,
			SKILLTRAIT_JOB_STYLE_ADVANCED_3 = 0x7,
			SKILLTRAIT_JOB_STYLE_ADVANCED_4 = 0x8,
			SKILLTRAIT_JOB_STYLE_ADVANCED_5 = 0x9,
			SKILLTRAIT_JOB_STYLE_COUNT = 0xA,
		};
		union Key {
			struct {
				char job;
				SkillTraitJobStyleType job_style;
				char tier;
				char tier_variation;
			};
			unsigned __int64 key;
		};
		__declspec(align(4)) Key key;
		wchar_t* alias;
		bool enable;
		__declspec(align(4)) __int32 fixed_skill3_id[64];
		__int32 variable_skill3_id[32];
		char variable_skill3_variation_id[32];
		unsigned __int64 name2;
	};
#pragma pack(pop)
	class SkillTraitJobStyleHelper {
	public:
		static int GetSpecIndexForJobStyleType(SkillTraitRecord::SkillTraitJobStyleType jobStyleType) {
			switch (jobStyleType)
			{
				using enum Data::SkillTraitRecord::SkillTraitJobStyleType;
			case SKILLTRAIT_JOB_STYLE_BASE_1:
				return 1;
			case SKILLTRAIT_JOB_STYLE_BASE_2:
				return 2;
			case SKILLTRAIT_JOB_STYLE_BASE_3:
				return 3;
			case SKILLTRAIT_JOB_STYLE_BASE_4:
				return 4;
			case SKILLTRAIT_JOB_STYLE_BASE_5:
				return 5;
			case SKILLTRAIT_JOB_STYLE_ADVANCED_1:
				return 1;
			case SKILLTRAIT_JOB_STYLE_ADVANCED_2:
				return 2;
			case SKILLTRAIT_JOB_STYLE_ADVANCED_3:
				return 3;
			case SKILLTRAIT_JOB_STYLE_ADVANCED_4:
				return 4;
			case SKILLTRAIT_JOB_STYLE_ADVANCED_5:
				return 5;
			case SKILLTRAIT_JOB_STYLE_COUNT:
				return 0;
			default:
				return 0;
			}
		}
	};
}