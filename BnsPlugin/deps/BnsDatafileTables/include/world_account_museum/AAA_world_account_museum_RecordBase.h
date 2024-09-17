/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct world_account_museum_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
		static std::wstring Get_collection_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"collection_card") == 0) return collection_card;
			if (wcscmp(fieldName, L"collection_card_1") == 0) return collection_card[0];
			if (wcscmp(fieldName, L"collection_card_2") == 0) return collection_card[1];
			if (wcscmp(fieldName, L"collection_card_3") == 0) return collection_card[2];
			if (wcscmp(fieldName, L"collection_card_4") == 0) return collection_card[3];
			if (wcscmp(fieldName, L"collection_card_5") == 0) return collection_card[4];
			if (wcscmp(fieldName, L"collection_card_6") == 0) return collection_card[5];
			if (wcscmp(fieldName, L"collection_card_7") == 0) return collection_card[6];
			if (wcscmp(fieldName, L"collection_card_8") == 0) return collection_card[7];
			if (wcscmp(fieldName, L"collection_card_count") == 0) return collection_card_count;
			if (wcscmp(fieldName, L"collection_card_count_1") == 0) return collection_card_count[0];
			if (wcscmp(fieldName, L"collection_card_count_2") == 0) return collection_card_count[1];
			if (wcscmp(fieldName, L"collection_card_count_3") == 0) return collection_card_count[2];
			if (wcscmp(fieldName, L"collection_card_count_4") == 0) return collection_card_count[3];
			if (wcscmp(fieldName, L"collection_card_count_5") == 0) return collection_card_count[4];
			if (wcscmp(fieldName, L"collection_card_count_6") == 0) return collection_card_count[5];
			if (wcscmp(fieldName, L"collection_card_count_7") == 0) return collection_card_count[6];
			if (wcscmp(fieldName, L"collection_card_count_8") == 0) return collection_card_count[7];
			if (wcscmp(fieldName, L"start_time") == 0) return start_time;
			if (wcscmp(fieldName, L"end_time") == 0) return end_time;
			if (wcscmp(fieldName, L"can_not_used") == 0) return can_not_used;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"ability_value_1") == 0) return ability_value[0];
			if (wcscmp(fieldName, L"ability_value_2") == 0) return ability_value[1];
			if (wcscmp(fieldName, L"ability_value_3") == 0) return ability_value[2];
			if (wcscmp(fieldName, L"ability_base_value") == 0) return ability_base_value;
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return ability_base_value[0];
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return ability_base_value[1];
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return ability_base_value[2];
			if (wcscmp(fieldName, L"collection_name") == 0) return collection_name;
			if (wcscmp(fieldName, L"collection_category") == 0) return collection_category;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"collection_card_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[0]));
			if (wcscmp(fieldName, L"collection_card_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[1]));
			if (wcscmp(fieldName, L"collection_card_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[2]));
			if (wcscmp(fieldName, L"collection_card_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[3]));
			if (wcscmp(fieldName, L"collection_card_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[4]));
			if (wcscmp(fieldName, L"collection_card_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[5]));
			if (wcscmp(fieldName, L"collection_card_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[6]));
			if (wcscmp(fieldName, L"collection_card_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card[7]));
			if (wcscmp(fieldName, L"collection_card_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[0]));
			if (wcscmp(fieldName, L"collection_card_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[1]));
			if (wcscmp(fieldName, L"collection_card_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[2]));
			if (wcscmp(fieldName, L"collection_card_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[3]));
			if (wcscmp(fieldName, L"collection_card_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[4]));
			if (wcscmp(fieldName, L"collection_card_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[5]));
			if (wcscmp(fieldName, L"collection_card_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[6]));
			if (wcscmp(fieldName, L"collection_card_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_count[7]));
			if (wcscmp(fieldName, L"start_time") == 0) return Data::AnyFieldToStringConverter::ToString(&start_time);
			if (wcscmp(fieldName, L"end_time") == 0) return Data::AnyFieldToStringConverter::ToString(&end_time);
			if (wcscmp(fieldName, L"can_not_used") == 0) return Data::AnyFieldToStringConverter::ToString(&can_not_used);
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[0]));
			if (wcscmp(fieldName, L"ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[1]));
			if (wcscmp(fieldName, L"ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[2]));
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[0]));
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[1]));
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[2]));
			if (wcscmp(fieldName, L"collection_name") == 0) return Data::AnyFieldToStringConverter::ToString(&collection_name);
			if (wcscmp(fieldName, L"collection_category") == 0) return Data::AnyFieldToStringConverter::ToString(&collection_category);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(start_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_time));
			if (reinterpret_cast<std::uintptr_t>(end_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_time));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef collection_card[8];
int collection_card_tableId(){return 433;};
__int16 collection_card_count[8];
wchar_t* start_time;
wchar_t* end_time;
bool can_not_used;
__int8 ability[3];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
__int32 ability_value[3];
__int32 ability_base_value[3];
Data::TableRef collection_name;
int collection_name_tableId(){return 405;};
__int8 collection_category;
std::wstring collection_category_EnumValue() const {return Get_collection_category_EnumValue(collection_category);};

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 436; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_museum_RecordPtr // : DrRecordPtr
	{
		world_account_museum_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_museum_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}