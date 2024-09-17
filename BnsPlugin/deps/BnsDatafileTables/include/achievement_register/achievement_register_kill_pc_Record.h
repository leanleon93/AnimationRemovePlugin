/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_kill_pc_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_target_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"faction") == 0) return faction;
			if (wcscmp(fieldName, L"race") == 0) return race;
			if (wcscmp(fieldName, L"target_job") == 0) return target_job;
			if (wcscmp(fieldName, L"above_level") == 0) return above_level;
			if (wcscmp(fieldName, L"below_level") == 0) return below_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"faction") == 0) return Data::AnyFieldToStringConverter::ToString(&faction);
			if (wcscmp(fieldName, L"race") == 0) return Data::AnyFieldToStringConverter::ToString(&race);
			if (wcscmp(fieldName, L"target_job") == 0) return Data::AnyFieldToStringConverter::ToString(&target_job);
			if (wcscmp(fieldName, L"above_level") == 0) return Data::AnyFieldToStringConverter::ToString(&above_level);
			if (wcscmp(fieldName, L"below_level") == 0) return Data::AnyFieldToStringConverter::ToString(&below_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef faction;
int faction_tableId(){return 130;};
__int8 race;
std::wstring race_EnumValue() const {return Get_race_EnumValue(race);};
__int8 target_job;
std::wstring target_job_EnumValue() const {return Get_target_job_EnumValue(target_job);};
__int8 above_level;
__int8 below_level;

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}