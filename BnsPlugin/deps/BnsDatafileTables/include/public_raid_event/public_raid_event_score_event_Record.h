/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_public_raid_event_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct public_raid_event_score_event_Record : public_raid_event_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = public_raid_event_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"start_score_amount") == 0) return start_score_amount;
			if (wcscmp(fieldName, L"add_score_amount") == 0) return add_score_amount;
			if (wcscmp(fieldName, L"reduce_score_amount") == 0) return reduce_score_amount;
			if (wcscmp(fieldName, L"final_score") == 0) return final_score;
			if (wcscmp(fieldName, L"final_score_1") == 0) return final_score[0];
			if (wcscmp(fieldName, L"final_score_2") == 0) return final_score[1];
			if (wcscmp(fieldName, L"final_score_3") == 0) return final_score[2];
			if (wcscmp(fieldName, L"final_score_4") == 0) return final_score[3];
			if (wcscmp(fieldName, L"final_score_5") == 0) return final_score[4];
			if (wcscmp(fieldName, L"final_score_6") == 0) return final_score[5];
			if (wcscmp(fieldName, L"add_score_recycle_duration") == 0) return add_score_recycle_duration;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = public_raid_event_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"start_score_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&start_score_amount);
			if (wcscmp(fieldName, L"add_score_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&add_score_amount);
			if (wcscmp(fieldName, L"reduce_score_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&reduce_score_amount);
			if (wcscmp(fieldName, L"final_score_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(final_score[0]));
			if (wcscmp(fieldName, L"final_score_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(final_score[1]));
			if (wcscmp(fieldName, L"final_score_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(final_score[2]));
			if (wcscmp(fieldName, L"final_score_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(final_score[3]));
			if (wcscmp(fieldName, L"final_score_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(final_score[4]));
			if (wcscmp(fieldName, L"final_score_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(final_score[5]));
			if (wcscmp(fieldName, L"add_score_recycle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&add_score_recycle_duration);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			public_raid_event_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[3];
__int16 start_score_amount;
__int16 add_score_amount;
__int16 reduce_score_amount;
__int16 final_score[6];
char Pad_sub_1[2];
__int32 add_score_recycle_duration;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}