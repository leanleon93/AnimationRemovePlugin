/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_attach_gem_to_weapon_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_brand") == 0) return weapon_brand;
			if (wcscmp(fieldName, L"weapon_grade") == 0) return weapon_grade;
			if (wcscmp(fieldName, L"weapon_gem_brand") == 0) return weapon_gem_brand;
			if (wcscmp(fieldName, L"weapon_gem_grade") == 0) return weapon_gem_grade;
			if (wcscmp(fieldName, L"weapon_gem_level") == 0) return weapon_gem_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_brand);
			if (wcscmp(fieldName, L"weapon_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_grade);
			if (wcscmp(fieldName, L"weapon_gem_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_gem_brand);
			if (wcscmp(fieldName, L"weapon_gem_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_gem_grade);
			if (wcscmp(fieldName, L"weapon_gem_level") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_gem_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef weapon_brand;
int weapon_brand_tableId(){return 183;};
__int8 weapon_grade;
char Pad_sub_0[3];
Data::TableRef weapon_gem_brand;
int weapon_gem_brand_tableId(){return 183;};
__int8 weapon_gem_grade;
__int8 weapon_gem_level;

		static __int32 SubType() { return 37; }
	};
#pragma pack(pop)
}