/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct phantomsword3_Record : DrEl
	{
	private:
		static std::wstring Get_fly_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"fly_type") == 0) return fly_type;
			if (wcscmp(fieldName, L"force_caster_fly_attach_time") == 0) return force_caster_fly_attach_time;
			if (wcscmp(fieldName, L"start_bone") == 0) return start_bone;
			if (wcscmp(fieldName, L"attack_bone") == 0) return attack_bone;
			if (wcscmp(fieldName, L"fire_arrival_x") == 0) return fire_arrival_x;
			if (wcscmp(fieldName, L"fire_arrival_x_1") == 0) return fire_arrival_x[0];
			if (wcscmp(fieldName, L"fire_arrival_x_2") == 0) return fire_arrival_x[1];
			if (wcscmp(fieldName, L"fire_arrival_x_3") == 0) return fire_arrival_x[2];
			if (wcscmp(fieldName, L"fire_arrival_x_4") == 0) return fire_arrival_x[3];
			if (wcscmp(fieldName, L"fire_arrival_x_5") == 0) return fire_arrival_x[4];
			if (wcscmp(fieldName, L"fire_arrival_x_6") == 0) return fire_arrival_x[5];
			if (wcscmp(fieldName, L"fire_arrival_y") == 0) return fire_arrival_y;
			if (wcscmp(fieldName, L"fire_arrival_y_1") == 0) return fire_arrival_y[0];
			if (wcscmp(fieldName, L"fire_arrival_y_2") == 0) return fire_arrival_y[1];
			if (wcscmp(fieldName, L"fire_arrival_y_3") == 0) return fire_arrival_y[2];
			if (wcscmp(fieldName, L"fire_arrival_y_4") == 0) return fire_arrival_y[3];
			if (wcscmp(fieldName, L"fire_arrival_y_5") == 0) return fire_arrival_y[4];
			if (wcscmp(fieldName, L"fire_arrival_y_6") == 0) return fire_arrival_y[5];
			if (wcscmp(fieldName, L"fire_angle") == 0) return fire_angle;
			if (wcscmp(fieldName, L"fire_angle_1") == 0) return fire_angle[0];
			if (wcscmp(fieldName, L"fire_angle_2") == 0) return fire_angle[1];
			if (wcscmp(fieldName, L"fire_angle_3") == 0) return fire_angle[2];
			if (wcscmp(fieldName, L"fire_angle_4") == 0) return fire_angle[3];
			if (wcscmp(fieldName, L"fire_angle_5") == 0) return fire_angle[4];
			if (wcscmp(fieldName, L"fire_angle_6") == 0) return fire_angle[5];
			if (wcscmp(fieldName, L"cast_show") == 0) return cast_show;
			if (wcscmp(fieldName, L"cast_show_1") == 0) return cast_show[0];
			if (wcscmp(fieldName, L"cast_show_2") == 0) return cast_show[1];
			if (wcscmp(fieldName, L"cast_show_3") == 0) return cast_show[2];
			if (wcscmp(fieldName, L"cast_show_4") == 0) return cast_show[3];
			if (wcscmp(fieldName, L"cast_show_5") == 0) return cast_show[4];
			if (wcscmp(fieldName, L"cast_show_6") == 0) return cast_show[5];
			if (wcscmp(fieldName, L"fire_show_1") == 0) return fire_show_1;
			if (wcscmp(fieldName, L"fire_show_1_1") == 0) return fire_show_1[0];
			if (wcscmp(fieldName, L"fire_show_1_2") == 0) return fire_show_1[1];
			if (wcscmp(fieldName, L"fire_show_1_3") == 0) return fire_show_1[2];
			if (wcscmp(fieldName, L"fire_show_1_4") == 0) return fire_show_1[3];
			if (wcscmp(fieldName, L"fire_show_1_5") == 0) return fire_show_1[4];
			if (wcscmp(fieldName, L"fire_show_1_6") == 0) return fire_show_1[5];
			if (wcscmp(fieldName, L"exec_show_1") == 0) return exec_show_1;
			if (wcscmp(fieldName, L"exec_show_1_1") == 0) return exec_show_1[0];
			if (wcscmp(fieldName, L"exec_show_1_2") == 0) return exec_show_1[1];
			if (wcscmp(fieldName, L"exec_show_1_3") == 0) return exec_show_1[2];
			if (wcscmp(fieldName, L"exec_show_1_4") == 0) return exec_show_1[3];
			if (wcscmp(fieldName, L"exec_show_1_5") == 0) return exec_show_1[4];
			if (wcscmp(fieldName, L"exec_show_1_6") == 0) return exec_show_1[5];
			if (wcscmp(fieldName, L"return_show_1") == 0) return return_show_1;
			if (wcscmp(fieldName, L"return_show_1_1") == 0) return return_show_1[0];
			if (wcscmp(fieldName, L"return_show_1_2") == 0) return return_show_1[1];
			if (wcscmp(fieldName, L"return_show_1_3") == 0) return return_show_1[2];
			if (wcscmp(fieldName, L"return_show_1_4") == 0) return return_show_1[3];
			if (wcscmp(fieldName, L"return_show_1_5") == 0) return return_show_1[4];
			if (wcscmp(fieldName, L"return_show_1_6") == 0) return return_show_1[5];
			if (wcscmp(fieldName, L"return_ani_1") == 0) return return_ani_1;
			if (wcscmp(fieldName, L"return_ani_1_1") == 0) return return_ani_1[0];
			if (wcscmp(fieldName, L"return_ani_1_2") == 0) return return_ani_1[1];
			if (wcscmp(fieldName, L"return_ani_1_3") == 0) return return_ani_1[2];
			if (wcscmp(fieldName, L"return_ani_1_4") == 0) return return_ani_1[3];
			if (wcscmp(fieldName, L"return_ani_1_5") == 0) return return_ani_1[4];
			if (wcscmp(fieldName, L"return_ani_1_6") == 0) return return_ani_1[5];
			if (wcscmp(fieldName, L"fire_show_2") == 0) return fire_show_2;
			if (wcscmp(fieldName, L"fire_show_2_1") == 0) return fire_show_2[0];
			if (wcscmp(fieldName, L"fire_show_2_2") == 0) return fire_show_2[1];
			if (wcscmp(fieldName, L"fire_show_2_3") == 0) return fire_show_2[2];
			if (wcscmp(fieldName, L"fire_show_2_4") == 0) return fire_show_2[3];
			if (wcscmp(fieldName, L"fire_show_2_5") == 0) return fire_show_2[4];
			if (wcscmp(fieldName, L"fire_show_2_6") == 0) return fire_show_2[5];
			if (wcscmp(fieldName, L"exec_show_2") == 0) return exec_show_2;
			if (wcscmp(fieldName, L"exec_show_2_1") == 0) return exec_show_2[0];
			if (wcscmp(fieldName, L"exec_show_2_2") == 0) return exec_show_2[1];
			if (wcscmp(fieldName, L"exec_show_2_3") == 0) return exec_show_2[2];
			if (wcscmp(fieldName, L"exec_show_2_4") == 0) return exec_show_2[3];
			if (wcscmp(fieldName, L"exec_show_2_5") == 0) return exec_show_2[4];
			if (wcscmp(fieldName, L"exec_show_2_6") == 0) return exec_show_2[5];
			if (wcscmp(fieldName, L"return_show_2") == 0) return return_show_2;
			if (wcscmp(fieldName, L"return_show_2_1") == 0) return return_show_2[0];
			if (wcscmp(fieldName, L"return_show_2_2") == 0) return return_show_2[1];
			if (wcscmp(fieldName, L"return_show_2_3") == 0) return return_show_2[2];
			if (wcscmp(fieldName, L"return_show_2_4") == 0) return return_show_2[3];
			if (wcscmp(fieldName, L"return_show_2_5") == 0) return return_show_2[4];
			if (wcscmp(fieldName, L"return_show_2_6") == 0) return return_show_2[5];
			if (wcscmp(fieldName, L"return_ani_2") == 0) return return_ani_2;
			if (wcscmp(fieldName, L"return_ani_2_1") == 0) return return_ani_2[0];
			if (wcscmp(fieldName, L"return_ani_2_2") == 0) return return_ani_2[1];
			if (wcscmp(fieldName, L"return_ani_2_3") == 0) return return_ani_2[2];
			if (wcscmp(fieldName, L"return_ani_2_4") == 0) return return_ani_2[3];
			if (wcscmp(fieldName, L"return_ani_2_5") == 0) return return_ani_2[4];
			if (wcscmp(fieldName, L"return_ani_2_6") == 0) return return_ani_2[5];
			if (wcscmp(fieldName, L"fire_show_3") == 0) return fire_show_3;
			if (wcscmp(fieldName, L"fire_show_3_1") == 0) return fire_show_3[0];
			if (wcscmp(fieldName, L"fire_show_3_2") == 0) return fire_show_3[1];
			if (wcscmp(fieldName, L"fire_show_3_3") == 0) return fire_show_3[2];
			if (wcscmp(fieldName, L"fire_show_3_4") == 0) return fire_show_3[3];
			if (wcscmp(fieldName, L"fire_show_3_5") == 0) return fire_show_3[4];
			if (wcscmp(fieldName, L"fire_show_3_6") == 0) return fire_show_3[5];
			if (wcscmp(fieldName, L"exec_show_3") == 0) return exec_show_3;
			if (wcscmp(fieldName, L"exec_show_3_1") == 0) return exec_show_3[0];
			if (wcscmp(fieldName, L"exec_show_3_2") == 0) return exec_show_3[1];
			if (wcscmp(fieldName, L"exec_show_3_3") == 0) return exec_show_3[2];
			if (wcscmp(fieldName, L"exec_show_3_4") == 0) return exec_show_3[3];
			if (wcscmp(fieldName, L"exec_show_3_5") == 0) return exec_show_3[4];
			if (wcscmp(fieldName, L"exec_show_3_6") == 0) return exec_show_3[5];
			if (wcscmp(fieldName, L"return_show_3") == 0) return return_show_3;
			if (wcscmp(fieldName, L"return_show_3_1") == 0) return return_show_3[0];
			if (wcscmp(fieldName, L"return_show_3_2") == 0) return return_show_3[1];
			if (wcscmp(fieldName, L"return_show_3_3") == 0) return return_show_3[2];
			if (wcscmp(fieldName, L"return_show_3_4") == 0) return return_show_3[3];
			if (wcscmp(fieldName, L"return_show_3_5") == 0) return return_show_3[4];
			if (wcscmp(fieldName, L"return_show_3_6") == 0) return return_show_3[5];
			if (wcscmp(fieldName, L"return_ani_3") == 0) return return_ani_3;
			if (wcscmp(fieldName, L"return_ani_3_1") == 0) return return_ani_3[0];
			if (wcscmp(fieldName, L"return_ani_3_2") == 0) return return_ani_3[1];
			if (wcscmp(fieldName, L"return_ani_3_3") == 0) return return_ani_3[2];
			if (wcscmp(fieldName, L"return_ani_3_4") == 0) return return_ani_3[3];
			if (wcscmp(fieldName, L"return_ani_3_5") == 0) return return_ani_3[4];
			if (wcscmp(fieldName, L"return_ani_3_6") == 0) return return_ani_3[5];
			if (wcscmp(fieldName, L"fire_show_4") == 0) return fire_show_4;
			if (wcscmp(fieldName, L"fire_show_4_1") == 0) return fire_show_4[0];
			if (wcscmp(fieldName, L"fire_show_4_2") == 0) return fire_show_4[1];
			if (wcscmp(fieldName, L"fire_show_4_3") == 0) return fire_show_4[2];
			if (wcscmp(fieldName, L"fire_show_4_4") == 0) return fire_show_4[3];
			if (wcscmp(fieldName, L"fire_show_4_5") == 0) return fire_show_4[4];
			if (wcscmp(fieldName, L"fire_show_4_6") == 0) return fire_show_4[5];
			if (wcscmp(fieldName, L"exec_show_4") == 0) return exec_show_4;
			if (wcscmp(fieldName, L"exec_show_4_1") == 0) return exec_show_4[0];
			if (wcscmp(fieldName, L"exec_show_4_2") == 0) return exec_show_4[1];
			if (wcscmp(fieldName, L"exec_show_4_3") == 0) return exec_show_4[2];
			if (wcscmp(fieldName, L"exec_show_4_4") == 0) return exec_show_4[3];
			if (wcscmp(fieldName, L"exec_show_4_5") == 0) return exec_show_4[4];
			if (wcscmp(fieldName, L"exec_show_4_6") == 0) return exec_show_4[5];
			if (wcscmp(fieldName, L"return_show_4") == 0) return return_show_4;
			if (wcscmp(fieldName, L"return_show_4_1") == 0) return return_show_4[0];
			if (wcscmp(fieldName, L"return_show_4_2") == 0) return return_show_4[1];
			if (wcscmp(fieldName, L"return_show_4_3") == 0) return return_show_4[2];
			if (wcscmp(fieldName, L"return_show_4_4") == 0) return return_show_4[3];
			if (wcscmp(fieldName, L"return_show_4_5") == 0) return return_show_4[4];
			if (wcscmp(fieldName, L"return_show_4_6") == 0) return return_show_4[5];
			if (wcscmp(fieldName, L"return_ani_4") == 0) return return_ani_4;
			if (wcscmp(fieldName, L"return_ani_4_1") == 0) return return_ani_4[0];
			if (wcscmp(fieldName, L"return_ani_4_2") == 0) return return_ani_4[1];
			if (wcscmp(fieldName, L"return_ani_4_3") == 0) return return_ani_4[2];
			if (wcscmp(fieldName, L"return_ani_4_4") == 0) return return_ani_4[3];
			if (wcscmp(fieldName, L"return_ani_4_5") == 0) return return_ani_4[4];
			if (wcscmp(fieldName, L"return_ani_4_6") == 0) return return_ani_4[5];
			if (wcscmp(fieldName, L"fire_show_5") == 0) return fire_show_5;
			if (wcscmp(fieldName, L"fire_show_5_1") == 0) return fire_show_5[0];
			if (wcscmp(fieldName, L"fire_show_5_2") == 0) return fire_show_5[1];
			if (wcscmp(fieldName, L"fire_show_5_3") == 0) return fire_show_5[2];
			if (wcscmp(fieldName, L"fire_show_5_4") == 0) return fire_show_5[3];
			if (wcscmp(fieldName, L"fire_show_5_5") == 0) return fire_show_5[4];
			if (wcscmp(fieldName, L"fire_show_5_6") == 0) return fire_show_5[5];
			if (wcscmp(fieldName, L"exec_show_5") == 0) return exec_show_5;
			if (wcscmp(fieldName, L"exec_show_5_1") == 0) return exec_show_5[0];
			if (wcscmp(fieldName, L"exec_show_5_2") == 0) return exec_show_5[1];
			if (wcscmp(fieldName, L"exec_show_5_3") == 0) return exec_show_5[2];
			if (wcscmp(fieldName, L"exec_show_5_4") == 0) return exec_show_5[3];
			if (wcscmp(fieldName, L"exec_show_5_5") == 0) return exec_show_5[4];
			if (wcscmp(fieldName, L"exec_show_5_6") == 0) return exec_show_5[5];
			if (wcscmp(fieldName, L"return_show_5") == 0) return return_show_5;
			if (wcscmp(fieldName, L"return_show_5_1") == 0) return return_show_5[0];
			if (wcscmp(fieldName, L"return_show_5_2") == 0) return return_show_5[1];
			if (wcscmp(fieldName, L"return_show_5_3") == 0) return return_show_5[2];
			if (wcscmp(fieldName, L"return_show_5_4") == 0) return return_show_5[3];
			if (wcscmp(fieldName, L"return_show_5_5") == 0) return return_show_5[4];
			if (wcscmp(fieldName, L"return_show_5_6") == 0) return return_show_5[5];
			if (wcscmp(fieldName, L"return_ani_5") == 0) return return_ani_5;
			if (wcscmp(fieldName, L"return_ani_5_1") == 0) return return_ani_5[0];
			if (wcscmp(fieldName, L"return_ani_5_2") == 0) return return_ani_5[1];
			if (wcscmp(fieldName, L"return_ani_5_3") == 0) return return_ani_5[2];
			if (wcscmp(fieldName, L"return_ani_5_4") == 0) return return_ani_5[3];
			if (wcscmp(fieldName, L"return_ani_5_5") == 0) return return_ani_5[4];
			if (wcscmp(fieldName, L"return_ani_5_6") == 0) return return_ani_5[5];
			if (wcscmp(fieldName, L"despawn_show") == 0) return despawn_show;
			if (wcscmp(fieldName, L"despawn_show_1") == 0) return despawn_show[0];
			if (wcscmp(fieldName, L"despawn_show_2") == 0) return despawn_show[1];
			if (wcscmp(fieldName, L"despawn_show_3") == 0) return despawn_show[2];
			if (wcscmp(fieldName, L"despawn_show_4") == 0) return despawn_show[3];
			if (wcscmp(fieldName, L"despawn_show_5") == 0) return despawn_show[4];
			if (wcscmp(fieldName, L"despawn_show_6") == 0) return despawn_show[5];
			if (wcscmp(fieldName, L"delay_respawn_time") == 0) return delay_respawn_time;
			if (wcscmp(fieldName, L"delay_respawn_show") == 0) return delay_respawn_show;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"fly_type") == 0) return Data::AnyFieldToStringConverter::ToString(&fly_type);
			if (wcscmp(fieldName, L"force_caster_fly_attach_time") == 0) return Data::AnyFieldToStringConverter::ToString(&force_caster_fly_attach_time);
			if (wcscmp(fieldName, L"start_bone") == 0) return Data::AnyFieldToStringConverter::ToString(&start_bone);
			if (wcscmp(fieldName, L"attack_bone") == 0) return Data::AnyFieldToStringConverter::ToString(&attack_bone);
			if (wcscmp(fieldName, L"fire_arrival_x_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_x[0]));
			if (wcscmp(fieldName, L"fire_arrival_x_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_x[1]));
			if (wcscmp(fieldName, L"fire_arrival_x_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_x[2]));
			if (wcscmp(fieldName, L"fire_arrival_x_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_x[3]));
			if (wcscmp(fieldName, L"fire_arrival_x_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_x[4]));
			if (wcscmp(fieldName, L"fire_arrival_x_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_x[5]));
			if (wcscmp(fieldName, L"fire_arrival_y_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_y[0]));
			if (wcscmp(fieldName, L"fire_arrival_y_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_y[1]));
			if (wcscmp(fieldName, L"fire_arrival_y_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_y[2]));
			if (wcscmp(fieldName, L"fire_arrival_y_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_y[3]));
			if (wcscmp(fieldName, L"fire_arrival_y_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_y[4]));
			if (wcscmp(fieldName, L"fire_arrival_y_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_arrival_y[5]));
			if (wcscmp(fieldName, L"fire_angle_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_angle[0]));
			if (wcscmp(fieldName, L"fire_angle_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_angle[1]));
			if (wcscmp(fieldName, L"fire_angle_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_angle[2]));
			if (wcscmp(fieldName, L"fire_angle_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_angle[3]));
			if (wcscmp(fieldName, L"fire_angle_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_angle[4]));
			if (wcscmp(fieldName, L"fire_angle_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_angle[5]));
			if (wcscmp(fieldName, L"cast_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_show[0]));
			if (wcscmp(fieldName, L"cast_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_show[1]));
			if (wcscmp(fieldName, L"cast_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_show[2]));
			if (wcscmp(fieldName, L"cast_show_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_show[3]));
			if (wcscmp(fieldName, L"cast_show_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_show[4]));
			if (wcscmp(fieldName, L"cast_show_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(cast_show[5]));
			if (wcscmp(fieldName, L"fire_show_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_1[0]));
			if (wcscmp(fieldName, L"fire_show_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_1[1]));
			if (wcscmp(fieldName, L"fire_show_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_1[2]));
			if (wcscmp(fieldName, L"fire_show_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_1[3]));
			if (wcscmp(fieldName, L"fire_show_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_1[4]));
			if (wcscmp(fieldName, L"fire_show_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_1[5]));
			if (wcscmp(fieldName, L"exec_show_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_1[0]));
			if (wcscmp(fieldName, L"exec_show_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_1[1]));
			if (wcscmp(fieldName, L"exec_show_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_1[2]));
			if (wcscmp(fieldName, L"exec_show_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_1[3]));
			if (wcscmp(fieldName, L"exec_show_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_1[4]));
			if (wcscmp(fieldName, L"exec_show_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_1[5]));
			if (wcscmp(fieldName, L"return_show_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_1[0]));
			if (wcscmp(fieldName, L"return_show_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_1[1]));
			if (wcscmp(fieldName, L"return_show_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_1[2]));
			if (wcscmp(fieldName, L"return_show_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_1[3]));
			if (wcscmp(fieldName, L"return_show_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_1[4]));
			if (wcscmp(fieldName, L"return_show_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_1[5]));
			if (wcscmp(fieldName, L"return_ani_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_1[0]));
			if (wcscmp(fieldName, L"return_ani_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_1[1]));
			if (wcscmp(fieldName, L"return_ani_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_1[2]));
			if (wcscmp(fieldName, L"return_ani_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_1[3]));
			if (wcscmp(fieldName, L"return_ani_1_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_1[4]));
			if (wcscmp(fieldName, L"return_ani_1_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_1[5]));
			if (wcscmp(fieldName, L"fire_show_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_2[0]));
			if (wcscmp(fieldName, L"fire_show_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_2[1]));
			if (wcscmp(fieldName, L"fire_show_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_2[2]));
			if (wcscmp(fieldName, L"fire_show_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_2[3]));
			if (wcscmp(fieldName, L"fire_show_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_2[4]));
			if (wcscmp(fieldName, L"fire_show_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_2[5]));
			if (wcscmp(fieldName, L"exec_show_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_2[0]));
			if (wcscmp(fieldName, L"exec_show_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_2[1]));
			if (wcscmp(fieldName, L"exec_show_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_2[2]));
			if (wcscmp(fieldName, L"exec_show_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_2[3]));
			if (wcscmp(fieldName, L"exec_show_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_2[4]));
			if (wcscmp(fieldName, L"exec_show_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_2[5]));
			if (wcscmp(fieldName, L"return_show_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_2[0]));
			if (wcscmp(fieldName, L"return_show_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_2[1]));
			if (wcscmp(fieldName, L"return_show_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_2[2]));
			if (wcscmp(fieldName, L"return_show_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_2[3]));
			if (wcscmp(fieldName, L"return_show_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_2[4]));
			if (wcscmp(fieldName, L"return_show_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_2[5]));
			if (wcscmp(fieldName, L"return_ani_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_2[0]));
			if (wcscmp(fieldName, L"return_ani_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_2[1]));
			if (wcscmp(fieldName, L"return_ani_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_2[2]));
			if (wcscmp(fieldName, L"return_ani_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_2[3]));
			if (wcscmp(fieldName, L"return_ani_2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_2[4]));
			if (wcscmp(fieldName, L"return_ani_2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_2[5]));
			if (wcscmp(fieldName, L"fire_show_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_3[0]));
			if (wcscmp(fieldName, L"fire_show_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_3[1]));
			if (wcscmp(fieldName, L"fire_show_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_3[2]));
			if (wcscmp(fieldName, L"fire_show_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_3[3]));
			if (wcscmp(fieldName, L"fire_show_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_3[4]));
			if (wcscmp(fieldName, L"fire_show_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_3[5]));
			if (wcscmp(fieldName, L"exec_show_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_3[0]));
			if (wcscmp(fieldName, L"exec_show_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_3[1]));
			if (wcscmp(fieldName, L"exec_show_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_3[2]));
			if (wcscmp(fieldName, L"exec_show_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_3[3]));
			if (wcscmp(fieldName, L"exec_show_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_3[4]));
			if (wcscmp(fieldName, L"exec_show_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_3[5]));
			if (wcscmp(fieldName, L"return_show_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_3[0]));
			if (wcscmp(fieldName, L"return_show_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_3[1]));
			if (wcscmp(fieldName, L"return_show_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_3[2]));
			if (wcscmp(fieldName, L"return_show_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_3[3]));
			if (wcscmp(fieldName, L"return_show_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_3[4]));
			if (wcscmp(fieldName, L"return_show_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_3[5]));
			if (wcscmp(fieldName, L"return_ani_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_3[0]));
			if (wcscmp(fieldName, L"return_ani_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_3[1]));
			if (wcscmp(fieldName, L"return_ani_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_3[2]));
			if (wcscmp(fieldName, L"return_ani_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_3[3]));
			if (wcscmp(fieldName, L"return_ani_3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_3[4]));
			if (wcscmp(fieldName, L"return_ani_3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_3[5]));
			if (wcscmp(fieldName, L"fire_show_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_4[0]));
			if (wcscmp(fieldName, L"fire_show_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_4[1]));
			if (wcscmp(fieldName, L"fire_show_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_4[2]));
			if (wcscmp(fieldName, L"fire_show_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_4[3]));
			if (wcscmp(fieldName, L"fire_show_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_4[4]));
			if (wcscmp(fieldName, L"fire_show_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_4[5]));
			if (wcscmp(fieldName, L"exec_show_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_4[0]));
			if (wcscmp(fieldName, L"exec_show_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_4[1]));
			if (wcscmp(fieldName, L"exec_show_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_4[2]));
			if (wcscmp(fieldName, L"exec_show_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_4[3]));
			if (wcscmp(fieldName, L"exec_show_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_4[4]));
			if (wcscmp(fieldName, L"exec_show_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_4[5]));
			if (wcscmp(fieldName, L"return_show_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_4[0]));
			if (wcscmp(fieldName, L"return_show_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_4[1]));
			if (wcscmp(fieldName, L"return_show_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_4[2]));
			if (wcscmp(fieldName, L"return_show_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_4[3]));
			if (wcscmp(fieldName, L"return_show_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_4[4]));
			if (wcscmp(fieldName, L"return_show_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_4[5]));
			if (wcscmp(fieldName, L"return_ani_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_4[0]));
			if (wcscmp(fieldName, L"return_ani_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_4[1]));
			if (wcscmp(fieldName, L"return_ani_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_4[2]));
			if (wcscmp(fieldName, L"return_ani_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_4[3]));
			if (wcscmp(fieldName, L"return_ani_4_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_4[4]));
			if (wcscmp(fieldName, L"return_ani_4_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_4[5]));
			if (wcscmp(fieldName, L"fire_show_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_5[0]));
			if (wcscmp(fieldName, L"fire_show_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_5[1]));
			if (wcscmp(fieldName, L"fire_show_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_5[2]));
			if (wcscmp(fieldName, L"fire_show_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_5[3]));
			if (wcscmp(fieldName, L"fire_show_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_5[4]));
			if (wcscmp(fieldName, L"fire_show_5_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_show_5[5]));
			if (wcscmp(fieldName, L"exec_show_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_5[0]));
			if (wcscmp(fieldName, L"exec_show_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_5[1]));
			if (wcscmp(fieldName, L"exec_show_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_5[2]));
			if (wcscmp(fieldName, L"exec_show_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_5[3]));
			if (wcscmp(fieldName, L"exec_show_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_5[4]));
			if (wcscmp(fieldName, L"exec_show_5_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_show_5[5]));
			if (wcscmp(fieldName, L"return_show_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_5[0]));
			if (wcscmp(fieldName, L"return_show_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_5[1]));
			if (wcscmp(fieldName, L"return_show_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_5[2]));
			if (wcscmp(fieldName, L"return_show_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_5[3]));
			if (wcscmp(fieldName, L"return_show_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_5[4]));
			if (wcscmp(fieldName, L"return_show_5_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_show_5[5]));
			if (wcscmp(fieldName, L"return_ani_5_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_5[0]));
			if (wcscmp(fieldName, L"return_ani_5_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_5[1]));
			if (wcscmp(fieldName, L"return_ani_5_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_5[2]));
			if (wcscmp(fieldName, L"return_ani_5_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_5[3]));
			if (wcscmp(fieldName, L"return_ani_5_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_5[4]));
			if (wcscmp(fieldName, L"return_ani_5_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(return_ani_5[5]));
			if (wcscmp(fieldName, L"despawn_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(despawn_show[0]));
			if (wcscmp(fieldName, L"despawn_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(despawn_show[1]));
			if (wcscmp(fieldName, L"despawn_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(despawn_show[2]));
			if (wcscmp(fieldName, L"despawn_show_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(despawn_show[3]));
			if (wcscmp(fieldName, L"despawn_show_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(despawn_show[4]));
			if (wcscmp(fieldName, L"despawn_show_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(despawn_show[5]));
			if (wcscmp(fieldName, L"delay_respawn_time") == 0) return Data::AnyFieldToStringConverter::ToString(&delay_respawn_time);
			if (wcscmp(fieldName, L"delay_respawn_show") == 0) return Data::AnyFieldToStringConverter::ToString(&delay_respawn_show);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(start_bone) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_bone = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_bone));
			else return;
			if (reinterpret_cast<std::uintptr_t>(attack_bone) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attack_bone = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attack_bone));
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(cast_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) cast_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(cast_show[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(fire_show_1[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fire_show_1[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fire_show_1[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(exec_show_1[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exec_show_1[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exec_show_1[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_show_1[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_show_1[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_show_1[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_ani_1[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_ani_1[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_ani_1[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(fire_show_2[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fire_show_2[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fire_show_2[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(exec_show_2[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exec_show_2[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exec_show_2[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_show_2[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_show_2[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_show_2[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_ani_2[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_ani_2[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_ani_2[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(fire_show_3[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fire_show_3[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fire_show_3[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(exec_show_3[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exec_show_3[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exec_show_3[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_show_3[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_show_3[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_show_3[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_ani_3[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_ani_3[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_ani_3[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(fire_show_4[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fire_show_4[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fire_show_4[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(exec_show_4[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exec_show_4[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exec_show_4[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_show_4[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_show_4[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_show_4[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_ani_4[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_ani_4[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_ani_4[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(fire_show_5[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) fire_show_5[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(fire_show_5[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(exec_show_5[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) exec_show_5[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(exec_show_5[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_show_5[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_show_5[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_show_5[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(return_ani_5[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) return_ani_5[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(return_ani_5[i]));
			}
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(despawn_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) despawn_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(despawn_show[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(delay_respawn_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) delay_respawn_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(delay_respawn_show));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 fly_type;
std::wstring fly_type_EnumValue() const {return Get_fly_type_EnumValue(fly_type);};
char Pad0[3];
__int32 force_caster_fly_attach_time;
wchar_t* start_bone;
wchar_t* attack_bone;
__int8 fire_arrival_x[6];
__int8 fire_arrival_y[6];
__int32 fire_angle[6];
wchar_t* cast_show[6];
wchar_t* fire_show_1[6];
wchar_t* exec_show_1[6];
wchar_t* return_show_1[6];
wchar_t* return_ani_1[6];
wchar_t* fire_show_2[6];
wchar_t* exec_show_2[6];
wchar_t* return_show_2[6];
wchar_t* return_ani_2[6];
wchar_t* fire_show_3[6];
wchar_t* exec_show_3[6];
wchar_t* return_show_3[6];
wchar_t* return_ani_3[6];
wchar_t* fire_show_4[6];
wchar_t* exec_show_4[6];
wchar_t* return_show_4[6];
wchar_t* return_ani_4[6];
wchar_t* fire_show_5[6];
wchar_t* exec_show_5[6];
wchar_t* return_show_5[6];
wchar_t* return_ani_5[6];
wchar_t* despawn_show[6];
__int32 delay_respawn_time;
wchar_t* delay_respawn_show;

		static TableVersion Version() { return TableVersion(1, 19); }
		static __int16 TableId() { return 277; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) phantomsword3_RecordPtr // : DrRecordPtr
	{
		phantomsword3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::phantomsword3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}