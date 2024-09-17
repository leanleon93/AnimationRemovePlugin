/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillresultcontroll3_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"immune_target_counter_skill") == 0) return immune_target_counter_skill;
			if (wcscmp(fieldName, L"immune_target_counter_skill_1") == 0) return immune_target_counter_skill[0];
			if (wcscmp(fieldName, L"immune_target_counter_skill_2") == 0) return immune_target_counter_skill[1];
			if (wcscmp(fieldName, L"immune_target_counter_skill_3") == 0) return immune_target_counter_skill[2];
			if (wcscmp(fieldName, L"immune_target_counter_skill_4") == 0) return immune_target_counter_skill[3];
			if (wcscmp(fieldName, L"immune_target_counter_skill_5") == 0) return immune_target_counter_skill[4];
			if (wcscmp(fieldName, L"immune_target_parry_skill") == 0) return immune_target_parry_skill;
			if (wcscmp(fieldName, L"immune_target_parry_skill_1") == 0) return immune_target_parry_skill[0];
			if (wcscmp(fieldName, L"immune_target_parry_skill_2") == 0) return immune_target_parry_skill[1];
			if (wcscmp(fieldName, L"immune_target_parry_skill_3") == 0) return immune_target_parry_skill[2];
			if (wcscmp(fieldName, L"immune_target_parry_skill_4") == 0) return immune_target_parry_skill[3];
			if (wcscmp(fieldName, L"immune_target_parry_skill_5") == 0) return immune_target_parry_skill[4];
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill") == 0) return immune_target_perfect_parry_skill;
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_1") == 0) return immune_target_perfect_parry_skill[0];
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_2") == 0) return immune_target_perfect_parry_skill[1];
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_3") == 0) return immune_target_perfect_parry_skill[2];
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_4") == 0) return immune_target_perfect_parry_skill[3];
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_5") == 0) return immune_target_perfect_parry_skill[4];
			if (wcscmp(fieldName, L"immune_target_bounce_skill") == 0) return immune_target_bounce_skill;
			if (wcscmp(fieldName, L"immune_target_bounce_skill_1") == 0) return immune_target_bounce_skill[0];
			if (wcscmp(fieldName, L"immune_target_bounce_skill_2") == 0) return immune_target_bounce_skill[1];
			if (wcscmp(fieldName, L"immune_target_bounce_skill_3") == 0) return immune_target_bounce_skill[2];
			if (wcscmp(fieldName, L"immune_target_bounce_skill_4") == 0) return immune_target_bounce_skill[3];
			if (wcscmp(fieldName, L"immune_target_bounce_skill_5") == 0) return immune_target_bounce_skill[4];
			if (wcscmp(fieldName, L"immune_target_dodge_skill") == 0) return immune_target_dodge_skill;
			if (wcscmp(fieldName, L"immune_target_dodge_skill_1") == 0) return immune_target_dodge_skill[0];
			if (wcscmp(fieldName, L"immune_target_dodge_skill_2") == 0) return immune_target_dodge_skill[1];
			if (wcscmp(fieldName, L"immune_target_dodge_skill_3") == 0) return immune_target_dodge_skill[2];
			if (wcscmp(fieldName, L"immune_target_dodge_skill_4") == 0) return immune_target_dodge_skill[3];
			if (wcscmp(fieldName, L"immune_target_dodge_skill_5") == 0) return immune_target_dodge_skill[4];
			if (wcscmp(fieldName, L"immune_miss_result") == 0) return immune_miss_result;
			if (wcscmp(fieldName, L"immune_miss_result_1") == 0) return immune_miss_result[0];
			if (wcscmp(fieldName, L"immune_miss_result_2") == 0) return immune_miss_result[1];
			if (wcscmp(fieldName, L"immune_miss_result_3") == 0) return immune_miss_result[2];
			if (wcscmp(fieldName, L"immune_miss_result_4") == 0) return immune_miss_result[3];
			if (wcscmp(fieldName, L"immune_miss_result_5") == 0) return immune_miss_result[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"immune_target_counter_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_counter_skill[0]));
			if (wcscmp(fieldName, L"immune_target_counter_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_counter_skill[1]));
			if (wcscmp(fieldName, L"immune_target_counter_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_counter_skill[2]));
			if (wcscmp(fieldName, L"immune_target_counter_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_counter_skill[3]));
			if (wcscmp(fieldName, L"immune_target_counter_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_counter_skill[4]));
			if (wcscmp(fieldName, L"immune_target_parry_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_parry_skill[0]));
			if (wcscmp(fieldName, L"immune_target_parry_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_parry_skill[1]));
			if (wcscmp(fieldName, L"immune_target_parry_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_parry_skill[2]));
			if (wcscmp(fieldName, L"immune_target_parry_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_parry_skill[3]));
			if (wcscmp(fieldName, L"immune_target_parry_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_parry_skill[4]));
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_perfect_parry_skill[0]));
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_perfect_parry_skill[1]));
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_perfect_parry_skill[2]));
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_perfect_parry_skill[3]));
			if (wcscmp(fieldName, L"immune_target_perfect_parry_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_perfect_parry_skill[4]));
			if (wcscmp(fieldName, L"immune_target_bounce_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_bounce_skill[0]));
			if (wcscmp(fieldName, L"immune_target_bounce_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_bounce_skill[1]));
			if (wcscmp(fieldName, L"immune_target_bounce_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_bounce_skill[2]));
			if (wcscmp(fieldName, L"immune_target_bounce_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_bounce_skill[3]));
			if (wcscmp(fieldName, L"immune_target_bounce_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_bounce_skill[4]));
			if (wcscmp(fieldName, L"immune_target_dodge_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_dodge_skill[0]));
			if (wcscmp(fieldName, L"immune_target_dodge_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_dodge_skill[1]));
			if (wcscmp(fieldName, L"immune_target_dodge_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_dodge_skill[2]));
			if (wcscmp(fieldName, L"immune_target_dodge_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_dodge_skill[3]));
			if (wcscmp(fieldName, L"immune_target_dodge_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_target_dodge_skill[4]));
			if (wcscmp(fieldName, L"immune_miss_result_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_miss_result[0]));
			if (wcscmp(fieldName, L"immune_miss_result_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_miss_result[1]));
			if (wcscmp(fieldName, L"immune_miss_result_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_miss_result[2]));
			if (wcscmp(fieldName, L"immune_miss_result_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_miss_result[3]));
			if (wcscmp(fieldName, L"immune_miss_result_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(immune_miss_result[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool immune_target_counter_skill[5];
bool immune_target_parry_skill[5];
bool immune_target_perfect_parry_skill[5];
bool immune_target_bounce_skill[5];
bool immune_target_dodge_skill[5];
bool immune_miss_result[5];

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 342; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillresultcontroll3_RecordPtr // : DrRecordPtr
	{
		skillresultcontroll3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillresultcontroll3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}