/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class boast_event_RecordSubType : __int32
    {
		boast_event_record_sub_transform_item = 0,
		boast_event_record_sub_transform_item_convert = 1,
		boast_event_record_sub_buy_random_store_item = 2,
		boast_event_record_sub_acquire_item_reward = 3,
		boast_event_record_sub_awakening_item = 4,
		boast_event_record_sub_complete_achievement = 5,
		boast_event_record_sub_acquire_env_reward = 6,
		boast_event_record_sub_acquire_npc_reward = 7,
		boast_event_record_sub_growth_item = 8,
		boast_event_record_sub_process_item_fusion = 9,
		boast_event_record_sub_treasureboard_season_reward = 10,
		boast_event_record_sub_treasureboard_reward = 11,
		boast_event_record_sub_improve_item = 12,
		boast_event_record_sub_count = 13,
    };
#pragma pack(push, 1)
	struct boast_event_Record : DrEl
	{
	private:
		static std::wstring Get_broadcast_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"broadcast") == 0) return broadcast;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"broadcast") == 0) return Data::AnyFieldToStringConverter::ToString(&broadcast);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 broadcast;
std::wstring broadcast_EnumValue() const {return Get_broadcast_EnumValue(broadcast);};

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 43; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boast_event_RecordPtr // : DrRecordPtr
	{
		boast_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::boast_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}