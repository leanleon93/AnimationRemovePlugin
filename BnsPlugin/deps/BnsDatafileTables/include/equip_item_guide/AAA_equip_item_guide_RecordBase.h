/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct equip_item_guide_Record : DrEl
	{
	private:
		static std::wstring Get_item_equip_type_EnumValue(__int8 value);
		static std::wstring Get_item_equip_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"item_group") == 0) return item_group;
			if (wcscmp(fieldName, L"item_equip_type") == 0) return item_equip_type;
			if (wcscmp(fieldName, L"item_equip_job") == 0) return item_equip_job;
			if (wcscmp(fieldName, L"item_score") == 0) return item_score;
			if (wcscmp(fieldName, L"representative_item") == 0) return representative_item;
			if (wcscmp(fieldName, L"next_item_guide_list") == 0) return next_item_guide_list;
			if (wcscmp(fieldName, L"next_item_guide_list_1") == 0) return next_item_guide_list[0];
			if (wcscmp(fieldName, L"next_item_guide_list_2") == 0) return next_item_guide_list[1];
			if (wcscmp(fieldName, L"next_item_guide_list_3") == 0) return next_item_guide_list[2];
			if (wcscmp(fieldName, L"improve_main_feed_list") == 0) return improve_main_feed_list;
			if (wcscmp(fieldName, L"improve_main_feed_list_1") == 0) return improve_main_feed_list[0];
			if (wcscmp(fieldName, L"improve_main_feed_list_2") == 0) return improve_main_feed_list[1];
			if (wcscmp(fieldName, L"improve_main_feed_list_3") == 0) return improve_main_feed_list[2];
			if (wcscmp(fieldName, L"improve_main_feed_list_4") == 0) return improve_main_feed_list[3];
			if (wcscmp(fieldName, L"improve_main_feed_list_5") == 0) return improve_main_feed_list[4];
			if (wcscmp(fieldName, L"improve_main_feed_list_6") == 0) return improve_main_feed_list[5];
			if (wcscmp(fieldName, L"improve_main_feed_list_7") == 0) return improve_main_feed_list[6];
			if (wcscmp(fieldName, L"improve_main_feed_list_8") == 0) return improve_main_feed_list[7];
			if (wcscmp(fieldName, L"improve_main_feed_list_9") == 0) return improve_main_feed_list[8];
			if (wcscmp(fieldName, L"improve_main_feed_list_10") == 0) return improve_main_feed_list[9];
			if (wcscmp(fieldName, L"improve_main_feed_list_11") == 0) return improve_main_feed_list[10];
			if (wcscmp(fieldName, L"improve_main_feed_list_12") == 0) return improve_main_feed_list[11];
			if (wcscmp(fieldName, L"improve_main_feed_list_13") == 0) return improve_main_feed_list[12];
			if (wcscmp(fieldName, L"improve_main_feed_list_14") == 0) return improve_main_feed_list[13];
			if (wcscmp(fieldName, L"improve_main_feed_list_15") == 0) return improve_main_feed_list[14];
			if (wcscmp(fieldName, L"improve_sub_feed_list") == 0) return improve_sub_feed_list;
			if (wcscmp(fieldName, L"improve_sub_feed_list_1") == 0) return improve_sub_feed_list[0];
			if (wcscmp(fieldName, L"improve_sub_feed_list_2") == 0) return improve_sub_feed_list[1];
			if (wcscmp(fieldName, L"improve_sub_feed_list_3") == 0) return improve_sub_feed_list[2];
			if (wcscmp(fieldName, L"improve_sub_feed_list_4") == 0) return improve_sub_feed_list[3];
			if (wcscmp(fieldName, L"improve_sub_feed_list_5") == 0) return improve_sub_feed_list[4];
			if (wcscmp(fieldName, L"improve_sub_feed_list_6") == 0) return improve_sub_feed_list[5];
			if (wcscmp(fieldName, L"improve_sub_feed_list_7") == 0) return improve_sub_feed_list[6];
			if (wcscmp(fieldName, L"improve_sub_feed_list_8") == 0) return improve_sub_feed_list[7];
			if (wcscmp(fieldName, L"improve_sub_feed_list_9") == 0) return improve_sub_feed_list[8];
			if (wcscmp(fieldName, L"improve_sub_feed_list_10") == 0) return improve_sub_feed_list[9];
			if (wcscmp(fieldName, L"improve_sub_feed_list_11") == 0) return improve_sub_feed_list[10];
			if (wcscmp(fieldName, L"improve_sub_feed_list_12") == 0) return improve_sub_feed_list[11];
			if (wcscmp(fieldName, L"improve_sub_feed_list_13") == 0) return improve_sub_feed_list[12];
			if (wcscmp(fieldName, L"improve_sub_feed_list_14") == 0) return improve_sub_feed_list[13];
			if (wcscmp(fieldName, L"improve_sub_feed_list_15") == 0) return improve_sub_feed_list[14];
			if (wcscmp(fieldName, L"transform_main_feed_list") == 0) return transform_main_feed_list;
			if (wcscmp(fieldName, L"transform_main_feed_list_1") == 0) return transform_main_feed_list[0];
			if (wcscmp(fieldName, L"transform_main_feed_list_2") == 0) return transform_main_feed_list[1];
			if (wcscmp(fieldName, L"transform_main_feed_list_3") == 0) return transform_main_feed_list[2];
			if (wcscmp(fieldName, L"transform_main_feed_list_4") == 0) return transform_main_feed_list[3];
			if (wcscmp(fieldName, L"transform_main_feed_list_5") == 0) return transform_main_feed_list[4];
			if (wcscmp(fieldName, L"transform_main_feed_list_6") == 0) return transform_main_feed_list[5];
			if (wcscmp(fieldName, L"transform_main_feed_list_7") == 0) return transform_main_feed_list[6];
			if (wcscmp(fieldName, L"transform_main_feed_list_8") == 0) return transform_main_feed_list[7];
			if (wcscmp(fieldName, L"transform_main_feed_list_9") == 0) return transform_main_feed_list[8];
			if (wcscmp(fieldName, L"transform_main_feed_list_10") == 0) return transform_main_feed_list[9];
			if (wcscmp(fieldName, L"transform_main_feed_list_11") == 0) return transform_main_feed_list[10];
			if (wcscmp(fieldName, L"transform_main_feed_list_12") == 0) return transform_main_feed_list[11];
			if (wcscmp(fieldName, L"transform_main_feed_list_13") == 0) return transform_main_feed_list[12];
			if (wcscmp(fieldName, L"transform_main_feed_list_14") == 0) return transform_main_feed_list[13];
			if (wcscmp(fieldName, L"transform_main_feed_list_15") == 0) return transform_main_feed_list[14];
			if (wcscmp(fieldName, L"transform_sub_feed_list") == 0) return transform_sub_feed_list;
			if (wcscmp(fieldName, L"transform_sub_feed_list_1") == 0) return transform_sub_feed_list[0];
			if (wcscmp(fieldName, L"transform_sub_feed_list_2") == 0) return transform_sub_feed_list[1];
			if (wcscmp(fieldName, L"transform_sub_feed_list_3") == 0) return transform_sub_feed_list[2];
			if (wcscmp(fieldName, L"transform_sub_feed_list_4") == 0) return transform_sub_feed_list[3];
			if (wcscmp(fieldName, L"transform_sub_feed_list_5") == 0) return transform_sub_feed_list[4];
			if (wcscmp(fieldName, L"transform_sub_feed_list_6") == 0) return transform_sub_feed_list[5];
			if (wcscmp(fieldName, L"transform_sub_feed_list_7") == 0) return transform_sub_feed_list[6];
			if (wcscmp(fieldName, L"transform_sub_feed_list_8") == 0) return transform_sub_feed_list[7];
			if (wcscmp(fieldName, L"transform_sub_feed_list_9") == 0) return transform_sub_feed_list[8];
			if (wcscmp(fieldName, L"transform_sub_feed_list_10") == 0) return transform_sub_feed_list[9];
			if (wcscmp(fieldName, L"transform_sub_feed_list_11") == 0) return transform_sub_feed_list[10];
			if (wcscmp(fieldName, L"transform_sub_feed_list_12") == 0) return transform_sub_feed_list[11];
			if (wcscmp(fieldName, L"transform_sub_feed_list_13") == 0) return transform_sub_feed_list[12];
			if (wcscmp(fieldName, L"transform_sub_feed_list_14") == 0) return transform_sub_feed_list[13];
			if (wcscmp(fieldName, L"transform_sub_feed_list_15") == 0) return transform_sub_feed_list[14];
			if (wcscmp(fieldName, L"growth_main_feed_list") == 0) return growth_main_feed_list;
			if (wcscmp(fieldName, L"growth_main_feed_list_1") == 0) return growth_main_feed_list[0];
			if (wcscmp(fieldName, L"growth_main_feed_list_2") == 0) return growth_main_feed_list[1];
			if (wcscmp(fieldName, L"growth_main_feed_list_3") == 0) return growth_main_feed_list[2];
			if (wcscmp(fieldName, L"growth_main_feed_list_4") == 0) return growth_main_feed_list[3];
			if (wcscmp(fieldName, L"growth_main_feed_list_5") == 0) return growth_main_feed_list[4];
			if (wcscmp(fieldName, L"growth_main_feed_list_6") == 0) return growth_main_feed_list[5];
			if (wcscmp(fieldName, L"growth_main_feed_list_7") == 0) return growth_main_feed_list[6];
			if (wcscmp(fieldName, L"growth_main_feed_list_8") == 0) return growth_main_feed_list[7];
			if (wcscmp(fieldName, L"growth_main_feed_list_9") == 0) return growth_main_feed_list[8];
			if (wcscmp(fieldName, L"growth_main_feed_list_10") == 0) return growth_main_feed_list[9];
			if (wcscmp(fieldName, L"growth_main_feed_list_11") == 0) return growth_main_feed_list[10];
			if (wcscmp(fieldName, L"growth_main_feed_list_12") == 0) return growth_main_feed_list[11];
			if (wcscmp(fieldName, L"growth_main_feed_list_13") == 0) return growth_main_feed_list[12];
			if (wcscmp(fieldName, L"growth_main_feed_list_14") == 0) return growth_main_feed_list[13];
			if (wcscmp(fieldName, L"growth_main_feed_list_15") == 0) return growth_main_feed_list[14];
			if (wcscmp(fieldName, L"growth_sub_feed_list") == 0) return growth_sub_feed_list;
			if (wcscmp(fieldName, L"growth_sub_feed_list_1") == 0) return growth_sub_feed_list[0];
			if (wcscmp(fieldName, L"growth_sub_feed_list_2") == 0) return growth_sub_feed_list[1];
			if (wcscmp(fieldName, L"growth_sub_feed_list_3") == 0) return growth_sub_feed_list[2];
			if (wcscmp(fieldName, L"growth_sub_feed_list_4") == 0) return growth_sub_feed_list[3];
			if (wcscmp(fieldName, L"growth_sub_feed_list_5") == 0) return growth_sub_feed_list[4];
			if (wcscmp(fieldName, L"growth_sub_feed_list_6") == 0) return growth_sub_feed_list[5];
			if (wcscmp(fieldName, L"growth_sub_feed_list_7") == 0) return growth_sub_feed_list[6];
			if (wcscmp(fieldName, L"growth_sub_feed_list_8") == 0) return growth_sub_feed_list[7];
			if (wcscmp(fieldName, L"growth_sub_feed_list_9") == 0) return growth_sub_feed_list[8];
			if (wcscmp(fieldName, L"growth_sub_feed_list_10") == 0) return growth_sub_feed_list[9];
			if (wcscmp(fieldName, L"growth_sub_feed_list_11") == 0) return growth_sub_feed_list[10];
			if (wcscmp(fieldName, L"growth_sub_feed_list_12") == 0) return growth_sub_feed_list[11];
			if (wcscmp(fieldName, L"growth_sub_feed_list_13") == 0) return growth_sub_feed_list[12];
			if (wcscmp(fieldName, L"growth_sub_feed_list_14") == 0) return growth_sub_feed_list[13];
			if (wcscmp(fieldName, L"growth_sub_feed_list_15") == 0) return growth_sub_feed_list[14];
			if (wcscmp(fieldName, L"improve_set_list") == 0) return improve_set_list;
			if (wcscmp(fieldName, L"improve_set_list_1") == 0) return improve_set_list[0];
			if (wcscmp(fieldName, L"improve_set_list_2") == 0) return improve_set_list[1];
			if (wcscmp(fieldName, L"improve_set_list_3") == 0) return improve_set_list[2];
			if (wcscmp(fieldName, L"improve_set_list_4") == 0) return improve_set_list[3];
			if (wcscmp(fieldName, L"improve_option_acquire_level_list") == 0) return improve_option_acquire_level_list;
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_1") == 0) return improve_option_acquire_level_list[0];
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_2") == 0) return improve_option_acquire_level_list[1];
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_3") == 0) return improve_option_acquire_level_list[2];
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_4") == 0) return improve_option_acquire_level_list[3];
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_5") == 0) return improve_option_acquire_level_list[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"item_group") == 0) return Data::AnyFieldToStringConverter::ToString(&item_group);
			if (wcscmp(fieldName, L"item_equip_type") == 0) return Data::AnyFieldToStringConverter::ToString(&item_equip_type);
			if (wcscmp(fieldName, L"item_equip_job") == 0) return Data::AnyFieldToStringConverter::ToString(&item_equip_job);
			if (wcscmp(fieldName, L"item_score") == 0) return Data::AnyFieldToStringConverter::ToString(&item_score);
			if (wcscmp(fieldName, L"representative_item") == 0) return Data::AnyFieldToStringConverter::ToString(&representative_item);
			if (wcscmp(fieldName, L"next_item_guide_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_item_guide_list[0]));
			if (wcscmp(fieldName, L"next_item_guide_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_item_guide_list[1]));
			if (wcscmp(fieldName, L"next_item_guide_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(next_item_guide_list[2]));
			if (wcscmp(fieldName, L"improve_main_feed_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[0]));
			if (wcscmp(fieldName, L"improve_main_feed_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[1]));
			if (wcscmp(fieldName, L"improve_main_feed_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[2]));
			if (wcscmp(fieldName, L"improve_main_feed_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[3]));
			if (wcscmp(fieldName, L"improve_main_feed_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[4]));
			if (wcscmp(fieldName, L"improve_main_feed_list_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[5]));
			if (wcscmp(fieldName, L"improve_main_feed_list_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[6]));
			if (wcscmp(fieldName, L"improve_main_feed_list_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[7]));
			if (wcscmp(fieldName, L"improve_main_feed_list_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[8]));
			if (wcscmp(fieldName, L"improve_main_feed_list_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[9]));
			if (wcscmp(fieldName, L"improve_main_feed_list_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[10]));
			if (wcscmp(fieldName, L"improve_main_feed_list_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[11]));
			if (wcscmp(fieldName, L"improve_main_feed_list_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[12]));
			if (wcscmp(fieldName, L"improve_main_feed_list_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[13]));
			if (wcscmp(fieldName, L"improve_main_feed_list_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_main_feed_list[14]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[0]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[1]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[2]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[3]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[4]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[5]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[6]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[7]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[8]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[9]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[10]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[11]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[12]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[13]));
			if (wcscmp(fieldName, L"improve_sub_feed_list_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_sub_feed_list[14]));
			if (wcscmp(fieldName, L"transform_main_feed_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[0]));
			if (wcscmp(fieldName, L"transform_main_feed_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[1]));
			if (wcscmp(fieldName, L"transform_main_feed_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[2]));
			if (wcscmp(fieldName, L"transform_main_feed_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[3]));
			if (wcscmp(fieldName, L"transform_main_feed_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[4]));
			if (wcscmp(fieldName, L"transform_main_feed_list_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[5]));
			if (wcscmp(fieldName, L"transform_main_feed_list_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[6]));
			if (wcscmp(fieldName, L"transform_main_feed_list_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[7]));
			if (wcscmp(fieldName, L"transform_main_feed_list_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[8]));
			if (wcscmp(fieldName, L"transform_main_feed_list_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[9]));
			if (wcscmp(fieldName, L"transform_main_feed_list_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[10]));
			if (wcscmp(fieldName, L"transform_main_feed_list_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[11]));
			if (wcscmp(fieldName, L"transform_main_feed_list_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[12]));
			if (wcscmp(fieldName, L"transform_main_feed_list_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[13]));
			if (wcscmp(fieldName, L"transform_main_feed_list_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_main_feed_list[14]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[0]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[1]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[2]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[3]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[4]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[5]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[6]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[7]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[8]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[9]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[10]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[11]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[12]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[13]));
			if (wcscmp(fieldName, L"transform_sub_feed_list_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(transform_sub_feed_list[14]));
			if (wcscmp(fieldName, L"growth_main_feed_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[0]));
			if (wcscmp(fieldName, L"growth_main_feed_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[1]));
			if (wcscmp(fieldName, L"growth_main_feed_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[2]));
			if (wcscmp(fieldName, L"growth_main_feed_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[3]));
			if (wcscmp(fieldName, L"growth_main_feed_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[4]));
			if (wcscmp(fieldName, L"growth_main_feed_list_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[5]));
			if (wcscmp(fieldName, L"growth_main_feed_list_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[6]));
			if (wcscmp(fieldName, L"growth_main_feed_list_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[7]));
			if (wcscmp(fieldName, L"growth_main_feed_list_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[8]));
			if (wcscmp(fieldName, L"growth_main_feed_list_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[9]));
			if (wcscmp(fieldName, L"growth_main_feed_list_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[10]));
			if (wcscmp(fieldName, L"growth_main_feed_list_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[11]));
			if (wcscmp(fieldName, L"growth_main_feed_list_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[12]));
			if (wcscmp(fieldName, L"growth_main_feed_list_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[13]));
			if (wcscmp(fieldName, L"growth_main_feed_list_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_main_feed_list[14]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[0]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[1]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[2]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[3]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[4]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[5]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[6]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[7]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[8]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[9]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[10]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[11]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[12]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[13]));
			if (wcscmp(fieldName, L"growth_sub_feed_list_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(growth_sub_feed_list[14]));
			if (wcscmp(fieldName, L"improve_set_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_set_list[0]));
			if (wcscmp(fieldName, L"improve_set_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_set_list[1]));
			if (wcscmp(fieldName, L"improve_set_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_set_list[2]));
			if (wcscmp(fieldName, L"improve_set_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_set_list[3]));
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_option_acquire_level_list[0]));
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_option_acquire_level_list[1]));
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_option_acquire_level_list[2]));
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_option_acquire_level_list[3]));
			if (wcscmp(fieldName, L"improve_option_acquire_level_list_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(improve_option_acquire_level_list[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef item_group;
int item_group_tableId(){return 120;};
__int8 item_equip_type;
std::wstring item_equip_type_EnumValue() const {return Get_item_equip_type_EnumValue(item_equip_type);};
__int8 item_equip_job;
std::wstring item_equip_job_EnumValue() const {return Get_item_equip_job_EnumValue(item_equip_job);};
char Pad0[2];
__int32 item_score;
Data::TableRef representative_item;
int representative_item_tableId(){return 189;};
Data::TableRef next_item_guide_list[3];
int next_item_guide_list_tableId(){return 121;};
Data::TableRef improve_main_feed_list[15];
int improve_main_feed_list_tableId(){return 189;};
Data::TableRef improve_sub_feed_list[15];
int improve_sub_feed_list_tableId(){return 189;};
Data::TableRef transform_main_feed_list[15];
int transform_main_feed_list_tableId(){return 189;};
Data::TableRef transform_sub_feed_list[15];
int transform_sub_feed_list_tableId(){return 189;};
Data::TableRef growth_main_feed_list[15];
int growth_main_feed_list_tableId(){return 189;};
Data::TableRef growth_sub_feed_list[15];
int growth_sub_feed_list_tableId(){return 189;};
Data::TableRef improve_set_list[4];
int improve_set_list_tableId(){return 201;};
__int8 improve_option_acquire_level_list[5];

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 121; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_item_guide_RecordPtr // : DrRecordPtr
	{
		equip_item_guide_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_item_guide_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}