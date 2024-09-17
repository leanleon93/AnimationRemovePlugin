/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_use_skill_to_npc_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"skill_id") == 0) return skill_id;
			if (wcscmp(fieldName, L"skill_id_1") == 0) return skill_id[0];
			if (wcscmp(fieldName, L"skill_id_2") == 0) return skill_id[1];
			if (wcscmp(fieldName, L"skill_id_3") == 0) return skill_id[2];
			if (wcscmp(fieldName, L"skill_id_4") == 0) return skill_id[3];
			if (wcscmp(fieldName, L"skill_id_5") == 0) return skill_id[4];
			if (wcscmp(fieldName, L"skill_id_6") == 0) return skill_id[5];
			if (wcscmp(fieldName, L"skill_id_7") == 0) return skill_id[6];
			if (wcscmp(fieldName, L"skill_id_8") == 0) return skill_id[7];
			if (wcscmp(fieldName, L"npc") == 0) return npc;
			if (wcscmp(fieldName, L"npc_1") == 0) return npc[0];
			if (wcscmp(fieldName, L"npc_2") == 0) return npc[1];
			if (wcscmp(fieldName, L"npc_3") == 0) return npc[2];
			if (wcscmp(fieldName, L"npc_4") == 0) return npc[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"skill_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[0]));
			if (wcscmp(fieldName, L"skill_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[1]));
			if (wcscmp(fieldName, L"skill_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[2]));
			if (wcscmp(fieldName, L"skill_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[3]));
			if (wcscmp(fieldName, L"skill_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[4]));
			if (wcscmp(fieldName, L"skill_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[5]));
			if (wcscmp(fieldName, L"skill_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[6]));
			if (wcscmp(fieldName, L"skill_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[7]));
			if (wcscmp(fieldName, L"npc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[0]));
			if (wcscmp(fieldName, L"npc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[1]));
			if (wcscmp(fieldName, L"npc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[2]));
			if (wcscmp(fieldName, L"npc_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 skill_id[8];
Data::TableRef npc[4];
int npc_tableId(){return 255;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}