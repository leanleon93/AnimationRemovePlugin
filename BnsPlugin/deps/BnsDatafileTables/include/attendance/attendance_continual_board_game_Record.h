/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_attendance_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct attendance_continual_board_game_Record : attendance_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = attendance_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"dice_board_background_imageset") == 0) return dice_board_background_imageset;
			if (wcscmp(fieldName, L"roll_dice_1_particle_ref") == 0) return roll_dice_1_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_2_particle_ref") == 0) return roll_dice_2_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_3_particle_ref") == 0) return roll_dice_3_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_4_particle_ref") == 0) return roll_dice_4_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_5_particle_ref") == 0) return roll_dice_5_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_6_particle_ref") == 0) return roll_dice_6_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_7_particle_ref") == 0) return roll_dice_7_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_8_particle_ref") == 0) return roll_dice_8_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_9_particle_ref") == 0) return roll_dice_9_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_10_particle_ref") == 0) return roll_dice_10_particle_ref;
			if (wcscmp(fieldName, L"roll_dice_particle_scale") == 0) return roll_dice_particle_scale;
			if (wcscmp(fieldName, L"roll_dice_particle_duration") == 0) return roll_dice_particle_duration;
			if (wcscmp(fieldName, L"roll_dice_particle_offset_x") == 0) return roll_dice_particle_offset_x;
			if (wcscmp(fieldName, L"roll_dice_particle_offset_y") == 0) return roll_dice_particle_offset_y;
			if (wcscmp(fieldName, L"roll_dice_1_sound_ref") == 0) return roll_dice_1_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_2_sound_ref") == 0) return roll_dice_2_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_3_sound_ref") == 0) return roll_dice_3_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_4_sound_ref") == 0) return roll_dice_4_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_5_sound_ref") == 0) return roll_dice_5_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_6_sound_ref") == 0) return roll_dice_6_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_7_sound_ref") == 0) return roll_dice_7_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_8_sound_ref") == 0) return roll_dice_8_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_9_sound_ref") == 0) return roll_dice_9_sound_ref;
			if (wcscmp(fieldName, L"roll_dice_10_sound_ref") == 0) return roll_dice_10_sound_ref;
			if (wcscmp(fieldName, L"result_dice_1_particle_ref") == 0) return result_dice_1_particle_ref;
			if (wcscmp(fieldName, L"result_dice_2_particle_ref") == 0) return result_dice_2_particle_ref;
			if (wcscmp(fieldName, L"result_dice_3_particle_ref") == 0) return result_dice_3_particle_ref;
			if (wcscmp(fieldName, L"result_dice_4_particle_ref") == 0) return result_dice_4_particle_ref;
			if (wcscmp(fieldName, L"result_dice_5_particle_ref") == 0) return result_dice_5_particle_ref;
			if (wcscmp(fieldName, L"result_dice_6_particle_ref") == 0) return result_dice_6_particle_ref;
			if (wcscmp(fieldName, L"result_dice_7_particle_ref") == 0) return result_dice_7_particle_ref;
			if (wcscmp(fieldName, L"result_dice_8_particle_ref") == 0) return result_dice_8_particle_ref;
			if (wcscmp(fieldName, L"result_dice_9_particle_ref") == 0) return result_dice_9_particle_ref;
			if (wcscmp(fieldName, L"result_dice_10_particle_ref") == 0) return result_dice_10_particle_ref;
			if (wcscmp(fieldName, L"result_dice_particle_scale") == 0) return result_dice_particle_scale;
			if (wcscmp(fieldName, L"result_dice_particle_start_delay") == 0) return result_dice_particle_start_delay;
			if (wcscmp(fieldName, L"result_dice_1_sound_ref") == 0) return result_dice_1_sound_ref;
			if (wcscmp(fieldName, L"result_dice_2_sound_ref") == 0) return result_dice_2_sound_ref;
			if (wcscmp(fieldName, L"result_dice_3_sound_ref") == 0) return result_dice_3_sound_ref;
			if (wcscmp(fieldName, L"result_dice_4_sound_ref") == 0) return result_dice_4_sound_ref;
			if (wcscmp(fieldName, L"result_dice_5_sound_ref") == 0) return result_dice_5_sound_ref;
			if (wcscmp(fieldName, L"result_dice_6_sound_ref") == 0) return result_dice_6_sound_ref;
			if (wcscmp(fieldName, L"result_dice_7_sound_ref") == 0) return result_dice_7_sound_ref;
			if (wcscmp(fieldName, L"result_dice_8_sound_ref") == 0) return result_dice_8_sound_ref;
			if (wcscmp(fieldName, L"result_dice_9_sound_ref") == 0) return result_dice_9_sound_ref;
			if (wcscmp(fieldName, L"result_dice_10_sound_ref") == 0) return result_dice_10_sound_ref;
			if (wcscmp(fieldName, L"move_particle_ref") == 0) return move_particle_ref;
			if (wcscmp(fieldName, L"move_particle_scale") == 0) return move_particle_scale;
			if (wcscmp(fieldName, L"move_particle_duration") == 0) return move_particle_duration;
			if (wcscmp(fieldName, L"move_sound_ref") == 0) return move_sound_ref;
			if (wcscmp(fieldName, L"move_start_delay") == 0) return move_start_delay;
			if (wcscmp(fieldName, L"move_start_particle_ref") == 0) return move_start_particle_ref;
			if (wcscmp(fieldName, L"move_start_particle_scale") == 0) return move_start_particle_scale;
			if (wcscmp(fieldName, L"move_start_particle_duration") == 0) return move_start_particle_duration;
			if (wcscmp(fieldName, L"move_start_sound_ref") == 0) return move_start_sound_ref;
			if (wcscmp(fieldName, L"arrive_particle_ref") == 0) return arrive_particle_ref;
			if (wcscmp(fieldName, L"arrive_particle_scale") == 0) return arrive_particle_scale;
			if (wcscmp(fieldName, L"arrive_particle_duration") == 0) return arrive_particle_duration;
			if (wcscmp(fieldName, L"arrive_sound_ref") == 0) return arrive_sound_ref;
			if (wcscmp(fieldName, L"icon_start_imageset") == 0) return icon_start_imageset;
			if (wcscmp(fieldName, L"icon_empty_imageset") == 0) return icon_empty_imageset;
			if (wcscmp(fieldName, L"icon_empty_passed_imageset") == 0) return icon_empty_passed_imageset;
			if (wcscmp(fieldName, L"icon_reward_acquired_imageset") == 0) return icon_reward_acquired_imageset;
			if (wcscmp(fieldName, L"icon_reward_failed_imageset") == 0) return icon_reward_failed_imageset;
			if (wcscmp(fieldName, L"is_calendar_style") == 0) return is_calendar_style;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = attendance_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"dice_board_background_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&dice_board_background_imageset);
			if (wcscmp(fieldName, L"roll_dice_1_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_1_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_2_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_2_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_3_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_3_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_4_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_4_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_5_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_5_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_6_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_6_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_7_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_7_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_8_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_8_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_9_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_9_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_10_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_10_particle_ref);
			if (wcscmp(fieldName, L"roll_dice_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_particle_scale);
			if (wcscmp(fieldName, L"roll_dice_particle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_particle_duration);
			if (wcscmp(fieldName, L"roll_dice_particle_offset_x") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_particle_offset_x);
			if (wcscmp(fieldName, L"roll_dice_particle_offset_y") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_particle_offset_y);
			if (wcscmp(fieldName, L"roll_dice_1_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_1_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_2_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_2_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_3_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_3_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_4_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_4_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_5_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_5_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_6_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_6_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_7_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_7_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_8_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_8_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_9_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_9_sound_ref);
			if (wcscmp(fieldName, L"roll_dice_10_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&roll_dice_10_sound_ref);
			if (wcscmp(fieldName, L"result_dice_1_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_1_particle_ref);
			if (wcscmp(fieldName, L"result_dice_2_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_2_particle_ref);
			if (wcscmp(fieldName, L"result_dice_3_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_3_particle_ref);
			if (wcscmp(fieldName, L"result_dice_4_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_4_particle_ref);
			if (wcscmp(fieldName, L"result_dice_5_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_5_particle_ref);
			if (wcscmp(fieldName, L"result_dice_6_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_6_particle_ref);
			if (wcscmp(fieldName, L"result_dice_7_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_7_particle_ref);
			if (wcscmp(fieldName, L"result_dice_8_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_8_particle_ref);
			if (wcscmp(fieldName, L"result_dice_9_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_9_particle_ref);
			if (wcscmp(fieldName, L"result_dice_10_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_10_particle_ref);
			if (wcscmp(fieldName, L"result_dice_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_particle_scale);
			if (wcscmp(fieldName, L"result_dice_particle_start_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_particle_start_delay);
			if (wcscmp(fieldName, L"result_dice_1_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_1_sound_ref);
			if (wcscmp(fieldName, L"result_dice_2_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_2_sound_ref);
			if (wcscmp(fieldName, L"result_dice_3_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_3_sound_ref);
			if (wcscmp(fieldName, L"result_dice_4_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_4_sound_ref);
			if (wcscmp(fieldName, L"result_dice_5_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_5_sound_ref);
			if (wcscmp(fieldName, L"result_dice_6_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_6_sound_ref);
			if (wcscmp(fieldName, L"result_dice_7_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_7_sound_ref);
			if (wcscmp(fieldName, L"result_dice_8_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_8_sound_ref);
			if (wcscmp(fieldName, L"result_dice_9_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_9_sound_ref);
			if (wcscmp(fieldName, L"result_dice_10_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&result_dice_10_sound_ref);
			if (wcscmp(fieldName, L"move_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&move_particle_ref);
			if (wcscmp(fieldName, L"move_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&move_particle_scale);
			if (wcscmp(fieldName, L"move_particle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&move_particle_duration);
			if (wcscmp(fieldName, L"move_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&move_sound_ref);
			if (wcscmp(fieldName, L"move_start_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&move_start_delay);
			if (wcscmp(fieldName, L"move_start_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&move_start_particle_ref);
			if (wcscmp(fieldName, L"move_start_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&move_start_particle_scale);
			if (wcscmp(fieldName, L"move_start_particle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&move_start_particle_duration);
			if (wcscmp(fieldName, L"move_start_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&move_start_sound_ref);
			if (wcscmp(fieldName, L"arrive_particle_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&arrive_particle_ref);
			if (wcscmp(fieldName, L"arrive_particle_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&arrive_particle_scale);
			if (wcscmp(fieldName, L"arrive_particle_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&arrive_particle_duration);
			if (wcscmp(fieldName, L"arrive_sound_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&arrive_sound_ref);
			if (wcscmp(fieldName, L"icon_start_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_start_imageset);
			if (wcscmp(fieldName, L"icon_empty_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_empty_imageset);
			if (wcscmp(fieldName, L"icon_empty_passed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_empty_passed_imageset);
			if (wcscmp(fieldName, L"icon_reward_acquired_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_reward_acquired_imageset);
			if (wcscmp(fieldName, L"icon_reward_failed_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_reward_failed_imageset);
			if (wcscmp(fieldName, L"is_calendar_style") == 0) return Data::AnyFieldToStringConverter::ToString(&is_calendar_style);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			attendance_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(dice_board_background_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) dice_board_background_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(dice_board_background_imageset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(roll_dice_1_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_1_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_1_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_2_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_2_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_2_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_3_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_3_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_3_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_4_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_4_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_4_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_5_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_5_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_5_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_6_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_6_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_6_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_7_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_7_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_7_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_8_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_8_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_8_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_9_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_9_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_9_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_10_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_10_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_10_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_1_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_1_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_1_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_2_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_2_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_2_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_3_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_3_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_3_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_4_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_4_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_4_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_5_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_5_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_5_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_6_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_6_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_6_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_7_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_7_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_7_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_8_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_8_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_8_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_9_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_9_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_9_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(roll_dice_10_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) roll_dice_10_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(roll_dice_10_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_1_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_1_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_1_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_2_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_2_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_2_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_3_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_3_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_3_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_4_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_4_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_4_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_5_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_5_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_5_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_6_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_6_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_6_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_7_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_7_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_7_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_8_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_8_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_8_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_9_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_9_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_9_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_10_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_10_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_10_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_1_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_1_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_1_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_2_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_2_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_2_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_3_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_3_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_3_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_4_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_4_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_4_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_5_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_5_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_5_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_6_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_6_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_6_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_7_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_7_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_7_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_8_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_8_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_8_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_9_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_9_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_9_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(result_dice_10_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) result_dice_10_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(result_dice_10_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(move_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) move_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(move_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(move_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) move_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(move_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(move_start_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) move_start_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(move_start_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(move_start_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) move_start_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(move_start_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(arrive_particle_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) arrive_particle_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(arrive_particle_ref));
			if (reinterpret_cast<std::uintptr_t>(arrive_sound_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) arrive_sound_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(arrive_sound_ref));
			if (reinterpret_cast<std::uintptr_t>(icon_start_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_start_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_start_imageset));
			if (reinterpret_cast<std::uintptr_t>(icon_empty_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_empty_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_empty_imageset));
			if (reinterpret_cast<std::uintptr_t>(icon_empty_passed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_empty_passed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_empty_passed_imageset));
			if (reinterpret_cast<std::uintptr_t>(icon_reward_acquired_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_reward_acquired_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_reward_acquired_imageset));
			if (reinterpret_cast<std::uintptr_t>(icon_reward_failed_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_reward_failed_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_reward_failed_imageset));
		}
		wchar_t* dice_board_background_imageset;
wchar_t* roll_dice_1_particle_ref;
wchar_t* roll_dice_2_particle_ref;
wchar_t* roll_dice_3_particle_ref;
wchar_t* roll_dice_4_particle_ref;
wchar_t* roll_dice_5_particle_ref;
wchar_t* roll_dice_6_particle_ref;
wchar_t* roll_dice_7_particle_ref;
wchar_t* roll_dice_8_particle_ref;
wchar_t* roll_dice_9_particle_ref;
wchar_t* roll_dice_10_particle_ref;
float roll_dice_particle_scale;
float roll_dice_particle_duration;
float roll_dice_particle_offset_x;
float roll_dice_particle_offset_y;
wchar_t* roll_dice_1_sound_ref;
wchar_t* roll_dice_2_sound_ref;
wchar_t* roll_dice_3_sound_ref;
wchar_t* roll_dice_4_sound_ref;
wchar_t* roll_dice_5_sound_ref;
wchar_t* roll_dice_6_sound_ref;
wchar_t* roll_dice_7_sound_ref;
wchar_t* roll_dice_8_sound_ref;
wchar_t* roll_dice_9_sound_ref;
wchar_t* roll_dice_10_sound_ref;
wchar_t* result_dice_1_particle_ref;
wchar_t* result_dice_2_particle_ref;
wchar_t* result_dice_3_particle_ref;
wchar_t* result_dice_4_particle_ref;
wchar_t* result_dice_5_particle_ref;
wchar_t* result_dice_6_particle_ref;
wchar_t* result_dice_7_particle_ref;
wchar_t* result_dice_8_particle_ref;
wchar_t* result_dice_9_particle_ref;
wchar_t* result_dice_10_particle_ref;
float result_dice_particle_scale;
float result_dice_particle_start_delay;
wchar_t* result_dice_1_sound_ref;
wchar_t* result_dice_2_sound_ref;
wchar_t* result_dice_3_sound_ref;
wchar_t* result_dice_4_sound_ref;
wchar_t* result_dice_5_sound_ref;
wchar_t* result_dice_6_sound_ref;
wchar_t* result_dice_7_sound_ref;
wchar_t* result_dice_8_sound_ref;
wchar_t* result_dice_9_sound_ref;
wchar_t* result_dice_10_sound_ref;
wchar_t* move_particle_ref;
float move_particle_scale;
float move_particle_duration;
wchar_t* move_sound_ref;
float move_start_delay;
wchar_t* move_start_particle_ref;
float move_start_particle_scale;
float move_start_particle_duration;
wchar_t* move_start_sound_ref;
wchar_t* arrive_particle_ref;
float arrive_particle_scale;
float arrive_particle_duration;
wchar_t* arrive_sound_ref;
wchar_t* icon_start_imageset;
wchar_t* icon_empty_imageset;
wchar_t* icon_empty_passed_imageset;
wchar_t* icon_reward_acquired_imageset;
wchar_t* icon_reward_failed_imageset;
bool is_calendar_style;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}