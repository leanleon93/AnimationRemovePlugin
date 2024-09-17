/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct user_reporting_system_Record : DrEl
	{
	private:
		static std::wstring Get_title_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"title_category_name") == 0) return title_category_name;
			if (wcscmp(fieldName, L"report_scene_name") == 0) return report_scene_name;
			if (wcscmp(fieldName, L"report_reason_name") == 0) return report_reason_name;
			if (wcscmp(fieldName, L"sort") == 0) return sort;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"title_category_name") == 0) return Data::AnyFieldToStringConverter::ToString(&title_category_name);
			if (wcscmp(fieldName, L"report_scene_name") == 0) return Data::AnyFieldToStringConverter::ToString(&report_scene_name);
			if (wcscmp(fieldName, L"report_reason_name") == 0) return Data::AnyFieldToStringConverter::ToString(&report_reason_name);
			if (wcscmp(fieldName, L"sort") == 0) return Data::AnyFieldToStringConverter::ToString(&sort);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 title_category;
__int8 report_scene_code;
__int16 report_reason_code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef title_category_name;
int title_category_name_tableId(){return 405;};
Data::TableRef report_scene_name;
int report_scene_name_tableId(){return 405;};
Data::TableRef report_reason_name;
int report_reason_name_tableId(){return 405;};
__int8 sort;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 418; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) user_reporting_system_RecordPtr // : DrRecordPtr
	{
		user_reporting_system_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::user_reporting_system_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}