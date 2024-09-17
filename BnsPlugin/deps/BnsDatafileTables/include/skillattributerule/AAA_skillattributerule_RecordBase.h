/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillattributerule_Record : DrEl
	{
	private:
		static std::wstring Get_attribute_EnumValue(__int8 value);
		static std::wstring Get_block_caster_flag_EnumValue(__int16 value);
		static std::wstring Get_target_flag_EnumValue(__int16 value);
		static std::wstring Get_dir_EnumValue(__int8 value);
		static std::wstring Get_auto_skill_result_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"block_caster_flag") == 0) return block_caster_flag;
			if (wcscmp(fieldName, L"block_caster_flag_1") == 0) return block_caster_flag[0];
			if (wcscmp(fieldName, L"block_caster_flag_2") == 0) return block_caster_flag[1];
			if (wcscmp(fieldName, L"block_caster_flag_3") == 0) return block_caster_flag[2];
			if (wcscmp(fieldName, L"block_caster_flag_4") == 0) return block_caster_flag[3];
			if (wcscmp(fieldName, L"target_flag") == 0) return target_flag;
			if (wcscmp(fieldName, L"target_flag_1") == 0) return target_flag[0];
			if (wcscmp(fieldName, L"target_flag_2") == 0) return target_flag[1];
			if (wcscmp(fieldName, L"target_flag_3") == 0) return target_flag[2];
			if (wcscmp(fieldName, L"target_flag_4") == 0) return target_flag[3];
			if (wcscmp(fieldName, L"target_flag_5") == 0) return target_flag[4];
			if (wcscmp(fieldName, L"target_flag_6") == 0) return target_flag[5];
			if (wcscmp(fieldName, L"target_flag_7") == 0) return target_flag[6];
			if (wcscmp(fieldName, L"target_flag_8") == 0) return target_flag[7];
			if (wcscmp(fieldName, L"dir") == 0) return dir;
			if (wcscmp(fieldName, L"dir_1") == 0) return dir[0];
			if (wcscmp(fieldName, L"dir_2") == 0) return dir[1];
			if (wcscmp(fieldName, L"dir_3") == 0) return dir[2];
			if (wcscmp(fieldName, L"dir_4") == 0) return dir[3];
			if (wcscmp(fieldName, L"dir_5") == 0) return dir[4];
			if (wcscmp(fieldName, L"dir_6") == 0) return dir[5];
			if (wcscmp(fieldName, L"dir_7") == 0) return dir[6];
			if (wcscmp(fieldName, L"dir_8") == 0) return dir[7];
			if (wcscmp(fieldName, L"auto_skill_result") == 0) return auto_skill_result;
			if (wcscmp(fieldName, L"auto_skill_result_1") == 0) return auto_skill_result[0];
			if (wcscmp(fieldName, L"auto_skill_result_2") == 0) return auto_skill_result[1];
			if (wcscmp(fieldName, L"auto_skill_result_3") == 0) return auto_skill_result[2];
			if (wcscmp(fieldName, L"auto_skill_result_4") == 0) return auto_skill_result[3];
			if (wcscmp(fieldName, L"auto_skill_result_5") == 0) return auto_skill_result[4];
			if (wcscmp(fieldName, L"auto_skill_result_6") == 0) return auto_skill_result[5];
			if (wcscmp(fieldName, L"auto_skill_result_7") == 0) return auto_skill_result[6];
			if (wcscmp(fieldName, L"auto_skill_result_8") == 0) return auto_skill_result[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"block_caster_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_caster_flag[0]));
			if (wcscmp(fieldName, L"block_caster_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_caster_flag[1]));
			if (wcscmp(fieldName, L"block_caster_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_caster_flag[2]));
			if (wcscmp(fieldName, L"block_caster_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(block_caster_flag[3]));
			if (wcscmp(fieldName, L"target_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[0]));
			if (wcscmp(fieldName, L"target_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[1]));
			if (wcscmp(fieldName, L"target_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[2]));
			if (wcscmp(fieldName, L"target_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[3]));
			if (wcscmp(fieldName, L"target_flag_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[4]));
			if (wcscmp(fieldName, L"target_flag_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[5]));
			if (wcscmp(fieldName, L"target_flag_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[6]));
			if (wcscmp(fieldName, L"target_flag_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_flag[7]));
			if (wcscmp(fieldName, L"dir_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[0]));
			if (wcscmp(fieldName, L"dir_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[1]));
			if (wcscmp(fieldName, L"dir_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[2]));
			if (wcscmp(fieldName, L"dir_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[3]));
			if (wcscmp(fieldName, L"dir_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[4]));
			if (wcscmp(fieldName, L"dir_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[5]));
			if (wcscmp(fieldName, L"dir_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[6]));
			if (wcscmp(fieldName, L"dir_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(dir[7]));
			if (wcscmp(fieldName, L"auto_skill_result_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[0]));
			if (wcscmp(fieldName, L"auto_skill_result_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[1]));
			if (wcscmp(fieldName, L"auto_skill_result_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[2]));
			if (wcscmp(fieldName, L"auto_skill_result_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[3]));
			if (wcscmp(fieldName, L"auto_skill_result_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[4]));
			if (wcscmp(fieldName, L"auto_skill_result_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[5]));
			if (wcscmp(fieldName, L"auto_skill_result_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[6]));
			if (wcscmp(fieldName, L"auto_skill_result_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(auto_skill_result[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 attribute;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 block_caster_flag[4];
std::wstring block_caster_flag_EnumValue(int index) const {return Get_block_caster_flag_EnumValue(block_caster_flag[index]);};
__int16 target_flag[8];
std::wstring target_flag_EnumValue(int index) const {return Get_target_flag_EnumValue(target_flag[index]);};
__int8 dir[8];
std::wstring dir_EnumValue(int index) const {return Get_dir_EnumValue(dir[index]);};
__int8 auto_skill_result[8];
std::wstring auto_skill_result_EnumValue(int index) const {return Get_auto_skill_result_EnumValue(auto_skill_result[index]);};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 326; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillattributerule_RecordPtr // : DrRecordPtr
	{
		skillattributerule_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillattributerule_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}