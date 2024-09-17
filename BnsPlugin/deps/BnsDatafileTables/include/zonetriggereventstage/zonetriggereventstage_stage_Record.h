/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zonetriggereventstage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zonetriggereventstage_stage_Record : zonetriggereventstage_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zonetriggereventstage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"fail_cond") == 0) return fail_cond;
			if (wcscmp(fieldName, L"fail_cond_1") == 0) return fail_cond[0];
			if (wcscmp(fieldName, L"fail_cond_2") == 0) return fail_cond[1];
			if (wcscmp(fieldName, L"fail_cond_3") == 0) return fail_cond[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zonetriggereventstage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"fail_cond_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_cond[0]));
			if (wcscmp(fieldName, L"fail_cond_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_cond[1]));
			if (wcscmp(fieldName, L"fail_cond_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_cond[2]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zonetriggereventstage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef fail_cond[3];
int fail_cond_tableId(){return 457;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}