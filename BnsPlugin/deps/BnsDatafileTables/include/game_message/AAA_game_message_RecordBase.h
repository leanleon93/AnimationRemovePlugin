/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct game_message_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_sound_track_EnumValue(__int8 value);
		static std::wstring Get_sound_type_EnumValue(__int8 value);
		static std::wstring Get_sound2_type_EnumValue(__int8 value);
		static std::wstring Get_guild_battle_type_EnumValue(__int8 value);
		static std::wstring Get_ghost_mode_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"text") == 0) return text;
			if (wcscmp(fieldName, L"chatting") == 0) return chatting;
			if (wcscmp(fieldName, L"chatting_fontset") == 0) return chatting_fontset;
			if (wcscmp(fieldName, L"headline2") == 0) return headline2;
			if (wcscmp(fieldName, L"headline2_fontset") == 0) return headline2_fontset;
			if (wcscmp(fieldName, L"headline_text") == 0) return headline_text;
			if (wcscmp(fieldName, L"headline_fontset") == 0) return headline_fontset;
			if (wcscmp(fieldName, L"headline_particle") == 0) return headline_particle;
			if (wcscmp(fieldName, L"boss_headline_text") == 0) return boss_headline_text;
			if (wcscmp(fieldName, L"boss_headline_fontset") == 0) return boss_headline_fontset;
			if (wcscmp(fieldName, L"sound_track") == 0) return sound_track;
			if (wcscmp(fieldName, L"stop_previous_track_sound") == 0) return stop_previous_track_sound;
			if (wcscmp(fieldName, L"duplication_check") == 0) return duplication_check;
			if (wcscmp(fieldName, L"sound") == 0) return sound;
			if (wcscmp(fieldName, L"sound_type") == 0) return sound_type;
			if (wcscmp(fieldName, L"sound2") == 0) return sound2;
			if (wcscmp(fieldName, L"sound2_type") == 0) return sound2_type;
			if (wcscmp(fieldName, L"guild_battle_type") == 0) return guild_battle_type;
			if (wcscmp(fieldName, L"guild_battle_text") == 0) return guild_battle_text;
			if (wcscmp(fieldName, L"ghost_mode_type") == 0) return ghost_mode_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"text") == 0) return Data::AnyFieldToStringConverter::ToString(&text);
			if (wcscmp(fieldName, L"chatting") == 0) return Data::AnyFieldToStringConverter::ToString(&chatting);
			if (wcscmp(fieldName, L"chatting_fontset") == 0) return Data::AnyFieldToStringConverter::ToString(&chatting_fontset);
			if (wcscmp(fieldName, L"headline2") == 0) return Data::AnyFieldToStringConverter::ToString(&headline2);
			if (wcscmp(fieldName, L"headline2_fontset") == 0) return Data::AnyFieldToStringConverter::ToString(&headline2_fontset);
			if (wcscmp(fieldName, L"headline_text") == 0) return Data::AnyFieldToStringConverter::ToString(&headline_text);
			if (wcscmp(fieldName, L"headline_fontset") == 0) return Data::AnyFieldToStringConverter::ToString(&headline_fontset);
			if (wcscmp(fieldName, L"headline_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&headline_particle);
			if (wcscmp(fieldName, L"boss_headline_text") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_headline_text);
			if (wcscmp(fieldName, L"boss_headline_fontset") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_headline_fontset);
			if (wcscmp(fieldName, L"sound_track") == 0) return Data::AnyFieldToStringConverter::ToString(&sound_track);
			if (wcscmp(fieldName, L"stop_previous_track_sound") == 0) return Data::AnyFieldToStringConverter::ToString(&stop_previous_track_sound);
			if (wcscmp(fieldName, L"duplication_check") == 0) return Data::AnyFieldToStringConverter::ToString(&duplication_check);
			if (wcscmp(fieldName, L"sound") == 0) return Data::AnyFieldToStringConverter::ToString(&sound);
			if (wcscmp(fieldName, L"sound_type") == 0) return Data::AnyFieldToStringConverter::ToString(&sound_type);
			if (wcscmp(fieldName, L"sound2") == 0) return Data::AnyFieldToStringConverter::ToString(&sound2);
			if (wcscmp(fieldName, L"sound2_type") == 0) return Data::AnyFieldToStringConverter::ToString(&sound2_type);
			if (wcscmp(fieldName, L"guild_battle_type") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_battle_type);
			if (wcscmp(fieldName, L"guild_battle_text") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_battle_text);
			if (wcscmp(fieldName, L"ghost_mode_type") == 0) return Data::AnyFieldToStringConverter::ToString(&ghost_mode_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(chatting_fontset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) chatting_fontset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(chatting_fontset));
			if (reinterpret_cast<std::uintptr_t>(headline2_fontset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) headline2_fontset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(headline2_fontset));
			if (reinterpret_cast<std::uintptr_t>(headline_fontset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) headline_fontset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(headline_fontset));
			if (reinterpret_cast<std::uintptr_t>(headline_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) headline_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(headline_particle));
			if (reinterpret_cast<std::uintptr_t>(boss_headline_fontset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_headline_fontset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_headline_fontset));
			if (reinterpret_cast<std::uintptr_t>(sound) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sound = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sound));
			if (reinterpret_cast<std::uintptr_t>(sound2) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sound2 = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sound2));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad0[3];
Data::TableRef text;
int text_tableId(){return 405;};
bool chatting;
char Pad1[3];
wchar_t* chatting_fontset;
bool headline2;
char Pad2[3];
wchar_t* headline2_fontset;
Data::TableRef headline_text;
int headline_text_tableId(){return 405;};
wchar_t* headline_fontset;
wchar_t* headline_particle;
Data::TableRef boss_headline_text;
int boss_headline_text_tableId(){return 405;};
wchar_t* boss_headline_fontset;
__int8 sound_track;
std::wstring sound_track_EnumValue() const {return Get_sound_track_EnumValue(sound_track);};
bool stop_previous_track_sound;
bool duplication_check;
char Pad3[1];
wchar_t* sound;
__int8 sound_type;
std::wstring sound_type_EnumValue() const {return Get_sound_type_EnumValue(sound_type);};
char Pad4[3];
wchar_t* sound2;
__int8 sound2_type;
std::wstring sound2_type_EnumValue() const {return Get_sound2_type_EnumValue(sound2_type);};
__int8 guild_battle_type;
std::wstring guild_battle_type_EnumValue() const {return Get_guild_battle_type_EnumValue(guild_battle_type);};
char Pad5[2];
Data::TableRef guild_battle_text;
int guild_battle_text_tableId(){return 405;};
__int8 ghost_mode_type;
std::wstring ghost_mode_type_EnumValue() const {return Get_ghost_mode_type_EnumValue(ghost_mode_type);};

		static TableVersion Version() { return TableVersion(1, 47); }
		static __int16 TableId() { return 151; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) game_message_RecordPtr // : DrRecordPtr
	{
		game_message_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::game_message_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}