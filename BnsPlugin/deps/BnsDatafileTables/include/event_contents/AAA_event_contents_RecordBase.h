/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct event_contents_Record : DrEl
	{
	private:
		static std::wstring Get_publisher_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"publisher") == 0) return publisher;
			if (wcscmp(fieldName, L"zone_id") == 0) return zone_id;
			if (wcscmp(fieldName, L"start_year") == 0) return start_year;
			if (wcscmp(fieldName, L"start_month") == 0) return start_month;
			if (wcscmp(fieldName, L"start_day") == 0) return start_day;
			if (wcscmp(fieldName, L"start_hour") == 0) return start_hour;
			if (wcscmp(fieldName, L"end_year") == 0) return end_year;
			if (wcscmp(fieldName, L"end_month") == 0) return end_month;
			if (wcscmp(fieldName, L"end_day") == 0) return end_day;
			if (wcscmp(fieldName, L"end_hour") == 0) return end_hour;
			if (wcscmp(fieldName, L"sub_level_ref") == 0) return sub_level_ref;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"publisher") == 0) return Data::AnyFieldToStringConverter::ToString(&publisher);
			if (wcscmp(fieldName, L"zone_id") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_id);
			if (wcscmp(fieldName, L"start_year") == 0) return Data::AnyFieldToStringConverter::ToString(&start_year);
			if (wcscmp(fieldName, L"start_month") == 0) return Data::AnyFieldToStringConverter::ToString(&start_month);
			if (wcscmp(fieldName, L"start_day") == 0) return Data::AnyFieldToStringConverter::ToString(&start_day);
			if (wcscmp(fieldName, L"start_hour") == 0) return Data::AnyFieldToStringConverter::ToString(&start_hour);
			if (wcscmp(fieldName, L"end_year") == 0) return Data::AnyFieldToStringConverter::ToString(&end_year);
			if (wcscmp(fieldName, L"end_month") == 0) return Data::AnyFieldToStringConverter::ToString(&end_month);
			if (wcscmp(fieldName, L"end_day") == 0) return Data::AnyFieldToStringConverter::ToString(&end_day);
			if (wcscmp(fieldName, L"end_hour") == 0) return Data::AnyFieldToStringConverter::ToString(&end_hour);
			if (wcscmp(fieldName, L"sub_level_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&sub_level_ref);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(sub_level_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sub_level_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sub_level_ref));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 publisher;
std::wstring publisher_EnumValue() const {return Get_publisher_EnumValue(publisher);};
char Pad0[3];
__int32 zone_id;
__int16 start_year;
__int8 start_month;
__int8 start_day;
__int8 start_hour;
char Pad1[1];
__int16 end_year;
__int8 end_month;
__int8 end_day;
__int8 end_hour;
char Pad2[1];
wchar_t* sub_level_ref;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 123; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) event_contents_RecordPtr // : DrRecordPtr
	{
		event_contents_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::event_contents_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}