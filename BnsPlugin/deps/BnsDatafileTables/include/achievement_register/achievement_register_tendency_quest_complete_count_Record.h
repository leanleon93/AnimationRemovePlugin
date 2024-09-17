/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_tendency_quest_complete_count_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"required_attraction") == 0) return required_attraction;
			if (wcscmp(fieldName, L"tendency_id") == 0) return tendency_id;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"required_attraction") == 0) return Data::AnyFieldToStringConverter::ToString(&required_attraction);
			if (wcscmp(fieldName, L"tendency_id") == 0) return Data::AnyFieldToStringConverter::ToString(&tendency_id);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::ExplicitTableRef required_attraction;
__int8 tendency_id;

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}