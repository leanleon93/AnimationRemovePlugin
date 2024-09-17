/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_tier_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"min_score") == 0) return min_score;
			if (wcscmp(fieldName, L"min_score_1") == 0) return min_score[0];
			if (wcscmp(fieldName, L"min_score_2") == 0) return min_score[1];
			if (wcscmp(fieldName, L"min_score_3") == 0) return min_score[2];
			if (wcscmp(fieldName, L"min_score_4") == 0) return min_score[3];
			if (wcscmp(fieldName, L"min_score_5") == 0) return min_score[4];
			if (wcscmp(fieldName, L"min_score_6") == 0) return min_score[5];
			if (wcscmp(fieldName, L"min_score_7") == 0) return min_score[6];
			if (wcscmp(fieldName, L"min_score_8") == 0) return min_score[7];
			if (wcscmp(fieldName, L"min_score_9") == 0) return min_score[8];
			if (wcscmp(fieldName, L"min_score_10") == 0) return min_score[9];
			if (wcscmp(fieldName, L"min_score_11") == 0) return min_score[10];
			if (wcscmp(fieldName, L"min_score_12") == 0) return min_score[11];
			if (wcscmp(fieldName, L"min_score_13") == 0) return min_score[12];
			if (wcscmp(fieldName, L"min_score_14") == 0) return min_score[13];
			if (wcscmp(fieldName, L"min_score_15") == 0) return min_score[14];
			if (wcscmp(fieldName, L"min_score_16") == 0) return min_score[15];
			if (wcscmp(fieldName, L"min_score_17") == 0) return min_score[16];
			if (wcscmp(fieldName, L"min_score_18") == 0) return min_score[17];
			if (wcscmp(fieldName, L"min_score_19") == 0) return min_score[18];
			if (wcscmp(fieldName, L"min_score_20") == 0) return min_score[19];
			if (wcscmp(fieldName, L"min_rank") == 0) return min_rank;
			if (wcscmp(fieldName, L"min_rank_1") == 0) return min_rank[0];
			if (wcscmp(fieldName, L"min_rank_2") == 0) return min_rank[1];
			if (wcscmp(fieldName, L"min_rank_3") == 0) return min_rank[2];
			if (wcscmp(fieldName, L"min_rank_4") == 0) return min_rank[3];
			if (wcscmp(fieldName, L"min_rank_5") == 0) return min_rank[4];
			if (wcscmp(fieldName, L"min_rank_6") == 0) return min_rank[5];
			if (wcscmp(fieldName, L"min_rank_7") == 0) return min_rank[6];
			if (wcscmp(fieldName, L"min_rank_8") == 0) return min_rank[7];
			if (wcscmp(fieldName, L"min_rank_9") == 0) return min_rank[8];
			if (wcscmp(fieldName, L"min_rank_10") == 0) return min_rank[9];
			if (wcscmp(fieldName, L"min_rank_11") == 0) return min_rank[10];
			if (wcscmp(fieldName, L"min_rank_12") == 0) return min_rank[11];
			if (wcscmp(fieldName, L"min_rank_13") == 0) return min_rank[12];
			if (wcscmp(fieldName, L"min_rank_14") == 0) return min_rank[13];
			if (wcscmp(fieldName, L"min_rank_15") == 0) return min_rank[14];
			if (wcscmp(fieldName, L"min_rank_16") == 0) return min_rank[15];
			if (wcscmp(fieldName, L"min_rank_17") == 0) return min_rank[16];
			if (wcscmp(fieldName, L"min_rank_18") == 0) return min_rank[17];
			if (wcscmp(fieldName, L"min_rank_19") == 0) return min_rank[18];
			if (wcscmp(fieldName, L"min_rank_20") == 0) return min_rank[19];
			if (wcscmp(fieldName, L"tier_title") == 0) return tier_title;
			if (wcscmp(fieldName, L"tier_title_1") == 0) return tier_title[0];
			if (wcscmp(fieldName, L"tier_title_2") == 0) return tier_title[1];
			if (wcscmp(fieldName, L"tier_title_3") == 0) return tier_title[2];
			if (wcscmp(fieldName, L"tier_title_4") == 0) return tier_title[3];
			if (wcscmp(fieldName, L"tier_title_5") == 0) return tier_title[4];
			if (wcscmp(fieldName, L"tier_title_6") == 0) return tier_title[5];
			if (wcscmp(fieldName, L"tier_title_7") == 0) return tier_title[6];
			if (wcscmp(fieldName, L"tier_title_8") == 0) return tier_title[7];
			if (wcscmp(fieldName, L"tier_title_9") == 0) return tier_title[8];
			if (wcscmp(fieldName, L"tier_title_10") == 0) return tier_title[9];
			if (wcscmp(fieldName, L"tier_title_11") == 0) return tier_title[10];
			if (wcscmp(fieldName, L"tier_title_12") == 0) return tier_title[11];
			if (wcscmp(fieldName, L"tier_title_13") == 0) return tier_title[12];
			if (wcscmp(fieldName, L"tier_title_14") == 0) return tier_title[13];
			if (wcscmp(fieldName, L"tier_title_15") == 0) return tier_title[14];
			if (wcscmp(fieldName, L"tier_title_16") == 0) return tier_title[15];
			if (wcscmp(fieldName, L"tier_title_17") == 0) return tier_title[16];
			if (wcscmp(fieldName, L"tier_title_18") == 0) return tier_title[17];
			if (wcscmp(fieldName, L"tier_title_19") == 0) return tier_title[18];
			if (wcscmp(fieldName, L"tier_title_20") == 0) return tier_title[19];
			if (wcscmp(fieldName, L"tier_image") == 0) return tier_image;
			if (wcscmp(fieldName, L"tier_image_1") == 0) return tier_image[0];
			if (wcscmp(fieldName, L"tier_image_2") == 0) return tier_image[1];
			if (wcscmp(fieldName, L"tier_image_3") == 0) return tier_image[2];
			if (wcscmp(fieldName, L"tier_image_4") == 0) return tier_image[3];
			if (wcscmp(fieldName, L"tier_image_5") == 0) return tier_image[4];
			if (wcscmp(fieldName, L"tier_image_6") == 0) return tier_image[5];
			if (wcscmp(fieldName, L"tier_image_7") == 0) return tier_image[6];
			if (wcscmp(fieldName, L"tier_image_8") == 0) return tier_image[7];
			if (wcscmp(fieldName, L"tier_image_9") == 0) return tier_image[8];
			if (wcscmp(fieldName, L"tier_image_10") == 0) return tier_image[9];
			if (wcscmp(fieldName, L"tier_image_11") == 0) return tier_image[10];
			if (wcscmp(fieldName, L"tier_image_12") == 0) return tier_image[11];
			if (wcscmp(fieldName, L"tier_image_13") == 0) return tier_image[12];
			if (wcscmp(fieldName, L"tier_image_14") == 0) return tier_image[13];
			if (wcscmp(fieldName, L"tier_image_15") == 0) return tier_image[14];
			if (wcscmp(fieldName, L"tier_image_16") == 0) return tier_image[15];
			if (wcscmp(fieldName, L"tier_image_17") == 0) return tier_image[16];
			if (wcscmp(fieldName, L"tier_image_18") == 0) return tier_image[17];
			if (wcscmp(fieldName, L"tier_image_19") == 0) return tier_image[18];
			if (wcscmp(fieldName, L"tier_image_20") == 0) return tier_image[19];
			if (wcscmp(fieldName, L"tier_image_small") == 0) return tier_image_small;
			if (wcscmp(fieldName, L"tier_image_small_1") == 0) return tier_image_small[0];
			if (wcscmp(fieldName, L"tier_image_small_2") == 0) return tier_image_small[1];
			if (wcscmp(fieldName, L"tier_image_small_3") == 0) return tier_image_small[2];
			if (wcscmp(fieldName, L"tier_image_small_4") == 0) return tier_image_small[3];
			if (wcscmp(fieldName, L"tier_image_small_5") == 0) return tier_image_small[4];
			if (wcscmp(fieldName, L"tier_image_small_6") == 0) return tier_image_small[5];
			if (wcscmp(fieldName, L"tier_image_small_7") == 0) return tier_image_small[6];
			if (wcscmp(fieldName, L"tier_image_small_8") == 0) return tier_image_small[7];
			if (wcscmp(fieldName, L"tier_image_small_9") == 0) return tier_image_small[8];
			if (wcscmp(fieldName, L"tier_image_small_10") == 0) return tier_image_small[9];
			if (wcscmp(fieldName, L"tier_image_small_11") == 0) return tier_image_small[10];
			if (wcscmp(fieldName, L"tier_image_small_12") == 0) return tier_image_small[11];
			if (wcscmp(fieldName, L"tier_image_small_13") == 0) return tier_image_small[12];
			if (wcscmp(fieldName, L"tier_image_small_14") == 0) return tier_image_small[13];
			if (wcscmp(fieldName, L"tier_image_small_15") == 0) return tier_image_small[14];
			if (wcscmp(fieldName, L"tier_image_small_16") == 0) return tier_image_small[15];
			if (wcscmp(fieldName, L"tier_image_small_17") == 0) return tier_image_small[16];
			if (wcscmp(fieldName, L"tier_image_small_18") == 0) return tier_image_small[17];
			if (wcscmp(fieldName, L"tier_image_small_19") == 0) return tier_image_small[18];
			if (wcscmp(fieldName, L"tier_image_small_20") == 0) return tier_image_small[19];
			if (wcscmp(fieldName, L"gauge_color_conditional") == 0) return gauge_color_conditional;
			if (wcscmp(fieldName, L"gauge_color_conditional_1") == 0) return gauge_color_conditional[0];
			if (wcscmp(fieldName, L"gauge_color_conditional_2") == 0) return gauge_color_conditional[1];
			if (wcscmp(fieldName, L"gauge_color_conditional_3") == 0) return gauge_color_conditional[2];
			if (wcscmp(fieldName, L"gauge_color_conditional_4") == 0) return gauge_color_conditional[3];
			if (wcscmp(fieldName, L"gauge_color_conditional_5") == 0) return gauge_color_conditional[4];
			if (wcscmp(fieldName, L"gauge_color_fixed") == 0) return gauge_color_fixed;
			if (wcscmp(fieldName, L"gauge_color_fixed_1") == 0) return gauge_color_fixed[0];
			if (wcscmp(fieldName, L"gauge_color_fixed_2") == 0) return gauge_color_fixed[1];
			if (wcscmp(fieldName, L"gauge_color_fixed_3") == 0) return gauge_color_fixed[2];
			if (wcscmp(fieldName, L"gauge_color_fixed_4") == 0) return gauge_color_fixed[3];
			if (wcscmp(fieldName, L"gauge_color_fixed_5") == 0) return gauge_color_fixed[4];
			if (wcscmp(fieldName, L"gauge_color_fixed_6") == 0) return gauge_color_fixed[5];
			if (wcscmp(fieldName, L"gauge_color_fixed_7") == 0) return gauge_color_fixed[6];
			if (wcscmp(fieldName, L"gauge_color_fixed_8") == 0) return gauge_color_fixed[7];
			if (wcscmp(fieldName, L"gauge_color_fixed_9") == 0) return gauge_color_fixed[8];
			if (wcscmp(fieldName, L"gauge_color_fixed_10") == 0) return gauge_color_fixed[9];
			if (wcscmp(fieldName, L"gauge_color_fixed_11") == 0) return gauge_color_fixed[10];
			if (wcscmp(fieldName, L"gauge_color_fixed_12") == 0) return gauge_color_fixed[11];
			if (wcscmp(fieldName, L"gauge_color_fixed_13") == 0) return gauge_color_fixed[12];
			if (wcscmp(fieldName, L"gauge_color_fixed_14") == 0) return gauge_color_fixed[13];
			if (wcscmp(fieldName, L"gauge_color_fixed_15") == 0) return gauge_color_fixed[14];
			if (wcscmp(fieldName, L"gauge_color_fixed_16") == 0) return gauge_color_fixed[15];
			if (wcscmp(fieldName, L"gauge_color_fixed_17") == 0) return gauge_color_fixed[16];
			if (wcscmp(fieldName, L"gauge_color_fixed_18") == 0) return gauge_color_fixed[17];
			if (wcscmp(fieldName, L"gauge_color_fixed_19") == 0) return gauge_color_fixed[18];
			if (wcscmp(fieldName, L"gauge_color_fixed_20") == 0) return gauge_color_fixed[19];
			if (wcscmp(fieldName, L"gauge_percentage_condition") == 0) return gauge_percentage_condition;
			if (wcscmp(fieldName, L"gauge_percentage_condition_1") == 0) return gauge_percentage_condition[0];
			if (wcscmp(fieldName, L"gauge_percentage_condition_2") == 0) return gauge_percentage_condition[1];
			if (wcscmp(fieldName, L"gauge_percentage_condition_3") == 0) return gauge_percentage_condition[2];
			if (wcscmp(fieldName, L"gauge_percentage_condition_4") == 0) return gauge_percentage_condition[3];
			if (wcscmp(fieldName, L"gauge_percentage_condition_5") == 0) return gauge_percentage_condition[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"min_score_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[0]));
			if (wcscmp(fieldName, L"min_score_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[1]));
			if (wcscmp(fieldName, L"min_score_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[2]));
			if (wcscmp(fieldName, L"min_score_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[3]));
			if (wcscmp(fieldName, L"min_score_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[4]));
			if (wcscmp(fieldName, L"min_score_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[5]));
			if (wcscmp(fieldName, L"min_score_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[6]));
			if (wcscmp(fieldName, L"min_score_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[7]));
			if (wcscmp(fieldName, L"min_score_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[8]));
			if (wcscmp(fieldName, L"min_score_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[9]));
			if (wcscmp(fieldName, L"min_score_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[10]));
			if (wcscmp(fieldName, L"min_score_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[11]));
			if (wcscmp(fieldName, L"min_score_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[12]));
			if (wcscmp(fieldName, L"min_score_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[13]));
			if (wcscmp(fieldName, L"min_score_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[14]));
			if (wcscmp(fieldName, L"min_score_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[15]));
			if (wcscmp(fieldName, L"min_score_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[16]));
			if (wcscmp(fieldName, L"min_score_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[17]));
			if (wcscmp(fieldName, L"min_score_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[18]));
			if (wcscmp(fieldName, L"min_score_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_score[19]));
			if (wcscmp(fieldName, L"min_rank_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[0]));
			if (wcscmp(fieldName, L"min_rank_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[1]));
			if (wcscmp(fieldName, L"min_rank_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[2]));
			if (wcscmp(fieldName, L"min_rank_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[3]));
			if (wcscmp(fieldName, L"min_rank_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[4]));
			if (wcscmp(fieldName, L"min_rank_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[5]));
			if (wcscmp(fieldName, L"min_rank_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[6]));
			if (wcscmp(fieldName, L"min_rank_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[7]));
			if (wcscmp(fieldName, L"min_rank_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[8]));
			if (wcscmp(fieldName, L"min_rank_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[9]));
			if (wcscmp(fieldName, L"min_rank_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[10]));
			if (wcscmp(fieldName, L"min_rank_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[11]));
			if (wcscmp(fieldName, L"min_rank_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[12]));
			if (wcscmp(fieldName, L"min_rank_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[13]));
			if (wcscmp(fieldName, L"min_rank_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[14]));
			if (wcscmp(fieldName, L"min_rank_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[15]));
			if (wcscmp(fieldName, L"min_rank_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[16]));
			if (wcscmp(fieldName, L"min_rank_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[17]));
			if (wcscmp(fieldName, L"min_rank_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[18]));
			if (wcscmp(fieldName, L"min_rank_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(min_rank[19]));
			if (wcscmp(fieldName, L"tier_title_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[0]));
			if (wcscmp(fieldName, L"tier_title_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[1]));
			if (wcscmp(fieldName, L"tier_title_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[2]));
			if (wcscmp(fieldName, L"tier_title_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[3]));
			if (wcscmp(fieldName, L"tier_title_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[4]));
			if (wcscmp(fieldName, L"tier_title_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[5]));
			if (wcscmp(fieldName, L"tier_title_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[6]));
			if (wcscmp(fieldName, L"tier_title_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[7]));
			if (wcscmp(fieldName, L"tier_title_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[8]));
			if (wcscmp(fieldName, L"tier_title_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[9]));
			if (wcscmp(fieldName, L"tier_title_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[10]));
			if (wcscmp(fieldName, L"tier_title_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[11]));
			if (wcscmp(fieldName, L"tier_title_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[12]));
			if (wcscmp(fieldName, L"tier_title_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[13]));
			if (wcscmp(fieldName, L"tier_title_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[14]));
			if (wcscmp(fieldName, L"tier_title_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[15]));
			if (wcscmp(fieldName, L"tier_title_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[16]));
			if (wcscmp(fieldName, L"tier_title_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[17]));
			if (wcscmp(fieldName, L"tier_title_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[18]));
			if (wcscmp(fieldName, L"tier_title_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_title[19]));
			if (wcscmp(fieldName, L"tier_image_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[0]));
			if (wcscmp(fieldName, L"tier_image_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[1]));
			if (wcscmp(fieldName, L"tier_image_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[2]));
			if (wcscmp(fieldName, L"tier_image_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[3]));
			if (wcscmp(fieldName, L"tier_image_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[4]));
			if (wcscmp(fieldName, L"tier_image_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[5]));
			if (wcscmp(fieldName, L"tier_image_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[6]));
			if (wcscmp(fieldName, L"tier_image_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[7]));
			if (wcscmp(fieldName, L"tier_image_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[8]));
			if (wcscmp(fieldName, L"tier_image_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[9]));
			if (wcscmp(fieldName, L"tier_image_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[10]));
			if (wcscmp(fieldName, L"tier_image_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[11]));
			if (wcscmp(fieldName, L"tier_image_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[12]));
			if (wcscmp(fieldName, L"tier_image_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[13]));
			if (wcscmp(fieldName, L"tier_image_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[14]));
			if (wcscmp(fieldName, L"tier_image_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[15]));
			if (wcscmp(fieldName, L"tier_image_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[16]));
			if (wcscmp(fieldName, L"tier_image_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[17]));
			if (wcscmp(fieldName, L"tier_image_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[18]));
			if (wcscmp(fieldName, L"tier_image_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image[19]));
			if (wcscmp(fieldName, L"tier_image_small_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[0]));
			if (wcscmp(fieldName, L"tier_image_small_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[1]));
			if (wcscmp(fieldName, L"tier_image_small_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[2]));
			if (wcscmp(fieldName, L"tier_image_small_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[3]));
			if (wcscmp(fieldName, L"tier_image_small_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[4]));
			if (wcscmp(fieldName, L"tier_image_small_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[5]));
			if (wcscmp(fieldName, L"tier_image_small_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[6]));
			if (wcscmp(fieldName, L"tier_image_small_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[7]));
			if (wcscmp(fieldName, L"tier_image_small_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[8]));
			if (wcscmp(fieldName, L"tier_image_small_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[9]));
			if (wcscmp(fieldName, L"tier_image_small_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[10]));
			if (wcscmp(fieldName, L"tier_image_small_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[11]));
			if (wcscmp(fieldName, L"tier_image_small_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[12]));
			if (wcscmp(fieldName, L"tier_image_small_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[13]));
			if (wcscmp(fieldName, L"tier_image_small_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[14]));
			if (wcscmp(fieldName, L"tier_image_small_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[15]));
			if (wcscmp(fieldName, L"tier_image_small_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[16]));
			if (wcscmp(fieldName, L"tier_image_small_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[17]));
			if (wcscmp(fieldName, L"tier_image_small_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[18]));
			if (wcscmp(fieldName, L"tier_image_small_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(tier_image_small[19]));
			if (wcscmp(fieldName, L"gauge_color_conditional_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_conditional[0]));
			if (wcscmp(fieldName, L"gauge_color_conditional_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_conditional[1]));
			if (wcscmp(fieldName, L"gauge_color_conditional_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_conditional[2]));
			if (wcscmp(fieldName, L"gauge_color_conditional_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_conditional[3]));
			if (wcscmp(fieldName, L"gauge_color_conditional_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_conditional[4]));
			if (wcscmp(fieldName, L"gauge_color_fixed_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[0]));
			if (wcscmp(fieldName, L"gauge_color_fixed_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[1]));
			if (wcscmp(fieldName, L"gauge_color_fixed_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[2]));
			if (wcscmp(fieldName, L"gauge_color_fixed_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[3]));
			if (wcscmp(fieldName, L"gauge_color_fixed_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[4]));
			if (wcscmp(fieldName, L"gauge_color_fixed_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[5]));
			if (wcscmp(fieldName, L"gauge_color_fixed_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[6]));
			if (wcscmp(fieldName, L"gauge_color_fixed_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[7]));
			if (wcscmp(fieldName, L"gauge_color_fixed_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[8]));
			if (wcscmp(fieldName, L"gauge_color_fixed_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[9]));
			if (wcscmp(fieldName, L"gauge_color_fixed_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[10]));
			if (wcscmp(fieldName, L"gauge_color_fixed_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[11]));
			if (wcscmp(fieldName, L"gauge_color_fixed_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[12]));
			if (wcscmp(fieldName, L"gauge_color_fixed_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[13]));
			if (wcscmp(fieldName, L"gauge_color_fixed_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[14]));
			if (wcscmp(fieldName, L"gauge_color_fixed_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[15]));
			if (wcscmp(fieldName, L"gauge_color_fixed_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[16]));
			if (wcscmp(fieldName, L"gauge_color_fixed_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[17]));
			if (wcscmp(fieldName, L"gauge_color_fixed_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[18]));
			if (wcscmp(fieldName, L"gauge_color_fixed_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_color_fixed[19]));
			if (wcscmp(fieldName, L"gauge_percentage_condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_percentage_condition[0]));
			if (wcscmp(fieldName, L"gauge_percentage_condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_percentage_condition[1]));
			if (wcscmp(fieldName, L"gauge_percentage_condition_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_percentage_condition[2]));
			if (wcscmp(fieldName, L"gauge_percentage_condition_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_percentage_condition[3]));
			if (wcscmp(fieldName, L"gauge_percentage_condition_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gauge_percentage_condition[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 20; i++) {
				if (reinterpret_cast<std::uintptr_t>(tier_image[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) tier_image[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(tier_image[i]));
			}
			for (int i = 0; i < 20; i++) {
				if (reinterpret_cast<std::uintptr_t>(tier_image_small[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) tier_image_small[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(tier_image_small[i]));
			}
			for (int i = 0; i < 5; i++) {
				if (reinterpret_cast<std::uintptr_t>(gauge_color_conditional[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gauge_color_conditional[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gauge_color_conditional[i]));
			}
			for (int i = 0; i < 20; i++) {
				if (reinterpret_cast<std::uintptr_t>(gauge_color_fixed[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gauge_color_fixed[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gauge_color_fixed[i]));
			}
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 min_score[20];
__int32 min_rank[20];
Data::TableRef tier_title[20];
int tier_title_tableId(){return 405;};
wchar_t* tier_image[20];
wchar_t* tier_image_small[20];
wchar_t* gauge_color_conditional[5];
wchar_t* gauge_color_fixed[20];
__int32 gauge_percentage_condition[5];

		static TableVersion Version() { return TableVersion(2, 5); }
		static __int16 TableId() { return 303; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_tier_RecordPtr // : DrRecordPtr
	{
		ranking2_tier_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_tier_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}