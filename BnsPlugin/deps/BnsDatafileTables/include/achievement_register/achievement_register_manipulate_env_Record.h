/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_manipulate_env_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_env2_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"env2") == 0) return env2;
			if (wcscmp(fieldName, L"env2_1") == 0) return env2[0];
			if (wcscmp(fieldName, L"env2_2") == 0) return env2[1];
			if (wcscmp(fieldName, L"env2_3") == 0) return env2[2];
			if (wcscmp(fieldName, L"env2_4") == 0) return env2[3];
			if (wcscmp(fieldName, L"env2_5") == 0) return env2[4];
			if (wcscmp(fieldName, L"env2_6") == 0) return env2[5];
			if (wcscmp(fieldName, L"env2_7") == 0) return env2[6];
			if (wcscmp(fieldName, L"env2_8") == 0) return env2[7];
			if (wcscmp(fieldName, L"env2_state") == 0) return env2_state;
			if (wcscmp(fieldName, L"env2_state_1") == 0) return env2_state[0];
			if (wcscmp(fieldName, L"env2_state_2") == 0) return env2_state[1];
			if (wcscmp(fieldName, L"env2_state_3") == 0) return env2_state[2];
			if (wcscmp(fieldName, L"env2_state_4") == 0) return env2_state[3];
			if (wcscmp(fieldName, L"env2_state_5") == 0) return env2_state[4];
			if (wcscmp(fieldName, L"env2_state_6") == 0) return env2_state[5];
			if (wcscmp(fieldName, L"env2_state_7") == 0) return env2_state[6];
			if (wcscmp(fieldName, L"env2_state_8") == 0) return env2_state[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"env2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[0]));
			if (wcscmp(fieldName, L"env2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[1]));
			if (wcscmp(fieldName, L"env2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[2]));
			if (wcscmp(fieldName, L"env2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[3]));
			if (wcscmp(fieldName, L"env2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[4]));
			if (wcscmp(fieldName, L"env2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[5]));
			if (wcscmp(fieldName, L"env2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[6]));
			if (wcscmp(fieldName, L"env2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2[7]));
			if (wcscmp(fieldName, L"env2_state_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[0]));
			if (wcscmp(fieldName, L"env2_state_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[1]));
			if (wcscmp(fieldName, L"env2_state_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[2]));
			if (wcscmp(fieldName, L"env2_state_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[3]));
			if (wcscmp(fieldName, L"env2_state_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[4]));
			if (wcscmp(fieldName, L"env2_state_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[5]));
			if (wcscmp(fieldName, L"env2_state_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[6]));
			if (wcscmp(fieldName, L"env2_state_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(env2_state[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef env2[8];
int env2_tableId(){return 444;};
__int8 env2_state[8];
std::wstring env2_state_EnumValue(int index) const {return Get_env2_state_EnumValue(env2_state[index]);};

		static __int32 SubType() { return 20; }
	};
#pragma pack(pop)
}