#pragma once
#include "../DrEl.h"

#pragma pack(push, 1)
struct __declspec(align(4)) dr_icon {
	unsigned __int64 texture;
	__int16 index;
};
#pragma pack(pop)

namespace Data
{
#pragma pack(push, 1)
	const struct __declspec(align(4)) JobRecord : DrEl {
	public:
		union Key {
			unsigned __int64 key;
			char job;
		};
		__declspec(align(4)) Key key;
		unsigned __int64 name2;
		dr_icon icon;
		unsigned __int64 desc;
	};
#pragma pack(pop)
}