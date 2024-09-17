/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct custom_dress_design_type_info_Record : DrEl
	{
	private:
		static std::wstring Get_item_type_EnumValue(__int8 value);
		static std::wstring Get_design_type_EnumValue(__int8 value);
		static std::wstring Get_customize_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"design_type") == 0) return design_type;
			if (wcscmp(fieldName, L"customize_category") == 0) return customize_category;
			if (wcscmp(fieldName, L"price_ref") == 0) return price_ref;
			if (wcscmp(fieldName, L"min_value") == 0) return min_value;
			if (wcscmp(fieldName, L"max_value") == 0) return max_value;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"desc") == 0) return desc;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"design_type") == 0) return Data::AnyFieldToStringConverter::ToString(&design_type);
			if (wcscmp(fieldName, L"customize_category") == 0) return Data::AnyFieldToStringConverter::ToString(&customize_category);
			if (wcscmp(fieldName, L"price_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&price_ref);
			if (wcscmp(fieldName, L"min_value") == 0) return Data::AnyFieldToStringConverter::ToString(&min_value);
			if (wcscmp(fieldName, L"max_value") == 0) return Data::AnyFieldToStringConverter::ToString(&max_value);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);

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

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 design_type;
std::wstring design_type_EnumValue() const {return Get_design_type_EnumValue(design_type);};
__int8 customize_category;
std::wstring customize_category_EnumValue() const {return Get_customize_category_EnumValue(customize_category);};
char Pad0[2];
Data::TableRef price_ref;
int price_ref_tableId(){return 86;};
__int8 min_value;
__int8 max_value;
char Pad1[2];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 86; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) custom_dress_design_type_info_RecordPtr // : DrRecordPtr
	{
		custom_dress_design_type_info_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::custom_dress_design_type_info_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}