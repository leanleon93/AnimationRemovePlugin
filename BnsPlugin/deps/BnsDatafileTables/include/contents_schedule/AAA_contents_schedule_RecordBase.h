/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class contents_schedule_RecordSubType : __int32
    {
		contents_schedule_record_sub_random_store_1 = 0,
		contents_schedule_record_sub_random_store_2 = 1,
		contents_schedule_record_sub_treasure_board = 2,
		contents_schedule_record_sub_unlocated_store = 3,
		contents_schedule_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct contents_schedule_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"start_time") == 0) return start_time;
			if (wcscmp(fieldName, L"end_time") == 0) return end_time;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"start_time") == 0) return Data::AnyFieldToStringConverter::ToString(&start_time);
			if (wcscmp(fieldName, L"end_time") == 0) return Data::AnyFieldToStringConverter::ToString(&end_time);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_time));
			if (reinterpret_cast<std::uintptr_t>(end_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_time));
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
wchar_t* start_time;
wchar_t* end_time;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 73; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_schedule_RecordPtr // : DrRecordPtr
	{
		contents_schedule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contents_schedule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}