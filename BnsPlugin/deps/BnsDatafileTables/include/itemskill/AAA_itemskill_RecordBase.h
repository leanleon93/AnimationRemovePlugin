/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemskill_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skill_id") == 0) return skill_id;
			if (wcscmp(fieldName, L"skill_variation_id") == 0) return skill_variation_id;
			if (wcscmp(fieldName, L"skill_variation_id_1") == 0) return skill_variation_id[0];
			if (wcscmp(fieldName, L"skill_variation_id_2") == 0) return skill_variation_id[1];
			if (wcscmp(fieldName, L"skill_variation_id_3") == 0) return skill_variation_id[2];
			if (wcscmp(fieldName, L"skill_variation_id_4") == 0) return skill_variation_id[3];
			if (wcscmp(fieldName, L"skill_variation_id_5") == 0) return skill_variation_id[4];
			if (wcscmp(fieldName, L"skill_variation_id_6") == 0) return skill_variation_id[5];
			if (wcscmp(fieldName, L"skill_variation_id_7") == 0) return skill_variation_id[6];
			if (wcscmp(fieldName, L"skill_variation_id_8") == 0) return skill_variation_id[7];
			if (wcscmp(fieldName, L"include_inheritance_skill") == 0) return include_inheritance_skill;
			if (wcscmp(fieldName, L"item_sim_skill") == 0) return item_sim_skill;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"description2") == 0) return description2;
			if (wcscmp(fieldName, L"item_skill_tooltip") == 0) return item_skill_tooltip;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skill_id") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_id);
			if (wcscmp(fieldName, L"skill_variation_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[0]));
			if (wcscmp(fieldName, L"skill_variation_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[1]));
			if (wcscmp(fieldName, L"skill_variation_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[2]));
			if (wcscmp(fieldName, L"skill_variation_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[3]));
			if (wcscmp(fieldName, L"skill_variation_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[4]));
			if (wcscmp(fieldName, L"skill_variation_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[5]));
			if (wcscmp(fieldName, L"skill_variation_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[6]));
			if (wcscmp(fieldName, L"skill_variation_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_variation_id[7]));
			if (wcscmp(fieldName, L"include_inheritance_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&include_inheritance_skill);
			if (wcscmp(fieldName, L"item_sim_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&item_sim_skill);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"description2") == 0) return Data::AnyFieldToStringConverter::ToString(&description2);
			if (wcscmp(fieldName, L"item_skill_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&item_skill_tooltip);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 skill_id;
__int8 skill_variation_id[8];
bool include_inheritance_skill;
char Pad0[3];
Data::TableRef item_sim_skill;
int item_sim_skill_tableId(){return 324;};
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef description2;
int description2_tableId(){return 405;};
Data::TableRef item_skill_tooltip;
int item_skill_tooltip_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 13); }
		static __int16 TableId() { return 208; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemskill_RecordPtr // : DrRecordPtr
	{
		itemskill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemskill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}