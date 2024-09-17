/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_arenaportal_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct arenaportal_dungeon_Record : arenaportal_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = arenaportal_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"sealed_dungeon") == 0) return sealed_dungeon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = arenaportal_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"sealed_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&sealed_dungeon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			arenaportal_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		bool sealed_dungeon;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}