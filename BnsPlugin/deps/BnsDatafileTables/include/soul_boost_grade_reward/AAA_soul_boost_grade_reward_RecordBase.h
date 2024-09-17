/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_grade_reward_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_1") == 0) return item[0];
			if (wcscmp(fieldName, L"item_2") == 0) return item[1];
			if (wcscmp(fieldName, L"item_3") == 0) return item[2];
			if (wcscmp(fieldName, L"item_4") == 0) return item[3];
			if (wcscmp(fieldName, L"item_5") == 0) return item[4];
			if (wcscmp(fieldName, L"item_6") == 0) return item[5];
			if (wcscmp(fieldName, L"item_7") == 0) return item[6];
			if (wcscmp(fieldName, L"item_8") == 0) return item[7];
			if (wcscmp(fieldName, L"item_count") == 0) return item_count;
			if (wcscmp(fieldName, L"item_count_1") == 0) return item_count[0];
			if (wcscmp(fieldName, L"item_count_2") == 0) return item_count[1];
			if (wcscmp(fieldName, L"item_count_3") == 0) return item_count[2];
			if (wcscmp(fieldName, L"item_count_4") == 0) return item_count[3];
			if (wcscmp(fieldName, L"item_count_5") == 0) return item_count[4];
			if (wcscmp(fieldName, L"item_count_6") == 0) return item_count[5];
			if (wcscmp(fieldName, L"item_count_7") == 0) return item_count[6];
			if (wcscmp(fieldName, L"item_count_8") == 0) return item_count[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[0]));
			if (wcscmp(fieldName, L"item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[1]));
			if (wcscmp(fieldName, L"item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[2]));
			if (wcscmp(fieldName, L"item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[3]));
			if (wcscmp(fieldName, L"item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[4]));
			if (wcscmp(fieldName, L"item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[5]));
			if (wcscmp(fieldName, L"item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[6]));
			if (wcscmp(fieldName, L"item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[7]));
			if (wcscmp(fieldName, L"item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[0]));
			if (wcscmp(fieldName, L"item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[1]));
			if (wcscmp(fieldName, L"item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[2]));
			if (wcscmp(fieldName, L"item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[3]));
			if (wcscmp(fieldName, L"item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[4]));
			if (wcscmp(fieldName, L"item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[5]));
			if (wcscmp(fieldName, L"item_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[6]));
			if (wcscmp(fieldName, L"item_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef item[8];
int item_tableId(){return 189;};
__int16 item_count[8];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 369; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_grade_reward_RecordPtr // : DrRecordPtr
	{
		soul_boost_grade_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_grade_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}