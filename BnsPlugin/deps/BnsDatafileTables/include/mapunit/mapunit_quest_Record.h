/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_mapunit_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct mapunit_quest_Record : mapunit_Record
	{
	private:
		static std::wstring Get_force_quest_indicator_map_depth_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = mapunit_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"ignore_quest_map_location") == 0) return ignore_quest_map_location;
			if (wcscmp(fieldName, L"force_quest_indicator_map_depth") == 0) return force_quest_indicator_map_depth;
			if (wcscmp(fieldName, L"force_tendency_simple_quest_indicator_to_change") == 0) return force_tendency_simple_quest_indicator_to_change;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = mapunit_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"ignore_quest_map_location") == 0) return Data::AnyFieldToStringConverter::ToString(&ignore_quest_map_location);
			if (wcscmp(fieldName, L"force_quest_indicator_map_depth") == 0) return Data::AnyFieldToStringConverter::ToString(&force_quest_indicator_map_depth);
			if (wcscmp(fieldName, L"force_tendency_simple_quest_indicator_to_change") == 0) return Data::AnyFieldToStringConverter::ToString(&force_tendency_simple_quest_indicator_to_change);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			mapunit_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		bool ignore_quest_map_location;
__int8 force_quest_indicator_map_depth;
std::wstring force_quest_indicator_map_depth_EnumValue() const {return Get_force_quest_indicator_map_depth_EnumValue(force_quest_indicator_map_depth);};
bool force_tendency_simple_quest_indicator_to_change;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}