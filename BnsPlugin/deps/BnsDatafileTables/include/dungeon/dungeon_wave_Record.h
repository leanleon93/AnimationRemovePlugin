/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_dungeon_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct dungeon_wave_Record : dungeon_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = dungeon_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"max_wave") == 0) return max_wave;
			if (wcscmp(fieldName, L"entrance_quota") == 0) return entrance_quota;
			if (wcscmp(fieldName, L"reward_box_data_id") == 0) return reward_box_data_id;
			if (wcscmp(fieldName, L"reward_data_id") == 0) return reward_data_id;
			if (wcscmp(fieldName, L"contents_reset") == 0) return contents_reset;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = dungeon_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"max_wave") == 0) return Data::AnyFieldToStringConverter::ToString(&max_wave);
			if (wcscmp(fieldName, L"entrance_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&entrance_quota);
			if (wcscmp(fieldName, L"reward_box_data_id") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_box_data_id);
			if (wcscmp(fieldName, L"reward_data_id") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_data_id);
			if (wcscmp(fieldName, L"contents_reset") == 0) return Data::AnyFieldToStringConverter::ToString(&contents_reset);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			dungeon_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 max_wave;
char Pad_sub_0[3];
Data::TableRef entrance_quota;
int entrance_quota_tableId(){return 66;};
__int16 reward_box_data_id;
__int16 reward_data_id;
Data::TableRef contents_reset;
int contents_reset_tableId(){return 72;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}