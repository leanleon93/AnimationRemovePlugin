/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_combo_2_Record : DrEl
	{
	private:
		static std::wstring Get_group_EnumValue(__int8 value);
		static std::wstring Get_skill_slot_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"action_desc") == 0) return action_desc;
			if (wcscmp(fieldName, L"combo_desc") == 0) return combo_desc;
			if (wcscmp(fieldName, L"video") == 0) return video;
			if (wcscmp(fieldName, L"skill") == 0) return skill;
			if (wcscmp(fieldName, L"skill_1") == 0) return skill[0];
			if (wcscmp(fieldName, L"skill_2") == 0) return skill[1];
			if (wcscmp(fieldName, L"skill_3") == 0) return skill[2];
			if (wcscmp(fieldName, L"skill_4") == 0) return skill[3];
			if (wcscmp(fieldName, L"skill_5") == 0) return skill[4];
			if (wcscmp(fieldName, L"skill_slot_type") == 0) return skill_slot_type;
			if (wcscmp(fieldName, L"skill_slot_type_1") == 0) return skill_slot_type[0];
			if (wcscmp(fieldName, L"skill_slot_type_2") == 0) return skill_slot_type[1];
			if (wcscmp(fieldName, L"skill_slot_type_3") == 0) return skill_slot_type[2];
			if (wcscmp(fieldName, L"skill_slot_type_4") == 0) return skill_slot_type[3];
			if (wcscmp(fieldName, L"skill_slot_type_5") == 0) return skill_slot_type[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"action_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&action_desc);
			if (wcscmp(fieldName, L"combo_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&combo_desc);
			if (wcscmp(fieldName, L"video") == 0) return Data::AnyFieldToStringConverter::ToString(&video);
			if (wcscmp(fieldName, L"skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill[0]));
			if (wcscmp(fieldName, L"skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill[1]));
			if (wcscmp(fieldName, L"skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill[2]));
			if (wcscmp(fieldName, L"skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill[3]));
			if (wcscmp(fieldName, L"skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill[4]));
			if (wcscmp(fieldName, L"skill_slot_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_slot_type[0]));
			if (wcscmp(fieldName, L"skill_slot_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_slot_type[1]));
			if (wcscmp(fieldName, L"skill_slot_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_slot_type[2]));
			if (wcscmp(fieldName, L"skill_slot_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_slot_type[3]));
			if (wcscmp(fieldName, L"skill_slot_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_slot_type[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(video) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) video = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(video));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 group;
std::wstring group_EnumValue() const {return Get_group_EnumValue(group);};
char Pad0[1];
__int16 sort_no;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef action_desc;
int action_desc_tableId(){return 405;};
Data::TableRef combo_desc;
int combo_desc_tableId(){return 405;};
wchar_t* video;
__int32 skill[5];
__int8 skill_slot_type[5];
std::wstring skill_slot_type_EnumValue(int index) const {return Get_skill_slot_type_EnumValue(skill_slot_type[index]);};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 332; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_combo_2_RecordPtr // : DrRecordPtr
	{
		skill_combo_2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_combo_2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}