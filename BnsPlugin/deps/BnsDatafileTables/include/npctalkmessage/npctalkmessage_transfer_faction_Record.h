/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_transfer_faction_Record : npctalkmessage_Record
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
			if (wcscmp(fieldName, L"end_talk_sound_ok") == 0) return end_talk_sound_ok;
			if (wcscmp(fieldName, L"fail_population_message") == 0) return fail_population_message;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = npctalkmessage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"population_statistics") == 0) return Data::AnyFieldToStringConverter::ToString(&population_statistics);
			if (wcscmp(fieldName, L"end_talk_sound_ok") == 0) return Data::AnyFieldToStringConverter::ToString(&end_talk_sound_ok);
			if (wcscmp(fieldName, L"fail_population_message") == 0) return Data::AnyFieldToStringConverter::ToString(&fail_population_message);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			npctalkmessage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(end_talk_sound_ok) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_talk_sound_ok = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_talk_sound_ok));
		}
		__int8 population_statistics;
std::wstring population_statistics_EnumValue() const {return Get_population_statistics_EnumValue(population_statistics);};
char Pad_sub_0[3];
wchar_t* end_talk_sound_ok;
Data::TableRef fail_population_message;
int fail_population_message_tableId(){return 260;};

		static __int32 SubType() { return 14; }
	};
#pragma pack(pop)
}