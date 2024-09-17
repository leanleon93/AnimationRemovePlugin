/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct custom_dress_design_cost_Record : DrEl
	{
	private:
		static std::wstring Get_item_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"order") == 0) return order;
			if (wcscmp(fieldName, L"usable") == 0) return usable;
			if (wcscmp(fieldName, L"reset_design") == 0) return reset_design;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return required_item_count[2];
			if (wcscmp(fieldName, L"required_money_cost") == 0) return required_money_cost;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"order") == 0) return Data::AnyFieldToStringConverter::ToString(&order);
			if (wcscmp(fieldName, L"usable") == 0) return Data::AnyFieldToStringConverter::ToString(&usable);
			if (wcscmp(fieldName, L"reset_design") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_design);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[2]));
			if (wcscmp(fieldName, L"required_money_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&required_money_cost);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 item_type;
__int8 customize_id;
__int8 resource_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad0[2];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
__int32 order;
bool usable;
bool reset_design;
char Pad1[2];
Data::TableRef required_item[3];
int required_item_tableId(){return 189;};
__int16 required_item_count[3];
char Pad2[2];
__int32 required_money_cost;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 85; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_cost_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::custom_dress_design_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}