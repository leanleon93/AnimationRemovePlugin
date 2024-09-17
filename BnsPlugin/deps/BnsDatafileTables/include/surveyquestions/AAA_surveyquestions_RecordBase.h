/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct surveyquestions_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"title") == 0) return title;
			if (wcscmp(fieldName, L"greeting") == 0) return greeting;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"title") == 0) return Data::AnyFieldToStringConverter::ToString(&title);
			if (wcscmp(fieldName, L"greeting") == 0) return Data::AnyFieldToStringConverter::ToString(&greeting);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(title) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title));
			if (reinterpret_cast<std::uintptr_t>(greeting) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) greeting = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(greeting));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* title;
wchar_t* greeting;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 398; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) surveyquestions_RecordPtr // : DrRecordPtr
	{
		surveyquestions_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::surveyquestions_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}