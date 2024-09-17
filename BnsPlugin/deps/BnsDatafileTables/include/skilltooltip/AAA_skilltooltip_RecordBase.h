/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skilltooltip_Record : DrEl
	{
	private:
		static std::wstring Get_tooltip_group_EnumValue(__int8 value);
		static std::wstring Get_ect_order_EnumValue(__int8 value);
		static std::wstring Get_ect_order_english_EnumValue(__int8 value);
		static std::wstring Get_ect_order_french_EnumValue(__int8 value);
		static std::wstring Get_ect_order_german_EnumValue(__int8 value);
		static std::wstring Get_ect_order_russian_EnumValue(__int8 value);
		static std::wstring Get_ect_order_bportuguese_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"skill") == 0) return skill;
			if (wcscmp(fieldName, L"tooltip_group") == 0) return tooltip_group;
			if (wcscmp(fieldName, L"ect_order") == 0) return ect_order;
			if (wcscmp(fieldName, L"ect_order_english") == 0) return ect_order_english;
			if (wcscmp(fieldName, L"ect_order_french") == 0) return ect_order_french;
			if (wcscmp(fieldName, L"ect_order_german") == 0) return ect_order_german;
			if (wcscmp(fieldName, L"ect_order_russian") == 0) return ect_order_russian;
			if (wcscmp(fieldName, L"ect_order_bportuguese") == 0) return ect_order_bportuguese;
			if (wcscmp(fieldName, L"effect_attribute") == 0) return effect_attribute;
			if (wcscmp(fieldName, L"effect_arg") == 0) return effect_arg;
			if (wcscmp(fieldName, L"effect_arg_1") == 0) return effect_arg[0];
			if (wcscmp(fieldName, L"effect_arg_2") == 0) return effect_arg[1];
			if (wcscmp(fieldName, L"effect_arg_3") == 0) return effect_arg[2];
			if (wcscmp(fieldName, L"effect_arg_4") == 0) return effect_arg[3];
			if (wcscmp(fieldName, L"condition_attribute") == 0) return condition_attribute;
			if (wcscmp(fieldName, L"condition_arg") == 0) return condition_arg;
			if (wcscmp(fieldName, L"condition_arg_1") == 0) return condition_arg[0];
			if (wcscmp(fieldName, L"condition_arg_2") == 0) return condition_arg[1];
			if (wcscmp(fieldName, L"target_attribute") == 0) return target_attribute;
			if (wcscmp(fieldName, L"before_stance_attribute") == 0) return before_stance_attribute;
			if (wcscmp(fieldName, L"after_stance_attribute") == 0) return after_stance_attribute;
			if (wcscmp(fieldName, L"default_text") == 0) return default_text;
			if (wcscmp(fieldName, L"attribute_color_text") == 0) return attribute_color_text;
			if (wcscmp(fieldName, L"skill_modify_diff_repeat_count") == 0) return skill_modify_diff_repeat_count;
			if (wcscmp(fieldName, L"skill_attack_attribute_coefficient_percent") == 0) return skill_attack_attribute_coefficient_percent;
			if (wcscmp(fieldName, L"item_default_text") == 0) return item_default_text;
			if (wcscmp(fieldName, L"item_replace_text") == 0) return item_replace_text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"skill") == 0) return Data::AnyFieldToStringConverter::ToString(&skill);
			if (wcscmp(fieldName, L"tooltip_group") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip_group);
			if (wcscmp(fieldName, L"ect_order") == 0) return Data::AnyFieldToStringConverter::ToString(&ect_order);
			if (wcscmp(fieldName, L"ect_order_english") == 0) return Data::AnyFieldToStringConverter::ToString(&ect_order_english);
			if (wcscmp(fieldName, L"ect_order_french") == 0) return Data::AnyFieldToStringConverter::ToString(&ect_order_french);
			if (wcscmp(fieldName, L"ect_order_german") == 0) return Data::AnyFieldToStringConverter::ToString(&ect_order_german);
			if (wcscmp(fieldName, L"ect_order_russian") == 0) return Data::AnyFieldToStringConverter::ToString(&ect_order_russian);
			if (wcscmp(fieldName, L"ect_order_bportuguese") == 0) return Data::AnyFieldToStringConverter::ToString(&ect_order_bportuguese);
			if (wcscmp(fieldName, L"effect_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_attribute);
			if (wcscmp(fieldName, L"effect_arg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_arg[0]));
			if (wcscmp(fieldName, L"effect_arg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_arg[1]));
			if (wcscmp(fieldName, L"effect_arg_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_arg[2]));
			if (wcscmp(fieldName, L"effect_arg_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_arg[3]));
			if (wcscmp(fieldName, L"condition_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_attribute);
			if (wcscmp(fieldName, L"condition_arg_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_arg[0]));
			if (wcscmp(fieldName, L"condition_arg_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_arg[1]));
			if (wcscmp(fieldName, L"target_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&target_attribute);
			if (wcscmp(fieldName, L"before_stance_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&before_stance_attribute);
			if (wcscmp(fieldName, L"after_stance_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&after_stance_attribute);
			if (wcscmp(fieldName, L"default_text") == 0) return Data::AnyFieldToStringConverter::ToString(&default_text);
			if (wcscmp(fieldName, L"attribute_color_text") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_color_text);
			if (wcscmp(fieldName, L"skill_modify_diff_repeat_count") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_modify_diff_repeat_count);
			if (wcscmp(fieldName, L"skill_attack_attribute_coefficient_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_attack_attribute_coefficient_percent);
			if (wcscmp(fieldName, L"item_default_text") == 0) return Data::AnyFieldToStringConverter::ToString(&item_default_text);
			if (wcscmp(fieldName, L"item_replace_text") == 0) return Data::AnyFieldToStringConverter::ToString(&item_replace_text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			for (int i = 0; i < 4; i++) {
				if (reinterpret_cast<std::uintptr_t>(effect_arg[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_arg[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_arg[i]));
			}
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(condition_arg[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) condition_arg[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(condition_arg[i]));
			}
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef skill;
int skill_tableId(){return 324;};
__int8 tooltip_group;
std::wstring tooltip_group_EnumValue() const {return Get_tooltip_group_EnumValue(tooltip_group);};
__int8 ect_order;
std::wstring ect_order_EnumValue() const {return Get_ect_order_EnumValue(ect_order);};
__int8 ect_order_english;
std::wstring ect_order_english_EnumValue() const {return Get_ect_order_english_EnumValue(ect_order_english);};
__int8 ect_order_french;
std::wstring ect_order_french_EnumValue() const {return Get_ect_order_french_EnumValue(ect_order_french);};
__int8 ect_order_german;
std::wstring ect_order_german_EnumValue() const {return Get_ect_order_german_EnumValue(ect_order_german);};
__int8 ect_order_russian;
std::wstring ect_order_russian_EnumValue() const {return Get_ect_order_russian_EnumValue(ect_order_russian);};
__int8 ect_order_bportuguese;
std::wstring ect_order_bportuguese_EnumValue() const {return Get_ect_order_bportuguese_EnumValue(ect_order_bportuguese);};
char Pad0[1];
Data::TableRef effect_attribute;
int effect_attribute_tableId(){return 350;};
wchar_t* effect_arg[4];
Data::TableRef condition_attribute;
int condition_attribute_tableId(){return 350;};
wchar_t* condition_arg[2];
Data::TableRef target_attribute;
int target_attribute_tableId(){return 350;};
Data::TableRef before_stance_attribute;
int before_stance_attribute_tableId(){return 350;};
Data::TableRef after_stance_attribute;
int after_stance_attribute_tableId(){return 350;};
Data::TableRef default_text;
int default_text_tableId(){return 405;};
Data::TableRef attribute_color_text;
int attribute_color_text_tableId(){return 405;};
__int8 skill_modify_diff_repeat_count;
char Pad1[1];
__int16 skill_attack_attribute_coefficient_percent;
Data::TableRef item_default_text;
int item_default_text_tableId(){return 405;};
Data::TableRef item_replace_text;
int item_replace_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 15); }
		static __int16 TableId() { return 351; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltooltip_RecordPtr // : DrRecordPtr
	{
		skilltooltip_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilltooltip_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}