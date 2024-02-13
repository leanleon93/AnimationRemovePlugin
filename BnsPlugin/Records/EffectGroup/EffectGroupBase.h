#pragma once
#include "../DrEl.h"

namespace Data {
	const struct EffectGroupRecord : DrEl {
	public:
		unsigned __int64 id;
		wchar_t* alias;
		unsigned __int64 effect[8];
	};
}