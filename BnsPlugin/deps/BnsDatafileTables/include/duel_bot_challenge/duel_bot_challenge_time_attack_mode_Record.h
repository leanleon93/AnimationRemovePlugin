/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_duel_bot_challenge_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct duel_bot_challenge_time_attack_mode_Record : duel_bot_challenge_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = duel_bot_challenge_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"total_timeout_duration_second") == 0) return total_timeout_duration_second;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = duel_bot_challenge_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"total_timeout_duration_second") == 0) return Data::AnyFieldToStringConverter::ToString(&total_timeout_duration_second);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			duel_bot_challenge_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 total_timeout_duration_second;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}