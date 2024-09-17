/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct wave_dungeon_strategy_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_quest") == 0) return required_quest;
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return required_achievement_id;
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return required_achievement_step;
			if (wcscmp(fieldName, L"condition_event") == 0) return condition_event;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"image") == 0) return image;
			if (wcscmp(fieldName, L"ability_text") == 0) return ability_text;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"ingame_icon_texture") == 0) return ingame_icon_texture;
			if (wcscmp(fieldName, L"ingame_icon_index") == 0) return ingame_icon_index;
			if (wcscmp(fieldName, L"ingame_icon_tooltip") == 0) return ingame_icon_tooltip;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&required_quest);
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_id);
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_step);
			if (wcscmp(fieldName, L"condition_event") == 0) return Data::AnyFieldToStringConverter::ToString(&condition_event);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"image") == 0) return Data::AnyFieldToStringConverter::ToString(&image);
			if (wcscmp(fieldName, L"ability_text") == 0) return Data::AnyFieldToStringConverter::ToString(&ability_text);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"ingame_icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&ingame_icon_texture);
			if (wcscmp(fieldName, L"ingame_icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&ingame_icon_index);
			if (wcscmp(fieldName, L"ingame_icon_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&ingame_icon_tooltip);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
__int8 required_mastery_level;
char Pad0[3];
Data::TableRef required_quest;
int required_quest_tableId(){return 283;};
__int16 required_achievement_id;
__int16 required_achievement_step;
Data::TableRef condition_event;
int condition_event_tableId(){return 62;};
Data::TableRef name;
int name_tableId(){return 405;};
Data::IconRef image;
Data::TableRef ability_text;
int ability_text_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef ingame_icon_texture;
int ingame_icon_texture_tableId(){return 178;};
__int16 ingame_icon_index;
char Pad1[2];
Data::TableRef ingame_icon_tooltip;
int ingame_icon_tooltip_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(2, 1); }
		static __int16 TableId() { return 426; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_strategy_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_strategy_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::wave_dungeon_strategy_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}