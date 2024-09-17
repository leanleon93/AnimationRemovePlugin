/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_challenge_strategic_tool_Record : DrEl
	{
	private:
		static std::wstring Get_fail_caster_flag_EnumValue(__int16 value);
		static std::wstring Get_fail_caster_op_EnumValue(__int8 value);
		static std::wstring Get_fail_caster_effect_attribute_EnumValue(__int16 value);
		static std::wstring Get_fail_caster_effect_attribute_op_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"pc_effect") == 0) return pc_effect;
			if (wcscmp(fieldName, L"pc_effect_1") == 0) return pc_effect[0];
			if (wcscmp(fieldName, L"pc_effect_2") == 0) return pc_effect[1];
			if (wcscmp(fieldName, L"duel_bot_effect") == 0) return duel_bot_effect;
			if (wcscmp(fieldName, L"duel_bot_effect_1") == 0) return duel_bot_effect[0];
			if (wcscmp(fieldName, L"duel_bot_effect_2") == 0) return duel_bot_effect[1];
			if (wcscmp(fieldName, L"immune_caster_block_skill") == 0) return immune_caster_block_skill;
			if (wcscmp(fieldName, L"fail_caster_flag") == 0) return fail_caster_flag;
			if (wcscmp(fieldName, L"fail_caster_flag_1") == 0) return fail_caster_flag[0];
			if (wcscmp(fieldName, L"fail_caster_flag_2") == 0) return fail_caster_flag[1];
			if (wcscmp(fieldName, L"fail_caster_flag_3") == 0) return fail_caster_flag[2];
			if (wcscmp(fieldName, L"fail_caster_flag_4") == 0) return fail_caster_flag[3];
			if (wcscmp(fieldName, L"fail_caster_op") == 0) return fail_caster_op;
			if (wcscmp(fieldName, L"fail_caster_effect_attribute") == 0) return fail_caster_effect_attribute;
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_1") == 0) return fail_caster_effect_attribute[0];
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_2") == 0) return fail_caster_effect_attribute[1];
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_3") == 0) return fail_caster_effect_attribute[2];
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_4") == 0) return fail_caster_effect_attribute[3];
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_op") == 0) return fail_caster_effect_attribute_op;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"card_image_set") == 0) return card_image_set;
			if (wcscmp(fieldName, L"card_tooltip") == 0) return card_tooltip;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"name2") == 0) return name2;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"pc_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(pc_effect[0]));
			if (wcscmp(fieldName, L"pc_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(pc_effect[1]));
			if (wcscmp(fieldName, L"duel_bot_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(duel_bot_effect[0]));
			if (wcscmp(fieldName, L"duel_bot_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(duel_bot_effect[1]));
			if (wcscmp(fieldName, L"immune_caster_block_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_caster_block_skill);
			if (wcscmp(fieldName, L"fail_caster_flag_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_flag[0]));
			if (wcscmp(fieldName, L"fail_caster_flag_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_flag[1]));
			if (wcscmp(fieldName, L"fail_caster_flag_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_flag[2]));
			if (wcscmp(fieldName, L"fail_caster_flag_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_flag[3]));
			if (wcscmp(fieldName, L"fail_caster_op") == 0) return Data::AnyFieldToStringConverter::ToString(&fail_caster_op);
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_effect_attribute[0]));
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_effect_attribute[1]));
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_effect_attribute[2]));
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fail_caster_effect_attribute[3]));
			if (wcscmp(fieldName, L"fail_caster_effect_attribute_op") == 0) return Data::AnyFieldToStringConverter::ToString(&fail_caster_effect_attribute_op);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"card_image_set") == 0) return Data::AnyFieldToStringConverter::ToString(&card_image_set);
			if (wcscmp(fieldName, L"card_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&card_tooltip);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(card_image_set) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) card_image_set = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(card_image_set));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef pc_effect[2];
int pc_effect_tableId(){return 111;};
Data::TableRef duel_bot_effect[2];
int duel_bot_effect_tableId(){return 111;};
bool immune_caster_block_skill;
char Pad0[1];
__int16 fail_caster_flag[4];
std::wstring fail_caster_flag_EnumValue(int index) const {return Get_fail_caster_flag_EnumValue(fail_caster_flag[index]);};
__int8 fail_caster_op;
std::wstring fail_caster_op_EnumValue() const {return Get_fail_caster_op_EnumValue(fail_caster_op);};
char Pad1[1];
__int16 fail_caster_effect_attribute[4];
std::wstring fail_caster_effect_attribute_EnumValue(int index) const {return Get_fail_caster_effect_attribute_EnumValue(fail_caster_effect_attribute[index]);};
__int8 fail_caster_effect_attribute_op;
std::wstring fail_caster_effect_attribute_op_EnumValue() const {return Get_fail_caster_effect_attribute_op_EnumValue(fail_caster_effect_attribute_op);};
char Pad2[3];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad3[2];
wchar_t* card_image_set;
Data::TableRef card_tooltip;
int card_tooltip_tableId(){return 405;};
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef name2;
int name2_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 102; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_challenge_strategic_tool_RecordPtr // : DrRecordPtr
	{
		duel_bot_challenge_strategic_tool_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_challenge_strategic_tool_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}