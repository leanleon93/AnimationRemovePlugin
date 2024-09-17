/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct gathersource_Record : DrEl
	{
	private:
		static std::wstring Get_gather_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"gather_type") == 0) return gather_type;
			if (wcscmp(fieldName, L"required_pc_level") == 0) return required_pc_level;
			if (wcscmp(fieldName, L"required_gather_level") == 0) return required_gather_level;
			if (wcscmp(fieldName, L"max_range") == 0) return max_range;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_1") == 0) return item[0];
			if (wcscmp(fieldName, L"item_2") == 0) return item[1];
			if (wcscmp(fieldName, L"item_3") == 0) return item[2];
			if (wcscmp(fieldName, L"item_4") == 0) return item[3];
			if (wcscmp(fieldName, L"item_count_min") == 0) return item_count_min;
			if (wcscmp(fieldName, L"item_count_min_1") == 0) return item_count_min[0];
			if (wcscmp(fieldName, L"item_count_min_2") == 0) return item_count_min[1];
			if (wcscmp(fieldName, L"item_count_min_3") == 0) return item_count_min[2];
			if (wcscmp(fieldName, L"item_count_min_4") == 0) return item_count_min[3];
			if (wcscmp(fieldName, L"item_count_max") == 0) return item_count_max;
			if (wcscmp(fieldName, L"item_count_max_1") == 0) return item_count_max[0];
			if (wcscmp(fieldName, L"item_count_max_2") == 0) return item_count_max[1];
			if (wcscmp(fieldName, L"item_count_max_3") == 0) return item_count_max[2];
			if (wcscmp(fieldName, L"item_count_max_4") == 0) return item_count_max[3];
			if (wcscmp(fieldName, L"item_probability") == 0) return item_probability;
			if (wcscmp(fieldName, L"item_probability_1") == 0) return item_probability[0];
			if (wcscmp(fieldName, L"item_probability_2") == 0) return item_probability[1];
			if (wcscmp(fieldName, L"item_probability_3") == 0) return item_probability[2];
			if (wcscmp(fieldName, L"item_probability_4") == 0) return item_probability[3];
			if (wcscmp(fieldName, L"reward_exp") == 0) return reward_exp;
			if (wcscmp(fieldName, L"gather_action_duration") == 0) return gather_action_duration;
			if (wcscmp(fieldName, L"respawn_time") == 0) return respawn_time;
			if (wcscmp(fieldName, L"mesh_name") == 0) return mesh_name;
			if (wcscmp(fieldName, L"animset_name") == 0) return animset_name;
			if (wcscmp(fieldName, L"gather_start_animname") == 0) return gather_start_animname;
			if (wcscmp(fieldName, L"gather_end_animname") == 0) return gather_end_animname;
			if (wcscmp(fieldName, L"gather_stay_animname") == 0) return gather_stay_animname;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"gather_type") == 0) return Data::AnyFieldToStringConverter::ToString(&gather_type);
			if (wcscmp(fieldName, L"required_pc_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_pc_level);
			if (wcscmp(fieldName, L"required_gather_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_gather_level);
			if (wcscmp(fieldName, L"max_range") == 0) return Data::AnyFieldToStringConverter::ToString(&max_range);
			if (wcscmp(fieldName, L"item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[0]));
			if (wcscmp(fieldName, L"item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[1]));
			if (wcscmp(fieldName, L"item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[2]));
			if (wcscmp(fieldName, L"item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[3]));
			if (wcscmp(fieldName, L"item_count_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_min[0]));
			if (wcscmp(fieldName, L"item_count_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_min[1]));
			if (wcscmp(fieldName, L"item_count_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_min[2]));
			if (wcscmp(fieldName, L"item_count_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_min[3]));
			if (wcscmp(fieldName, L"item_count_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_max[0]));
			if (wcscmp(fieldName, L"item_count_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_max[1]));
			if (wcscmp(fieldName, L"item_count_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_max[2]));
			if (wcscmp(fieldName, L"item_count_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count_max[3]));
			if (wcscmp(fieldName, L"item_probability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_probability[0]));
			if (wcscmp(fieldName, L"item_probability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_probability[1]));
			if (wcscmp(fieldName, L"item_probability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_probability[2]));
			if (wcscmp(fieldName, L"item_probability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_probability[3]));
			if (wcscmp(fieldName, L"reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_exp);
			if (wcscmp(fieldName, L"gather_action_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&gather_action_duration);
			if (wcscmp(fieldName, L"respawn_time") == 0) return Data::AnyFieldToStringConverter::ToString(&respawn_time);
			if (wcscmp(fieldName, L"mesh_name") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_name);
			if (wcscmp(fieldName, L"animset_name") == 0) return Data::AnyFieldToStringConverter::ToString(&animset_name);
			if (wcscmp(fieldName, L"gather_start_animname") == 0) return Data::AnyFieldToStringConverter::ToString(&gather_start_animname);
			if (wcscmp(fieldName, L"gather_end_animname") == 0) return Data::AnyFieldToStringConverter::ToString(&gather_end_animname);
			if (wcscmp(fieldName, L"gather_stay_animname") == 0) return Data::AnyFieldToStringConverter::ToString(&gather_stay_animname);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(mesh_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_name));
			if (reinterpret_cast<std::uintptr_t>(animset_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) animset_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(animset_name));
			if (reinterpret_cast<std::uintptr_t>(gather_start_animname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gather_start_animname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gather_start_animname));
			if (reinterpret_cast<std::uintptr_t>(gather_end_animname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gather_end_animname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gather_end_animname));
			if (reinterpret_cast<std::uintptr_t>(gather_stay_animname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gather_stay_animname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gather_stay_animname));
		}
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 gather_type;
std::wstring gather_type_EnumValue() const {return Get_gather_type_EnumValue(gather_type);};
__int16 required_pc_level;
__int8 required_gather_level;
char Pad0[1];
__int16 max_range;
char Pad1[2];
Data::TableRef item[4];
int item_tableId(){return 189;};
__int8 item_count_min[4];
__int8 item_count_max[4];
__int8 item_probability[4];
__int16 reward_exp;
char Pad2[2];
__int32 gather_action_duration;
__int32 respawn_time;
wchar_t* mesh_name;
wchar_t* animset_name;
wchar_t* gather_start_animname;
wchar_t* gather_end_animname;
wchar_t* gather_stay_animname;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 152; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) gathersource_RecordPtr // : DrRecordPtr
	{
		gathersource_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::gathersource_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}