/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_fishing_field_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"fishing_point_env") == 0) return fishing_point_env;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"fishing_point_env") == 0) return Data::AnyFieldToStringConverter::ToString(&fishing_point_env);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef fishing_point_env;
int fishing_point_env_tableId(){return 444;};

		static __int32 SubType() { return 12; }
	};
#pragma pack(pop)
}