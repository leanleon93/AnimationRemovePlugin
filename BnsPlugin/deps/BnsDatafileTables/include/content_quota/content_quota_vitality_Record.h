/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_content_quota_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct content_quota_vitality_Record : content_quota_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = content_quota_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"following") == 0) return following;
			if (wcscmp(fieldName, L"delayed") == 0) return delayed;
			if (wcscmp(fieldName, L"exp_boost_ratio") == 0) return exp_boost_ratio;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = content_quota_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"following") == 0) return Data::AnyFieldToStringConverter::ToString(&following);
			if (wcscmp(fieldName, L"delayed") == 0) return Data::AnyFieldToStringConverter::ToString(&delayed);
			if (wcscmp(fieldName, L"exp_boost_ratio") == 0) return Data::AnyFieldToStringConverter::ToString(&exp_boost_ratio);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			content_quota_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef following;
int following_tableId(){return 66;};
Data::TableRef delayed;
int delayed_tableId(){return 66;};
__int32 exp_boost_ratio;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}