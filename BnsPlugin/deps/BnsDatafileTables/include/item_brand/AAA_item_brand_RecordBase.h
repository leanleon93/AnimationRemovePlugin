/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_brand_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"transform_item_by_job") == 0) return transform_item_by_job;
			if (wcscmp(fieldName, L"transform_item_by_job_1") == 0) return transform_item_by_job[0];
			if (wcscmp(fieldName, L"transform_item_by_job_2") == 0) return transform_item_by_job[1];
			if (wcscmp(fieldName, L"transform_item_by_job_3") == 0) return transform_item_by_job[2];
			if (wcscmp(fieldName, L"transform_item_by_job_4") == 0) return transform_item_by_job[3];
			if (wcscmp(fieldName, L"transform_item_by_job_5") == 0) return transform_item_by_job[4];
			if (wcscmp(fieldName, L"transform_item_by_job_6") == 0) return transform_item_by_job[5];
			if (wcscmp(fieldName, L"transform_item_by_job_7") == 0) return transform_item_by_job[6];
			if (wcscmp(fieldName, L"transform_item_by_job_8") == 0) return transform_item_by_job[7];
			if (wcscmp(fieldName, L"transform_item_by_job_9") == 0) return transform_item_by_job[8];
			if (wcscmp(fieldName, L"transform_item_by_job_10") == 0) return transform_item_by_job[9];
			if (wcscmp(fieldName, L"transform_item_by_job_11") == 0) return transform_item_by_job[10];
			if (wcscmp(fieldName, L"transform_item_by_job_12") == 0) return transform_item_by_job[11];
			if (wcscmp(fieldName, L"transform_item_by_job_13") == 0) return transform_item_by_job[12];
			if (wcscmp(fieldName, L"transform_item_by_job_14") == 0) return transform_item_by_job[13];
			if (wcscmp(fieldName, L"transform_item_by_job_15") == 0) return transform_item_by_job[14];
			if (wcscmp(fieldName, L"transform_item_by_job_16") == 0) return transform_item_by_job[15];
			if (wcscmp(fieldName, L"transform_item_by_job_17") == 0) return transform_item_by_job[16];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"transform_item_by_job_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[0]));
			if (wcscmp(fieldName, L"transform_item_by_job_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[1]));
			if (wcscmp(fieldName, L"transform_item_by_job_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[2]));
			if (wcscmp(fieldName, L"transform_item_by_job_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[3]));
			if (wcscmp(fieldName, L"transform_item_by_job_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[4]));
			if (wcscmp(fieldName, L"transform_item_by_job_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[5]));
			if (wcscmp(fieldName, L"transform_item_by_job_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[6]));
			if (wcscmp(fieldName, L"transform_item_by_job_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[7]));
			if (wcscmp(fieldName, L"transform_item_by_job_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[8]));
			if (wcscmp(fieldName, L"transform_item_by_job_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[9]));
			if (wcscmp(fieldName, L"transform_item_by_job_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[10]));
			if (wcscmp(fieldName, L"transform_item_by_job_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[11]));
			if (wcscmp(fieldName, L"transform_item_by_job_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[12]));
			if (wcscmp(fieldName, L"transform_item_by_job_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[13]));
			if (wcscmp(fieldName, L"transform_item_by_job_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[14]));
			if (wcscmp(fieldName, L"transform_item_by_job_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[15]));
			if (wcscmp(fieldName, L"transform_item_by_job_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_item_by_job[16]));

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
__int64 transform_item_by_job[17];

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 183; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_brand_RecordPtr // : DrRecordPtr
	{
		item_brand_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_brand_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}