/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_transform_retry_cost_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"required_item_for_instant_payment") == 0) return required_item_for_instant_payment;
			if (wcscmp(fieldName, L"required_item_for_instant_payment_1") == 0) return required_item_for_instant_payment[0];
			if (wcscmp(fieldName, L"required_item_for_instant_payment_2") == 0) return required_item_for_instant_payment[1];
			if (wcscmp(fieldName, L"required_item_for_instant_payment_3") == 0) return required_item_for_instant_payment[2];
			if (wcscmp(fieldName, L"required_item_for_instant_payment_4") == 0) return required_item_for_instant_payment[3];
			if (wcscmp(fieldName, L"required_item_for_instant_payment_5") == 0) return required_item_for_instant_payment[4];
			if (wcscmp(fieldName, L"mileage_range_max") == 0) return mileage_range_max;
			if (wcscmp(fieldName, L"mileage_range_max_1") == 0) return mileage_range_max[0];
			if (wcscmp(fieldName, L"mileage_range_max_2") == 0) return mileage_range_max[1];
			if (wcscmp(fieldName, L"mileage_range_max_3") == 0) return mileage_range_max[2];
			if (wcscmp(fieldName, L"mileage_range_max_4") == 0) return mileage_range_max[3];
			if (wcscmp(fieldName, L"mileage_range_max_5") == 0) return mileage_range_max[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"required_item_for_instant_payment_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_for_instant_payment[0]));
			if (wcscmp(fieldName, L"required_item_for_instant_payment_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_for_instant_payment[1]));
			if (wcscmp(fieldName, L"required_item_for_instant_payment_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_for_instant_payment[2]));
			if (wcscmp(fieldName, L"required_item_for_instant_payment_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_for_instant_payment[3]));
			if (wcscmp(fieldName, L"required_item_for_instant_payment_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_for_instant_payment[4]));
			if (wcscmp(fieldName, L"mileage_range_max_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_range_max[0]));
			if (wcscmp(fieldName, L"mileage_range_max_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_range_max[1]));
			if (wcscmp(fieldName, L"mileage_range_max_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_range_max[2]));
			if (wcscmp(fieldName, L"mileage_range_max_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_range_max[3]));
			if (wcscmp(fieldName, L"mileage_range_max_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(mileage_range_max[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef required_item_for_instant_payment[5];
int required_item_for_instant_payment_tableId(){return 189;};
__int16 mileage_range_max[5];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 213; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_transform_retry_cost_RecordPtr // : DrRecordPtr
	{
		item_transform_retry_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_transform_retry_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}