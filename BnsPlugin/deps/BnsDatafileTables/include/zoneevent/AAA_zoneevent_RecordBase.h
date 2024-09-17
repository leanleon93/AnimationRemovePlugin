/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class zoneevent_RecordSubType : __int32
    {
		zoneevent_record_sub_faction_kill_count = 0,
		zoneevent_record_sub_kill_npc = 1,
		zoneevent_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct zoneevent_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"start_kismet_name") == 0) return start_kismet_name;
			if (wcscmp(fieldName, L"end_kismet_name") == 0) return end_kismet_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"start_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&start_kismet_name);
			if (wcscmp(fieldName, L"end_kismet_name") == 0) return Data::AnyFieldToStringConverter::ToString(&end_kismet_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_kismet_name));
			if (reinterpret_cast<std::uintptr_t>(end_kismet_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_kismet_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_kismet_name));
		}
		union Key
		{
            struct {
                __int32 zone;
__int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* start_kismet_name;
wchar_t* end_kismet_name;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 448; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneevent_RecordPtr // : DrRecordPtr
	{
		zoneevent_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneevent_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}