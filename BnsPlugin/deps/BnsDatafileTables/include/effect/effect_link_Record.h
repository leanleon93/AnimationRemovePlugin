/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_link_Record : effect_Record
	{
	private:
		static std::wstring Get_link_type_EnumValue(__int8 value);
		static std::wstring Get_link_stage_EnumValue(__int8 value);
		static std::wstring Get_detach_angle_by_dispeled_EnumValue(__int8 value);
		static std::wstring Get_detach_angle_by_timeout_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"link_type") == 0) return link_type;
			if (wcscmp(fieldName, L"link_stage") == 0) return link_stage;
			if (wcscmp(fieldName, L"catch_caster_effect") == 0) return catch_caster_effect;
			if (wcscmp(fieldName, L"catch_target_effect") == 0) return catch_target_effect;
			if (wcscmp(fieldName, L"detach_effect") == 0) return detach_effect;
			if (wcscmp(fieldName, L"detach_angle_by_dispeled") == 0) return detach_angle_by_dispeled;
			if (wcscmp(fieldName, L"detach_margin_by_dispeled") == 0) return detach_margin_by_dispeled;
			if (wcscmp(fieldName, L"detach_angle_by_timeout") == 0) return detach_angle_by_timeout;
			if (wcscmp(fieldName, L"detach_margin_by_timeout") == 0) return detach_margin_by_timeout;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"link_type") == 0) return Data::AnyFieldToStringConverter::ToString(&link_type);
			if (wcscmp(fieldName, L"link_stage") == 0) return Data::AnyFieldToStringConverter::ToString(&link_stage);
			if (wcscmp(fieldName, L"catch_caster_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_caster_effect);
			if (wcscmp(fieldName, L"catch_target_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&catch_target_effect);
			if (wcscmp(fieldName, L"detach_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_effect);
			if (wcscmp(fieldName, L"detach_angle_by_dispeled") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_angle_by_dispeled);
			if (wcscmp(fieldName, L"detach_margin_by_dispeled") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_margin_by_dispeled);
			if (wcscmp(fieldName, L"detach_angle_by_timeout") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_angle_by_timeout);
			if (wcscmp(fieldName, L"detach_margin_by_timeout") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_margin_by_timeout);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 link_type;
std::wstring link_type_EnumValue() const {return Get_link_type_EnumValue(link_type);};
__int8 link_stage;
std::wstring link_stage_EnumValue() const {return Get_link_stage_EnumValue(link_stage);};
char Pad_sub_0[2];
Data::TableRef catch_caster_effect;
int catch_caster_effect_tableId(){return 111;};
Data::TableRef catch_target_effect;
int catch_target_effect_tableId(){return 111;};
Data::TableRef detach_effect;
int detach_effect_tableId(){return 111;};
__int8 detach_angle_by_dispeled;
std::wstring detach_angle_by_dispeled_EnumValue() const {return Get_detach_angle_by_dispeled_EnumValue(detach_angle_by_dispeled);};
char Pad_sub_1[1];
__int16 detach_margin_by_dispeled;
__int8 detach_angle_by_timeout;
std::wstring detach_angle_by_timeout_EnumValue() const {return Get_detach_angle_by_timeout_EnumValue(detach_angle_by_timeout);};
char Pad_sub_2[1];
__int16 detach_margin_by_timeout;

		static __int32 SubType() { return 60; }
	};
#pragma pack(pop)
}