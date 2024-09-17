/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_random_ability_section_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"variation_value_min") == 0) return variation_value_min;
			if (wcscmp(fieldName, L"variation_value_max") == 0) return variation_value_max;
			if (wcscmp(fieldName, L"variation_value_with_special_item_min") == 0) return variation_value_with_special_item_min;
			if (wcscmp(fieldName, L"variation_value_with_special_item_max") == 0) return variation_value_with_special_item_max;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"variation_value_min") == 0) return Data::AnyFieldToStringConverter::ToString(&variation_value_min);
			if (wcscmp(fieldName, L"variation_value_max") == 0) return Data::AnyFieldToStringConverter::ToString(&variation_value_max);
			if (wcscmp(fieldName, L"variation_value_with_special_item_min") == 0) return Data::AnyFieldToStringConverter::ToString(&variation_value_with_special_item_min);
			if (wcscmp(fieldName, L"variation_value_with_special_item_max") == 0) return Data::AnyFieldToStringConverter::ToString(&variation_value_with_special_item_max);

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
__int32 variation_value_min;
__int32 variation_value_max;
__int32 variation_value_with_special_item_min;
__int32 variation_value_with_special_item_max;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 204; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_random_ability_section_RecordPtr // : DrRecordPtr
	{
		item_random_ability_section_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_random_ability_section_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}