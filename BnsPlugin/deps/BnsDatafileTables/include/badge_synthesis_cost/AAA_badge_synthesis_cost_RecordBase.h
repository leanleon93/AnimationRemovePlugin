/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct badge_synthesis_cost_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_4") == 0) return required_item[3];
			if (wcscmp(fieldName, L"required_item_5") == 0) return required_item[4];
			if (wcscmp(fieldName, L"required_item_6") == 0) return required_item[5];
			if (wcscmp(fieldName, L"required_item_7") == 0) return required_item[6];
			if (wcscmp(fieldName, L"required_item_8") == 0) return required_item[7];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return required_item_count[2];
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return required_item_count[3];
			if (wcscmp(fieldName, L"required_item_count_5") == 0) return required_item_count[4];
			if (wcscmp(fieldName, L"required_item_count_6") == 0) return required_item_count[5];
			if (wcscmp(fieldName, L"required_item_count_7") == 0) return required_item_count[6];
			if (wcscmp(fieldName, L"required_item_count_8") == 0) return required_item_count[7];
			if (wcscmp(fieldName, L"money_cost") == 0) return money_cost;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[3]));
			if (wcscmp(fieldName, L"required_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[4]));
			if (wcscmp(fieldName, L"required_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[5]));
			if (wcscmp(fieldName, L"required_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[6]));
			if (wcscmp(fieldName, L"required_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[7]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[2]));
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[3]));
			if (wcscmp(fieldName, L"required_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[4]));
			if (wcscmp(fieldName, L"required_item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[5]));
			if (wcscmp(fieldName, L"required_item_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[6]));
			if (wcscmp(fieldName, L"required_item_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[7]));
			if (wcscmp(fieldName, L"money_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&money_cost);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef required_item[8];
int required_item_tableId(){return 189;};
__int16 required_item_count[8];
__int32 money_cost;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 28; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_synthesis_cost_RecordPtr // : DrRecordPtr
	{
		badge_synthesis_cost_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::badge_synthesis_cost_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}