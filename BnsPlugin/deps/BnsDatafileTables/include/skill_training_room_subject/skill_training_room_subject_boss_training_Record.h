/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_skill_training_room_subject_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct skill_training_room_subject_boss_training_Record : skill_training_room_subject_Record
	{
	private:
		static std::wstring Get_dungeon_group_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = skill_training_room_subject_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boss_npc") == 0) return boss_npc;
			if (wcscmp(fieldName, L"boss_desc") == 0) return boss_desc;
			if (wcscmp(fieldName, L"boss_combat_desc") == 0) return boss_combat_desc;
			if (wcscmp(fieldName, L"boss_combat_tips_desc") == 0) return boss_combat_tips_desc;
			if (wcscmp(fieldName, L"boss_image") == 0) return boss_image;
			if (wcscmp(fieldName, L"dungeon_name") == 0) return dungeon_name;
			if (wcscmp(fieldName, L"dungeon_group") == 0) return dungeon_group;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = skill_training_room_subject_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"boss_npc") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_npc);
			if (wcscmp(fieldName, L"boss_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_desc);
			if (wcscmp(fieldName, L"boss_combat_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_combat_desc);
			if (wcscmp(fieldName, L"boss_combat_tips_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_combat_tips_desc);
			if (wcscmp(fieldName, L"boss_image") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_image);
			if (wcscmp(fieldName, L"dungeon_name") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_name);
			if (wcscmp(fieldName, L"dungeon_group") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon_group);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			skill_training_room_subject_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(boss_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) boss_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(boss_image));
		}
		char Pad_sub_0[2];
Data::TableRef boss_npc;
int boss_npc_tableId(){return 255;};
Data::TableRef boss_desc;
int boss_desc_tableId(){return 405;};
Data::TableRef boss_combat_desc;
int boss_combat_desc_tableId(){return 405;};
Data::TableRef boss_combat_tips_desc;
int boss_combat_tips_desc_tableId(){return 405;};
wchar_t* boss_image;
Data::TableRef dungeon_name;
int dungeon_name_tableId(){return 405;};
__int8 dungeon_group;
std::wstring dungeon_group_EnumValue() const {return Get_dungeon_group_EnumValue(dungeon_group);};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}