/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_attach_equip_gem_piece_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"primary_item_brand") == 0) return primary_item_brand;
			if (wcscmp(fieldName, L"secondary_item_brand") == 0) return secondary_item_brand;
			if (wcscmp(fieldName, L"primary_item_grade") == 0) return primary_item_grade;
			if (wcscmp(fieldName, L"secondary_item_grade") == 0) return secondary_item_grade;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"primary_item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&primary_item_brand);
			if (wcscmp(fieldName, L"secondary_item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&secondary_item_brand);
			if (wcscmp(fieldName, L"primary_item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&primary_item_grade);
			if (wcscmp(fieldName, L"secondary_item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&secondary_item_grade);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef primary_item_brand;
int primary_item_brand_tableId(){return 183;};
Data::TableRef secondary_item_brand;
int secondary_item_brand_tableId(){return 183;};
__int8 primary_item_grade;
__int8 secondary_item_grade;

		static __int32 SubType() { return 32; }
	};
#pragma pack(pop)
}