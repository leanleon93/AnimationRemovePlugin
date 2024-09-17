/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_effect_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct effect_knockback_Record : effect_Record
	{
	private:
		static std::wstring Get_knockback_direction_EnumValue(__int8 value);
		static std::wstring Get_knockback_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = effect_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"knockback_speed") == 0) return knockback_speed;
			if (wcscmp(fieldName, L"caster_dash") == 0) return caster_dash;
			if (wcscmp(fieldName, L"knockback_direction") == 0) return knockback_direction;
			if (wcscmp(fieldName, L"knockback_type") == 0) return knockback_type;
			if (wcscmp(fieldName, L"target_yaw_to_caster") == 0) return target_yaw_to_caster;
			if (wcscmp(fieldName, L"do_not_apply_block_move") == 0) return do_not_apply_block_move;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = effect_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"knockback_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&knockback_speed);
			if (wcscmp(fieldName, L"caster_dash") == 0) return Data::AnyFieldToStringConverter::ToString(&caster_dash);
			if (wcscmp(fieldName, L"knockback_direction") == 0) return Data::AnyFieldToStringConverter::ToString(&knockback_direction);
			if (wcscmp(fieldName, L"knockback_type") == 0) return Data::AnyFieldToStringConverter::ToString(&knockback_type);
			if (wcscmp(fieldName, L"target_yaw_to_caster") == 0) return Data::AnyFieldToStringConverter::ToString(&target_yaw_to_caster);
			if (wcscmp(fieldName, L"do_not_apply_block_move") == 0) return Data::AnyFieldToStringConverter::ToString(&do_not_apply_block_move);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			effect_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int16 knockback_speed;
bool caster_dash;
__int8 knockback_direction;
std::wstring knockback_direction_EnumValue() const {return Get_knockback_direction_EnumValue(knockback_direction);};
__int8 knockback_type;
std::wstring knockback_type_EnumValue() const {return Get_knockback_type_EnumValue(knockback_type);};
bool target_yaw_to_caster;
bool do_not_apply_block_move;

		static __int32 SubType() { return 61; }
	};
#pragma pack(pop)
}