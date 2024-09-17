/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_mastery_stat_equip_Record : effect_Record
	{
	private:
		static std::wstring Get_modify_ability_for_mastery_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"modify_ability_for_mastery") == 0) return modify_ability_for_mastery;
			if (wcscmp(fieldName, L"modify_ability_for_mastery_1") == 0) return modify_ability_for_mastery[0];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_2") == 0) return modify_ability_for_mastery[1];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_3") == 0) return modify_ability_for_mastery[2];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_4") == 0) return modify_ability_for_mastery[3];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_5") == 0) return modify_ability_for_mastery[4];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_6") == 0) return modify_ability_for_mastery[5];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_7") == 0) return modify_ability_for_mastery[6];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_8") == 0) return modify_ability_for_mastery[7];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_9") == 0) return modify_ability_for_mastery[8];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_10") == 0) return modify_ability_for_mastery[9];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_11") == 0) return modify_ability_for_mastery[10];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_12") == 0) return modify_ability_for_mastery[11];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_13") == 0) return modify_ability_for_mastery[12];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_14") == 0) return modify_ability_for_mastery[13];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_15") == 0) return modify_ability_for_mastery[14];
			if (wcscmp(fieldName, L"modify_ability_for_mastery_16") == 0) return modify_ability_for_mastery[15];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery") == 0) return modify_ability_diff_for_mastery;
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_1") == 0) return modify_ability_diff_for_mastery[0];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_2") == 0) return modify_ability_diff_for_mastery[1];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_3") == 0) return modify_ability_diff_for_mastery[2];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_4") == 0) return modify_ability_diff_for_mastery[3];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_5") == 0) return modify_ability_diff_for_mastery[4];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_6") == 0) return modify_ability_diff_for_mastery[5];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_7") == 0) return modify_ability_diff_for_mastery[6];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_8") == 0) return modify_ability_diff_for_mastery[7];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_9") == 0) return modify_ability_diff_for_mastery[8];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_10") == 0) return modify_ability_diff_for_mastery[9];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_11") == 0) return modify_ability_diff_for_mastery[10];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_12") == 0) return modify_ability_diff_for_mastery[11];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_13") == 0) return modify_ability_diff_for_mastery[12];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_14") == 0) return modify_ability_diff_for_mastery[13];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_15") == 0) return modify_ability_diff_for_mastery[14];
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_16") == 0) return modify_ability_diff_for_mastery[15];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery") == 0) return modify_ability_percent_for_mastery;
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_1") == 0) return modify_ability_percent_for_mastery[0];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_2") == 0) return modify_ability_percent_for_mastery[1];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_3") == 0) return modify_ability_percent_for_mastery[2];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_4") == 0) return modify_ability_percent_for_mastery[3];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_5") == 0) return modify_ability_percent_for_mastery[4];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_6") == 0) return modify_ability_percent_for_mastery[5];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_7") == 0) return modify_ability_percent_for_mastery[6];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_8") == 0) return modify_ability_percent_for_mastery[7];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_9") == 0) return modify_ability_percent_for_mastery[8];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_10") == 0) return modify_ability_percent_for_mastery[9];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_11") == 0) return modify_ability_percent_for_mastery[10];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_12") == 0) return modify_ability_percent_for_mastery[11];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_13") == 0) return modify_ability_percent_for_mastery[12];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_14") == 0) return modify_ability_percent_for_mastery[13];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_15") == 0) return modify_ability_percent_for_mastery[14];
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_16") == 0) return modify_ability_percent_for_mastery[15];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"modify_ability_for_mastery_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[0]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[1]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[2]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[3]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[4]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[5]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[6]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[7]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[8]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[9]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[10]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[11]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[12]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[13]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[14]));
			if (wcscmp(fieldName, L"modify_ability_for_mastery_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_for_mastery[15]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[0]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[1]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[2]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[3]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[4]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[5]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[6]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[7]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[8]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[9]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[10]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[11]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[12]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[13]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[14]));
			if (wcscmp(fieldName, L"modify_ability_diff_for_mastery_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_diff_for_mastery[15]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[0]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[1]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[2]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[3]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[4]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[5]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[6]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[7]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[8]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[9]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[10]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[11]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[12]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[13]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[14]));
			if (wcscmp(fieldName, L"modify_ability_percent_for_mastery_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(modify_ability_percent_for_mastery[15]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 modify_ability_for_mastery[16];
std::wstring modify_ability_for_mastery_EnumValue(int index) const {return Get_modify_ability_for_mastery_EnumValue(modify_ability_for_mastery[index]);};
__int64 modify_ability_diff_for_mastery[16];
__int16 modify_ability_percent_for_mastery[16];

		static __int32 SubType() { return 861; }
	};
#pragma pack(pop)
}