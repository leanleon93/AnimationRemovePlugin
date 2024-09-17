/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class attraction_shortcut_RecordSubType : __int32
    {
		attraction_shortcut_record_sub_dungeon = 0,
		attraction_shortcut_record_sub_time_limit_field = 1,
		attraction_shortcut_record_sub_raid = 2,
		attraction_shortcut_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct attraction_shortcut_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 19; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attraction_shortcut_RecordPtr // : DrRecordPtr
	{
		attraction_shortcut_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::attraction_shortcut_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}