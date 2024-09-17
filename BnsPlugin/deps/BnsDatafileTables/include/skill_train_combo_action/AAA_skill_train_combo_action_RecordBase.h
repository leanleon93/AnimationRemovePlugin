/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_train_combo_action_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_job_style_EnumValue(__int8 value);
		static std::wstring Get_combo_skill_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"stance_name") == 0) return stance_name;
			if (wcscmp(fieldName, L"buff_name") == 0) return buff_name;
			if (wcscmp(fieldName, L"function_name") == 0) return function_name;
			if (wcscmp(fieldName, L"function_desc") == 0) return function_desc;
			if (wcscmp(fieldName, L"combo_skill") == 0) return combo_skill;
			if (wcscmp(fieldName, L"combo_skill_1") == 0) return combo_skill[0];
			if (wcscmp(fieldName, L"combo_skill_2") == 0) return combo_skill[1];
			if (wcscmp(fieldName, L"combo_skill_3") == 0) return combo_skill[2];
			if (wcscmp(fieldName, L"combo_skill_4") == 0) return combo_skill[3];
			if (wcscmp(fieldName, L"combo_skill_5") == 0) return combo_skill[4];
			if (wcscmp(fieldName, L"combo_skill_6") == 0) return combo_skill[5];
			if (wcscmp(fieldName, L"combo_skill_7") == 0) return combo_skill[6];
			if (wcscmp(fieldName, L"combo_skill_8") == 0) return combo_skill[7];
			if (wcscmp(fieldName, L"combo_skill_9") == 0) return combo_skill[8];
			if (wcscmp(fieldName, L"combo_skill_10") == 0) return combo_skill[9];
			if (wcscmp(fieldName, L"skill_id") == 0) return skill_id;
			if (wcscmp(fieldName, L"skill_id_1") == 0) return skill_id[0];
			if (wcscmp(fieldName, L"skill_id_2") == 0) return skill_id[1];
			if (wcscmp(fieldName, L"skill_id_3") == 0) return skill_id[2];
			if (wcscmp(fieldName, L"skill_id_4") == 0) return skill_id[3];
			if (wcscmp(fieldName, L"skill_id_5") == 0) return skill_id[4];
			if (wcscmp(fieldName, L"skill_id_6") == 0) return skill_id[5];
			if (wcscmp(fieldName, L"skill_id_7") == 0) return skill_id[6];
			if (wcscmp(fieldName, L"skill_id_8") == 0) return skill_id[7];
			if (wcscmp(fieldName, L"skill_id_9") == 0) return skill_id[8];
			if (wcscmp(fieldName, L"skill_id_10") == 0) return skill_id[9];
			if (wcscmp(fieldName, L"variation_id") == 0) return variation_id;
			if (wcscmp(fieldName, L"variation_id_1") == 0) return variation_id[0];
			if (wcscmp(fieldName, L"variation_id_2") == 0) return variation_id[1];
			if (wcscmp(fieldName, L"variation_id_3") == 0) return variation_id[2];
			if (wcscmp(fieldName, L"variation_id_4") == 0) return variation_id[3];
			if (wcscmp(fieldName, L"variation_id_5") == 0) return variation_id[4];
			if (wcscmp(fieldName, L"variation_id_6") == 0) return variation_id[5];
			if (wcscmp(fieldName, L"variation_id_7") == 0) return variation_id[6];
			if (wcscmp(fieldName, L"variation_id_8") == 0) return variation_id[7];
			if (wcscmp(fieldName, L"variation_id_9") == 0) return variation_id[8];
			if (wcscmp(fieldName, L"variation_id_10") == 0) return variation_id[9];
			if (wcscmp(fieldName, L"condition_icon_normal_text") == 0) return condition_icon_normal_text;
			if (wcscmp(fieldName, L"condition_icon_normal_text_1") == 0) return condition_icon_normal_text[0];
			if (wcscmp(fieldName, L"condition_icon_normal_text_2") == 0) return condition_icon_normal_text[1];
			if (wcscmp(fieldName, L"condition_icon_normal_text_3") == 0) return condition_icon_normal_text[2];
			if (wcscmp(fieldName, L"condition_icon_normal_text_4") == 0) return condition_icon_normal_text[3];
			if (wcscmp(fieldName, L"condition_icon_normal_text_5") == 0) return condition_icon_normal_text[4];
			if (wcscmp(fieldName, L"condition_icon_normal_text_6") == 0) return condition_icon_normal_text[5];
			if (wcscmp(fieldName, L"condition_icon_normal_text_7") == 0) return condition_icon_normal_text[6];
			if (wcscmp(fieldName, L"condition_icon_normal_text_8") == 0) return condition_icon_normal_text[7];
			if (wcscmp(fieldName, L"condition_icon_normal_text_9") == 0) return condition_icon_normal_text[8];
			if (wcscmp(fieldName, L"condition_icon_normal_text_10") == 0) return condition_icon_normal_text[9];
			if (wcscmp(fieldName, L"condition_icon_over_text") == 0) return condition_icon_over_text;
			if (wcscmp(fieldName, L"condition_icon_over_text_1") == 0) return condition_icon_over_text[0];
			if (wcscmp(fieldName, L"condition_icon_over_text_2") == 0) return condition_icon_over_text[1];
			if (wcscmp(fieldName, L"condition_icon_over_text_3") == 0) return condition_icon_over_text[2];
			if (wcscmp(fieldName, L"condition_icon_over_text_4") == 0) return condition_icon_over_text[3];
			if (wcscmp(fieldName, L"condition_icon_over_text_5") == 0) return condition_icon_over_text[4];
			if (wcscmp(fieldName, L"condition_icon_over_text_6") == 0) return condition_icon_over_text[5];
			if (wcscmp(fieldName, L"condition_icon_over_text_7") == 0) return condition_icon_over_text[6];
			if (wcscmp(fieldName, L"condition_icon_over_text_8") == 0) return condition_icon_over_text[7];
			if (wcscmp(fieldName, L"condition_icon_over_text_9") == 0) return condition_icon_over_text[8];
			if (wcscmp(fieldName, L"condition_icon_over_text_10") == 0) return condition_icon_over_text[9];
			if (wcscmp(fieldName, L"condition_tooltip_text") == 0) return condition_tooltip_text;
			if (wcscmp(fieldName, L"condition_tooltip_text_1") == 0) return condition_tooltip_text[0];
			if (wcscmp(fieldName, L"condition_tooltip_text_2") == 0) return condition_tooltip_text[1];
			if (wcscmp(fieldName, L"condition_tooltip_text_3") == 0) return condition_tooltip_text[2];
			if (wcscmp(fieldName, L"condition_tooltip_text_4") == 0) return condition_tooltip_text[3];
			if (wcscmp(fieldName, L"condition_tooltip_text_5") == 0) return condition_tooltip_text[4];
			if (wcscmp(fieldName, L"condition_tooltip_text_6") == 0) return condition_tooltip_text[5];
			if (wcscmp(fieldName, L"condition_tooltip_text_7") == 0) return condition_tooltip_text[6];
			if (wcscmp(fieldName, L"condition_tooltip_text_8") == 0) return condition_tooltip_text[7];
			if (wcscmp(fieldName, L"condition_tooltip_text_9") == 0) return condition_tooltip_text[8];
			if (wcscmp(fieldName, L"condition_tooltip_text_10") == 0) return condition_tooltip_text[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"stance_name") == 0) return Data::AnyFieldToStringConverter::ToString(&stance_name);
			if (wcscmp(fieldName, L"buff_name") == 0) return Data::AnyFieldToStringConverter::ToString(&buff_name);
			if (wcscmp(fieldName, L"function_name") == 0) return Data::AnyFieldToStringConverter::ToString(&function_name);
			if (wcscmp(fieldName, L"function_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&function_desc);
			if (wcscmp(fieldName, L"combo_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[0]));
			if (wcscmp(fieldName, L"combo_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[1]));
			if (wcscmp(fieldName, L"combo_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[2]));
			if (wcscmp(fieldName, L"combo_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[3]));
			if (wcscmp(fieldName, L"combo_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[4]));
			if (wcscmp(fieldName, L"combo_skill_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[5]));
			if (wcscmp(fieldName, L"combo_skill_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[6]));
			if (wcscmp(fieldName, L"combo_skill_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[7]));
			if (wcscmp(fieldName, L"combo_skill_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[8]));
			if (wcscmp(fieldName, L"combo_skill_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(combo_skill[9]));
			if (wcscmp(fieldName, L"skill_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[0]));
			if (wcscmp(fieldName, L"skill_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[1]));
			if (wcscmp(fieldName, L"skill_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[2]));
			if (wcscmp(fieldName, L"skill_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[3]));
			if (wcscmp(fieldName, L"skill_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[4]));
			if (wcscmp(fieldName, L"skill_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[5]));
			if (wcscmp(fieldName, L"skill_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[6]));
			if (wcscmp(fieldName, L"skill_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[7]));
			if (wcscmp(fieldName, L"skill_id_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[8]));
			if (wcscmp(fieldName, L"skill_id_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_id[9]));
			if (wcscmp(fieldName, L"variation_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[0]));
			if (wcscmp(fieldName, L"variation_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[1]));
			if (wcscmp(fieldName, L"variation_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[2]));
			if (wcscmp(fieldName, L"variation_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[3]));
			if (wcscmp(fieldName, L"variation_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[4]));
			if (wcscmp(fieldName, L"variation_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[5]));
			if (wcscmp(fieldName, L"variation_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[6]));
			if (wcscmp(fieldName, L"variation_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[7]));
			if (wcscmp(fieldName, L"variation_id_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[8]));
			if (wcscmp(fieldName, L"variation_id_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(variation_id[9]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[0]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[1]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[2]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[3]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[4]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[5]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[6]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[7]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[8]));
			if (wcscmp(fieldName, L"condition_icon_normal_text_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_normal_text[9]));
			if (wcscmp(fieldName, L"condition_icon_over_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[0]));
			if (wcscmp(fieldName, L"condition_icon_over_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[1]));
			if (wcscmp(fieldName, L"condition_icon_over_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[2]));
			if (wcscmp(fieldName, L"condition_icon_over_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[3]));
			if (wcscmp(fieldName, L"condition_icon_over_text_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[4]));
			if (wcscmp(fieldName, L"condition_icon_over_text_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[5]));
			if (wcscmp(fieldName, L"condition_icon_over_text_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[6]));
			if (wcscmp(fieldName, L"condition_icon_over_text_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[7]));
			if (wcscmp(fieldName, L"condition_icon_over_text_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[8]));
			if (wcscmp(fieldName, L"condition_icon_over_text_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_icon_over_text[9]));
			if (wcscmp(fieldName, L"condition_tooltip_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[0]));
			if (wcscmp(fieldName, L"condition_tooltip_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[1]));
			if (wcscmp(fieldName, L"condition_tooltip_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[2]));
			if (wcscmp(fieldName, L"condition_tooltip_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[3]));
			if (wcscmp(fieldName, L"condition_tooltip_text_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[4]));
			if (wcscmp(fieldName, L"condition_tooltip_text_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[5]));
			if (wcscmp(fieldName, L"condition_tooltip_text_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[6]));
			if (wcscmp(fieldName, L"condition_tooltip_text_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[7]));
			if (wcscmp(fieldName, L"condition_tooltip_text_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[8]));
			if (wcscmp(fieldName, L"condition_tooltip_text_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(condition_tooltip_text[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 job;
__int8 job_style;
__int8 stance_index;
__int8 buff_index;
__int8 function_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef stance_name;
int stance_name_tableId(){return 405;};
Data::TableRef buff_name;
int buff_name_tableId(){return 405;};
Data::TableRef function_name;
int function_name_tableId(){return 405;};
Data::TableRef function_desc;
int function_desc_tableId(){return 405;};
__int8 combo_skill[10];
std::wstring combo_skill_EnumValue(int index) const {return Get_combo_skill_EnumValue(combo_skill[index]);};
char Pad0[2];
__int32 skill_id[10];
__int8 variation_id[10];
char Pad1[2];
Data::TableRef condition_icon_normal_text[10];
int condition_icon_normal_text_tableId(){return 405;};
Data::TableRef condition_icon_over_text[10];
int condition_icon_over_text_tableId(){return 405;};
Data::TableRef condition_tooltip_text[10];
int condition_tooltip_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 355; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_combo_action_RecordPtr // : DrRecordPtr
	{
		skill_train_combo_action_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_combo_action_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}