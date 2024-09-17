/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct dieanim_Record : DrEl
	{
	private:
		static std::wstring Get_idle_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"die_anim") == 0) return die_anim;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"die_anim") == 0) return Data::AnyFieldToStringConverter::ToString(&die_anim);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(die_anim) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) die_anim = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(die_anim));
		}
		union Key
		{
            struct {
                __int8 idle_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* die_anim;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 96; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) dieanim_RecordPtr // : DrRecordPtr
	{
		dieanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::dieanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}