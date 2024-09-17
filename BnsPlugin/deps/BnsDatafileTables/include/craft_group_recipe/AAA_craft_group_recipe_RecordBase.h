/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_group_recipe_Record : DrEl
	{
	private:
		static std::wstring Get_craft_union_type_EnumValue(__int8 value);
		static std::wstring Get_craft_union_sub_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group_item") == 0) return group_item;
			if (wcscmp(fieldName, L"craft_union_type") == 0) return craft_union_type;
			if (wcscmp(fieldName, L"craft_union_sub_type") == 0) return craft_union_sub_type;
			if (wcscmp(fieldName, L"display_index") == 0) return display_index;
			if (wcscmp(fieldName, L"required_craft_exp") == 0) return required_craft_exp;
			if (wcscmp(fieldName, L"required_completion_quest") == 0) return required_completion_quest;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group_item") == 0) return Data::AnyFieldToStringConverter::ToString(&group_item);
			if (wcscmp(fieldName, L"craft_union_type") == 0) return Data::AnyFieldToStringConverter::ToString(&craft_union_type);
			if (wcscmp(fieldName, L"craft_union_sub_type") == 0) return Data::AnyFieldToStringConverter::ToString(&craft_union_sub_type);
			if (wcscmp(fieldName, L"display_index") == 0) return Data::AnyFieldToStringConverter::ToString(&display_index);
			if (wcscmp(fieldName, L"required_craft_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&required_craft_exp);
			if (wcscmp(fieldName, L"required_completion_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&required_completion_quest);

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
Data::TableRef group_item;
int group_item_tableId(){return 189;};
__int8 craft_union_type;
std::wstring craft_union_type_EnumValue() const {return Get_craft_union_type_EnumValue(craft_union_type);};
__int8 craft_union_sub_type;
std::wstring craft_union_sub_type_EnumValue() const {return Get_craft_union_sub_type_EnumValue(craft_union_sub_type);};
__int16 display_index;
__int16 required_craft_exp;
char Pad0[2];
Data::TableRef required_completion_quest;
int required_completion_quest_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 80; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_group_recipe_RecordPtr // : DrRecordPtr
	{
		craft_group_recipe_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_group_recipe_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}