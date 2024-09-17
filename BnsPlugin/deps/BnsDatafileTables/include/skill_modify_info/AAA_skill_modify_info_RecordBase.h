/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class skill_modify_info_RecordSubType : __int32
    {
		skill_modify_info_record_sub_normal = 0,
		skill_modify_info_record_sub_skill = 1,
		skill_modify_info_record_sub_skillsystematization = 2,
		skill_modify_info_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill_modify_info_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"recycle_duration_modify_percent") == 0) return recycle_duration_modify_percent;
			if (wcscmp(fieldName, L"recycle_duration_modify_diff") == 0) return recycle_duration_modify_diff;
			if (wcscmp(fieldName, L"sp_consume_modify_diff") == 0) return sp_consume_modify_diff;
			if (wcscmp(fieldName, L"sp_consume_modify_diff_1") == 0) return sp_consume_modify_diff[0];
			if (wcscmp(fieldName, L"sp_consume_modify_diff_2") == 0) return sp_consume_modify_diff[1];
			if (wcscmp(fieldName, L"damage_power_percent_modify_percent") == 0) return damage_power_percent_modify_percent;
			if (wcscmp(fieldName, L"damage_power_percent_modify_diff") == 0) return damage_power_percent_modify_diff;
			if (wcscmp(fieldName, L"hp_drain_percent_modify_percent") == 0) return hp_drain_percent_modify_percent;
			if (wcscmp(fieldName, L"hp_drain_percent_modify_diff") == 0) return hp_drain_percent_modify_diff;
			if (wcscmp(fieldName, L"heal_percent_modify_percent") == 0) return heal_percent_modify_percent;
			if (wcscmp(fieldName, L"heal_percent_modify_diff") == 0) return heal_percent_modify_diff;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"recycle_duration_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&recycle_duration_modify_percent);
			if (wcscmp(fieldName, L"recycle_duration_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&recycle_duration_modify_diff);
			if (wcscmp(fieldName, L"sp_consume_modify_diff_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_consume_modify_diff[0]));
			if (wcscmp(fieldName, L"sp_consume_modify_diff_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_consume_modify_diff[1]));
			if (wcscmp(fieldName, L"damage_power_percent_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_power_percent_modify_percent);
			if (wcscmp(fieldName, L"damage_power_percent_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_power_percent_modify_diff);
			if (wcscmp(fieldName, L"hp_drain_percent_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_drain_percent_modify_percent);
			if (wcscmp(fieldName, L"hp_drain_percent_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_drain_percent_modify_diff);
			if (wcscmp(fieldName, L"heal_percent_modify_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_percent_modify_percent);
			if (wcscmp(fieldName, L"heal_percent_modify_diff") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_percent_modify_diff);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 recycle_duration_modify_percent;
char Pad0[2];
__int32 recycle_duration_modify_diff;
__int16 sp_consume_modify_diff[2];
__int16 damage_power_percent_modify_percent;
char Pad1[2];
__int32 damage_power_percent_modify_diff;
__int16 hp_drain_percent_modify_percent;
char Pad2[2];
__int32 hp_drain_percent_modify_diff;
__int16 heal_percent_modify_percent;
char Pad3[2];
__int32 heal_percent_modify_diff;
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 339; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_modify_info_RecordPtr // : DrRecordPtr
	{
		skill_modify_info_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_modify_info_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}