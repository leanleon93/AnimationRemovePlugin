/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_user_command_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct user_command_emoticon_Record : user_command_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = user_command_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"emoticon") == 0) return emoticon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = user_command_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"emoticon") == 0) return Data::AnyFieldToStringConverter::ToString(&emoticon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			user_command_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef emoticon;
int emoticon_tableId(){return 114;};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}