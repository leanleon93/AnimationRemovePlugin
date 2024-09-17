/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mastery_level_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"mastery_exp") == 0) return mastery_exp;
			if (wcscmp(fieldName, L"skill_build_up_point") == 0) return skill_build_up_point;
			if (wcscmp(fieldName, L"cannot_mastery_exp_up_in_min_exp") == 0) return cannot_mastery_exp_up_in_min_exp;
			if (wcscmp(fieldName, L"unlock_item") == 0) return unlock_item;
			if (wcscmp(fieldName, L"unlock_item_count") == 0) return unlock_item_count;
			if (wcscmp(fieldName, L"acquire_tp") == 0) return acquire_tp;
			if (wcscmp(fieldName, L"current_stat_point") == 0) return current_stat_point;
			if (wcscmp(fieldName, L"accumulated_acquire_tp") == 0) return accumulated_acquire_tp;
			if (wcscmp(fieldName, L"level_guide_path") == 0) return level_guide_path;
			if (wcscmp(fieldName, L"additional_stat_point_max") == 0) return additional_stat_point_max;
			if (wcscmp(fieldName, L"stat_point_attacker_max") == 0) return stat_point_attacker_max;
			if (wcscmp(fieldName, L"stat_point_defender_max") == 0) return stat_point_defender_max;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"mastery_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&mastery_exp);
			if (wcscmp(fieldName, L"skill_build_up_point") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_build_up_point);
			if (wcscmp(fieldName, L"cannot_mastery_exp_up_in_min_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&cannot_mastery_exp_up_in_min_exp);
			if (wcscmp(fieldName, L"unlock_item") == 0) return Data::AnyFieldToStringConverter::ToString(&unlock_item);
			if (wcscmp(fieldName, L"unlock_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&unlock_item_count);
			if (wcscmp(fieldName, L"acquire_tp") == 0) return Data::AnyFieldToStringConverter::ToString(&acquire_tp);
			if (wcscmp(fieldName, L"current_stat_point") == 0) return Data::AnyFieldToStringConverter::ToString(&current_stat_point);
			if (wcscmp(fieldName, L"accumulated_acquire_tp") == 0) return Data::AnyFieldToStringConverter::ToString(&accumulated_acquire_tp);
			if (wcscmp(fieldName, L"level_guide_path") == 0) return Data::AnyFieldToStringConverter::ToString(&level_guide_path);
			if (wcscmp(fieldName, L"additional_stat_point_max") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_stat_point_max);
			if (wcscmp(fieldName, L"stat_point_attacker_max") == 0) return Data::AnyFieldToStringConverter::ToString(&stat_point_attacker_max);
			if (wcscmp(fieldName, L"stat_point_defender_max") == 0) return Data::AnyFieldToStringConverter::ToString(&stat_point_defender_max);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(level_guide_path) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) level_guide_path = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(level_guide_path));
		}
		union Key
		{
            struct {
                __int8 mastery_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int64 mastery_exp;
__int16 skill_build_up_point;
bool cannot_mastery_exp_up_in_min_exp;
char Pad0[1];
Data::TableRef unlock_item;
int unlock_item_tableId(){return 189;};
__int16 unlock_item_count;
__int8 acquire_tp;
char Pad1[1];
__int16 current_stat_point;
__int16 accumulated_acquire_tp;
wchar_t* level_guide_path;
__int16 additional_stat_point_max;
__int16 stat_point_attacker_max;
__int16 stat_point_defender_max;

		static TableVersion Version() { return TableVersion(1, 13); }
		static __int16 TableId() { return 246; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_level_RecordPtr // : DrRecordPtr
	{
		mastery_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}