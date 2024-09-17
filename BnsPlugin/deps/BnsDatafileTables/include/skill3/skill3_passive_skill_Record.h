/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill3_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill3_passive_skill_Record : skill3_Record
	{
	private:
		static std::wstring Get_summoned_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill3_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"passive_effect") == 0) return passive_effect;
			if (wcscmp(fieldName, L"passive_effect_1") == 0) return passive_effect[0];
			if (wcscmp(fieldName, L"passive_effect_2") == 0) return passive_effect[1];
			if (wcscmp(fieldName, L"passive_effect_3") == 0) return passive_effect[2];
			if (wcscmp(fieldName, L"passive_effect_4") == 0) return passive_effect[3];
			if (wcscmp(fieldName, L"passive_effect_5") == 0) return passive_effect[4];
			if (wcscmp(fieldName, L"passive_effect_6") == 0) return passive_effect[5];
			if (wcscmp(fieldName, L"passive_effect_7") == 0) return passive_effect[6];
			if (wcscmp(fieldName, L"passive_effect_8") == 0) return passive_effect[7];
			if (wcscmp(fieldName, L"summoned_job") == 0) return summoned_job;
			if (wcscmp(fieldName, L"summoned_use_only") == 0) return summoned_use_only;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill3_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"passive_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[0]));
			if (wcscmp(fieldName, L"passive_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[1]));
			if (wcscmp(fieldName, L"passive_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[2]));
			if (wcscmp(fieldName, L"passive_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[3]));
			if (wcscmp(fieldName, L"passive_effect_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[4]));
			if (wcscmp(fieldName, L"passive_effect_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[5]));
			if (wcscmp(fieldName, L"passive_effect_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[6]));
			if (wcscmp(fieldName, L"passive_effect_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(passive_effect[7]));
			if (wcscmp(fieldName, L"summoned_job") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_job);
			if (wcscmp(fieldName, L"summoned_use_only") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_use_only);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill3_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef passive_effect[8];
int passive_effect_tableId(){return 111;};
__int8 summoned_job;
std::wstring summoned_job_EnumValue() const {return Get_summoned_job_EnumValue(summoned_job);};
bool summoned_use_only;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}