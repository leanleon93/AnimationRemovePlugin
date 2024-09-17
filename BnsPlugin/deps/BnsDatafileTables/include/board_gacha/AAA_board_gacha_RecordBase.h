/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct board_gacha_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"square_matrix_n") == 0) return square_matrix_n;
			if (wcscmp(fieldName, L"round_duration") == 0) return round_duration;
			if (wcscmp(fieldName, L"select_position_enable") == 0) return select_position_enable;
			if (wcscmp(fieldName, L"participation_count_per_character") == 0) return participation_count_per_character;
			if (wcscmp(fieldName, L"result_top_rank_count") == 0) return result_top_rank_count;
			if (wcscmp(fieldName, L"top_rank_history_count") == 0) return top_rank_history_count;
			if (wcscmp(fieldName, L"cost_item") == 0) return cost_item;
			if (wcscmp(fieldName, L"cost_item_count") == 0) return cost_item_count;
			if (wcscmp(fieldName, L"instant_payment_enable") == 0) return instant_payment_enable;
			if (wcscmp(fieldName, L"instant_payment_item") == 0) return instant_payment_item;
			if (wcscmp(fieldName, L"board_image_player") == 0) return board_image_player;
			if (wcscmp(fieldName, L"board_image_other_pc") == 0) return board_image_other_pc;
			if (wcscmp(fieldName, L"board_image_special") == 0) return board_image_special;
			if (wcscmp(fieldName, L"board_image_first") == 0) return board_image_first;
			if (wcscmp(fieldName, L"board_image_second") == 0) return board_image_second;
			if (wcscmp(fieldName, L"board_image_third") == 0) return board_image_third;
			if (wcscmp(fieldName, L"board_image_lucky_line") == 0) return board_image_lucky_line;
			if (wcscmp(fieldName, L"effect_number_select") == 0) return effect_number_select;
			if (wcscmp(fieldName, L"effect_number_recieve") == 0) return effect_number_recieve;
			if (wcscmp(fieldName, L"effect_time_end") == 0) return effect_time_end;
			if (wcscmp(fieldName, L"effect_result_confirm_button") == 0) return effect_result_confirm_button;
			if (wcscmp(fieldName, L"effect_result_recieve_reward_window") == 0) return effect_result_recieve_reward_window;
			if (wcscmp(fieldName, L"effect_result_reward_lucky") == 0) return effect_result_reward_lucky;
			if (wcscmp(fieldName, L"effect_result_reward_special") == 0) return effect_result_reward_special;
			if (wcscmp(fieldName, L"effect_result_reward_first") == 0) return effect_result_reward_first;
			if (wcscmp(fieldName, L"effect_result_reward_second") == 0) return effect_result_reward_second;
			if (wcscmp(fieldName, L"effect_result_reward_third") == 0) return effect_result_reward_third;
			if (wcscmp(fieldName, L"effect_progress_bar_edge") == 0) return effect_progress_bar_edge;
			if (wcscmp(fieldName, L"effect_progress_bar_end") == 0) return effect_progress_bar_end;
			if (wcscmp(fieldName, L"font_first_list_my_name") == 0) return font_first_list_my_name;
			if (wcscmp(fieldName, L"font_first_list_other_name") == 0) return font_first_list_other_name;
			if (wcscmp(fieldName, L"font_draw_reward_list_item_name") == 0) return font_draw_reward_list_item_name;
			if (wcscmp(fieldName, L"font_recieve_reward_list_item_name") == 0) return font_recieve_reward_list_item_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"square_matrix_n") == 0) return Data::AnyFieldToStringConverter::ToString(&square_matrix_n);
			if (wcscmp(fieldName, L"round_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&round_duration);
			if (wcscmp(fieldName, L"select_position_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&select_position_enable);
			if (wcscmp(fieldName, L"participation_count_per_character") == 0) return Data::AnyFieldToStringConverter::ToString(&participation_count_per_character);
			if (wcscmp(fieldName, L"result_top_rank_count") == 0) return Data::AnyFieldToStringConverter::ToString(&result_top_rank_count);
			if (wcscmp(fieldName, L"top_rank_history_count") == 0) return Data::AnyFieldToStringConverter::ToString(&top_rank_history_count);
			if (wcscmp(fieldName, L"cost_item") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_item);
			if (wcscmp(fieldName, L"cost_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_item_count);
			if (wcscmp(fieldName, L"instant_payment_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&instant_payment_enable);
			if (wcscmp(fieldName, L"instant_payment_item") == 0) return Data::AnyFieldToStringConverter::ToString(&instant_payment_item);
			if (wcscmp(fieldName, L"board_image_player") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_player);
			if (wcscmp(fieldName, L"board_image_other_pc") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_other_pc);
			if (wcscmp(fieldName, L"board_image_special") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_special);
			if (wcscmp(fieldName, L"board_image_first") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_first);
			if (wcscmp(fieldName, L"board_image_second") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_second);
			if (wcscmp(fieldName, L"board_image_third") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_third);
			if (wcscmp(fieldName, L"board_image_lucky_line") == 0) return Data::AnyFieldToStringConverter::ToString(&board_image_lucky_line);
			if (wcscmp(fieldName, L"effect_number_select") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_number_select);
			if (wcscmp(fieldName, L"effect_number_recieve") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_number_recieve);
			if (wcscmp(fieldName, L"effect_time_end") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_time_end);
			if (wcscmp(fieldName, L"effect_result_confirm_button") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_confirm_button);
			if (wcscmp(fieldName, L"effect_result_recieve_reward_window") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_recieve_reward_window);
			if (wcscmp(fieldName, L"effect_result_reward_lucky") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_reward_lucky);
			if (wcscmp(fieldName, L"effect_result_reward_special") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_reward_special);
			if (wcscmp(fieldName, L"effect_result_reward_first") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_reward_first);
			if (wcscmp(fieldName, L"effect_result_reward_second") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_reward_second);
			if (wcscmp(fieldName, L"effect_result_reward_third") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_result_reward_third);
			if (wcscmp(fieldName, L"effect_progress_bar_edge") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_progress_bar_edge);
			if (wcscmp(fieldName, L"effect_progress_bar_end") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_progress_bar_end);
			if (wcscmp(fieldName, L"font_first_list_my_name") == 0) return Data::AnyFieldToStringConverter::ToString(&font_first_list_my_name);
			if (wcscmp(fieldName, L"font_first_list_other_name") == 0) return Data::AnyFieldToStringConverter::ToString(&font_first_list_other_name);
			if (wcscmp(fieldName, L"font_draw_reward_list_item_name") == 0) return Data::AnyFieldToStringConverter::ToString(&font_draw_reward_list_item_name);
			if (wcscmp(fieldName, L"font_recieve_reward_list_item_name") == 0) return Data::AnyFieldToStringConverter::ToString(&font_recieve_reward_list_item_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(board_image_player) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_player = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_player));
			else return;
			if (reinterpret_cast<std::uintptr_t>(board_image_other_pc) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_other_pc = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_other_pc));
			if (reinterpret_cast<std::uintptr_t>(board_image_special) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_special = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_special));
			if (reinterpret_cast<std::uintptr_t>(board_image_first) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_first = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_first));
			if (reinterpret_cast<std::uintptr_t>(board_image_second) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_second = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_second));
			if (reinterpret_cast<std::uintptr_t>(board_image_third) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_third = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_third));
			if (reinterpret_cast<std::uintptr_t>(board_image_lucky_line) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) board_image_lucky_line = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(board_image_lucky_line));
			if (reinterpret_cast<std::uintptr_t>(effect_number_select) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_number_select = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_number_select));
			if (reinterpret_cast<std::uintptr_t>(effect_number_recieve) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_number_recieve = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_number_recieve));
			if (reinterpret_cast<std::uintptr_t>(effect_time_end) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_time_end = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_time_end));
			if (reinterpret_cast<std::uintptr_t>(effect_result_confirm_button) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_confirm_button = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_confirm_button));
			if (reinterpret_cast<std::uintptr_t>(effect_result_recieve_reward_window) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_recieve_reward_window = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_recieve_reward_window));
			if (reinterpret_cast<std::uintptr_t>(effect_result_reward_lucky) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_reward_lucky = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_reward_lucky));
			if (reinterpret_cast<std::uintptr_t>(effect_result_reward_special) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_reward_special = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_reward_special));
			if (reinterpret_cast<std::uintptr_t>(effect_result_reward_first) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_reward_first = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_reward_first));
			if (reinterpret_cast<std::uintptr_t>(effect_result_reward_second) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_reward_second = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_reward_second));
			if (reinterpret_cast<std::uintptr_t>(effect_result_reward_third) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_result_reward_third = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_result_reward_third));
			if (reinterpret_cast<std::uintptr_t>(effect_progress_bar_edge) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_progress_bar_edge = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_progress_bar_edge));
			if (reinterpret_cast<std::uintptr_t>(effect_progress_bar_end) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_progress_bar_end = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_progress_bar_end));
			if (reinterpret_cast<std::uintptr_t>(font_first_list_my_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) font_first_list_my_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(font_first_list_my_name));
			if (reinterpret_cast<std::uintptr_t>(font_first_list_other_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) font_first_list_other_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(font_first_list_other_name));
			if (reinterpret_cast<std::uintptr_t>(font_draw_reward_list_item_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) font_draw_reward_list_item_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(font_draw_reward_list_item_name));
			if (reinterpret_cast<std::uintptr_t>(font_recieve_reward_list_item_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) font_recieve_reward_list_item_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(font_recieve_reward_list_item_name));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 square_matrix_n;
