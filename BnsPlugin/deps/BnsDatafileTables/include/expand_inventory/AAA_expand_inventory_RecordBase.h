/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct expand_inventory_Record : DrEl
	{
	private:
		static std::wstring Get_inventory_type_EnumValue(__int8 value);
		static std::wstring Get_charge_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"desirable_expand_level") == 0) return desirable_expand_level;
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"charge_type") == 0) return charge_type;
			if (wcscmp(fieldName, L"expand_size") == 0) return expand_size;
			if (wcscmp(fieldName, L"required_item") == 0) return required_item;
			if (wcscmp(fieldName, L"required_item_count") == 0) return required_item_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"desirable_expand_level") == 0) return Data::AnyFieldToStringConverter::ToString(&desirable_expand_level);
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"charge_type") == 0) return Data::AnyFieldToStringConverter::ToString(&charge_type);
			if (wcscmp(fieldName, L"expand_size") == 0) return Data::AnyFieldToStringConverter::ToString(&expand_size);
			if (wcscmp(fieldName, L"required_item") == 0) return Data::AnyFieldToStringConverter::ToString(&required_item);
			if (wcscmp(fieldName, L"required_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&required_item_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 inventory_type;
__int16 inventory_size;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 level;
__int8 desirable_expand_level;
char Pad0[2];
__int32 money;
__int8 charge_type;
std::wstring charge_type_EnumValue() const {return Get_charge_type_EnumValue(charge_type);};
__int8 expand_size;
char Pad1[2];
Data::TableRef required_item;
int required_item_tableId(){return 189;};
__int8 required_item_count;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 125; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) expand_inventory_RecordPtr // : DrRecordPtr
	{
		expand_inventory_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::expand_inventory_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}