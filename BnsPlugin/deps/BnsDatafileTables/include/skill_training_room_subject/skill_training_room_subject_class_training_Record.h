/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_training_room_subject_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_training_room_subject_class_training_Record : skill_training_room_subject_Record
	{
	private:
		static std::wstring Get_base_job_style_EnumValue(__int8 value);
		static std::wstring Get_advanced_job_style_EnumValue(__int8 value);
		static std::wstring Get_advanced_tier_variation_flag_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill_training_room_subject_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"main_skill") == 0) return main_skill;
			if (wcscmp(fieldName, L"skill_combo_desc") == 0) return skill_combo_desc;
			if (wcscmp(fieldName, L"skill_combo_tips_main") == 0) return skill_combo_tips_main;
			if (wcscmp(fieldName, L"skill_combo_tips_desc") == 0) return skill_combo_tips_desc;
			if (wcscmp(fieldName, L"skill_training_sequence") == 0) return skill_training_sequence;
			if (wcscmp(fieldName, L"guide_text") == 0) return guide_text;
			if (wcscmp(fieldName, L"base_job_style") == 0) return base_job_style;
			if (wcscmp(fieldName, L"advanced_job_style") == 0) return advanced_job_style;
			if (wcscmp(fieldName, L"advanced_tier_variation") == 0) return advanced_tier_variation;
			if (wcscmp(fieldName, L"advanced_tier_variation_1") == 0) return advanced_tier_variation[0];
			if (wcscmp(fieldName, L"advanced_tier_variation_2") == 0) return advanced_tier_variation[1];
			if (wcscmp(fieldName, L"advanced_tier_variation_3") == 0) return advanced_tier_variation[2];
			if (wcscmp(fieldName, L"advanced_tier_variation_4") == 0) return advanced_tier_variation[3];
			if (wcscmp(fieldName, L"advanced_tier_variation_5") == 0) return advanced_tier_variation[4];
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op") == 0) return advanced_tier_variation_flag_op;
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_1") == 0) return advanced_tier_variation_flag_op[0];
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_2") == 0) return advanced_tier_variation_flag_op[1];
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_3") == 0) return advanced_tier_variation_flag_op[2];
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_4") == 0) return advanced_tier_variation_flag_op[3];
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_5") == 0) return advanced_tier_variation_flag_op[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill_training_room_subject_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"main_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&main_skill);
			if (wcscmp(fieldName, L"skill_combo_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_combo_desc);
			if (wcscmp(fieldName, L"skill_combo_tips_main") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_combo_tips_main);
			if (wcscmp(fieldName, L"skill_combo_tips_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_combo_tips_desc);
			if (wcscmp(fieldName, L"skill_training_sequence") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_training_sequence);
			if (wcscmp(fieldName, L"guide_text") == 0) return Data::AnyFieldToStringConverter::ToString(&guide_text);
			if (wcscmp(fieldName, L"base_job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&base_job_style);
			if (wcscmp(fieldName, L"advanced_job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&advanced_job_style);
			if (wcscmp(fieldName, L"advanced_tier_variation_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation[0]));
			if (wcscmp(fieldName, L"advanced_tier_variation_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation[1]));
			if (wcscmp(fieldName, L"advanced_tier_variation_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation[2]));
			if (wcscmp(fieldName, L"advanced_tier_variation_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation[3]));
			if (wcscmp(fieldName, L"advanced_tier_variation_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation[4]));
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation_flag_op[0]));
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation_flag_op[1]));
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation_flag_op[2]));
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation_flag_op[3]));
			if (wcscmp(fieldName, L"advanced_tier_variation_flag_op_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(advanced_tier_variation_flag_op[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill_training_room_subject_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		char Pad_sub_0[2];
Data::TableRef main_skill;
int main_skill_tableId(){return 324;};
Data::TableRef skill_combo_desc;
int skill_combo_desc_tableId(){return 405;};
Data::TableRef skill_combo_tips_main;
int skill_combo_tips_main_tableId(){return 405;};
Data::TableRef skill_combo_tips_desc;
int skill_combo_tips_desc_tableId(){return 405;};
Data::TableRef skill_training_sequence;
int skill_training_sequence_tableId(){return 359;};
Data::TableRef guide_text;
int guide_text_tableId(){return 405;};
__int8 base_job_style;
std::wstring base_job_style_EnumValue() const {return Get_base_job_style_EnumValue(base_job_style);};
__int8 advanced_job_style;
std::wstring advanced_job_style_EnumValue() const {return Get_advanced_job_style_EnumValue(advanced_job_style);};
__int8 advanced_tier_variation[5];
__int8 advanced_tier_variation_flag_op[5];
std::wstring advanced_tier_variation_flag_op_EnumValue(int index) const {return Get_advanced_tier_variation_flag_op_EnumValue(advanced_tier_variation_flag_op[index]);};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}