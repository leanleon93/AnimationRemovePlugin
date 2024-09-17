/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class zonetriggereventstage_RecordSubType : __int32
    {
		zonetriggereventstage_record_sub_stage_stand_by_classic_field = 0,
		zonetriggereventstage_record_sub_stage_stand_by_guild_battle_field_entrance = 1,
		zonetriggereventstage_record_sub_stage_stand_by_persistant_zone = 2,
		zonetriggereventstage_record_sub_stage_stand_by_instant_zone = 3,
		zonetriggereventstage_record_sub_stage = 4,
		zonetriggereventstage_record_sub_count = 5,
    };
#pragma pack(push, 1)
	struct zonetriggereventstage_Record : DrEl
	{
	private:
		static std::wstring Get_broadcast_context_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"next_cond") == 0) return next_cond;
			if (wcscmp(fieldName, L"next_cond_1") == 0) return next_cond[0];
			if (wcscmp(fieldName, L"next_cond_2") == 0) return next_cond[1];
			if (wcscmp(fieldName, L"next_cond_branch_id") == 0) return next_cond_branch_id;
			if (wcscmp(fieldName, L"next_cond_branch_id_1") == 0) return next_cond_branch_id[0];
			if (wcscmp(fieldName, L"next_cond_branch_id_2") == 0) return next_cond_branch_id[1];
			if (wcscmp(fieldName, L"broadcast_context") == 0) return broadcast_context;
			if (wcscmp(fieldName, L"start_stage_kismet") == 0) return start_stage_kismet;
			if (wcscmp(fieldName, L"end_stage_kismet") == 0) return end_stage_kismet;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"next_cond_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_cond[0]));
			if (wcscmp(fieldName, L"next_cond_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_cond[1]));
			if (wcscmp(fieldName, L"next_cond_branch_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_cond_branch_id[0]));
			if (wcscmp(fieldName, L"next_cond_branch_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_cond_branch_id[1]));
			if (wcscmp(fieldName, L"broadcast_context") == 0) return Data::AnyFieldToStringConverter::ToString(&broadcast_context);
			if (wcscmp(fieldName, L"start_stage_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&start_stage_kismet);
			if (wcscmp(fieldName, L"end_stage_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&end_stage_kismet);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_stage_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_stage_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_stage_kismet));
			if (reinterpret_cast<std::uintptr_t>(end_stage_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_stage_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_stage_kismet));
		}
		union Key
		{
            struct {
                __int32 zone;
__int8 zone_mode_set_id;
__int8 zone_mode;
__int8 branch_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef next_cond[2];
int next_cond_tableId(){return 457;};
__int8 next_cond_branch_id[2];
__int8 broadcast_context;
std::wstring broadcast_context_EnumValue() const {return Get_broadcast_context_EnumValue(broadcast_context);};
char Pad0[1];
wchar_t* start_stage_kismet;
wchar_t* end_stage_kismet;

		static TableVersion Version() { return TableVersion(0, 16); }
		static __int16 TableId() { return 458; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonetriggereventstage_RecordPtr // : DrRecordPtr
	{
		zonetriggereventstage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonetriggereventstage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}