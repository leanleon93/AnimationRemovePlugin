/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct autotargetparameter_Record : DrEl
	{
	private:
		static std::wstring Get_stance_type_EnumValue(__int8 value);
		static std::wstring Get_sensitivity_level_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"target_angle") == 0) return target_angle;
			if (wcscmp(fieldName, L"target_angle_1") == 0) return target_angle[0];
			if (wcscmp(fieldName, L"target_angle_2") == 0) return target_angle[1];
			if (wcscmp(fieldName, L"target_angle_3") == 0) return target_angle[2];
			if (wcscmp(fieldName, L"target_angle_4") == 0) return target_angle[3];
			if (wcscmp(fieldName, L"target_beam_width") == 0) return target_beam_width;
			if (wcscmp(fieldName, L"target_beam_width_1") == 0) return target_beam_width[0];
			if (wcscmp(fieldName, L"target_beam_width_2") == 0) return target_beam_width[1];
			if (wcscmp(fieldName, L"target_beam_width_3") == 0) return target_beam_width[2];
			if (wcscmp(fieldName, L"target_beam_width_4") == 0) return target_beam_width[3];
			if (wcscmp(fieldName, L"target_band_first") == 0) return target_band_first;
			if (wcscmp(fieldName, L"target_band_first_1") == 0) return target_band_first[0];
			if (wcscmp(fieldName, L"target_band_first_2") == 0) return target_band_first[1];
			if (wcscmp(fieldName, L"target_band_first_3") == 0) return target_band_first[2];
			if (wcscmp(fieldName, L"target_band_first_4") == 0) return target_band_first[3];
			if (wcscmp(fieldName, L"target_band_second") == 0) return target_band_second;
			if (wcscmp(fieldName, L"target_band_second_1") == 0) return target_band_second[0];
			if (wcscmp(fieldName, L"target_band_second_2") == 0) return target_band_second[1];
			if (wcscmp(fieldName, L"target_band_second_3") == 0) return target_band_second[2];
			if (wcscmp(fieldName, L"target_band_second_4") == 0) return target_band_second[3];
			if (wcscmp(fieldName, L"band_check_limit") == 0) return band_check_limit;
			if (wcscmp(fieldName, L"band_check_limit_1") == 0) return band_check_limit[0];
			if (wcscmp(fieldName, L"band_check_limit_2") == 0) return band_check_limit[1];
			if (wcscmp(fieldName, L"band_check_limit_3") == 0) return band_check_limit[2];
			if (wcscmp(fieldName, L"band_check_limit_4") == 0) return band_check_limit[3];
			if (wcscmp(fieldName, L"target_change_delay") == 0) return target_change_delay;
			if (wcscmp(fieldName, L"target_change_delay_1") == 0) return target_change_delay[0];
			if (wcscmp(fieldName, L"target_change_delay_2") == 0) return target_change_delay[1];
			if (wcscmp(fieldName, L"target_change_delay_3") == 0) return target_change_delay[2];
			if (wcscmp(fieldName, L"target_change_delay_4") == 0) return target_change_delay[3];
			if (wcscmp(fieldName, L"threshold_min") == 0) return threshold_min;
			if (wcscmp(fieldName, L"threshold_min_1") == 0) return threshold_min[0];
			if (wcscmp(fieldName, L"threshold_min_2") == 0) return threshold_min[1];
			if (wcscmp(fieldName, L"threshold_min_3") == 0) return threshold_min[2];
			if (wcscmp(fieldName, L"threshold_min_4") == 0) return threshold_min[3];
			if (wcscmp(fieldName, L"threshold_max") == 0) return threshold_max;
			if (wcscmp(fieldName, L"threshold_max_1") == 0) return threshold_max[0];
			if (wcscmp(fieldName, L"threshold_max_2") == 0) return threshold_max[1];
			if (wcscmp(fieldName, L"threshold_max_3") == 0) return threshold_max[2];
			if (wcscmp(fieldName, L"threshold_max_4") == 0) return threshold_max[3];
			if (wcscmp(fieldName, L"empty_delay") == 0) return empty_delay;
			if (wcscmp(fieldName, L"empty_delay_1") == 0) return empty_delay[0];
			if (wcscmp(fieldName, L"empty_delay_2") == 0) return empty_delay[1];
			if (wcscmp(fieldName, L"empty_delay_3") == 0) return empty_delay[2];
			if (wcscmp(fieldName, L"empty_delay_4") == 0) return empty_delay[3];
			if (wcscmp(fieldName, L"target_gather_angle") == 0) return target_gather_angle;
			if (wcscmp(fieldName, L"stun_delay") == 0) return stun_delay;
			if (wcscmp(fieldName, L"kneel_delay") == 0) return kneel_delay;
			if (wcscmp(fieldName, L"down_delay") == 0) return down_delay;
			if (wcscmp(fieldName, L"mid_air_delay") == 0) return mid_air_delay;
			if (wcscmp(fieldName, L"swoon_delay") == 0) return swoon_delay;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"target_angle_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[0]));
			if (wcscmp(fieldName, L"target_angle_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[1]));
			if (wcscmp(fieldName, L"target_angle_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[2]));
			if (wcscmp(fieldName, L"target_angle_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_angle[3]));
			if (wcscmp(fieldName, L"target_beam_width_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[0]));
			if (wcscmp(fieldName, L"target_beam_width_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[1]));
			if (wcscmp(fieldName, L"target_beam_width_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[2]));
			if (wcscmp(fieldName, L"target_beam_width_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_beam_width[3]));
			if (wcscmp(fieldName, L"target_band_first_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[0]));
			if (wcscmp(fieldName, L"target_band_first_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[1]));
			if (wcscmp(fieldName, L"target_band_first_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[2]));
			if (wcscmp(fieldName, L"target_band_first_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_first[3]));
			if (wcscmp(fieldName, L"target_band_second_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[0]));
			if (wcscmp(fieldName, L"target_band_second_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[1]));
			if (wcscmp(fieldName, L"target_band_second_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[2]));
			if (wcscmp(fieldName, L"target_band_second_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_band_second[3]));
			if (wcscmp(fieldName, L"band_check_limit_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[0]));
			if (wcscmp(fieldName, L"band_check_limit_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[1]));
			if (wcscmp(fieldName, L"band_check_limit_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[2]));
			if (wcscmp(fieldName, L"band_check_limit_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(band_check_limit[3]));
			if (wcscmp(fieldName, L"target_change_delay_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[0]));
			if (wcscmp(fieldName, L"target_change_delay_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[1]));
			if (wcscmp(fieldName, L"target_change_delay_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[2]));
			if (wcscmp(fieldName, L"target_change_delay_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(target_change_delay[3]));
			if (wcscmp(fieldName, L"threshold_min_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[0]));
			if (wcscmp(fieldName, L"threshold_min_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[1]));
			if (wcscmp(fieldName, L"threshold_min_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[2]));
			if (wcscmp(fieldName, L"threshold_min_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_min[3]));
			if (wcscmp(fieldName, L"threshold_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[0]));
			if (wcscmp(fieldName, L"threshold_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[1]));
			if (wcscmp(fieldName, L"threshold_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[2]));
			if (wcscmp(fieldName, L"threshold_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(threshold_max[3]));
			if (wcscmp(fieldName, L"empty_delay_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[0]));
			if (wcscmp(fieldName, L"empty_delay_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[1]));
			if (wcscmp(fieldName, L"empty_delay_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[2]));
			if (wcscmp(fieldName, L"empty_delay_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(empty_delay[3]));
			if (wcscmp(fieldName, L"target_gather_angle") == 0) return Data::AnyFieldToStringConverter::ToString(&target_gather_angle);
			if (wcscmp(fieldName, L"stun_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&stun_delay);
			if (wcscmp(fieldName, L"kneel_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&kneel_delay);
			if (wcscmp(fieldName, L"down_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&down_delay);
			if (wcscmp(fieldName, L"mid_air_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&mid_air_delay);
			if (wcscmp(fieldName, L"swoon_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&swoon_delay);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 stance_type;
__int8 sensitivity_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		float target_angle[4];
float target_beam_width[4];
float target_band_first[4];
float target_band_second[4];
__int16 band_check_limit[4];
float target_change_delay[4];
float threshold_min[4];
float threshold_max[4];
float empty_delay[4];
float target_gather_angle;
float stun_delay;
float kneel_delay;
float down_delay;
float mid_air_delay;
float swoon_delay;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 25; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) autotargetparameter_RecordPtr // : DrRecordPtr
	{
		autotargetparameter_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::autotargetparameter_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}