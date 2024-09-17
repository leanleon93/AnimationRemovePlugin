/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct stancetransit_Record : DrEl
	{
	private:
		static std::wstring Get_before_stance_EnumValue(__int8 value);
		static std::wstring Get_after_stance_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"transit_anim") == 0) return transit_anim;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"transit_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&transit_anim);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(transit_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) transit_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(transit_anim));
		}
		union Key
		{
            struct {
                __int8 before_stance;
bool before_combat;
__int8 after_stance;
bool after_combat;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* transit_anim;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 378; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) stancetransit_RecordPtr // : DrRecordPtr
	{
		stancetransit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::stancetransit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}