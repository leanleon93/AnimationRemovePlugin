/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_part_attack_Record : effect_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"head_effect") == 0) return head_effect;
			if (wcscmp(fieldName, L"head_effect_1") == 0) return head_effect[0];
			if (wcscmp(fieldName, L"head_effect_2") == 0) return head_effect[1];
			if (wcscmp(fieldName, L"body_effect") == 0) return body_effect;
			if (wcscmp(fieldName, L"body_effect_1") == 0) return body_effect[0];
			if (wcscmp(fieldName, L"body_effect_2") == 0) return body_effect[1];
			if (wcscmp(fieldName, L"arm_effect") == 0) return arm_effect;
			if (wcscmp(fieldName, L"arm_effect_1") == 0) return arm_effect[0];
			if (wcscmp(fieldName, L"arm_effect_2") == 0) return arm_effect[1];
			if (wcscmp(fieldName, L"leg_effect") == 0) return leg_effect;
			if (wcscmp(fieldName, L"leg_effect_1") == 0) return leg_effect[0];
			if (wcscmp(fieldName, L"leg_effect_2") == 0) return leg_effect[1];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"head_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(head_effect[0]));
			if (wcscmp(fieldName, L"head_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(head_effect[1]));
			if (wcscmp(fieldName, L"body_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(body_effect[0]));
			if (wcscmp(fieldName, L"body_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(body_effect[1]));
			if (wcscmp(fieldName, L"arm_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(arm_effect[0]));
			if (wcscmp(fieldName, L"arm_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(arm_effect[1]));
			if (wcscmp(fieldName, L"leg_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(leg_effect[0]));
			if (wcscmp(fieldName, L"leg_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(leg_effect[1]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef head_effect[2];
int head_effect_tableId(){return 111;};
Data::TableRef body_effect[2];
int body_effect_tableId(){return 111;};
Data::TableRef arm_effect[2];
int arm_effect_tableId(){return 111;};
Data::TableRef leg_effect[2];
int leg_effect_tableId(){return 111;};

		static __int32 SubType() { return 17; }
	};
#pragma pack(pop)
}