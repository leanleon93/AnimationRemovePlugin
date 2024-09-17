/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_return_sim_skill_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"skill") == 0) return skill;
			if (wcscmp(fieldName, L"skill3") == 0) return skill3;
			if (wcscmp(fieldName, L"finish") == 0) return finish;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"skill") == 0) return Data::AnyFieldToStringConverter::ToString(&skill);
			if (wcscmp(fieldName, L"skill3") == 0) return Data::AnyFieldToStringConverter::ToString(&skill3);
			if (wcscmp(fieldName, L"finish") == 0) return Data::AnyFieldToStringConverter::ToString(&finish);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef skill;
int skill_tableId(){return 335;};
Data::TableRef skill3;
int skill3_tableId(){return 324;};
bool finish;

		static __int32 SubType() { return 50; }
	};
#pragma pack(pop)
}