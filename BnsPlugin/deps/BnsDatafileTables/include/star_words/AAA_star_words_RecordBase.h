/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct star_words_Record : DrEl
	{
	private:
		static std::wstring Get_equip_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"equip_type") == 0) return equip_type;
			if (wcscmp(fieldName, L"equip_type_1") == 0) return equip_type[0];
			if (wcscmp(fieldName, L"equip_type_2") == 0) return equip_type[1];
			if (wcscmp(fieldName, L"equip_type_3") == 0) return equip_type[2];
			if (wcscmp(fieldName, L"equip_type_4") == 0) return equip_type[3];
			if (wcscmp(fieldName, L"equip_type_5") == 0) return equip_type[4];
			if (wcscmp(fieldName, L"equip_type_6") == 0) return equip_type[5];
			if (wcscmp(fieldName, L"equip_type_7") == 0) return equip_type[6];
			if (wcscmp(fieldName, L"equip_type_8") == 0) return equip_type[7];
			if (wcscmp(fieldName, L"equip_type_9") == 0) return equip_type[8];
			if (wcscmp(fieldName, L"equip_type_10") == 0) return equip_type[9];
			if (wcscmp(fieldName, L"star_stone_slot") == 0) return star_stone_slot;
			if (wcscmp(fieldName, L"star_stone_slot_1") == 0) return star_stone_slot[0];
			if (wcscmp(fieldName, L"star_stone_slot_2") == 0) return star_stone_slot[1];
			if (wcscmp(fieldName, L"star_stone_slot_3") == 0) return star_stone_slot[2];
			if (wcscmp(fieldName, L"star_stone_slot_4") == 0) return star_stone_slot[3];
			if (wcscmp(fieldName, L"star_stone_slot_5") == 0) return star_stone_slot[4];
			if (wcscmp(fieldName, L"star_stone_slot_6") == 0) return star_stone_slot[5];
			if (wcscmp(fieldName, L"star_stone_slot_7") == 0) return star_stone_slot[6];
			if (wcscmp(fieldName, L"star_stone_slot_8") == 0) return star_stone_slot[7];
			if (wcscmp(fieldName, L"star_words_condition_event") == 0) return star_words_condition_event;
			if (wcscmp(fieldName, L"star_words_condition_event_1") == 0) return star_words_condition_event[0];
			if (wcscmp(fieldName, L"star_words_condition_event_2") == 0) return star_words_condition_event[1];
			if (wcscmp(fieldName, L"star_words_condition_event_3") == 0) return star_words_condition_event[2];
			if (wcscmp(fieldName, L"star_words_condition_event_4") == 0) return star_words_condition_event[3];
			if (wcscmp(fieldName, L"star_words_condition_event_5") == 0) return star_words_condition_event[4];
			if (wcscmp(fieldName, L"star_words_condition_event_6") == 0) return star_words_condition_event[5];
			if (wcscmp(fieldName, L"star_words_condition_event_7") == 0) return star_words_condition_event[6];
			if (wcscmp(fieldName, L"star_words_condition_event_8") == 0) return star_words_condition_event[7];
			if (wcscmp(fieldName, L"star_words_condition_event_9") == 0) return star_words_condition_event[8];
			if (wcscmp(fieldName, L"star_words_condition_event_10") == 0) return star_words_condition_event[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"equip_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[0]));
			if (wcscmp(fieldName, L"equip_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[1]));
			if (wcscmp(fieldName, L"equip_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[2]));
			if (wcscmp(fieldName, L"equip_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[3]));
			if (wcscmp(fieldName, L"equip_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[4]));
			if (wcscmp(fieldName, L"equip_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[5]));
			if (wcscmp(fieldName, L"equip_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[6]));
			if (wcscmp(fieldName, L"equip_type_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[7]));
			if (wcscmp(fieldName, L"equip_type_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[8]));
			if (wcscmp(fieldName, L"equip_type_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(equip_type[9]));
			if (wcscmp(fieldName, L"star_stone_slot_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[0]));
			if (wcscmp(fieldName, L"star_stone_slot_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[1]));
			if (wcscmp(fieldName, L"star_stone_slot_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[2]));
			if (wcscmp(fieldName, L"star_stone_slot_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[3]));
			if (wcscmp(fieldName, L"star_stone_slot_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[4]));
			if (wcscmp(fieldName, L"star_stone_slot_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[5]));
			if (wcscmp(fieldName, L"star_stone_slot_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[6]));
			if (wcscmp(fieldName, L"star_stone_slot_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_stone_slot[7]));
			if (wcscmp(fieldName, L"star_words_condition_event_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[0]));
			if (wcscmp(fieldName, L"star_words_condition_event_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[1]));
			if (wcscmp(fieldName, L"star_words_condition_event_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[2]));
			if (wcscmp(fieldName, L"star_words_condition_event_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[3]));
			if (wcscmp(fieldName, L"star_words_condition_event_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[4]));
			if (wcscmp(fieldName, L"star_words_condition_event_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[5]));
			if (wcscmp(fieldName, L"star_words_condition_event_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[6]));
			if (wcscmp(fieldName, L"star_words_condition_event_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[7]));
			if (wcscmp(fieldName, L"star_words_condition_event_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[8]));
			if (wcscmp(fieldName, L"star_words_condition_event_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(star_words_condition_event[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 equip_type[10];
std::wstring equip_type_EnumValue(int index) const {return Get_equip_type_EnumValue(equip_type[index]);};
char Pad0[2];
Data::TableRef star_stone_slot[8];
int star_stone_slot_tableId(){return 189;};
Data::TableRef star_words_condition_event[10];
int star_words_condition_event_tableId(){return 62;};

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 380; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) star_words_RecordPtr // : DrRecordPtr
	{
		star_words_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::star_words_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}