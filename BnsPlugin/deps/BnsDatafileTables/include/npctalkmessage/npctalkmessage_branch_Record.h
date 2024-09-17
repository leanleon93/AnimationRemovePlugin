/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_branch_Record : npctalkmessage_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = npctalkmessage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"initial_branch") == 0) return initial_branch;
			if (wcscmp(fieldName, L"branch_msg") == 0) return branch_msg;
			if (wcscmp(fieldName, L"branch_msg_1") == 0) return branch_msg[0];
			if (wcscmp(fieldName, L"branch_msg_2") == 0) return branch_msg[1];
			if (wcscmp(fieldName, L"branch_msg_3") == 0) return branch_msg[2];
			if (wcscmp(fieldName, L"branch_msg_4") == 0) return branch_msg[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = npctalkmessage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"initial_branch") == 0) return Data::AnyFieldToStringConverter::ToString(&initial_branch);
			if (wcscmp(fieldName, L"branch_msg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(branch_msg[0]));
			if (wcscmp(fieldName, L"branch_msg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(branch_msg[1]));
			if (wcscmp(fieldName, L"branch_msg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(branch_msg[2]));
			if (wcscmp(fieldName, L"branch_msg_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(branch_msg[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			npctalkmessage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		bool initial_branch;
char Pad_sub_0[3];
Data::TableRef branch_msg[4];
int branch_msg_tableId(){return 260;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}