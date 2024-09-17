/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct sealed_dungeon_level_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"sealed_exp") == 0) return sealed_exp;
			if (wcscmp(fieldName, L"scroll_level_font") == 0) return scroll_level_font;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"sealed_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&sealed_exp);
			if (wcscmp(fieldName, L"scroll_level_font") == 0) return Data::AnyFieldToStringConverter::ToString(&scroll_level_font);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(scroll_level_font) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) scroll_level_font = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(scroll_level_font));
		}
		union Key
		{
            struct {
                __int8 sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 sealed_exp;
wchar_t* scroll_level_font;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 315; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_level_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}