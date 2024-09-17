/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillmodifylimit_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"recycle_duration_min_ratio_percent") == 0) return recycle_duration_min_ratio_percent;
			if (wcscmp(fieldName, L"recycle_duration_max_ratio_percent") == 0) return recycle_duration_max_ratio_percent;
			if (wcscmp(fieldName, L"damage_power_percent_min_ratio_percent") == 0) return damage_power_percent_min_ratio_percent;
			if (wcscmp(fieldName, L"damage_power_percent_max_ratio_percent") == 0) return damage_power_percent_max_ratio_percent;
			if (wcscmp(fieldName, L"hp_drain_percent_min_ratio_percent") == 0) return hp_drain_percent_min_ratio_percent;
			if (wcscmp(fieldName, L"hp_drain_percent_max_ratio_percent") == 0) return hp_drain_percent_max_ratio_percent;
			if (wcscmp(fieldName, L"heal_percent_min_ratio_percent") == 0) return heal_percent_min_ratio_percent;
			if (wcscmp(fieldName, L"heal_percent_max_ratio_percent") == 0) return heal_percent_max_ratio_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"recycle_duration_min_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&recycle_duration_min_ratio_percent);
			if (wcscmp(fieldName, L"recycle_duration_max_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&recycle_duration_max_ratio_percent);
			if (wcscmp(fieldName, L"damage_power_percent_min_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_power_percent_min_ratio_percent);
			if (wcscmp(fieldName, L"damage_power_percent_max_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&damage_power_percent_max_ratio_percent);
			if (wcscmp(fieldName, L"hp_drain_percent_min_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_drain_percent_min_ratio_percent);
			if (wcscmp(fieldName, L"hp_drain_percent_max_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&hp_drain_percent_max_ratio_percent);
			if (wcscmp(fieldName, L"heal_percent_min_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_percent_min_ratio_percent);
			if (wcscmp(fieldName, L"heal_percent_max_ratio_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&heal_percent_max_ratio_percent);

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
__int16 recycle_duration_min_ratio_percent;
__int16 recycle_duration_max_ratio_percent;
__int16 damage_power_percent_min_ratio_percent;
__int16 damage_power_percent_max_ratio_percent;
__int16 hp_drain_percent_min_ratio_percent;
__int16 hp_drain_percent_max_ratio_percent;
__int16 heal_percent_min_ratio_percent;
__int16 heal_percent_max_ratio_percent;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 341; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillmodifylimit_RecordPtr // : DrRecordPtr
	{
		skillmodifylimit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillmodifylimit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}