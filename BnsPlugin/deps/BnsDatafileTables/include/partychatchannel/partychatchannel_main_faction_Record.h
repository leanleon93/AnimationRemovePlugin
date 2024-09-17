/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_partychatchannel_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct partychatchannel_main_faction_Record : partychatchannel_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = partychatchannel_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"faction_1_party_match") == 0) return faction_1_party_match;
			if (wcscmp(fieldName, L"faction_2_party_match") == 0) return faction_2_party_match;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = partychatchannel_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"faction_1_party_match") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_1_party_match);
			if (wcscmp(fieldName, L"faction_2_party_match") == 0) return Data::AnyFieldToStringConverter::ToString(&faction_2_party_match);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			partychatchannel_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef faction_1_party_match;
int faction_1_party_match_tableId(){return 263;};
Data::TableRef faction_2_party_match;
int faction_2_party_match_tableId(){return 263;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}