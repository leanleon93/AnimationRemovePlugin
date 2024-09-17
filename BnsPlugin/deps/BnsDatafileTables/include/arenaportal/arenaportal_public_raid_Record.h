/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_arenaportal_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct arenaportal_public_raid_Record : arenaportal_Record
	{
	private:
		static std::wstring Get_public_raid_mode_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = arenaportal_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"public_raid_mode") == 0) return public_raid_mode;
			if (wcscmp(fieldName, L"public_raid") == 0) return public_raid;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = arenaportal_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"public_raid_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&public_raid_mode);
			if (wcscmp(fieldName, L"public_raid") == 0) return Data::AnyFieldToStringConverter::ToString(&public_raid);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			arenaportal_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 public_raid_mode;
std::wstring public_raid_mode_EnumValue() const {return Get_public_raid_mode_EnumValue(public_raid_mode);};
char Pad_sub_0[3];
Data::TableRef public_raid;
int public_raid_tableId(){return 279;};

		static __int32 SubType() { return 2; }
	};
#pragma pack(pop)
}