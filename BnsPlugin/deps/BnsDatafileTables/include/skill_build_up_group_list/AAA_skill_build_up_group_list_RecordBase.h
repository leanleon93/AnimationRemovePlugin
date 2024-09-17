/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_build_up_group_list_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skill_build_up_group") == 0) return skill_build_up_group;
			if (wcscmp(fieldName, L"skill_build_up_group_1") == 0) return skill_build_up_group[0];
			if (wcscmp(fieldName, L"skill_build_up_group_2") == 0) return skill_build_up_group[1];
			if (wcscmp(fieldName, L"skill_build_up_group_3") == 0) return skill_build_up_group[2];
			if (wcscmp(fieldName, L"skill_build_up_group_4") == 0) return skill_build_up_group[3];
			if (wcscmp(fieldName, L"skill_build_up_group_5") == 0) return skill_build_up_group[4];
			if (wcscmp(fieldName, L"skill_build_up_group_6") == 0) return skill_build_up_group[5];
			if (wcscmp(fieldName, L"skill_build_up_group_7") == 0) return skill_build_up_group[6];
			if (wcscmp(fieldName, L"skill_build_up_group_8") == 0) return skill_build_up_group[7];
			if (wcscmp(fieldName, L"skill_build_up_group_9") == 0) return skill_build_up_group[8];
			if (wcscmp(fieldName, L"skill_build_up_group_10") == 0) return skill_build_up_group[9];
			if (wcscmp(fieldName, L"skill_build_up_group_weight") == 0) return skill_build_up_group_weight;
			if (wcscmp(fieldName, L"skill_build_up_group_weight_1") == 0) return skill_build_up_group_weight[0];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_2") == 0) return skill_build_up_group_weight[1];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_3") == 0) return skill_build_up_group_weight[2];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_4") == 0) return skill_build_up_group_weight[3];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_5") == 0) return skill_build_up_group_weight[4];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_6") == 0) return skill_build_up_group_weight[5];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_7") == 0) return skill_build_up_group_weight[6];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_8") == 0) return skill_build_up_group_weight[7];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_9") == 0) return skill_build_up_group_weight[8];
			if (wcscmp(fieldName, L"skill_build_up_group_weight_10") == 0) return skill_build_up_group_weight[9];
			if (wcscmp(fieldName, L"skill_build_up_group_total_weight") == 0) return skill_build_up_group_total_weight;
			if (wcscmp(fieldName, L"skill_build_up_group_total_count") == 0) return skill_build_up_group_total_count;
			if (wcscmp(fieldName, L"draw_enable") == 0) return draw_enable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skill_build_up_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[0]));
			if (wcscmp(fieldName, L"skill_build_up_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[1]));
			if (wcscmp(fieldName, L"skill_build_up_group_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[2]));
			if (wcscmp(fieldName, L"skill_build_up_group_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[3]));
			if (wcscmp(fieldName, L"skill_build_up_group_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[4]));
			if (wcscmp(fieldName, L"skill_build_up_group_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[5]));
			if (wcscmp(fieldName, L"skill_build_up_group_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[6]));
			if (wcscmp(fieldName, L"skill_build_up_group_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[7]));
			if (wcscmp(fieldName, L"skill_build_up_group_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[8]));
			if (wcscmp(fieldName, L"skill_build_up_group_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group[9]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[0]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[1]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[2]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[3]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[4]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[5]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[6]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[7]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[8]));
			if (wcscmp(fieldName, L"skill_build_up_group_weight_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_build_up_group_weight[9]));
			if (wcscmp(fieldName, L"skill_build_up_group_total_weight") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_build_up_group_total_weight);
			if (wcscmp(fieldName, L"skill_build_up_group_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_build_up_group_total_count);
			if (wcscmp(fieldName, L"draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_enable);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef skill_build_up_group[10];
int skill_build_up_group_tableId(){return 328;};
__int16 skill_build_up_group_weight[10];
__int32 skill_build_up_group_total_weight;
__int8 skill_build_up_group_total_count;
bool draw_enable;

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 329; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_build_up_group_list_RecordPtr // : DrRecordPtr
	{
		skill_build_up_group_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_build_up_group_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}