char Pad0[1];
__int16 round_duration;
bool select_position_enable;
char Pad1[1];
__int16 participation_count_per_character;
__int8 result_top_rank_count;
__int8 top_rank_history_count;
char Pad2[2];
Data::TableRef cost_item;
int cost_item_tableId(){return 189;};
__int16 cost_item_count;
bool instant_payment_enable;
char Pad3[1];
Data::TableRef instant_payment_item;
int instant_payment_item_tableId(){return 189;};
wchar_t* board_image_player;
wchar_t* board_image_other_pc;
wchar_t* board_image_special;
wchar_t* board_image_first;
wchar_t* board_image_second;
wchar_t* board_image_third;
wchar_t* board_image_lucky_line;
wchar_t* effect_number_select;
wchar_t* effect_number_recieve;
wchar_t* effect_time_end;
wchar_t* effect_result_confirm_button;
wchar_t* effect_result_recieve_reward_window;
wchar_t* effect_result_reward_lucky;
wchar_t* effect_result_reward_special;
wchar_t* effect_result_reward_first;
wchar_t* effect_result_reward_second;
wchar_t* effect_result_reward_third;
wchar_t* effect_progress_bar_edge;
wchar_t* effect_progress_bar_end;
wchar_t* font_first_list_my_name;
wchar_t* font_first_list_other_name;
wchar_t* font_draw_reward_list_item_name;
wchar_t* font_recieve_reward_list_item_name;

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 40; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) board_gacha_RecordPtr // : DrRecordPtr
	{
		board_gacha_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::board_gacha_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}