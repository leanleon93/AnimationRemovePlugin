/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct world_account_card_collection_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"collection_name") == 0) return collection_name;
			if (wcscmp(fieldName, L"collection_season") == 0) return collection_season;
			if (wcscmp(fieldName, L"collection_grade") == 0) return collection_grade;
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
			if (wcscmp(fieldName, L"collection_card_point") == 0) return collection_card_point;
			if (wcscmp(fieldName, L"collection_card_point_1") == 0) return collection_card_point[0];
			if (wcscmp(fieldName, L"collection_card_point_2") == 0) return collection_card_point[1];
			if (wcscmp(fieldName, L"collection_card_point_3") == 0) return collection_card_point[2];
			if (wcscmp(fieldName, L"collection_card_point_4") == 0) return collection_card_point[3];
			if (wcscmp(fieldName, L"collection_card_point_5") == 0) return collection_card_point[4];
			if (wcscmp(fieldName, L"collection_card_point_6") == 0) return collection_card_point[5];
			if (wcscmp(fieldName, L"collection_card_point_7") == 0) return collection_card_point[6];
			if (wcscmp(fieldName, L"collection_card_point_8") == 0) return collection_card_point[7];
			if (wcscmp(fieldName, L"collection_activate_point") == 0) return collection_activate_point;
			if (wcscmp(fieldName, L"ability_activate_point_range") == 0) return ability_activate_point_range;
			if (wcscmp(fieldName, L"ability_activate_point_range_1") == 0) return ability_activate_point_range[0];
			if (wcscmp(fieldName, L"ability_activate_point_range_2") == 0) return ability_activate_point_range[1];
			if (wcscmp(fieldName, L"ability_activate_point_range_3") == 0) return ability_activate_point_range[2];
			if (wcscmp(fieldName, L"ability_activate_point_range_4") == 0) return ability_activate_point_range[3];
			if (wcscmp(fieldName, L"ability_activate_point_range_5") == 0) return ability_activate_point_range[4];
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_4") == 0) return ability[3];
			if (wcscmp(fieldName, L"ability_5") == 0) return ability[4];
			if (wcscmp(fieldName, L"ability_base_value") == 0) return ability_base_value;
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return ability_base_value[0];
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return ability_base_value[1];
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return ability_base_value[2];
			if (wcscmp(fieldName, L"ability_base_value_4") == 0) return ability_base_value[3];
			if (wcscmp(fieldName, L"ability_base_value_5") == 0) return ability_base_value[4];
			if (wcscmp(fieldName, L"effect_activate_point_range") == 0) return effect_activate_point_range;
			if (wcscmp(fieldName, L"effect_activate_point_range_1") == 0) return effect_activate_point_range[0];
			if (wcscmp(fieldName, L"effect_activate_point_range_2") == 0) return effect_activate_point_range[1];
			if (wcscmp(fieldName, L"effect_activate_point_range_3") == 0) return effect_activate_point_range[2];
			if (wcscmp(fieldName, L"effect_activate_point_range_4") == 0) return effect_activate_point_range[3];
			if (wcscmp(fieldName, L"effect_activate_point_range_5") == 0) return effect_activate_point_range[4];
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_1") == 0) return effect[0];
			if (wcscmp(fieldName, L"effect_2") == 0) return effect[1];
			if (wcscmp(fieldName, L"effect_3") == 0) return effect[2];
			if (wcscmp(fieldName, L"effect_4") == 0) return effect[3];
			if (wcscmp(fieldName, L"effect_5") == 0) return effect[4];
			if (wcscmp(fieldName, L"effect_desc") == 0) return effect_desc;
			if (wcscmp(fieldName, L"effect_desc_1") == 0) return effect_desc[0];
			if (wcscmp(fieldName, L"effect_desc_2") == 0) return effect_desc[1];
			if (wcscmp(fieldName, L"effect_desc_3") == 0) return effect_desc[2];
			if (wcscmp(fieldName, L"effect_desc_4") == 0) return effect_desc[3];
			if (wcscmp(fieldName, L"effect_desc_5") == 0) return effect_desc[4];
			if (wcscmp(fieldName, L"completion_reward_item") == 0) return completion_reward_item;
			if (wcscmp(fieldName, L"completion_reward_item_count") == 0) return completion_reward_item_count;
			if (wcscmp(fieldName, L"start_time") == 0) return start_time;
			if (wcscmp(fieldName, L"end_time") == 0) return end_time;
			if (wcscmp(fieldName, L"can_not_used") == 0) return can_not_used;
			if (wcscmp(fieldName, L"main_image") == 0) return main_image;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"collection_name") == 0) return Data::AnyFieldToStringConverter::ToString(&collection_name);
			if (wcscmp(fieldName, L"collection_season") == 0) return Data::AnyFieldToStringConverter::ToString(&collection_season);
			if (wcscmp(fieldName, L"collection_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&collection_grade);
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
			if (wcscmp(fieldName, L"collection_card_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[0]));
			if (wcscmp(fieldName, L"collection_card_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[1]));
			if (wcscmp(fieldName, L"collection_card_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[2]));
			if (wcscmp(fieldName, L"collection_card_point_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[3]));
			if (wcscmp(fieldName, L"collection_card_point_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[4]));
			if (wcscmp(fieldName, L"collection_card_point_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[5]));
			if (wcscmp(fieldName, L"collection_card_point_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[6]));
			if (wcscmp(fieldName, L"collection_card_point_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(collection_card_point[7]));
			if (wcscmp(fieldName, L"collection_activate_point") == 0) return Data::AnyFieldToStringConverter::ToString(&collection_activate_point);
			if (wcscmp(fieldName, L"ability_activate_point_range_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_activate_point_range[0]));
			if (wcscmp(fieldName, L"ability_activate_point_range_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_activate_point_range[1]));
			if (wcscmp(fieldName, L"ability_activate_point_range_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_activate_point_range[2]));
			if (wcscmp(fieldName, L"ability_activate_point_range_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_activate_point_range[3]));
			if (wcscmp(fieldName, L"ability_activate_point_range_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_activate_point_range[4]));
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[3]));
			if (wcscmp(fieldName, L"ability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[4]));
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[0]));
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[1]));
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[2]));
			if (wcscmp(fieldName, L"ability_base_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[3]));
			if (wcscmp(fieldName, L"ability_base_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[4]));
			if (wcscmp(fieldName, L"effect_activate_point_range_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_activate_point_range[0]));
			if (wcscmp(fieldName, L"effect_activate_point_range_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_activate_point_range[1]));
			if (wcscmp(fieldName, L"effect_activate_point_range_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_activate_point_range[2]));
			if (wcscmp(fieldName, L"effect_activate_point_range_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_activate_point_range[3]));
			if (wcscmp(fieldName, L"effect_activate_point_range_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_activate_point_range[4]));
			if (wcscmp(fieldName, L"effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[0]));
			if (wcscmp(fieldName, L"effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[1]));
			if (wcscmp(fieldName, L"effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[2]));
			if (wcscmp(fieldName, L"effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[3]));
			if (wcscmp(fieldName, L"effect_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[4]));
			if (wcscmp(fieldName, L"effect_desc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_desc[0]));
			if (wcscmp(fieldName, L"effect_desc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_desc[1]));
			if (wcscmp(fieldName, L"effect_desc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_desc[2]));
			if (wcscmp(fieldName, L"effect_desc_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_desc[3]));
			if (wcscmp(fieldName, L"effect_desc_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_desc[4]));
			if (wcscmp(fieldName, L"completion_reward_item") == 0) return Data::AnyFieldToStringConverter::ToString(&completion_reward_item);
			if (wcscmp(fieldName, L"completion_reward_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&completion_reward_item_count);
			if (wcscmp(fieldName, L"start_time") == 0) return Data::AnyFieldToStringConverter::ToString(&start_time);
			if (wcscmp(fieldName, L"end_time") == 0) return Data::AnyFieldToStringConverter::ToString(&end_time);
			if (wcscmp(fieldName, L"can_not_used") == 0) return Data::AnyFieldToStringConverter::ToString(&can_not_used);
			if (wcscmp(fieldName, L"main_image") == 0) return Data::AnyFieldToStringConverter::ToString(&main_image);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 5; i++) {
				if (reinterpret_cast<std::uintptr_t>(effect_desc[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_desc[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_desc[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(start_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_time));
			if (reinterpret_cast<std::uintptr_t>(end_time) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_time = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_time));
			if (reinterpret_cast<std::uintptr_t>(main_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) main_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(main_image));
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
Data::TableRef collection_name;
int collection_name_tableId(){return 405;};
__int16 collection_season;
__int8 collection_grade;
char Pad0[1];
Data::TableRef collection_card[8];
int collection_card_tableId(){return 433;};
__int16 collection_card_count[8];
__int16 collection_card_point[8];
__int16 collection_activate_point;
__int16 ability_activate_point_range[5];
__int8 ability[5];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
char Pad1[3];
__int32 ability_base_value[5];
__int16 effect_activate_point_range[5];
char Pad2[2];
Data::TableRef effect[5];
int effect_tableId(){return 111;};
wchar_t* effect_desc[5];
Data::TableRef completion_reward_item;
int completion_reward_item_tableId(){return 189;};
__int16 completion_reward_item_count;
char Pad3[2];
wchar_t* start_time;
wchar_t* end_time;
bool can_not_used;
char Pad4[3];
wchar_t* main_image;

		static TableVersion Version() { return TableVersion(3, 1); }
		static __int16 TableId() { return 432; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_card_collection_RecordPtr // : DrRecordPtr
	{
		world_account_card_collection_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_card_collection_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}