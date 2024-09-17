/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_field_zone_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct field_zone_guild_battle_field_entrance_Record : field_zone_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = field_zone_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"guild_battle_field_zone") == 0) return guild_battle_field_zone;
			if (wcscmp(fieldName, L"min_fixed_channel") == 0) return min_fixed_channel;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = field_zone_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"guild_battle_field_zone") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_battle_field_zone);
			if (wcscmp(fieldName, L"min_fixed_channel") == 0) return Data::AnyFieldToStringConverter::ToString(&min_fixed_channel);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			field_zone_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef guild_battle_field_zone;
int guild_battle_field_zone_tableId(){return 161;};
__int8 min_fixed_channel;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}