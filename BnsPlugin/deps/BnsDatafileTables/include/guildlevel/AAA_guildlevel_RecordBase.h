/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guildlevel_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_4") == 0) return required_item[3];
			if (wcscmp(fieldName, L"required_item_5") == 0) return required_item[4];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return required_item_count[2];
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return required_item_count[3];
			if (wcscmp(fieldName, L"required_item_count_5") == 0) return required_item_count[4];
			if (wcscmp(fieldName, L"required_guild_point") == 0) return required_guild_point;
			if (wcscmp(fieldName, L"reputation") == 0) return reputation;
			if (wcscmp(fieldName, L"min_member_count") == 0) return min_member_count;
			if (wcscmp(fieldName, L"max_member_count") == 0) return max_member_count;
			if (wcscmp(fieldName, L"min_enable_member_count") == 0) return min_enable_member_count;
			if (wcscmp(fieldName, L"guild_discount") == 0) return guild_discount;
			if (wcscmp(fieldName, L"level_skill_imageset") == 0) return level_skill_imageset;
			if (wcscmp(fieldName, L"level_skill_imageset_1") == 0) return level_skill_imageset[0];
			if (wcscmp(fieldName, L"level_skill_imageset_2") == 0) return level_skill_imageset[1];
			if (wcscmp(fieldName, L"level_skill_imageset_3") == 0) return level_skill_imageset[2];
			if (wcscmp(fieldName, L"level_skill_imageset_4") == 0) return level_skill_imageset[3];
			if (wcscmp(fieldName, L"level_skill_imageset_5") == 0) return level_skill_imageset[4];
			if (wcscmp(fieldName, L"level_skill_imageset_6") == 0) return level_skill_imageset[5];
			if (wcscmp(fieldName, L"level_skill_imageset_7") == 0) return level_skill_imageset[6];
			if (wcscmp(fieldName, L"level_skill_imageset_8") == 0) return level_skill_imageset[7];
			if (wcscmp(fieldName, L"level_skill_imageset_9") == 0) return level_skill_imageset[8];
			if (wcscmp(fieldName, L"level_skill_imageset_10") == 0) return level_skill_imageset[9];
			if (wcscmp(fieldName, L"level_skill_name") == 0) return level_skill_name;
			if (wcscmp(fieldName, L"level_skill_name_1") == 0) return level_skill_name[0];
			if (wcscmp(fieldName, L"level_skill_name_2") == 0) return level_skill_name[1];
			if (wcscmp(fieldName, L"level_skill_name_3") == 0) return level_skill_name[2];
			if (wcscmp(fieldName, L"level_skill_name_4") == 0) return level_skill_name[3];
			if (wcscmp(fieldName, L"level_skill_name_5") == 0) return level_skill_name[4];
			if (wcscmp(fieldName, L"level_skill_name_6") == 0) return level_skill_name[5];
			if (wcscmp(fieldName, L"level_skill_name_7") == 0) return level_skill_name[6];
			if (wcscmp(fieldName, L"level_skill_name_8") == 0) return level_skill_name[7];
			if (wcscmp(fieldName, L"level_skill_name_9") == 0) return level_skill_name[8];
			if (wcscmp(fieldName, L"level_skill_name_10") == 0) return level_skill_name[9];
			if (wcscmp(fieldName, L"level_skill_description") == 0) return level_skill_description;
			if (wcscmp(fieldName, L"level_skill_description_1") == 0) return level_skill_description[0];
			if (wcscmp(fieldName, L"level_skill_description_2") == 0) return level_skill_description[1];
			if (wcscmp(fieldName, L"level_skill_description_3") == 0) return level_skill_description[2];
			if (wcscmp(fieldName, L"level_skill_description_4") == 0) return level_skill_description[3];
			if (wcscmp(fieldName, L"level_skill_description_5") == 0) return level_skill_description[4];
			if (wcscmp(fieldName, L"level_skill_description_6") == 0) return level_skill_description[5];
			if (wcscmp(fieldName, L"level_skill_description_7") == 0) return level_skill_description[6];
			if (wcscmp(fieldName, L"level_skill_description_8") == 0) return level_skill_description[7];
			if (wcscmp(fieldName, L"level_skill_description_9") == 0) return level_skill_description[8];
			if (wcscmp(fieldName, L"level_skill_description_10") == 0) return level_skill_description[9];
			if (wcscmp(fieldName, L"display_basic_skill_imageset") == 0) return display_basic_skill_imageset;
			if (wcscmp(fieldName, L"display_basic_skill_imageset_1") == 0) return display_basic_skill_imageset[0];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_2") == 0) return display_basic_skill_imageset[1];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_3") == 0) return display_basic_skill_imageset[2];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_4") == 0) return display_basic_skill_imageset[3];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_5") == 0) return display_basic_skill_imageset[4];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_6") == 0) return display_basic_skill_imageset[5];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_7") == 0) return display_basic_skill_imageset[6];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_8") == 0) return display_basic_skill_imageset[7];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_9") == 0) return display_basic_skill_imageset[8];
			if (wcscmp(fieldName, L"display_basic_skill_imageset_10") == 0) return display_basic_skill_imageset[9];
			if (wcscmp(fieldName, L"display_basic_skill_name") == 0) return display_basic_skill_name;
			if (wcscmp(fieldName, L"display_basic_skill_name_1") == 0) return display_basic_skill_name[0];
			if (wcscmp(fieldName, L"display_basic_skill_name_2") == 0) return display_basic_skill_name[1];
			if (wcscmp(fieldName, L"display_basic_skill_name_3") == 0) return display_basic_skill_name[2];
			if (wcscmp(fieldName, L"display_basic_skill_name_4") == 0) return display_basic_skill_name[3];
			if (wcscmp(fieldName, L"display_basic_skill_name_5") == 0) return display_basic_skill_name[4];
			if (wcscmp(fieldName, L"display_basic_skill_name_6") == 0) return display_basic_skill_name[5];
			if (wcscmp(fieldName, L"display_basic_skill_name_7") == 0) return display_basic_skill_name[6];
			if (wcscmp(fieldName, L"display_basic_skill_name_8") == 0) return display_basic_skill_name[7];
			if (wcscmp(fieldName, L"display_basic_skill_name_9") == 0) return display_basic_skill_name[8];
			if (wcscmp(fieldName, L"display_basic_skill_name_10") == 0) return display_basic_skill_name[9];
			if (wcscmp(fieldName, L"display_basic_skill_description") == 0) return display_basic_skill_description;
			if (wcscmp(fieldName, L"display_basic_skill_description_1") == 0) return display_basic_skill_description[0];
			if (wcscmp(fieldName, L"display_basic_skill_description_2") == 0) return display_basic_skill_description[1];
			if (wcscmp(fieldName, L"display_basic_skill_description_3") == 0) return display_basic_skill_description[2];
			if (wcscmp(fieldName, L"display_basic_skill_description_4") == 0) return display_basic_skill_description[3];
			if (wcscmp(fieldName, L"display_basic_skill_description_5") == 0) return display_basic_skill_description[4];
			if (wcscmp(fieldName, L"display_basic_skill_description_6") == 0) return display_basic_skill_description[5];
			if (wcscmp(fieldName, L"display_basic_skill_description_7") == 0) return display_basic_skill_description[6];
			if (wcscmp(fieldName, L"display_basic_skill_description_8") == 0) return display_basic_skill_description[7];
			if (wcscmp(fieldName, L"display_basic_skill_description_9") == 0) return display_basic_skill_description[8];
			if (wcscmp(fieldName, L"display_basic_skill_description_10") == 0) return display_basic_skill_description[9];
			if (wcscmp(fieldName, L"display_add_skill_imageset") == 0) return display_add_skill_imageset;
			if (wcscmp(fieldName, L"display_add_skill_imageset_1") == 0) return display_add_skill_imageset[0];
			if (wcscmp(fieldName, L"display_add_skill_imageset_2") == 0) return display_add_skill_imageset[1];
			if (wcscmp(fieldName, L"display_add_skill_imageset_3") == 0) return display_add_skill_imageset[2];
			if (wcscmp(fieldName, L"display_add_skill_imageset_4") == 0) return display_add_skill_imageset[3];
			if (wcscmp(fieldName, L"display_add_skill_imageset_5") == 0) return display_add_skill_imageset[4];
			if (wcscmp(fieldName, L"display_add_skill_imageset_6") == 0) return display_add_skill_imageset[5];
			if (wcscmp(fieldName, L"display_add_skill_imageset_7") == 0) return display_add_skill_imageset[6];
			if (wcscmp(fieldName, L"display_add_skill_imageset_8") == 0) return display_add_skill_imageset[7];
			if (wcscmp(fieldName, L"display_add_skill_imageset_9") == 0) return display_add_skill_imageset[8];
			if (wcscmp(fieldName, L"display_add_skill_imageset_10") == 0) return display_add_skill_imageset[9];
			if (wcscmp(fieldName, L"display_add_skill_name") == 0) return display_add_skill_name;
			if (wcscmp(fieldName, L"display_add_skill_name_1") == 0) return display_add_skill_name[0];
			if (wcscmp(fieldName, L"display_add_skill_name_2") == 0) return display_add_skill_name[1];
			if (wcscmp(fieldName, L"display_add_skill_name_3") == 0) return display_add_skill_name[2];
			if (wcscmp(fieldName, L"display_add_skill_name_4") == 0) return display_add_skill_name[3];
			if (wcscmp(fieldName, L"display_add_skill_name_5") == 0) return display_add_skill_name[4];
			if (wcscmp(fieldName, L"display_add_skill_name_6") == 0) return display_add_skill_name[5];
			if (wcscmp(fieldName, L"display_add_skill_name_7") == 0) return display_add_skill_name[6];
			if (wcscmp(fieldName, L"display_add_skill_name_8") == 0) return display_add_skill_name[7];
			if (wcscmp(fieldName, L"display_add_skill_name_9") == 0) return display_add_skill_name[8];
			if (wcscmp(fieldName, L"display_add_skill_name_10") == 0) return display_add_skill_name[9];
			if (wcscmp(fieldName, L"display_add_skill_description") == 0) return display_add_skill_description;
			if (wcscmp(fieldName, L"display_add_skill_description_1") == 0) return display_add_skill_description[0];
			if (wcscmp(fieldName, L"display_add_skill_description_2") == 0) return display_add_skill_description[1];
			if (wcscmp(fieldName, L"display_add_skill_description_3") == 0) return display_add_skill_description[2];
			if (wcscmp(fieldName, L"display_add_skill_description_4") == 0) return display_add_skill_description[3];
			if (wcscmp(fieldName, L"display_add_skill_description_5") == 0) return display_add_skill_description[4];
			if (wcscmp(fieldName, L"display_add_skill_description_6") == 0) return display_add_skill_description[5];
			if (wcscmp(fieldName, L"display_add_skill_description_7") == 0) return display_add_skill_description[6];
			if (wcscmp(fieldName, L"display_add_skill_description_8") == 0) return display_add_skill_description[7];
			if (wcscmp(fieldName, L"display_add_skill_description_9") == 0) return display_add_skill_description[8];
			if (wcscmp(fieldName, L"display_add_skill_description_10") == 0) return display_add_skill_description[9];
			if (wcscmp(fieldName, L"guildcraft_small_usable_count") == 0) return guildcraft_small_usable_count;
			if (wcscmp(fieldName, L"guildcraft_small_rentable_count") == 0) return guildcraft_small_rentable_count;
			if (wcscmp(fieldName, L"guildcraft_big_usable_count") == 0) return guildcraft_big_usable_count;
			if (wcscmp(fieldName, L"guildcraft_big_rentable_count") == 0) return guildcraft_big_rentable_count;
			if (wcscmp(fieldName, L"levelup_text") == 0) return levelup_text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[3]));
			if (wcscmp(fieldName, L"required_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[4]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[2]));
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[3]));
			if (wcscmp(fieldName, L"required_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[4]));
			if (wcscmp(fieldName, L"required_guild_point") == 0) return Data::AnyFieldToStringConverter::ToString(&required_guild_point);
			if (wcscmp(fieldName, L"reputation") == 0) return Data::AnyFieldToStringConverter::ToString(&reputation);
			if (wcscmp(fieldName, L"min_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&min_member_count);
			if (wcscmp(fieldName, L"max_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_member_count);
			if (wcscmp(fieldName, L"min_enable_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&min_enable_member_count);
			if (wcscmp(fieldName, L"guild_discount") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_discount);
			if (wcscmp(fieldName, L"level_skill_imageset_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[0]));
			if (wcscmp(fieldName, L"level_skill_imageset_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[1]));
			if (wcscmp(fieldName, L"level_skill_imageset_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[2]));
			if (wcscmp(fieldName, L"level_skill_imageset_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[3]));
			if (wcscmp(fieldName, L"level_skill_imageset_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[4]));
			if (wcscmp(fieldName, L"level_skill_imageset_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[5]));
			if (wcscmp(fieldName, L"level_skill_imageset_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[6]));
			if (wcscmp(fieldName, L"level_skill_imageset_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[7]));
			if (wcscmp(fieldName, L"level_skill_imageset_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[8]));
			if (wcscmp(fieldName, L"level_skill_imageset_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_imageset[9]));
			if (wcscmp(fieldName, L"level_skill_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[0]));
			if (wcscmp(fieldName, L"level_skill_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[1]));
			if (wcscmp(fieldName, L"level_skill_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[2]));
			if (wcscmp(fieldName, L"level_skill_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[3]));
			if (wcscmp(fieldName, L"level_skill_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[4]));
			if (wcscmp(fieldName, L"level_skill_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[5]));
			if (wcscmp(fieldName, L"level_skill_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[6]));
			if (wcscmp(fieldName, L"level_skill_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[7]));
			if (wcscmp(fieldName, L"level_skill_name_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[8]));
			if (wcscmp(fieldName, L"level_skill_name_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_name[9]));
			if (wcscmp(fieldName, L"level_skill_description_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[0]));
			if (wcscmp(fieldName, L"level_skill_description_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[1]));
			if (wcscmp(fieldName, L"level_skill_description_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[2]));
			if (wcscmp(fieldName, L"level_skill_description_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[3]));
			if (wcscmp(fieldName, L"level_skill_description_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[4]));
			if (wcscmp(fieldName, L"level_skill_description_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[5]));
			if (wcscmp(fieldName, L"level_skill_description_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[6]));
			if (wcscmp(fieldName, L"level_skill_description_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[7]));
			if (wcscmp(fieldName, L"level_skill_description_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[8]));
			if (wcscmp(fieldName, L"level_skill_description_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(level_skill_description[9]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[0]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[1]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[2]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[3]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[4]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[5]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[6]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[7]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[8]));
			if (wcscmp(fieldName, L"display_basic_skill_imageset_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_imageset[9]));
			if (wcscmp(fieldName, L"display_basic_skill_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[0]));
			if (wcscmp(fieldName, L"display_basic_skill_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[1]));
			if (wcscmp(fieldName, L"display_basic_skill_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[2]));
			if (wcscmp(fieldName, L"display_basic_skill_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[3]));
			if (wcscmp(fieldName, L"display_basic_skill_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[4]));
			if (wcscmp(fieldName, L"display_basic_skill_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[5]));
			if (wcscmp(fieldName, L"display_basic_skill_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[6]));
			if (wcscmp(fieldName, L"display_basic_skill_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[7]));
			if (wcscmp(fieldName, L"display_basic_skill_name_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[8]));
			if (wcscmp(fieldName, L"display_basic_skill_name_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_name[9]));
			if (wcscmp(fieldName, L"display_basic_skill_description_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[0]));
			if (wcscmp(fieldName, L"display_basic_skill_description_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[1]));
			if (wcscmp(fieldName, L"display_basic_skill_description_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[2]));
			if (wcscmp(fieldName, L"display_basic_skill_description_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[3]));
			if (wcscmp(fieldName, L"display_basic_skill_description_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[4]));
			if (wcscmp(fieldName, L"display_basic_skill_description_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[5]));
			if (wcscmp(fieldName, L"display_basic_skill_description_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[6]));
			if (wcscmp(fieldName, L"display_basic_skill_description_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[7]));
			if (wcscmp(fieldName, L"display_basic_skill_description_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[8]));
			if (wcscmp(fieldName, L"display_basic_skill_description_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_basic_skill_description[9]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[0]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[1]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[2]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[3]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[4]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[5]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[6]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[7]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[8]));
			if (wcscmp(fieldName, L"display_add_skill_imageset_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_imageset[9]));
			if (wcscmp(fieldName, L"display_add_skill_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[0]));
			if (wcscmp(fieldName, L"display_add_skill_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[1]));
			if (wcscmp(fieldName, L"display_add_skill_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[2]));
			if (wcscmp(fieldName, L"display_add_skill_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[3]));
			if (wcscmp(fieldName, L"display_add_skill_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[4]));
			if (wcscmp(fieldName, L"display_add_skill_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[5]));
			if (wcscmp(fieldName, L"display_add_skill_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[6]));
			if (wcscmp(fieldName, L"display_add_skill_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[7]));
			if (wcscmp(fieldName, L"display_add_skill_name_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[8]));
			if (wcscmp(fieldName, L"display_add_skill_name_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_name[9]));
			if (wcscmp(fieldName, L"display_add_skill_description_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[0]));
			if (wcscmp(fieldName, L"display_add_skill_description_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[1]));
			if (wcscmp(fieldName, L"display_add_skill_description_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[2]));
			if (wcscmp(fieldName, L"display_add_skill_description_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[3]));
			if (wcscmp(fieldName, L"display_add_skill_description_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[4]));
			if (wcscmp(fieldName, L"display_add_skill_description_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[5]));
			if (wcscmp(fieldName, L"display_add_skill_description_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[6]));
			if (wcscmp(fieldName, L"display_add_skill_description_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[7]));
			if (wcscmp(fieldName, L"display_add_skill_description_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[8]));
			if (wcscmp(fieldName, L"display_add_skill_description_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(display_add_skill_description[9]));
			if (wcscmp(fieldName, L"guildcraft_small_usable_count") == 0) return Data::AnyFieldToStringConverter::ToString(&guildcraft_small_usable_count);
			if (wcscmp(fieldName, L"guildcraft_small_rentable_count") == 0) return Data::AnyFieldToStringConverter::ToString(&guildcraft_small_rentable_count);
			if (wcscmp(fieldName, L"guildcraft_big_usable_count") == 0) return Data::AnyFieldToStringConverter::ToString(&guildcraft_big_usable_count);
			if (wcscmp(fieldName, L"guildcraft_big_rentable_count") == 0) return Data::AnyFieldToStringConverter::ToString(&guildcraft_big_rentable_count);
			if (wcscmp(fieldName, L"levelup_text") == 0) return Data::AnyFieldToStringConverter::ToString(&levelup_text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(level_skill_imageset[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) level_skill_imageset[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(level_skill_imageset[i]));
			}
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(display_basic_skill_imageset[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) display_basic_skill_imageset[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(display_basic_skill_imageset[i]));
			}
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(display_add_skill_imageset[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) display_add_skill_imageset[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(display_add_skill_imageset[i]));
			}
		}
		union Key
		{
            struct {
                __int8 level;
__int8 guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
Data::TableRef required_item[5];
int required_item_tableId(){return 189;};
__int32 required_item_count[5];
__int32 required_guild_point;
__int32 reputation;
__int32 min_member_count;
__int32 max_member_count;
__int32 min_enable_member_count;
Data::TableRef guild_discount;
int guild_discount_tableId(){return 167;};
wchar_t* level_skill_imageset[10];
Data::TableRef level_skill_name[10];
int level_skill_name_tableId(){return 405;};
Data::TableRef level_skill_description[10];
int level_skill_description_tableId(){return 405;};
wchar_t* display_basic_skill_imageset[10];
Data::TableRef display_basic_skill_name[10];
int display_basic_skill_name_tableId(){return 405;};
Data::TableRef display_basic_skill_description[10];
int display_basic_skill_description_tableId(){return 405;};
wchar_t* display_add_skill_imageset[10];
Data::TableRef display_add_skill_name[10];
int display_add_skill_name_tableId(){return 405;};
Data::TableRef display_add_skill_description[10];
int display_add_skill_description_tableId(){return 405;};
__int8 guildcraft_small_usable_count;
__int8 guildcraft_small_rentable_count;
__int8 guildcraft_big_usable_count;
__int8 guildcraft_big_rentable_count;
Data::TableRef levelup_text;
int levelup_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 11); }
		static __int16 TableId() { return 168; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildlevel_RecordPtr // : DrRecordPtr
	{
		guildlevel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guildlevel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}