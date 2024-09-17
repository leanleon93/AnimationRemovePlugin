/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_improve_option_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_description") == 0) return effect_description;
			if (wcscmp(fieldName, L"skill_modify_info_group") == 0) return skill_modify_info_group;
			if (wcscmp(fieldName, L"skill_modify_info_group_1") == 0) return skill_modify_info_group[0];
			if (wcscmp(fieldName, L"skill_modify_info_group_2") == 0) return skill_modify_info_group[1];
			if (wcscmp(fieldName, L"skill_modify_info_group_3") == 0) return skill_modify_info_group[2];
			if (wcscmp(fieldName, L"skill_modify_info_group_4") == 0) return skill_modify_info_group[3];
			if (wcscmp(fieldName, L"skill_modify_info_group_5") == 0) return skill_modify_info_group[4];
			if (wcscmp(fieldName, L"skill_modify_info_group_6") == 0) return skill_modify_info_group[5];
			if (wcscmp(fieldName, L"skill_modify_info_group_7") == 0) return skill_modify_info_group[6];
			if (wcscmp(fieldName, L"skill_modify_info_group_8") == 0) return skill_modify_info_group[7];
			if (wcscmp(fieldName, L"skill_modify_info_group_9") == 0) return skill_modify_info_group[8];
			if (wcscmp(fieldName, L"skill_modify_info_group_10") == 0) return skill_modify_info_group[9];
			if (wcscmp(fieldName, L"additional_description") == 0) return additional_description;
			if (wcscmp(fieldName, L"draw_option_icon") == 0) return draw_option_icon;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"ability") == 0) return Data::AnyFieldToStringConverter::ToString(&ability);
			if (wcscmp(fieldName, L"ability_value") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_value);
			if (wcscmp(fieldName, L"effect") == 0) return Data::AnyFieldToStringConverter::ToString(&effect);
			if (wcscmp(fieldName, L"effect_description") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_description);
			if (wcscmp(fieldName, L"skill_modify_info_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[0]));
			if (wcscmp(fieldName, L"skill_modify_info_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[1]));
			if (wcscmp(fieldName, L"skill_modify_info_group_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[2]));
			if (wcscmp(fieldName, L"skill_modify_info_group_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[3]));
			if (wcscmp(fieldName, L"skill_modify_info_group_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[4]));
			if (wcscmp(fieldName, L"skill_modify_info_group_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[5]));
			if (wcscmp(fieldName, L"skill_modify_info_group_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[6]));
			if (wcscmp(fieldName, L"skill_modify_info_group_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[7]));
			if (wcscmp(fieldName, L"skill_modify_info_group_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[8]));
			if (wcscmp(fieldName, L"skill_modify_info_group_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info_group[9]));
			if (wcscmp(fieldName, L"additional_description") == 0) return Data::AnyFieldToStringConverter::ToString(&additional_description);
			if (wcscmp(fieldName, L"draw_option_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_option_icon);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 ability;
std::wstring ability_EnumValue() const {return Get_ability_EnumValue(ability);};
char Pad0[3];
__int32 ability_value;
Data::TableRef effect;
int effect_tableId(){return 111;};
Data::TableRef effect_description;
int effect_description_tableId(){return 405;};
Data::TableRef skill_modify_info_group[10];
int skill_modify_info_group_tableId(){return 340;};
Data::TableRef additional_description;
int additional_description_tableId(){return 405;};
Data::IconRef draw_option_icon;

		static TableVersion Version() { return TableVersion(4, 2); }
		static __int16 TableId() { return 199; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_option_RecordPtr // : DrRecordPtr
	{
		item_improve_option_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_improve_option_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}