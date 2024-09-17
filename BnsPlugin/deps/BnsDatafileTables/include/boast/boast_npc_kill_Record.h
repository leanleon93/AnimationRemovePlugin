/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_boast_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct boast_npc_kill_Record : boast_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = boast_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return npc;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = boast_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"npc") == 0) return Data::AnyFieldToStringConverter::ToString(&npc);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			boast_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef npc;
int npc_tableId(){return 255;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}