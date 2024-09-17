/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_npc_Record : mapunit_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return npc;
			if (wcscmp(fieldName, L"ignore_object_pos") == 0) return ignore_object_pos;
			if (wcscmp(fieldName, L"in_sight_only") == 0) return in_sight_only;
			if (wcscmp(fieldName, L"many_counts") == 0) return many_counts;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return Data::AnyFieldToStringConverter::ToString(&npc);
			if (wcscmp(fieldName, L"ignore_object_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&ignore_object_pos);
			if (wcscmp(fieldName, L"in_sight_only") == 0) return Data::AnyFieldToStringConverter::ToString(&in_sight_only);
			if (wcscmp(fieldName, L"many_counts") == 0) return Data::AnyFieldToStringConverter::ToString(&many_counts);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef npc;
int npc_tableId(){return 255;};
bool ignore_object_pos;
bool in_sight_only;
bool many_counts;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}