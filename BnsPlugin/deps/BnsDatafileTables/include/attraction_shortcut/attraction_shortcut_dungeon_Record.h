/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_attraction_shortcut_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct attraction_shortcut_dungeon_Record : attraction_shortcut_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = attraction_shortcut_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = attraction_shortcut_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			attraction_shortcut_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef dungeon;
int dungeon_tableId(){return 110;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}