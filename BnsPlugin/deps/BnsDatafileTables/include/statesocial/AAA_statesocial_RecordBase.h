/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct statesocial_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"sit_state_social") == 0) return sit_state_social;
			if (wcscmp(fieldName, L"can_sitdown") == 0) return can_sitdown;
			if (wcscmp(fieldName, L"start_transit") == 0) return start_transit;
			if (wcscmp(fieldName, L"idle") == 0) return idle;
			if (wcscmp(fieldName, L"end_transit") == 0) return end_transit;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"sit_state_social") == 0) return Data::AnyFieldToStringConverter::ToString(&sit_state_social);
			if (wcscmp(fieldName, L"can_sitdown") == 0) return Data::AnyFieldToStringConverter::ToString(&can_sitdown);
			if (wcscmp(fieldName, L"start_transit") == 0) return Data::AnyFieldToStringConverter::ToString(&start_transit);
			if (wcscmp(fieldName, L"idle") == 0) return Data::AnyFieldToStringConverter::ToString(&idle);
			if (wcscmp(fieldName, L"end_transit") == 0) return Data::AnyFieldToStringConverter::ToString(&end_transit);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_transit) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_transit = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_transit));
			if (reinterpret_cast<std::uintptr_t>(idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(idle));
			if (reinterpret_cast<std::uintptr_t>(end_transit) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_transit = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_transit));
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
Data::TableRef sit_state_social;
int sit_state_social_tableId(){return 381;};
bool can_sitdown;
char Pad0[3];
wchar_t* start_transit;
wchar_t* idle;
wchar_t* end_transit;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 381; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) statesocial_RecordPtr // : DrRecordPtr
	{
		statesocial_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::statesocial_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}