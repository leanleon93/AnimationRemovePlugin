/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct expand_skill_page_Record : DrEl
	{
	private:
		static std::wstring Get_charge_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"charge_type") == 0) return charge_type;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_1") == 0) return required_item[0];
			if (wcscmp(fieldName, L"required_item_2") == 0) return required_item[1];
			if (wcscmp(fieldName, L"required_item_3") == 0) return required_item[2];
			if (wcscmp(fieldName, L"required_item_4") == 0) return required_item[3];
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return required_item_count[0];
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return required_item_count[1];
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return required_item_count[2];
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return required_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"charge_type") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_type);
			if (wcscmp(fieldName, L"required_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[0]));
			if (wcscmp(fieldName, L"required_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[1]));
			if (wcscmp(fieldName, L"required_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[2]));
			if (wcscmp(fieldName, L"required_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item[3]));
			if (wcscmp(fieldName, L"required_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[0]));
			if (wcscmp(fieldName, L"required_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[1]));
			if (wcscmp(fieldName, L"required_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[2]));
			if (wcscmp(fieldName, L"required_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_item_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 skill_page;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 money;
__int8 charge_type;
std::wstring charge_type_EnumValue() const {return Get_charge_type_EnumValue(charge_type);};
char Pad0[3];
Data::TableRef required_item[4];
int required_item_tableId(){return 189;};
__int8 required_item_count[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 128; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_skill_page_RecordPtr // : DrRecordPtr
	{
		expand_skill_page_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::expand_skill_page_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}