/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_modify_info_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_modify_info_skillsystematization_Record : skill_modify_info_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill_modify_info_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"systematization") == 0) return systematization;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill_modify_info_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"systematization") == 0) return Data::AnyFieldToStringConverter::ToString(&systematization);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill_modify_info_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef systematization;
int systematization_tableId(){return 346;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}