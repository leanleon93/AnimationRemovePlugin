/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_get_contribution_score_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return npc;
			if (wcscmp(fieldName, L"npc_1") == 0) return npc[0];
			if (wcscmp(fieldName, L"npc_2") == 0) return npc[1];
			if (wcscmp(fieldName, L"npc_3") == 0) return npc[2];
			if (wcscmp(fieldName, L"npc_4") == 0) return npc[3];
			if (wcscmp(fieldName, L"npc_5") == 0) return npc[4];
			if (wcscmp(fieldName, L"npc_6") == 0) return npc[5];
			if (wcscmp(fieldName, L"npc_7") == 0) return npc[6];
			if (wcscmp(fieldName, L"npc_8") == 0) return npc[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[0]));
			if (wcscmp(fieldName, L"npc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[1]));
			if (wcscmp(fieldName, L"npc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[2]));
			if (wcscmp(fieldName, L"npc_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[3]));
			if (wcscmp(fieldName, L"npc_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[4]));
			if (wcscmp(fieldName, L"npc_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[5]));
			if (wcscmp(fieldName, L"npc_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[6]));
			if (wcscmp(fieldName, L"npc_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef npc[8];
int npc_tableId(){return 255;};

		static __int32 SubType() { return 26; }
	};
#pragma pack(pop)
}