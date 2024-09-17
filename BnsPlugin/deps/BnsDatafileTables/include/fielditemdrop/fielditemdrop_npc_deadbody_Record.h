/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_fielditemdrop_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct fielditemdrop_npc_deadbody_Record : fielditemdrop_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = fielditemdrop_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"quest_id") == 0) return quest_id;
			if (wcscmp(fieldName, L"quest_mission_step") == 0) return quest_mission_step;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = fielditemdrop_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_id);
			if (wcscmp(fieldName, L"quest_mission_step") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_mission_step);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			fielditemdrop_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[1];
__int16 quest_id;
__int8 quest_mission_step;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}