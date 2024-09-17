/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill3_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill3_action_Record : skill3_Record
	{
	private:
		static std::wstring Get_action_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill3_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"action_type") == 0) return action_type;
			if (wcscmp(fieldName, L"max_hyper_energy_point") == 0) return max_hyper_energy_point;
			if (wcscmp(fieldName, L"consume_hyper_energy_point") == 0) return consume_hyper_energy_point;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill3_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"action_type") == 0) return Data::AnyFieldToStringConverter::ToString(&action_type);
			if (wcscmp(fieldName, L"max_hyper_energy_point") == 0) return Data::AnyFieldToStringConverter::ToString(&max_hyper_energy_point);
			if (wcscmp(fieldName, L"consume_hyper_energy_point") == 0) return Data::AnyFieldToStringConverter::ToString(&consume_hyper_energy_point);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill3_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 action_type;
std::wstring action_type_EnumValue() const {return Get_action_type_EnumValue(action_type);};
char Pad_sub_0[3];
__int32 max_hyper_energy_point;
__int16 consume_hyper_energy_point;

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}