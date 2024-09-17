/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemgrowth_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"exp") == 0) return exp;
			if (wcscmp(fieldName, L"r_enchant_trial_count") == 0) return r_enchant_trial_count;
			if (wcscmp(fieldName, L"r_enchant_point") == 0) return r_enchant_point;
			if (wcscmp(fieldName, L"r_enchant_crack_percent") == 0) return r_enchant_crack_percent;
			if (wcscmp(fieldName, L"r_enchant_destroy_percent") == 0) return r_enchant_destroy_percent;
			if (wcscmp(fieldName, L"r_enchant_broken_percent") == 0) return r_enchant_broken_percent;
			if (wcscmp(fieldName, L"r_enchant_reset_enable") == 0) return r_enchant_reset_enable;
			if (wcscmp(fieldName, L"r_enchant_cost_group_1") == 0) return r_enchant_cost_group_1;
			if (wcscmp(fieldName, L"r_enchant_cost_group_1_1") == 0) return r_enchant_cost_group_1[0];
			if (wcscmp(fieldName, L"r_enchant_cost_group_1_2") == 0) return r_enchant_cost_group_1[1];
			if (wcscmp(fieldName, L"r_enchant_cost_group_1_3") == 0) return r_enchant_cost_group_1[2];
			if (wcscmp(fieldName, L"r_enchant_cost_group_2") == 0) return r_enchant_cost_group_2;
			if (wcscmp(fieldName, L"r_enchant_cost_group_2_1") == 0) return r_enchant_cost_group_2[0];
			if (wcscmp(fieldName, L"r_enchant_cost_group_2_2") == 0) return r_enchant_cost_group_2[1];
			if (wcscmp(fieldName, L"r_enchant_cost_group_2_3") == 0) return r_enchant_cost_group_2[2];
			if (wcscmp(fieldName, L"r_enchant_cost_group_3") == 0) return r_enchant_cost_group_3;
			if (wcscmp(fieldName, L"r_enchant_cost_group_3_1") == 0) return r_enchant_cost_group_3[0];
			if (wcscmp(fieldName, L"r_enchant_cost_group_3_2") == 0) return r_enchant_cost_group_3[1];
			if (wcscmp(fieldName, L"r_enchant_cost_group_3_3") == 0) return r_enchant_cost_group_3[2];
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group") == 0) return r_enchant_restore_cost_group;
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_1") == 0) return r_enchant_restore_cost_group[0];
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_2") == 0) return r_enchant_restore_cost_group[1];
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_3") == 0) return r_enchant_restore_cost_group[2];
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_4") == 0) return r_enchant_restore_cost_group[3];
			if (wcscmp(fieldName, L"r_enchant_restore_percent") == 0) return r_enchant_restore_percent;
			if (wcscmp(fieldName, L"r_enchant_restore_percent_1") == 0) return r_enchant_restore_percent[0];
			if (wcscmp(fieldName, L"r_enchant_restore_percent_2") == 0) return r_enchant_restore_percent[1];
			if (wcscmp(fieldName, L"r_enchant_restore_percent_3") == 0) return r_enchant_restore_percent[2];
			if (wcscmp(fieldName, L"r_enchant_restore_percent_4") == 0) return r_enchant_restore_percent[3];
			if (wcscmp(fieldName, L"r_enchant_restore_equivalent_calibration_percent") == 0) return r_enchant_restore_equivalent_calibration_percent;
			if (wcscmp(fieldName, L"r_enchant_restore_lesser_calibration_percent") == 0) return r_enchant_restore_lesser_calibration_percent;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"exp") == 0) return Data::AnyFieldToStringConverter::ToString(&exp);
			if (wcscmp(fieldName, L"r_enchant_trial_count") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_trial_count);
			if (wcscmp(fieldName, L"r_enchant_point") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_point);
			if (wcscmp(fieldName, L"r_enchant_crack_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_crack_percent);
			if (wcscmp(fieldName, L"r_enchant_destroy_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_destroy_percent);
			if (wcscmp(fieldName, L"r_enchant_broken_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_broken_percent);
			if (wcscmp(fieldName, L"r_enchant_reset_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_reset_enable);
			if (wcscmp(fieldName, L"r_enchant_cost_group_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_1[0]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_1[1]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_1[2]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_2[0]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_2[1]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_2[2]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_3[0]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_3[1]));
			if (wcscmp(fieldName, L"r_enchant_cost_group_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_cost_group_3[2]));
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_cost_group[0]));
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_cost_group[1]));
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_cost_group[2]));
			if (wcscmp(fieldName, L"r_enchant_restore_cost_group_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_cost_group[3]));
			if (wcscmp(fieldName, L"r_enchant_restore_percent_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_percent[0]));
			if (wcscmp(fieldName, L"r_enchant_restore_percent_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_percent[1]));
			if (wcscmp(fieldName, L"r_enchant_restore_percent_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_percent[2]));
			if (wcscmp(fieldName, L"r_enchant_restore_percent_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(r_enchant_restore_percent[3]));
			if (wcscmp(fieldName, L"r_enchant_restore_equivalent_calibration_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_restore_equivalent_calibration_percent);
			if (wcscmp(fieldName, L"r_enchant_restore_lesser_calibration_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&r_enchant_restore_lesser_calibration_percent);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
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
		__int32 exp;
__int8 r_enchant_trial_count;
char Pad0[1];
__int16 r_enchant_point;
__int16 r_enchant_crack_percent;
__int16 r_enchant_destroy_percent;
__int16 r_enchant_broken_percent;
bool r_enchant_reset_enable;
char Pad1[1];
Data::TableRef r_enchant_cost_group_1[3];
int r_enchant_cost_group_1_tableId(){return 76;};
Data::TableRef r_enchant_cost_group_2[3];
int r_enchant_cost_group_2_tableId(){return 76;};
Data::TableRef r_enchant_cost_group_3[3];
int r_enchant_cost_group_3_tableId(){return 76;};
Data::TableRef r_enchant_restore_cost_group[4];
int r_enchant_restore_cost_group_tableId(){return 76;};
__int16 r_enchant_restore_percent[4];
__int16 r_enchant_restore_equivalent_calibration_percent;
__int16 r_enchant_restore_lesser_calibration_percent;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 197; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemgrowth_RecordPtr // : DrRecordPtr
	{
		itemgrowth_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemgrowth_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}