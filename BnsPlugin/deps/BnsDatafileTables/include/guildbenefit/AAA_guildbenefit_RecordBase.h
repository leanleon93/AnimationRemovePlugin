/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guildbenefit_Record : DrEl
	{
	private:
		static std::wstring Get_benefit_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"benefit_type") == 0) return benefit_type;
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"order") == 0) return order;
			if (wcscmp(fieldName, L"guild_level") == 0) return guild_level;
			if (wcscmp(fieldName, L"money") == 0) return money;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"item_1") == 0) return item[0];
			if (wcscmp(fieldName, L"item_2") == 0) return item[1];
			if (wcscmp(fieldName, L"item_3") == 0) return item[2];
			if (wcscmp(fieldName, L"item_4") == 0) return item[3];
			if (wcscmp(fieldName, L"item_5") == 0) return item[4];
			if (wcscmp(fieldName, L"item_count") == 0) return item_count;
			if (wcscmp(fieldName, L"item_count_1") == 0) return item_count[0];
			if (wcscmp(fieldName, L"item_count_2") == 0) return item_count[1];
			if (wcscmp(fieldName, L"item_count_3") == 0) return item_count[2];
			if (wcscmp(fieldName, L"item_count_4") == 0) return item_count[3];
			if (wcscmp(fieldName, L"item_count_5") == 0) return item_count[4];
			if (wcscmp(fieldName, L"guild_point") == 0) return guild_point;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"benefit_type") == 0) return Data::AnyFieldToStringConverter::ToString(&benefit_type);
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"order") == 0) return Data::AnyFieldToStringConverter::ToString(&order);
			if (wcscmp(fieldName, L"guild_level") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_level);
			if (wcscmp(fieldName, L"money") == 0) return Data::AnyFieldToStringConverter::ToString(&money);
			if (wcscmp(fieldName, L"item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[0]));
			if (wcscmp(fieldName, L"item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[1]));
			if (wcscmp(fieldName, L"item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[2]));
			if (wcscmp(fieldName, L"item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[3]));
			if (wcscmp(fieldName, L"item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item[4]));
			if (wcscmp(fieldName, L"item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[0]));
			if (wcscmp(fieldName, L"item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[1]));
			if (wcscmp(fieldName, L"item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[2]));
			if (wcscmp(fieldName, L"item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[3]));
			if (wcscmp(fieldName, L"item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(item_count[4]));
			if (wcscmp(fieldName, L"guild_point") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_point);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 benefit_id;
__int32 duration;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 benefit_type;
std::wstring benefit_type_EnumValue() const {return Get_benefit_type_EnumValue(benefit_type);};
char Pad0[3];
wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
__int16 order;
__int16 guild_level;
char Pad1[2];
__int32 money;
Data::TableRef item[5];
int item_tableId(){return 189;};
__int32 item_count[5];
__int32 guild_point;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 162; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guildbenefit_RecordPtr // : DrRecordPtr
	{
		guildbenefit_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guildbenefit_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}