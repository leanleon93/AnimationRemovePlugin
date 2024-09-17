/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_effect_region_Record : zoneenv2_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_1") == 0) return effect[0];
			if (wcscmp(fieldName, L"effect_2") == 0) return effect[1];
			if (wcscmp(fieldName, L"effect_3") == 0) return effect[2];
			if (wcscmp(fieldName, L"effect_4") == 0) return effect[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[0]));
			if (wcscmp(fieldName, L"effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[1]));
			if (wcscmp(fieldName, L"effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[2]));
			if (wcscmp(fieldName, L"effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef effect[4];
int effect_tableId(){return 111;};

		static __int32 SubType() { return 10; }
	};
#pragma pack(pop)
}