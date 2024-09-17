/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct petition_faq_list_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"title") == 0) return title;
			if (wcscmp(fieldName, L"contents") == 0) return contents;
			if (wcscmp(fieldName, L"new_faq") == 0) return new_faq;
			if (wcscmp(fieldName, L"hot_faq") == 0) return hot_faq;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"title") == 0) return Data::AnyFieldToStringConverter::ToString(&title);
			if (wcscmp(fieldName, L"contents") == 0) return Data::AnyFieldToStringConverter::ToString(&contents);
			if (wcscmp(fieldName, L"new_faq") == 0) return Data::AnyFieldToStringConverter::ToString(&new_faq);
			if (wcscmp(fieldName, L"hot_faq") == 0) return Data::AnyFieldToStringConverter::ToString(&hot_faq);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(title) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title));
			if (reinterpret_cast<std::uintptr_t>(contents.ReadableText) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) contents.ReadableText = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(contents.ReadableText));
		}
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* title;
Data::TextRef contents;
bool new_faq;
bool hot_faq;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 276; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) petition_faq_list_RecordPtr // : DrRecordPtr
	{
		petition_faq_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::petition_faq_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}