/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fish_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"fish_grade") == 0) return fish_grade;
			if (wcscmp(fieldName, L"size_min") == 0) return size_min;
			if (wcscmp(fieldName, L"size_max") == 0) return size_max;
			if (wcscmp(fieldName, L"acquire_life_contents_point") == 0) return acquire_life_contents_point;
			if (wcscmp(fieldName, L"reduce_life_contents_cq_amount") == 0) return reduce_life_contents_cq_amount;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"mesh") == 0) return mesh;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"col") == 0) return col;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"sort_num") == 0) return sort_num;
			if (wcscmp(fieldName, L"hide") == 0) return hide;
			if (wcscmp(fieldName, L"fishing_field_group") == 0) return fishing_field_group;
			if (wcscmp(fieldName, L"fishing_field_group_1") == 0) return fishing_field_group[0];
			if (wcscmp(fieldName, L"fishing_field_group_2") == 0) return fishing_field_group[1];
			if (wcscmp(fieldName, L"fishing_field_group_3") == 0) return fishing_field_group[2];
			if (wcscmp(fieldName, L"fishing_field_group_4") == 0) return fishing_field_group[3];
			if (wcscmp(fieldName, L"fishing_field_group_5") == 0) return fishing_field_group[4];
			if (wcscmp(fieldName, L"fishing_field_group_6") == 0) return fishing_field_group[5];
			if (wcscmp(fieldName, L"fishing_field_group_7") == 0) return fishing_field_group[6];
			if (wcscmp(fieldName, L"fishing_field_group_8") == 0) return fishing_field_group[7];
			if (wcscmp(fieldName, L"fishing_field_group_9") == 0) return fishing_field_group[8];
			if (wcscmp(fieldName, L"fishing_field_group_10") == 0) return fishing_field_group[9];
			if (wcscmp(fieldName, L"fishing_field_group_11") == 0) return fishing_field_group[10];
			if (wcscmp(fieldName, L"fishing_field_group_12") == 0) return fishing_field_group[11];
			if (wcscmp(fieldName, L"fishing_field_group_13") == 0) return fishing_field_group[12];
			if (wcscmp(fieldName, L"fishing_field_group_14") == 0) return fishing_field_group[13];
			if (wcscmp(fieldName, L"fishing_field_group_15") == 0) return fishing_field_group[14];
			if (wcscmp(fieldName, L"fishing_field_group_16") == 0) return fishing_field_group[15];
			if (wcscmp(fieldName, L"fishing_field_group_17") == 0) return fishing_field_group[16];
			if (wcscmp(fieldName, L"fishing_field_group_18") == 0) return fishing_field_group[17];
			if (wcscmp(fieldName, L"fishing_field_group_19") == 0) return fishing_field_group[18];
			if (wcscmp(fieldName, L"fishing_field_group_20") == 0) return fishing_field_group[19];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"fish_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&fish_grade);
			if (wcscmp(fieldName, L"size_min") == 0) return Data::AnyFieldToStringConverter::ToString(&size_min);
			if (wcscmp(fieldName, L"size_max") == 0) return Data::AnyFieldToStringConverter::ToString(&size_max);
			if (wcscmp(fieldName, L"acquire_life_contents_point") == 0) return Data::AnyFieldToStringConverter::ToString(&acquire_life_contents_point);
			if (wcscmp(fieldName, L"reduce_life_contents_cq_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&reduce_life_contents_cq_amount);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"col") == 0) return Data::AnyFieldToStringConverter::ToString(&col);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"sort_num") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_num);
			if (wcscmp(fieldName, L"hide") == 0) return Data::AnyFieldToStringConverter::ToString(&hide);
			if (wcscmp(fieldName, L"fishing_field_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[0]));
			if (wcscmp(fieldName, L"fishing_field_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[1]));
			if (wcscmp(fieldName, L"fishing_field_group_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[2]));
			if (wcscmp(fieldName, L"fishing_field_group_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[3]));
			if (wcscmp(fieldName, L"fishing_field_group_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[4]));
			if (wcscmp(fieldName, L"fishing_field_group_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[5]));
			if (wcscmp(fieldName, L"fishing_field_group_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[6]));
			if (wcscmp(fieldName, L"fishing_field_group_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[7]));
			if (wcscmp(fieldName, L"fishing_field_group_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[8]));
			if (wcscmp(fieldName, L"fishing_field_group_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[9]));
			if (wcscmp(fieldName, L"fishing_field_group_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[10]));
			if (wcscmp(fieldName, L"fishing_field_group_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[11]));
			if (wcscmp(fieldName, L"fishing_field_group_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[12]));
			if (wcscmp(fieldName, L"fishing_field_group_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[13]));
			if (wcscmp(fieldName, L"fishing_field_group_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[14]));
			if (wcscmp(fieldName, L"fishing_field_group_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[15]));
			if (wcscmp(fieldName, L"fishing_field_group_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[16]));
			if (wcscmp(fieldName, L"fishing_field_group_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[17]));
			if (wcscmp(fieldName, L"fishing_field_group_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[18]));
			if (wcscmp(fieldName, L"fishing_field_group_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field_group[19]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh));
			if (reinterpret_cast<std::uintptr_t>(col) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) col = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(col));
			if (reinterpret_cast<std::uintptr_t>(desc) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) desc = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(desc));
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
__int8 fish_grade;
char Pad0[3];
__int32 size_min;
__int32 size_max;
__int16 acquire_life_contents_point;
__int8 reduce_life_contents_cq_amount;
char Pad1[1];
Data::TableRef name;
int name_tableId(){return 405;};
wchar_t* mesh;
Data::IconRef icon;
wchar_t* col;
wchar_t* desc;
__int16 sort_num;
bool hide;
char Pad2[1];
Data::TableRef fishing_field_group[20];
int fishing_field_group_tableId(){return 145;};

		static TableVersion Version() { return TableVersion(0, 17); }
		static __int16 TableId() { return 142; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fish_RecordPtr // : DrRecordPtr
	{
		fish_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fish_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}