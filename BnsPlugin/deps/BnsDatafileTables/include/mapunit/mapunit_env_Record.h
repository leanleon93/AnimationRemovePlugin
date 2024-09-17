/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_env_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"env2") == 0) return env2;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"env2") == 0) return Data::AnyFieldToStringConverter::ToString(&env2);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef env2;
int env2_tableId(){return 444;};

		static __int32 SubType() { return 6; }
	};
#pragma pack(pop)
}