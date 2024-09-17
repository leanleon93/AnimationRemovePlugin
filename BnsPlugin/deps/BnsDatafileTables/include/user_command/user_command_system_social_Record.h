/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_user_command_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct user_command_system_social_Record : user_command_Record
	{
	private:
		static std::wstring Get_system_social_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = user_command_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"system_social_type") == 0) return system_social_type;
			if (wcscmp(fieldName, L"talk_social") == 0) return talk_social;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = user_command_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"system_social_type") == 0) return Data::AnyFieldToStringConverter::ToString(&system_social_type);
			if (wcscmp(fieldName, L"talk_social") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_social);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			user_command_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 system_social_type;
std::wstring system_social_type_EnumValue() const {return Get_system_social_type_EnumValue(system_social_type);};
char Pad_sub_0[3];
Data::TableRef talk_social;
int talk_social_tableId(){return 399;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}