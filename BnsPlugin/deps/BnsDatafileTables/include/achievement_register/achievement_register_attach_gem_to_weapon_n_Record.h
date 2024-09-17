/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_attach_gem_to_weapon_n_Record : achievement_register_Record
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
			if (wcscmp(fieldName, L"weapon_gem") == 0) return weapon_gem;
			if (wcscmp(fieldName, L"weapon_gem_1") == 0) return weapon_gem[0];
			if (wcscmp(fieldName, L"weapon_gem_2") == 0) return weapon_gem[1];
			if (wcscmp(fieldName, L"weapon_gem_3") == 0) return weapon_gem[2];
			if (wcscmp(fieldName, L"weapon_gem_4") == 0) return weapon_gem[3];
			if (wcscmp(fieldName, L"weapon_gem_5") == 0) return weapon_gem[4];
			if (wcscmp(fieldName, L"weapon_gem_6") == 0) return weapon_gem[5];
			if (wcscmp(fieldName, L"weapon_gem_7") == 0) return weapon_gem[6];
			if (wcscmp(fieldName, L"weapon_gem_8") == 0) return weapon_gem[7];
			if (wcscmp(fieldName, L"slot_name") == 0) return slot_name;
			if (wcscmp(fieldName, L"slot_name_1") == 0) return slot_name[0];
			if (wcscmp(fieldName, L"slot_name_2") == 0) return slot_name[1];
			if (wcscmp(fieldName, L"slot_name_3") == 0) return slot_name[2];
			if (wcscmp(fieldName, L"slot_name_4") == 0) return slot_name[3];
			if (wcscmp(fieldName, L"slot_name_5") == 0) return slot_name[4];
			if (wcscmp(fieldName, L"slot_name_6") == 0) return slot_name[5];
			if (wcscmp(fieldName, L"slot_name_7") == 0) return slot_name[6];
			if (wcscmp(fieldName, L"slot_name_8") == 0) return slot_name[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_brand);
			if (wcscmp(fieldName, L"weapon_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_grade);
			if (wcscmp(fieldName, L"weapon_gem_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[0]));
			if (wcscmp(fieldName, L"weapon_gem_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[1]));
			if (wcscmp(fieldName, L"weapon_gem_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[2]));
			if (wcscmp(fieldName, L"weapon_gem_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[3]));
			if (wcscmp(fieldName, L"weapon_gem_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[4]));
			if (wcscmp(fieldName, L"weapon_gem_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[5]));
			if (wcscmp(fieldName, L"weapon_gem_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[6]));
			if (wcscmp(fieldName, L"weapon_gem_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_gem[7]));
			if (wcscmp(fieldName, L"slot_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[0]));
			if (wcscmp(fieldName, L"slot_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[1]));
			if (wcscmp(fieldName, L"slot_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[2]));
			if (wcscmp(fieldName, L"slot_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[3]));
			if (wcscmp(fieldName, L"slot_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[4]));
			if (wcscmp(fieldName, L"slot_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[5]));
			if (wcscmp(fieldName, L"slot_name_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[6]));
			if (wcscmp(fieldName, L"slot_name_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(slot_name[7]));

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
Data::TableRef weapon_gem[8];
int weapon_gem_tableId(){return 189;};
Data::TableRef slot_name[8];
int slot_name_tableId(){return 405;};

		static __int32 SubType() { return 38; }
	};
#pragma pack(pop)
}