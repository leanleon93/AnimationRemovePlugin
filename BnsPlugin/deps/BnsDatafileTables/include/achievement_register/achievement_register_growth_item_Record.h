/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_growth_item_Record : achievement_register_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"seed_item_brand") == 0) return seed_item_brand;
			if (wcscmp(fieldName, L"feed_item_brand") == 0) return feed_item_brand;
			if (wcscmp(fieldName, L"seed_item_before_level") == 0) return seed_item_before_level;
			if (wcscmp(fieldName, L"seed_item_growth_level") == 0) return seed_item_growth_level;
			if (wcscmp(fieldName, L"feed_item_level") == 0) return feed_item_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"seed_item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_item_brand);
			if (wcscmp(fieldName, L"feed_item_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_item_brand);
			if (wcscmp(fieldName, L"seed_item_before_level") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_item_before_level);
			if (wcscmp(fieldName, L"seed_item_growth_level") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_item_growth_level);
			if (wcscmp(fieldName, L"feed_item_level") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_item_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef seed_item_brand;
int seed_item_brand_tableId(){return 183;};
Data::TableRef feed_item_brand;
int feed_item_brand_tableId(){return 183;};
__int8 seed_item_before_level;
__int8 seed_item_growth_level;
__int8 feed_item_level;

		static __int32 SubType() { return 31; }
	};
#pragma pack(pop)
}