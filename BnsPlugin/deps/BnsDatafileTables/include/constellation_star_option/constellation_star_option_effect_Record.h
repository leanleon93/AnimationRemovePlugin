/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_constellation_star_option_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct constellation_star_option_effect_Record : constellation_star_option_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = constellation_star_option_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect") == 0) return effect;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = constellation_star_option_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"effect") == 0) return Data::AnyFieldToStringConverter::ToString(&effect);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			constellation_star_option_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef effect;
int effect_tableId(){return 111;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}