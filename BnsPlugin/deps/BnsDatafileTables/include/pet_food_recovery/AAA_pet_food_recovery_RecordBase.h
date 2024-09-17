/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pet_food_recovery_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item_grade") == 0) return item_grade;
			if (wcscmp(fieldName, L"item_grade_1") == 0) return item_grade[0];
			if (wcscmp(fieldName, L"item_grade_2") == 0) return item_grade[1];
			if (wcscmp(fieldName, L"item_grade_3") == 0) return item_grade[2];
			if (wcscmp(fieldName, L"item_grade_4") == 0) return item_grade[3];
			if (wcscmp(fieldName, L"recovery_amount") == 0) return recovery_amount;
			if (wcscmp(fieldName, L"recovery_amount_1") == 0) return recovery_amount[0];
			if (wcscmp(fieldName, L"recovery_amount_2") == 0) return recovery_amount[1];
			if (wcscmp(fieldName, L"recovery_amount_3") == 0) return recovery_amount[2];
			if (wcscmp(fieldName, L"recovery_amount_4") == 0) return recovery_amount[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item_grade_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_grade[0]));
			if (wcscmp(fieldName, L"item_grade_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_grade[1]));
			if (wcscmp(fieldName, L"item_grade_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_grade[2]));
			if (wcscmp(fieldName, L"item_grade_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_grade[3]));
			if (wcscmp(fieldName, L"recovery_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(recovery_amount[0]));
			if (wcscmp(fieldName, L"recovery_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(recovery_amount[1]));
			if (wcscmp(fieldName, L"recovery_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(recovery_amount[2]));
			if (wcscmp(fieldName, L"recovery_amount_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(recovery_amount[3]));

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
__int8 item_grade[4];
__int16 recovery_amount[4];

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 275; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pet_food_recovery_RecordPtr // : DrRecordPtr
	{
		pet_food_recovery_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pet_food_recovery_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}