/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_job_style_Record : filter_Record
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"count") == 0) return count;
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"job_1") == 0) return job[0];
			if (wcscmp(fieldName, L"job_2") == 0) return job[1];
			if (wcscmp(fieldName, L"job_3") == 0) return job[2];
			if (wcscmp(fieldName, L"job_4") == 0) return job[3];
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"job_style_1") == 0) return job_style[0];
			if (wcscmp(fieldName, L"job_style_2") == 0) return job_style[1];
			if (wcscmp(fieldName, L"job_style_3") == 0) return job_style[2];
			if (wcscmp(fieldName, L"job_style_4") == 0) return job_style[3];
			if (wcscmp(fieldName, L"either") == 0) return either;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"count") == 0) return Data::AnyFieldToStringConverter::ToString(&count);
			if (wcscmp(fieldName, L"job_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(job[0]));
			if (wcscmp(fieldName, L"job_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(job[1]));
			if (wcscmp(fieldName, L"job_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(job[2]));
			if (wcscmp(fieldName, L"job_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(job[3]));
			if (wcscmp(fieldName, L"job_style_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(job_style[0]));
			if (wcscmp(fieldName, L"job_style_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(job_style[1]));
			if (wcscmp(fieldName, L"job_style_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(job_style[2]));
			if (wcscmp(fieldName, L"job_style_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(job_style[3]));
			if (wcscmp(fieldName, L"either") == 0) return Data::AnyFieldToStringConverter::ToString(&either);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 count;
__int8 job[4];
std::wstring job_EnumValue(int index) const {return Get_job_EnumValue(job[index]);};
__int8 job_style[4];
std::wstring job_style_EnumValue(int index) const {return Get_job_style_EnumValue(job_style[index]);};
bool either;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}