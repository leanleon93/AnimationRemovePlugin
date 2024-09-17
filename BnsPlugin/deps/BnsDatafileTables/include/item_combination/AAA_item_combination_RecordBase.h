/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_combination_Record : DrEl
	{
	private:
		static std::wstring Get_item_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item_type") == 0) return item_type;
			if (wcscmp(fieldName, L"count") == 0) return count;
			if (wcscmp(fieldName, L"material_group") == 0) return material_group;
			if (wcscmp(fieldName, L"material_group_name") == 0) return material_group_name;
			if (wcscmp(fieldName, L"item_combination_cost_group") == 0) return item_combination_cost_group;
			if (wcscmp(fieldName, L"reward_group_name") == 0) return reward_group_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item_type") == 0) return Data::AnyFieldToStringConverter::ToString(&item_type);
			if (wcscmp(fieldName, L"count") == 0) return Data::AnyFieldToStringConverter::ToString(&count);
			if (wcscmp(fieldName, L"material_group") == 0) return Data::AnyFieldToStringConverter::ToString(&material_group);
			if (wcscmp(fieldName, L"material_group_name") == 0) return Data::AnyFieldToStringConverter::ToString(&material_group_name);
			if (wcscmp(fieldName, L"item_combination_cost_group") == 0) return Data::AnyFieldToStringConverter::ToString(&item_combination_cost_group);
			if (wcscmp(fieldName, L"reward_group_name") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_group_name);

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
__int8 item_type;
std::wstring item_type_EnumValue() const {return Get_item_type_EnumValue(item_type);};
char Pad0[3];
__int32 count;
Data::TableRef material_group;
int material_group_tableId(){return 196;};
Data::TableRef material_group_name;
int material_group_name_tableId(){return 405;};
Data::TableRef item_combination_cost_group;
int item_combination_cost_group_tableId(){return 76;};
Data::TableRef reward_group_name;
int reward_group_name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 188; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_combination_RecordPtr // : DrRecordPtr
	{
		item_combination_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_combination_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}