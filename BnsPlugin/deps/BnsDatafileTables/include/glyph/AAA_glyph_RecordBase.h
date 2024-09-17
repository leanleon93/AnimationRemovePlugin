/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct glyph_Record : DrEl
	{
	private:
		static std::wstring Get_glyph_type_EnumValue(__int8 value);
		static std::wstring Get_color_EnumValue(__int8 value);
		static std::wstring Get_condition_event_type_EnumValue(__int8 value);
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"glyph_type") == 0) return glyph_type;
			if (wcscmp(fieldName, L"color") == 0) return color;
			if (wcscmp(fieldName, L"grade") == 0) return grade;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"is_representative") == 0) return is_representative;
			if (wcscmp(fieldName, L"condition_event") == 0) return condition_event;
			if (wcscmp(fieldName, L"condition_event_type") == 0) return condition_event_type;
			if (wcscmp(fieldName, L"condition_event_min") == 0) return condition_event_min;
			if (wcscmp(fieldName, L"condition_event_max") == 0) return condition_event_max;
			if (wcscmp(fieldName, L"flavor_text") == 0) return flavor_text;
			if (wcscmp(fieldName, L"reward_tier") == 0) return reward_tier;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_4") == 0) return ability[3];
			if (wcscmp(fieldName, L"ability_5") == 0) return ability[4];
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"ability_value_1") == 0) return ability_value[0];
			if (wcscmp(fieldName, L"ability_value_2") == 0) return ability_value[1];
			if (wcscmp(fieldName, L"ability_value_3") == 0) return ability_value[2];
			if (wcscmp(fieldName, L"ability_value_4") == 0) return ability_value[3];
			if (wcscmp(fieldName, L"ability_value_5") == 0) return ability_value[4];
			if (wcscmp(fieldName, L"ability_id") == 0) return ability_id;
			if (wcscmp(fieldName, L"dungeon_condition") == 0) return dungeon_condition;
			if (wcscmp(fieldName, L"group_id") == 0) return group_id;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"glyph_type") == 0) return Data::AnyFieldToStringConverter::ToString(&glyph_type);
			if (wcscmp(fieldName, L"color") == 0) return Data::AnyFieldToStringConverter::ToString(&color);
			if (wcscmp(fieldName, L"grade") == 0) return Data::AnyFieldToStringConverter::ToString(&grade);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"is_representative") == 0) return Data::AnyFieldToStringConverter::ToString(&is_representative);
			if (wcscmp(fieldName, L"condition_event") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_event);
			if (wcscmp(fieldName, L"condition_event_type") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_event_type);
			if (wcscmp(fieldName, L"condition_event_min") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_event_min);
			if (wcscmp(fieldName, L"condition_event_max") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_event_max);
			if (wcscmp(fieldName, L"flavor_text") == 0) return Data::AnyFieldToStringConverter::ToString(&flavor_text);
			if (wcscmp(fieldName, L"reward_tier") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_tier);
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[3]));
			if (wcscmp(fieldName, L"ability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[4]));
			if (wcscmp(fieldName, L"ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[0]));
			if (wcscmp(fieldName, L"ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[1]));
			if (wcscmp(fieldName, L"ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[2]));
			if (wcscmp(fieldName, L"ability_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[3]));
			if (wcscmp(fieldName, L"ability_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[4]));
			if (wcscmp(fieldName, L"ability_id") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_id);
			if (wcscmp(fieldName, L"dungeon_condition") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_condition);
			if (wcscmp(fieldName, L"group_id") == 0) return Data::AnyFieldToStringConverter::ToString(&group_id);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef name;
int name_tableId(){return 405;};
__int8 glyph_type;
std::wstring glyph_type_EnumValue() const {return Get_glyph_type_EnumValue(glyph_type);};
__int8 color;
std::wstring color_EnumValue() const {return Get_color_EnumValue(color);};
__int8 grade;
char Pad0[1];
Data::IconRef icon;
bool is_representative;
char Pad1[3];
Data::TableRef condition_event;
int condition_event_tableId(){return 62;};
__int8 condition_event_type;
std::wstring condition_event_type_EnumValue() const {return Get_condition_event_type_EnumValue(condition_event_type);};
char Pad2[3];
Data::TableRef condition_event_min;
int condition_event_min_tableId(){return 62;};
Data::TableRef condition_event_max;
int condition_event_max_tableId(){return 62;};
Data::TableRef flavor_text;
int flavor_text_tableId(){return 405;};
__int8 reward_tier;
__int8 ability[5];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
char Pad3[2];
__int32 ability_value[5];
__int16 ability_id;
char Pad4[2];
Data::TableRef dungeon_condition;
int dungeon_condition_tableId(){return 141;};
__int16 group_id;

		static TableVersion Version() { return TableVersion(7, 0); }
		static __int16 TableId() { return 153; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_RecordPtr // : DrRecordPtr
	{
		glyph_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::glyph_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}