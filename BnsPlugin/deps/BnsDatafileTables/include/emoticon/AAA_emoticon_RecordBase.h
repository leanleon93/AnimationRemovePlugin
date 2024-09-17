/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class emoticon_RecordSubType : __int32
    {
		emoticon_record_sub_emoticon = 0,
		emoticon_record_sub_profile = 1,
		emoticon_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct emoticon_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"index") == 0) return index;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"index") == 0) return Data::AnyFieldToStringConverter::ToString(&index);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 index;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 114; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) emoticon_RecordPtr // : DrRecordPtr
	{
		emoticon_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::emoticon_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}