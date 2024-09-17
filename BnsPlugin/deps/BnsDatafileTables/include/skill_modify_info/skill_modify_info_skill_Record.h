/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_modify_info_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_modify_info_skill_Record : skill_modify_info_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill_modify_info_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"parent_skill3_id") == 0) return parent_skill3_id;
			if (wcscmp(fieldName, L"parent_skill3_id_1") == 0) return parent_skill3_id[0];
			if (wcscmp(fieldName, L"parent_skill3_id_2") == 0) return parent_skill3_id[1];
			if (wcscmp(fieldName, L"parent_skill3_id_3") == 0) return parent_skill3_id[2];
			if (wcscmp(fieldName, L"parent_skill3_id_4") == 0) return parent_skill3_id[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill_modify_info_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"parent_skill3_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(parent_skill3_id[0]));
			if (wcscmp(fieldName, L"parent_skill3_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(parent_skill3_id[1]));
			if (wcscmp(fieldName, L"parent_skill3_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(parent_skill3_id[2]));
			if (wcscmp(fieldName, L"parent_skill3_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(parent_skill3_id[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill_modify_info_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 parent_skill3_id[4];

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}