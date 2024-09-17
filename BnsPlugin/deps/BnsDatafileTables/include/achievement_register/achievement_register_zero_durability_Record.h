/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_zero_durability_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_brand") == 0) return item_brand;
			if (wcscmp(fieldName, L"item_grade") == 0) return item_grade;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&item_brand);
			if (wcscmp(fieldName, L"item_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&item_grade);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef item_brand;
int item_brand_tableId(){return 183;};
__int8 item_grade;

		static __int32 SubType() { return 42; }
	};
#pragma pack(pop)
}