/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct faction_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"hostile_faction") == 0) return hostile_faction;
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"tag_name") == 0) return tag_name;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"activated_icon") == 0) return activated_icon;
			if (wcscmp(fieldName, L"activated_desc") == 0) return activated_desc;
			if (wcscmp(fieldName, L"level_up_show") == 0) return level_up_show;
			if (wcscmp(fieldName, L"text") == 0) return text;
			if (wcscmp(fieldName, L"join_confirm_msg") == 0) return join_confirm_msg;
			if (wcscmp(fieldName, L"join_confirm_input") == 0) return join_confirm_input;
			if (wcscmp(fieldName, L"transfer_confirm_msg") == 0) return transfer_confirm_msg;
			if (wcscmp(fieldName, L"transfer_confirm_input") == 0) return transfer_confirm_input;
			if (wcscmp(fieldName, L"grade_name") == 0) return grade_name;
			if (wcscmp(fieldName, L"grade_image") == 0) return grade_image;
			if (wcscmp(fieldName, L"grade_type") == 0) return grade_type;
			if (wcscmp(fieldName, L"grade_icon") == 0) return grade_icon;
			if (wcscmp(fieldName, L"grade_tooltip") == 0) return grade_tooltip;
			if (wcscmp(fieldName, L"hide_name") == 0) return hide_name;
			if (wcscmp(fieldName, L"hide_summoned_name") == 0) return hide_summoned_name;
			if (wcscmp(fieldName, L"guild_battle_field_teleport") == 0) return guild_battle_field_teleport;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"hostile_faction") == 0) return Data::AnyFieldToStringConverter::ToString(&hostile_faction);
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"tag_name") == 0) return Data::AnyFieldToStringConverter::ToString(&tag_name);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"activated_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&activated_icon);
			if (wcscmp(fieldName, L"activated_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&activated_desc);
			if (wcscmp(fieldName, L"level_up_show") == 0) return Data::AnyFieldToStringConverter::ToString(&level_up_show);
			if (wcscmp(fieldName, L"text") == 0) return Data::AnyFieldToStringConverter::ToString(&text);
			if (wcscmp(fieldName, L"join_confirm_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&join_confirm_msg);
			if (wcscmp(fieldName, L"join_confirm_input") == 0) return Data::AnyFieldToStringConverter::ToString(&join_confirm_input);
			if (wcscmp(fieldName, L"transfer_confirm_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&transfer_confirm_msg);
			if (wcscmp(fieldName, L"transfer_confirm_input") == 0) return Data::AnyFieldToStringConverter::ToString(&transfer_confirm_input);
			if (wcscmp(fieldName, L"grade_name") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_name);
			if (wcscmp(fieldName, L"grade_image") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_image);
			if (wcscmp(fieldName, L"grade_type") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_type);
			if (wcscmp(fieldName, L"grade_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_icon);
			if (wcscmp(fieldName, L"grade_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_tooltip);
			if (wcscmp(fieldName, L"hide_name") == 0) return Data::AnyFieldToStringConverter::ToString(&hide_name);
			if (wcscmp(fieldName, L"hide_summoned_name") == 0) return Data::AnyFieldToStringConverter::ToString(&hide_summoned_name);
			if (wcscmp(fieldName, L"guild_battle_field_teleport") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_battle_field_teleport);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(level_up_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) level_up_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(level_up_show));
		}
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef hostile_faction;
int hostile_faction_tableId(){return 130;};
__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad0[3];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef tag_name;
int tag_name_tableId(){return 405;};
Data::IconRef icon;
Data::IconRef activated_icon;
Data::TableRef activated_desc;
int activated_desc_tableId(){return 405;};
wchar_t* level_up_show;
Data::TableRef text;
int text_tableId(){return 405;};
Data::TableRef join_confirm_msg;
int join_confirm_msg_tableId(){return 405;};
Data::TableRef join_confirm_input;
int join_confirm_input_tableId(){return 405;};
Data::TableRef transfer_confirm_msg;
int transfer_confirm_msg_tableId(){return 405;};
Data::TableRef transfer_confirm_input;
int transfer_confirm_input_tableId(){return 405;};
Data::TableRef grade_name;
int grade_name_tableId(){return 405;};
Data::TableRef grade_image;
int grade_image_tableId(){return 405;};
__int8 grade_type;
char Pad1[3];
Data::IconRef grade_icon;
Data::TableRef grade_tooltip;
int grade_tooltip_tableId(){return 405;};
Data::TableRef hide_name;
int hide_name_tableId(){return 405;};
Data::TableRef hide_summoned_name;
int hide_summoned_name_tableId(){return 405;};
Data::TableRef guild_battle_field_teleport;
int guild_battle_field_teleport_tableId(){return 401;};

		static TableVersion Version() { return TableVersion(0, 20); }
		static __int16 TableId() { return 130; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) faction_RecordPtr // : DrRecordPtr
	{
		faction_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::faction_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}