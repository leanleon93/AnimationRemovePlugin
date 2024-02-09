#pragma once
#include "../DrEl.h"

namespace Data {
#pragma pack(push, 1)
	struct __declspec(align(4)) dr_native
	{
		int size;
		wchar_t* data;
	};

	const struct __declspec(align(4)) TextRecord : DrEl
	{
		union Key
		{
			unsigned __int64 key;
		};
		__declspec(align(4)) Key key;
		wchar_t* alias;
		dr_native text;
	};
#pragma pack(pop)
}
