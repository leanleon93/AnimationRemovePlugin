/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemexchange_Record : DrEl
	{
	private:
		static std::wstring Get_rule_usage_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"rule_usage") == 0) return rule_usage;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_4") == 0) return required_item[3];
			if (wcscmp(fieldName, L"required_item_min_level") == 0) return required_item_min_level;
			if (wcscmp(fieldName, L"required_item_min_level_1") == 0) return required_item_min_level[0];
			if (wcscmp(fieldName, L"required_item_min_level_2") == 0) return required_item_min_level[1];
			if (wcscmp(fieldName, L"required_item_min_level_3") == 0) return required_item_min_level[2];
			if (wcscmp(fieldName, L"required_item_min_level_4") == 0) return required_item_min_level[3];
			if (wcscmp(fieldName, L"required_item_stack_count") == 0) return required_item_stack_count;
			if (wcscmp(fieldName, L"required_item_stack_count_1") == 0) return required_item_stack_count[0];
			if (wcscmp(fieldName, L"required_item_stack_count_2") == 0) return required_item_stack_count[1];
			if (wcscmp(fieldName, L"required_item_stack_count_3") == 0) return required_item_stack_count[2];
			if (wcscmp(fieldName, L"required_item_stack_count_4") == 0) return required_item_stack_count[3];
			if (wcscmp(fieldName, L"normal_item") == 0) return normal_item;
			if (wcscmp(fieldName, L"normal_item_1") == 0) return normal_item[0];
			if (wcscmp(fieldName, L"normal_item_2") == 0) return normal_item[1];
			if (wcscmp(fieldName, L"normal_item_3") == 0) return normal_item[2];
			if (wcscmp(fieldName, L"normal_item_4") == 0) return normal_item[3];
			if (wcscmp(fieldName, L"normal_item_stack_count") == 0) return normal_item_stack_count;
			if (wcscmp(fieldName, L"normal_item_stack_count_1") == 0) return normal_item_stack_count[0];
			if (wcscmp(fieldName, L"normal_item_stack_count_2") == 0) return normal_item_stack_count[1];
			if (wcscmp(fieldName, L"normal_item_stack_count_3") == 0) return normal_item_stack_count[2];
			if (wcscmp(fieldName, L"normal_item_stack_count_4") == 0) return normal_item_stack_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"rule_usage") == 0) return Data::AnyFieldToStringConverter::ToString(&rule_usage);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[3]));
			if (wcscmp(fieldName, L"required_item_min_level_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_min_level[0]));
			if (wcscmp(fieldName, L"required_item_min_level_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_min_level[1]));
			if (wcscmp(fieldName, L"required_item_min_level_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_min_level[2]));
			if (wcscmp(fieldName, L"required_item_min_level_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_min_level[3]));
			if (wcscmp(fieldName, L"required_item_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_stack_count[0]));
			if (wcscmp(fieldName, L"required_item_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_stack_count[1]));
			if (wcscmp(fieldName, L"required_item_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_stack_count[2]));
			if (wcscmp(fieldName, L"required_item_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_stack_count[3]));
			if (wcscmp(fieldName, L"normal_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item[0]));
			if (wcscmp(fieldName, L"normal_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item[1]));
			if (wcscmp(fieldName, L"normal_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item[2]));
			if (wcscmp(fieldName, L"normal_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item[3]));
			if (wcscmp(fieldName, L"normal_item_stack_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item_stack_count[0]));
			if (wcscmp(fieldName, L"normal_item_stack_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item_stack_count[1]));
			if (wcscmp(fieldName, L"normal_item_stack_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item_stack_count[2]));
			if (wcscmp(fieldName, L"normal_item_stack_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(normal_item_stack_count[3]));

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
__int8 rule_usage;
std::wstring rule_usage_EnumValue() const {return Get_rule_usage_EnumValue(rule_usage);};
char Pad0[3];
Data::ExplicitTableRef required_item[4];
__int8 required_item_min_level[4];
__int16 required_item_stack_count[4];
Data::TableRef normal_item[4];
int normal_item_tableId(){return 189;};
__int16 normal_item_stack_count[4];

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 191; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemexchange_RecordPtr // : DrRecordPtr
	{
		itemexchange_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemexchange_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}