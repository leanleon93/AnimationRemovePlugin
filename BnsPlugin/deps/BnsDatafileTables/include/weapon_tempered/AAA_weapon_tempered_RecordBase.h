/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct weapon_tempered_Record : DrEl
	{
	private:
		static std::wstring Get_weapon_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"show") == 0) return show;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"show") == 0) return Data::AnyFieldToStringConverter::ToString(&show);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(show));
		}
		union Key
		{
            struct {
                __int8 weapon_type;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* show;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 430; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) weapon_tempered_RecordPtr // : DrRecordPtr
	{
		weapon_tempered_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::weapon_tempered_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}