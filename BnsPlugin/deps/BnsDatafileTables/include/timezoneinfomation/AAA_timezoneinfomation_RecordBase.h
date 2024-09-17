/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct timezoneinfomation_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"bias_minute") == 0) return bias_minute;
			if (wcscmp(fieldName, L"display_name") == 0) return display_name;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"bias_minute") == 0) return Data::AnyFieldToStringConverter::ToString(&bias_minute);
			if (wcscmp(fieldName, L"display_name") == 0) return Data::AnyFieldToStringConverter::ToString(&display_name);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);

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
__int32 bias_minute;
Data::TableRef display_name;
int display_name_tableId(){return 405;};
__int8 sort_no;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 407; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) timezoneinfomation_RecordPtr // : DrRecordPtr
	{
		timezoneinfomation_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::timezoneinfomation_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}