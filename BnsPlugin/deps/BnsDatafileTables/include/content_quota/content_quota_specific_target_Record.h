/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_content_quota_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct content_quota_specific_target_Record : content_quota_Record
	{
	private:
		static std::wstring Get_detail_content_name_by_admin_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = content_quota_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"modifiable_by_admin") == 0) return modifiable_by_admin;
			if (wcscmp(fieldName, L"detail_content_name_by_admin") == 0) return detail_content_name_by_admin;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = content_quota_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"modifiable_by_admin") == 0) return Data::AnyFieldToStringConverter::ToString(&modifiable_by_admin);
			if (wcscmp(fieldName, L"detail_content_name_by_admin") == 0) return Data::AnyFieldToStringConverter::ToString(&detail_content_name_by_admin);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			content_quota_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		bool modifiable_by_admin;
__int8 detail_content_name_by_admin;
std::wstring detail_content_name_by_admin_EnumValue() const {return Get_detail_content_name_by_admin_EnumValue(detail_content_name_by_admin);};

		static __int32 SubType() { return 362; }
	};
#pragma pack(pop)
}