/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_modify_damage_systematization_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"systematization") == 0) return systematization;
			if (wcscmp(fieldName, L"damage_rate") == 0) return damage_rate;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"systematization") == 0) return Data::AnyFieldToStringConverter::ToString(&systematization);
			if (wcscmp(fieldName, L"damage_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_rate);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef systematization;
int systematization_tableId(){return 346;};
__int16 damage_rate;

		static __int32 SubType() { return 844; }
	};
#pragma pack(pop)
}