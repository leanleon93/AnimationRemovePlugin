/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_arenaportal_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct arenaportal_duel_Record : arenaportal_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = arenaportal_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"death_match_1vs1") == 0) return death_match_1vs1;
			if (wcscmp(fieldName, L"death_match_1vs1_1") == 0) return death_match_1vs1[0];
			if (wcscmp(fieldName, L"death_match_1vs1_2") == 0) return death_match_1vs1[1];
			if (wcscmp(fieldName, L"death_match_1vs1_3") == 0) return death_match_1vs1[2];
			if (wcscmp(fieldName, L"death_match_1vs1_4") == 0) return death_match_1vs1[3];
			if (wcscmp(fieldName, L"death_match_unrated") == 0) return death_match_unrated;
			if (wcscmp(fieldName, L"death_match_unrated_1") == 0) return death_match_unrated[0];
			if (wcscmp(fieldName, L"death_match_unrated_2") == 0) return death_match_unrated[1];
			if (wcscmp(fieldName, L"death_match_unrated_3") == 0) return death_match_unrated[2];
			if (wcscmp(fieldName, L"death_match_unrated_4") == 0) return death_match_unrated[3];
			if (wcscmp(fieldName, L"tag_match_3vs3") == 0) return tag_match_3vs3;
			if (wcscmp(fieldName, L"tag_match_3vs3_1") == 0) return tag_match_3vs3[0];
			if (wcscmp(fieldName, L"tag_match_3vs3_2") == 0) return tag_match_3vs3[1];
			if (wcscmp(fieldName, L"tag_match_3vs3_3") == 0) return tag_match_3vs3[2];
			if (wcscmp(fieldName, L"tag_match_3vs3_4") == 0) return tag_match_3vs3[3];
			if (wcscmp(fieldName, L"tag_match_unrated") == 0) return tag_match_unrated;
			if (wcscmp(fieldName, L"tag_match_unrated_1") == 0) return tag_match_unrated[0];
			if (wcscmp(fieldName, L"tag_match_unrated_2") == 0) return tag_match_unrated[1];
			if (wcscmp(fieldName, L"tag_match_unrated_3") == 0) return tag_match_unrated[2];
			if (wcscmp(fieldName, L"tag_match_unrated_4") == 0) return tag_match_unrated[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = arenaportal_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"death_match_1vs1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_1vs1[0]));
			if (wcscmp(fieldName, L"death_match_1vs1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_1vs1[1]));
			if (wcscmp(fieldName, L"death_match_1vs1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_1vs1[2]));
			if (wcscmp(fieldName, L"death_match_1vs1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_1vs1[3]));
			if (wcscmp(fieldName, L"death_match_unrated_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_unrated[0]));
			if (wcscmp(fieldName, L"death_match_unrated_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_unrated[1]));
			if (wcscmp(fieldName, L"death_match_unrated_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_unrated[2]));
			if (wcscmp(fieldName, L"death_match_unrated_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(death_match_unrated[3]));
			if (wcscmp(fieldName, L"tag_match_3vs3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_3vs3[0]));
			if (wcscmp(fieldName, L"tag_match_3vs3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_3vs3[1]));
			if (wcscmp(fieldName, L"tag_match_3vs3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_3vs3[2]));
			if (wcscmp(fieldName, L"tag_match_3vs3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_3vs3[3]));
			if (wcscmp(fieldName, L"tag_match_unrated_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_unrated[0]));
			if (wcscmp(fieldName, L"tag_match_unrated_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_unrated[1]));
			if (wcscmp(fieldName, L"tag_match_unrated_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_unrated[2]));
			if (wcscmp(fieldName, L"tag_match_unrated_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tag_match_unrated[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			arenaportal_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef death_match_1vs1[4];
int death_match_1vs1_tableId(){return 107;};
Data::TableRef death_match_unrated[4];
int death_match_unrated_tableId(){return 107;};
Data::TableRef tag_match_3vs3[4];
int tag_match_3vs3_tableId(){return 107;};
Data::TableRef tag_match_unrated[4];
int tag_match_unrated_tableId(){return 107;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}