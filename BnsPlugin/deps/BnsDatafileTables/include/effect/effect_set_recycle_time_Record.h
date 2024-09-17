/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_set_recycle_time_Record : effect_Record
	{
	private:
		static std::wstring Get_recycle_group_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"recycle_group") == 0) return recycle_group;
			if (wcscmp(fieldName, L"recycle_group_1") == 0) return recycle_group[0];
			if (wcscmp(fieldName, L"recycle_group_2") == 0) return recycle_group[1];
			if (wcscmp(fieldName, L"recycle_group_id") == 0) return recycle_group_id;
			if (wcscmp(fieldName, L"recycle_group_id_1") == 0) return recycle_group_id[0];
			if (wcscmp(fieldName, L"recycle_group_id_2") == 0) return recycle_group_id[1];
			if (wcscmp(fieldName, L"recycle_group_set_time") == 0) return recycle_group_set_time;
			if (wcscmp(fieldName, L"recycle_group_set_time_1") == 0) return recycle_group_set_time[0];
			if (wcscmp(fieldName, L"recycle_group_set_time_2") == 0) return recycle_group_set_time[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"recycle_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(recycle_group[0]));
			if (wcscmp(fieldName, L"recycle_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(recycle_group[1]));
			if (wcscmp(fieldName, L"recycle_group_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(recycle_group_id[0]));
			if (wcscmp(fieldName, L"recycle_group_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(recycle_group_id[1]));
			if (wcscmp(fieldName, L"recycle_group_set_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(recycle_group_set_time[0]));
			if (wcscmp(fieldName, L"recycle_group_set_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(recycle_group_set_time[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 recycle_group[2];
std::wstring recycle_group_EnumValue(int index) const {return Get_recycle_group_EnumValue(recycle_group[index]);};
__int8 recycle_group_id[2];
__int32 recycle_group_set_time[2];

		static __int32 SubType() { return 813; }
	};
#pragma pack(pop)
}