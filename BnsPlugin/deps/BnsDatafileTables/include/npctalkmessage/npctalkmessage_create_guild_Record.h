/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_create_guild_Record : npctalkmessage_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = npctalkmessage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"end_talk_social_ok") == 0) return end_talk_social_ok;
			if (wcscmp(fieldName, L"end_talk_sound_ok") == 0) return end_talk_sound_ok;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = npctalkmessage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"end_talk_social_ok") == 0) return Data::AnyFieldToStringConverter::ToString(&end_talk_social_ok);
			if (wcscmp(fieldName, L"end_talk_sound_ok") == 0) return Data::AnyFieldToStringConverter::ToString(&end_talk_sound_ok);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			npctalkmessage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(end_talk_sound_ok) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_talk_sound_ok = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_talk_sound_ok));
		}
		Data::TableRef end_talk_social_ok;
int end_talk_social_ok_tableId(){return 367;};
wchar_t* end_talk_sound_ok;

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}