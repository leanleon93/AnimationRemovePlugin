/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zoneex_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"download_level") == 0) return download_level;
			if (wcscmp(fieldName, L"dungeon_guide_path") == 0) return dungeon_guide_path;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"download_level") == 0) return Data::AnyFieldToStringConverter::ToString(&download_level);
			if (wcscmp(fieldName, L"dungeon_guide_path") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_guide_path);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(dungeon_guide_path) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) dungeon_guide_path = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(dungeon_guide_path));
		}
		union Key
		{
            struct {
                __int32 zone;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 download_level;
char Pad0[3];
wchar_t* dungeon_guide_path;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 449; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneex_RecordPtr // : DrRecordPtr
	{
		zoneex_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneex_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}