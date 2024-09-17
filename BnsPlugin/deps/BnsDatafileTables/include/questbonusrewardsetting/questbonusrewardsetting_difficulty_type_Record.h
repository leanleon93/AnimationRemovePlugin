/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_questbonusrewardsetting_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct questbonusrewardsetting_difficulty_type_Record : questbonusrewardsetting_Record
	{
	private:
		static std::wstring Get_difficulty_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = questbonusrewardsetting_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"difficulty_type") == 0) return difficulty_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = questbonusrewardsetting_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"difficulty_type") == 0) return Data::AnyFieldToStringConverter::ToString(&difficulty_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			questbonusrewardsetting_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 difficulty_type;
std::wstring difficulty_type_EnumValue() const {return Get_difficulty_type_EnumValue(difficulty_type);};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}