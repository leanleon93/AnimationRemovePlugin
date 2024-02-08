#pragma once
#include "../DrEl.h"

namespace Data {
	const struct EffectRecord : DrEl
	{
	public:
		union Key
		{
			unsigned __int64 key;
			int id;
		};
		Key key;
		wchar_t* alias;
		unsigned __int64 name2;
		unsigned __int64 name3;
		__int16 level;
	};
#pragma pack(push, 1)
	struct __declspec(align(4)) EffectRecordPtr // : DrRecordPtr
	{
		EffectRecord* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::EffectRecord* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}