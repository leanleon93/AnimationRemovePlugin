/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct gradebenefits_Record : DrEl
	{
	private:
		static std::wstring Get_benefit_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"game_grade_key") == 0) return game_grade_key;
			if (wcscmp(fieldName, L"value") == 0) return value;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"string_value") == 0) return string_value;
			if (wcscmp(fieldName, L"enable_in_arena_duel") == 0) return enable_in_arena_duel;
			if (wcscmp(fieldName, L"achievement") == 0) return achievement;
			if (wcscmp(fieldName, L"achievement_1") == 0) return achievement[0];
			if (wcscmp(fieldName, L"achievement_2") == 0) return achievement[1];
			if (wcscmp(fieldName, L"achievement_3") == 0) return achievement[2];
			if (wcscmp(fieldName, L"achievement_4") == 0) return achievement[3];
			if (wcscmp(fieldName, L"icon_image_set") == 0) return icon_image_set;
			if (wcscmp(fieldName, L"name") == 0) return name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"game_grade_key") == 0) return Data::AnyFieldToStringConverter::ToString(&game_grade_key);
			if (wcscmp(fieldName, L"value") == 0) return Data::AnyFieldToStringConverter::ToString(&value);
			if (wcscmp(fieldName, L"effect") == 0) return Data::AnyFieldToStringConverter::ToString(&effect);
			if (wcscmp(fieldName, L"string_value") == 0) return Data::AnyFieldToStringConverter::ToString(&string_value);
			if (wcscmp(fieldName, L"enable_in_arena_duel") == 0) return Data::AnyFieldToStringConverter::ToString(&enable_in_arena_duel);
			if (wcscmp(fieldName, L"achievement_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[0]));
			if (wcscmp(fieldName, L"achievement_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[1]));
			if (wcscmp(fieldName, L"achievement_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[2]));
			if (wcscmp(fieldName, L"achievement_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(achievement[3]));
			if (wcscmp(fieldName, L"icon_image_set") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_image_set);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(string_value) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) string_value = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(string_value));
			else return;
			if (reinterpret_cast<std::uintptr_t>(icon_image_set) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_image_set = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_image_set));
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
		}
		union Key
		{
            struct {
                __int8 benefit_type;
__int8 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 game_grade_key;
__int64 value;
Data::TableRef effect;
int effect_tableId(){return 111;};
wchar_t* string_value;
bool enable_in_arena_duel;
char Pad0[3];
Data::TableRef achievement[4];
int achievement_tableId(){return 6;};
wchar_t* icon_image_set;
wchar_t* name;

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 158; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) gradebenefits_RecordPtr // : DrRecordPtr
	{
		gradebenefits_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::gradebenefits_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}