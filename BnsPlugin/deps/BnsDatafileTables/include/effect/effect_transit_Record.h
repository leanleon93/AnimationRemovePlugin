/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_transit_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"zone_id") == 0) return zone_id;
			if (wcscmp(fieldName, L"pc_spawn") == 0) return pc_spawn;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"zone_id") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_id);
			if (wcscmp(fieldName, L"pc_spawn") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_spawn);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 zone_id;
__int8 pc_spawn;

		static __int32 SubType() { return 47; }
	};
#pragma pack(pop)
}