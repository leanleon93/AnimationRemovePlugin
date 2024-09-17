/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct time_limit_field_zone_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"time_limit_quota") == 0) return time_limit_quota;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_cost") == 0) return required_cost;
			if (wcscmp(fieldName, L"time_limit_field_zone_name2") == 0) return time_limit_field_zone_name2;
			if (wcscmp(fieldName, L"time_limit_field_zone_desc") == 0) return time_limit_field_zone_desc;
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return ui_text_grade;
			if (wcscmp(fieldName, L"reward_summary") == 0) return reward_summary;
			if (wcscmp(fieldName, L"recommend_alias") == 0) return recommend_alias;
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return recommend_attack_power;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"time_limit_quota") == 0) return Data::AnyFieldToStringConverter::ToString(&time_limit_quota);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&required_cost);
			if (wcscmp(fieldName, L"time_limit_field_zone_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&time_limit_field_zone_name2);
			if (wcscmp(fieldName, L"time_limit_field_zone_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&time_limit_field_zone_desc);
			if (wcscmp(fieldName, L"ui_text_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_text_grade);
			if (wcscmp(fieldName, L"reward_summary") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_summary);
			if (wcscmp(fieldName, L"recommend_alias") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_alias);
			if (wcscmp(fieldName, L"recommend_attack_power") == 0) return Data::AnyFieldToStringConverter::ToString(&recommend_attack_power);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 zone;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef time_limit_quota;
int time_limit_quota_tableId(){return 66;};
__int8 required_level;
__int8 required_mastery_level;
char Pad0[2];
Data::TableRef required_cost;
int required_cost_tableId(){return 76;};
Data::TableRef time_limit_field_zone_name2;
int time_limit_field_zone_name2_tableId(){return 405;};
Data::TableRef time_limit_field_zone_desc;
int time_limit_field_zone_desc_tableId(){return 405;};
__int8 ui_text_grade;
char Pad1[3];
Data::TableRef reward_summary;
int reward_summary_tableId(){return 18;};
Data::TableRef recommend_alias;
int recommend_alias_tableId(){return 71;};
__int16 recommend_attack_power;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 406; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) time_limit_field_zone_RecordPtr // : DrRecordPtr
	{
		time_limit_field_zone_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::time_limit_field_zone_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}