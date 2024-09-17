/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mileageplan_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"usable") == 0) return usable;
			if (wcscmp(fieldName, L"gemstone") == 0) return gemstone;
			if (wcscmp(fieldName, L"gemstone_amount") == 0) return gemstone_amount;
			if (wcscmp(fieldName, L"abrasive") == 0) return abrasive;
			if (wcscmp(fieldName, L"abrasive_amount") == 0) return abrasive_amount;
			if (wcscmp(fieldName, L"base_mileage") == 0) return base_mileage;
			if (wcscmp(fieldName, L"bonus_mileage_min") == 0) return bonus_mileage_min;
			if (wcscmp(fieldName, L"bonus_mileage_max") == 0) return bonus_mileage_max;
			if (wcscmp(fieldName, L"bonus_mileage_scale") == 0) return bonus_mileage_scale;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"usable") == 0) return Data::AnyFieldToStringConverter::ToString(&usable);
			if (wcscmp(fieldName, L"gemstone") == 0) return Data::AnyFieldToStringConverter::ToString(&gemstone);
			if (wcscmp(fieldName, L"gemstone_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&gemstone_amount);
			if (wcscmp(fieldName, L"abrasive") == 0) return Data::AnyFieldToStringConverter::ToString(&abrasive);
			if (wcscmp(fieldName, L"abrasive_amount") == 0) return Data::AnyFieldToStringConverter::ToString(&abrasive_amount);
			if (wcscmp(fieldName, L"base_mileage") == 0) return Data::AnyFieldToStringConverter::ToString(&base_mileage);
			if (wcscmp(fieldName, L"bonus_mileage_min") == 0) return Data::AnyFieldToStringConverter::ToString(&bonus_mileage_min);
			if (wcscmp(fieldName, L"bonus_mileage_max") == 0) return Data::AnyFieldToStringConverter::ToString(&bonus_mileage_max);
			if (wcscmp(fieldName, L"bonus_mileage_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&bonus_mileage_scale);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 mileage_plan_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool usable;
char Pad0[3];
Data::TableRef gemstone;
int gemstone_tableId(){return 189;};
__int16 gemstone_amount;
char Pad1[2];
Data::TableRef abrasive;
int abrasive_tableId(){return 189;};
__int16 abrasive_amount;
char Pad2[2];
__int32 base_mileage;
__int16 bonus_mileage_min;
__int16 bonus_mileage_max;
__int16 bonus_mileage_scale;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 250; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mileageplan_RecordPtr // : DrRecordPtr
	{
		mileageplan_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mileageplan_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}