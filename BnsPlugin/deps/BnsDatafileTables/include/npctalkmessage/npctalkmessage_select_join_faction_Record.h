/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_select_join_faction_Record : npctalkmessage_Record
	{
	private:
		static std::wstring Get_population_statistics_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = npctalkmessage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"population_statistics") == 0) return population_statistics;
			if (wcscmp(fieldName, L"msg") == 0) return msg;
			if (wcscmp(fieldName, L"msg_1") == 0) return msg[0];
			if (wcscmp(fieldName, L"msg_2") == 0) return msg[1];
			if (wcscmp(fieldName, L"faction") == 0) return faction;
			if (wcscmp(fieldName, L"faction_1") == 0) return faction[0];
			if (wcscmp(fieldName, L"faction_2") == 0) return faction[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = npctalkmessage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"population_statistics") == 0) return Data::AnyFieldToStringConverter::ToString(&population_statistics);
			if (wcscmp(fieldName, L"msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(msg[0]));
			if (wcscmp(fieldName, L"msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(msg[1]));
			if (wcscmp(fieldName, L"faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(faction[0]));
			if (wcscmp(fieldName, L"faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(faction[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			npctalkmessage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 population_statistics;
std::wstring population_statistics_EnumValue() const {return Get_population_statistics_EnumValue(population_statistics);};
char Pad_sub_0[3];
Data::TableRef msg[2];
int msg_tableId(){return 260;};
Data::TableRef faction[2];
int faction_tableId(){return 130;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}