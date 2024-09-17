/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_recovery_content_quota_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"content_quota_id") == 0) return content_quota_id;
			if (wcscmp(fieldName, L"value") == 0) return value;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"content_quota_id") == 0) return Data::AnyFieldToStringConverter::ToString(&content_quota_id);
			if (wcscmp(fieldName, L"value") == 0) return Data::AnyFieldToStringConverter::ToString(&value);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 content_quota_id;
__int16 value;

		static __int32 SubType() { return 54; }
	};
#pragma pack(pop)
}