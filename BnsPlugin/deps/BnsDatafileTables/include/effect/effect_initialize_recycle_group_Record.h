/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_initialize_recycle_group_Record : effect_Record
	{
	private:
		static std::wstring Get_initialize_recycle_group_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"initialize_recycle_group") == 0) return initialize_recycle_group;
			if (wcscmp(fieldName, L"initialize_recycle_group_1") == 0) return initialize_recycle_group[0];
			if (wcscmp(fieldName, L"initialize_recycle_group_2") == 0) return initialize_recycle_group[1];
			if (wcscmp(fieldName, L"initialize_recycle_group_id") == 0) return initialize_recycle_group_id;
			if (wcscmp(fieldName, L"initialize_recycle_group_id_1") == 0) return initialize_recycle_group_id[0];
			if (wcscmp(fieldName, L"initialize_recycle_group_id_2") == 0) return initialize_recycle_group_id[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"initialize_recycle_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(initialize_recycle_group[0]));
			if (wcscmp(fieldName, L"initialize_recycle_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(initialize_recycle_group[1]));
			if (wcscmp(fieldName, L"initialize_recycle_group_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(initialize_recycle_group_id[0]));
			if (wcscmp(fieldName, L"initialize_recycle_group_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(initialize_recycle_group_id[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 initialize_recycle_group[2];
std::wstring initialize_recycle_group_EnumValue(int index) const {return Get_initialize_recycle_group_EnumValue(initialize_recycle_group[index]);};
__int8 initialize_recycle_group_id[2];

		static __int32 SubType() { return 811; }
	};
#pragma pack(pop)
}