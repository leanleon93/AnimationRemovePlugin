/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_combat_Record : DrEl
	{
	private:
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"item_skill") == 0) return item_skill;
			if (wcscmp(fieldName, L"item_skill_1") == 0) return item_skill[0];
			if (wcscmp(fieldName, L"item_skill_2") == 0) return item_skill[1];
			if (wcscmp(fieldName, L"item_skill_3") == 0) return item_skill[2];
			if (wcscmp(fieldName, L"item_skill_4") == 0) return item_skill[3];
			if (wcscmp(fieldName, L"item_skill_5") == 0) return item_skill[4];
			if (wcscmp(fieldName, L"item_skill_6") == 0) return item_skill[5];
			if (wcscmp(fieldName, L"item_skill_7") == 0) return item_skill[6];
			if (wcscmp(fieldName, L"item_skill_8") == 0) return item_skill[7];
			if (wcscmp(fieldName, L"item_skill_9") == 0) return item_skill[8];
			if (wcscmp(fieldName, L"item_skill_10") == 0) return item_skill[9];
			if (wcscmp(fieldName, L"item_skill_11") == 0) return item_skill[10];
			if (wcscmp(fieldName, L"item_skill_12") == 0) return item_skill[11];
			if (wcscmp(fieldName, L"item_skill_13") == 0) return item_skill[12];
			if (wcscmp(fieldName, L"item_skill_14") == 0) return item_skill[13];
			if (wcscmp(fieldName, L"item_skill_15") == 0) return item_skill[14];
			if (wcscmp(fieldName, L"item_skill_16") == 0) return item_skill[15];
			if (wcscmp(fieldName, L"item_skill_second") == 0) return item_skill_second;
			if (wcscmp(fieldName, L"item_skill_second_1") == 0) return item_skill_second[0];
			if (wcscmp(fieldName, L"item_skill_second_2") == 0) return item_skill_second[1];
			if (wcscmp(fieldName, L"item_skill_second_3") == 0) return item_skill_second[2];
			if (wcscmp(fieldName, L"item_skill_second_4") == 0) return item_skill_second[3];
			if (wcscmp(fieldName, L"item_skill_second_5") == 0) return item_skill_second[4];
			if (wcscmp(fieldName, L"item_skill_second_6") == 0) return item_skill_second[5];
			if (wcscmp(fieldName, L"item_skill_second_7") == 0) return item_skill_second[6];
			if (wcscmp(fieldName, L"item_skill_second_8") == 0) return item_skill_second[7];
			if (wcscmp(fieldName, L"item_skill_second_9") == 0) return item_skill_second[8];
			if (wcscmp(fieldName, L"item_skill_second_10") == 0) return item_skill_second[9];
			if (wcscmp(fieldName, L"item_skill_second_11") == 0) return item_skill_second[10];
			if (wcscmp(fieldName, L"item_skill_second_12") == 0) return item_skill_second[11];
			if (wcscmp(fieldName, L"item_skill_second_13") == 0) return item_skill_second[12];
			if (wcscmp(fieldName, L"item_skill_second_14") == 0) return item_skill_second[13];
			if (wcscmp(fieldName, L"item_skill_second_15") == 0) return item_skill_second[14];
			if (wcscmp(fieldName, L"item_skill_second_16") == 0) return item_skill_second[15];
			if (wcscmp(fieldName, L"item_skill_third") == 0) return item_skill_third;
			if (wcscmp(fieldName, L"item_skill_third_1") == 0) return item_skill_third[0];
			if (wcscmp(fieldName, L"item_skill_third_2") == 0) return item_skill_third[1];
			if (wcscmp(fieldName, L"item_skill_third_3") == 0) return item_skill_third[2];
			if (wcscmp(fieldName, L"item_skill_third_4") == 0) return item_skill_third[3];
			if (wcscmp(fieldName, L"item_skill_third_5") == 0) return item_skill_third[4];
			if (wcscmp(fieldName, L"item_skill_third_6") == 0) return item_skill_third[5];
			if (wcscmp(fieldName, L"item_skill_third_7") == 0) return item_skill_third[6];
			if (wcscmp(fieldName, L"item_skill_third_8") == 0) return item_skill_third[7];
			if (wcscmp(fieldName, L"item_skill_third_9") == 0) return item_skill_third[8];
			if (wcscmp(fieldName, L"item_skill_third_10") == 0) return item_skill_third[9];
			if (wcscmp(fieldName, L"item_skill_third_11") == 0) return item_skill_third[10];
			if (wcscmp(fieldName, L"item_skill_third_12") == 0) return item_skill_third[11];
			if (wcscmp(fieldName, L"item_skill_third_13") == 0) return item_skill_third[12];
			if (wcscmp(fieldName, L"item_skill_third_14") == 0) return item_skill_third[13];
			if (wcscmp(fieldName, L"item_skill_third_15") == 0) return item_skill_third[14];
			if (wcscmp(fieldName, L"item_skill_third_16") == 0) return item_skill_third[15];
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id") == 0) return skill_build_up_parent_skill3_id;
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id_1") == 0) return skill_build_up_parent_skill3_id[0];
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id_2") == 0) return skill_build_up_parent_skill3_id[1];
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id_3") == 0) return skill_build_up_parent_skill3_id[2];
			if (wcscmp(fieldName, L"skill_build_up_level") == 0) return skill_build_up_level;
			if (wcscmp(fieldName, L"skill_build_up_level_1") == 0) return skill_build_up_level[0];
			if (wcscmp(fieldName, L"skill_build_up_level_2") == 0) return skill_build_up_level[1];
			if (wcscmp(fieldName, L"skill_build_up_level_3") == 0) return skill_build_up_level[2];
			if (wcscmp(fieldName, L"skill_modify_info_group") == 0) return skill_modify_info_group;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style);
			if (wcscmp(fieldName, L"item_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[0]));
			if (wcscmp(fieldName, L"item_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[1]));
			if (wcscmp(fieldName, L"item_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[2]));
			if (wcscmp(fieldName, L"item_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[3]));
			if (wcscmp(fieldName, L"item_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[4]));
			if (wcscmp(fieldName, L"item_skill_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[5]));
			if (wcscmp(fieldName, L"item_skill_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[6]));
			if (wcscmp(fieldName, L"item_skill_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[7]));
			if (wcscmp(fieldName, L"item_skill_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[8]));
			if (wcscmp(fieldName, L"item_skill_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[9]));
			if (wcscmp(fieldName, L"item_skill_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[10]));
			if (wcscmp(fieldName, L"item_skill_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[11]));
			if (wcscmp(fieldName, L"item_skill_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[12]));
			if (wcscmp(fieldName, L"item_skill_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[13]));
			if (wcscmp(fieldName, L"item_skill_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[14]));
			if (wcscmp(fieldName, L"item_skill_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill[15]));
			if (wcscmp(fieldName, L"item_skill_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[0]));
			if (wcscmp(fieldName, L"item_skill_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[1]));
			if (wcscmp(fieldName, L"item_skill_second_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[2]));
			if (wcscmp(fieldName, L"item_skill_second_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[3]));
			if (wcscmp(fieldName, L"item_skill_second_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[4]));
			if (wcscmp(fieldName, L"item_skill_second_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[5]));
			if (wcscmp(fieldName, L"item_skill_second_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[6]));
			if (wcscmp(fieldName, L"item_skill_second_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[7]));
			if (wcscmp(fieldName, L"item_skill_second_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[8]));
			if (wcscmp(fieldName, L"item_skill_second_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[9]));
			if (wcscmp(fieldName, L"item_skill_second_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[10]));
			if (wcscmp(fieldName, L"item_skill_second_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[11]));
			if (wcscmp(fieldName, L"item_skill_second_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[12]));
			if (wcscmp(fieldName, L"item_skill_second_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[13]));
			if (wcscmp(fieldName, L"item_skill_second_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[14]));
			if (wcscmp(fieldName, L"item_skill_second_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_second[15]));
			if (wcscmp(fieldName, L"item_skill_third_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[0]));
			if (wcscmp(fieldName, L"item_skill_third_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[1]));
			if (wcscmp(fieldName, L"item_skill_third_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[2]));
			if (wcscmp(fieldName, L"item_skill_third_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[3]));
			if (wcscmp(fieldName, L"item_skill_third_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[4]));
			if (wcscmp(fieldName, L"item_skill_third_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[5]));
			if (wcscmp(fieldName, L"item_skill_third_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[6]));
			if (wcscmp(fieldName, L"item_skill_third_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[7]));
			if (wcscmp(fieldName, L"item_skill_third_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[8]));
			if (wcscmp(fieldName, L"item_skill_third_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[9]));
			if (wcscmp(fieldName, L"item_skill_third_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[10]));
			if (wcscmp(fieldName, L"item_skill_third_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[11]));
			if (wcscmp(fieldName, L"item_skill_third_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[12]));
			if (wcscmp(fieldName, L"item_skill_third_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[13]));
			if (wcscmp(fieldName, L"item_skill_third_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[14]));
			if (wcscmp(fieldName, L"item_skill_third_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_skill_third[15]));
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_parent_skill3_id[0]));
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_parent_skill3_id[1]));
			if (wcscmp(fieldName, L"skill_build_up_parent_skill3_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_parent_skill3_id[2]));
			if (wcscmp(fieldName, L"skill_build_up_level_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_level[0]));
			if (wcscmp(fieldName, L"skill_build_up_level_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_level[1]));
			if (wcscmp(fieldName, L"skill_build_up_level_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_level[2]));
			if (wcscmp(fieldName, L"skill_modify_info_group") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_modify_info_group);

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
__int8 job_style;
std::wstring job_style_EnumValue() const {return Get_job_style_EnumValue(job_style);};
char Pad0[3];
Data::TableRef item_skill[16];
int item_skill_tableId(){return 208;};
Data::TableRef item_skill_second[16];
int item_skill_second_tableId(){return 208;};
Data::TableRef item_skill_third[16];
int item_skill_third_tableId(){return 208;};
__int32 skill_build_up_parent_skill3_id[3];
__int8 skill_build_up_level[3];
char Pad1[1];
Data::TableRef skill_modify_info_group;
int skill_modify_info_group_tableId(){return 340;};

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 187; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_combat_RecordPtr // : DrRecordPtr
	{
		item_combat_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_combat_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}