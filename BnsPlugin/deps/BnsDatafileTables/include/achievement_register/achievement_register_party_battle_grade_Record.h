/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_party_battle_grade_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_party_battle_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"party_battle_type") == 0) return party_battle_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"party_battle_type") == 0) return Data::AnyFieldToStringConverter::ToString(&party_battle_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 party_battle_type;
std::wstring party_battle_type_EnumValue() const {return Get_party_battle_type_EnumValue(party_battle_type);};

		static __int32 SubType() { return 60; }
	};
#pragma pack(pop)
}