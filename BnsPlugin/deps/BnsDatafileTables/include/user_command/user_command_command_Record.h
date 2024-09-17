/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_user_command_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct user_command_command_Record : user_command_Record
	{
	private:
		static std::wstring Get_command_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = user_command_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"command") == 0) return command;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = user_command_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"command") == 0) return Data::AnyFieldToStringConverter::ToString(&command);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			user_command_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 command;
std::wstring command_EnumValue() const {return Get_command_EnumValue(command);};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}