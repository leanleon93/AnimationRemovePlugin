/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct glyph_slot_Record : DrEl
	{
	private:
		static std::wstring Get_slot_type_EnumValue(__int8 value);
		static std::wstring Get_slot_color_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"slot_type") == 0) return slot_type;
			if (wcscmp(fieldName, L"slot_color") == 0) return slot_color;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_sealed_dungeon") == 0) return required_sealed_dungeon;
			if (wcscmp(fieldName, L"required_sealed_level") == 0) return required_sealed_level;
			if (wcscmp(fieldName, L"required_quest_id") == 0) return required_quest_id;
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return required_achievement_id;
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return required_achievement_step;
			if (wcscmp(fieldName, L"cost_money") == 0) return cost_money;
			if (wcscmp(fieldName, L"cost_item") == 0) return cost_item;
			if (wcscmp(fieldName, L"cost_item_1") == 0) return cost_item[0];
			if (wcscmp(fieldName, L"cost_item_2") == 0) return cost_item[1];
			if (wcscmp(fieldName, L"cost_item_3") == 0) return cost_item[2];
			if (wcscmp(fieldName, L"cost_item_4") == 0) return cost_item[3];
			if (wcscmp(fieldName, L"cost_item_count") == 0) return cost_item_count;
			if (wcscmp(fieldName, L"cost_item_count_1") == 0) return cost_item_count[0];
			if (wcscmp(fieldName, L"cost_item_count_2") == 0) return cost_item_count[1];
			if (wcscmp(fieldName, L"cost_item_count_3") == 0) return cost_item_count[2];
			if (wcscmp(fieldName, L"cost_item_count_4") == 0) return cost_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"slot_type") == 0) return Data::AnyFieldToStringConverter::ToString(&slot_type);
			if (wcscmp(fieldName, L"slot_color") == 0) return Data::AnyFieldToStringConverter::ToString(&slot_color);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_sealed_dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&required_sealed_dungeon);
			if (wcscmp(fieldName, L"required_sealed_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_sealed_level);
			if (wcscmp(fieldName, L"required_quest_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_quest_id);
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_id);
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_step);
			if (wcscmp(fieldName, L"cost_money") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_money);
			if (wcscmp(fieldName, L"cost_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[0]));
			if (wcscmp(fieldName, L"cost_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[1]));
			if (wcscmp(fieldName, L"cost_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[2]));
			if (wcscmp(fieldName, L"cost_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item[3]));
			if (wcscmp(fieldName, L"cost_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[0]));
			if (wcscmp(fieldName, L"cost_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[1]));
			if (wcscmp(fieldName, L"cost_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[2]));
			if (wcscmp(fieldName, L"cost_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(cost_item_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 slot;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 slot_type;
std::wstring slot_type_EnumValue() const {return Get_slot_type_EnumValue(slot_type);};
__int8 slot_color;
std::wstring slot_color_EnumValue() const {return Get_slot_color_EnumValue(slot_color);};
char Pad0[2];
__int32 required_level;
__int32 required_mastery_level;
Data::TableRef required_sealed_dungeon;
int required_sealed_dungeon_tableId(){return 110;};
__int16 required_sealed_level;
__int16 required_quest_id;
__int16 required_achievement_id;
__int16 required_achievement_step;
__int32 cost_money;
Data::TableRef cost_item[4];
int cost_item_tableId(){return 189;};
__int16 cost_item_count[4];

		static TableVersion Version() { return TableVersion(5, 0); }
		static __int16 TableId() { return 156; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) glyph_slot_RecordPtr // : DrRecordPtr
	{
		glyph_slot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::glyph_slot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}