/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct posetransit_Record : DrEl
	{
	private:
		static std::wstring Get_before_pose_EnumValue(__int8 value);
		static std::wstring Get_after_pose_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"transit_time") == 0) return transit_time;
			if (wcscmp(fieldName, L"transit_anim_seq") == 0) return transit_anim_seq;
			if (wcscmp(fieldName, L"fade_in") == 0) return fade_in;
			if (wcscmp(fieldName, L"fade_out") == 0) return fade_out;
			if (wcscmp(fieldName, L"moving_blend") == 0) return moving_blend;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"transit_time") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_time);
			if (wcscmp(fieldName, L"transit_anim_seq") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_anim_seq);
			if (wcscmp(fieldName, L"fade_in") == 0) return Data::AnyFieldToStringConverter::ToString(&fade_in);
			if (wcscmp(fieldName, L"fade_out") == 0) return Data::AnyFieldToStringConverter::ToString(&fade_out);
			if (wcscmp(fieldName, L"moving_blend") == 0) return Data::AnyFieldToStringConverter::ToString(&moving_blend);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(transit_anim_seq) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) transit_anim_seq = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(transit_anim_seq));
		}
		union Key
		{
            struct {
                __int8 before_pose;
__int8 after_pose;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 transit_time;
wchar_t* transit_anim_seq;
float fade_in;
float fade_out;
float moving_blend;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 278; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) posetransit_RecordPtr // : DrRecordPtr
	{
		posetransit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::posetransit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}