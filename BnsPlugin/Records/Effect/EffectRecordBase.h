#pragma once
#include "../DrEl.h"

namespace Data {
#pragma pack(push, 4)
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
		__int16 pad;
		char padding[0x1B6];
		__declspec(align(4)) wchar_t* normal_component;
		wchar_t* critical_component;
		wchar_t* back_normal_component;
		wchar_t* back_critical_component;
		wchar_t* buff_continuance_component;
		wchar_t* immune_buff_component;
		wchar_t* detach_show;
	};
#pragma pack(pop)
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