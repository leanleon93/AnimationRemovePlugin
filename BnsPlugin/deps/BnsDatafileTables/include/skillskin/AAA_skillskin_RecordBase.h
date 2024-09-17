/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillskin_Record : DrEl
	{
	private:
		static std::wstring Get_skill_skin_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skill_skin_type") == 0) return skill_skin_type;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"iteminfo") == 0) return iteminfo;
			if (wcscmp(fieldName, L"iteminfo_1") == 0) return iteminfo[0];
			if (wcscmp(fieldName, L"iteminfo_2") == 0) return iteminfo[1];
			if (wcscmp(fieldName, L"iteminfo_3") == 0) return iteminfo[2];
			if (wcscmp(fieldName, L"iteminfo_4") == 0) return iteminfo[3];
			if (wcscmp(fieldName, L"iteminfo_5") == 0) return iteminfo[4];
			if (wcscmp(fieldName, L"iteminfo_6") == 0) return iteminfo[5];
			if (wcscmp(fieldName, L"iteminfo_7") == 0) return iteminfo[6];
			if (wcscmp(fieldName, L"iteminfo_8") == 0) return iteminfo[7];
			if (wcscmp(fieldName, L"iteminfo_9") == 0) return iteminfo[8];
			if (wcscmp(fieldName, L"iteminfo_10") == 0) return iteminfo[9];
			if (wcscmp(fieldName, L"iteminfo_11") == 0) return iteminfo[10];
			if (wcscmp(fieldName, L"iteminfo_12") == 0) return iteminfo[11];
			if (wcscmp(fieldName, L"iteminfo_13") == 0) return iteminfo[12];
			if (wcscmp(fieldName, L"iteminfo_14") == 0) return iteminfo[13];
			if (wcscmp(fieldName, L"iteminfo_15") == 0) return iteminfo[14];
			if (wcscmp(fieldName, L"iteminfo_16") == 0) return iteminfo[15];
			if (wcscmp(fieldName, L"iteminfo_17") == 0) return iteminfo[16];
			if (wcscmp(fieldName, L"iteminfo_18") == 0) return iteminfo[17];
			if (wcscmp(fieldName, L"iteminfo_19") == 0) return iteminfo[18];
			if (wcscmp(fieldName, L"iteminfo_20") == 0) return iteminfo[19];
			if (wcscmp(fieldName, L"grade") == 0) return grade;
			if (wcscmp(fieldName, L"skill_skin_play_bink") == 0) return skill_skin_play_bink;
			if (wcscmp(fieldName, L"skill_skin_play_bink_1") == 0) return skill_skin_play_bink[0];
			if (wcscmp(fieldName, L"skill_skin_play_bink_2") == 0) return skill_skin_play_bink[1];
			if (wcscmp(fieldName, L"skill_skin_play_bink_3") == 0) return skill_skin_play_bink[2];
			if (wcscmp(fieldName, L"skill_skin_play_bink_4") == 0) return skill_skin_play_bink[3];
			if (wcscmp(fieldName, L"skill_skin_play_bink_5") == 0) return skill_skin_play_bink[4];
			if (wcscmp(fieldName, L"skill_skin_play_bink_6") == 0) return skill_skin_play_bink[5];
			if (wcscmp(fieldName, L"skill_skin_play_bink_7") == 0) return skill_skin_play_bink[6];
			if (wcscmp(fieldName, L"skill_skin_play_bink_8") == 0) return skill_skin_play_bink[7];
			if (wcscmp(fieldName, L"skill_skin_play_bink_9") == 0) return skill_skin_play_bink[8];
			if (wcscmp(fieldName, L"skill_skin_play_bink_10") == 0) return skill_skin_play_bink[9];
			if (wcscmp(fieldName, L"skill_skin_play_bink_11") == 0) return skill_skin_play_bink[10];
			if (wcscmp(fieldName, L"skill_skin_play_bink_12") == 0) return skill_skin_play_bink[11];
			if (wcscmp(fieldName, L"skill_skin_play_bink_13") == 0) return skill_skin_play_bink[12];
			if (wcscmp(fieldName, L"skill_skin_play_bink_14") == 0) return skill_skin_play_bink[13];
			if (wcscmp(fieldName, L"skill_skin_play_bink_15") == 0) return skill_skin_play_bink[14];
			if (wcscmp(fieldName, L"skill_skin_play_bink_16") == 0) return skill_skin_play_bink[15];
			if (wcscmp(fieldName, L"skill_skin_play_bink_17") == 0) return skill_skin_play_bink[16];
			if (wcscmp(fieldName, L"skill_skin_play_bink_18") == 0) return skill_skin_play_bink[17];
			if (wcscmp(fieldName, L"skill_skin_play_bink_19") == 0) return skill_skin_play_bink[18];
			if (wcscmp(fieldName, L"skill_skin_play_bink_20") == 0) return skill_skin_play_bink[19];
			if (wcscmp(fieldName, L"background_image") == 0) return background_image;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skill_skin_type") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_skin_type);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"iteminfo_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[0]));
			if (wcscmp(fieldName, L"iteminfo_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[1]));
			if (wcscmp(fieldName, L"iteminfo_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[2]));
			if (wcscmp(fieldName, L"iteminfo_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[3]));
			if (wcscmp(fieldName, L"iteminfo_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[4]));
			if (wcscmp(fieldName, L"iteminfo_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[5]));
			if (wcscmp(fieldName, L"iteminfo_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[6]));
			if (wcscmp(fieldName, L"iteminfo_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[7]));
			if (wcscmp(fieldName, L"iteminfo_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[8]));
			if (wcscmp(fieldName, L"iteminfo_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[9]));
			if (wcscmp(fieldName, L"iteminfo_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[10]));
			if (wcscmp(fieldName, L"iteminfo_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[11]));
			if (wcscmp(fieldName, L"iteminfo_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[12]));
			if (wcscmp(fieldName, L"iteminfo_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[13]));
			if (wcscmp(fieldName, L"iteminfo_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[14]));
			if (wcscmp(fieldName, L"iteminfo_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[15]));
			if (wcscmp(fieldName, L"iteminfo_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[16]));
			if (wcscmp(fieldName, L"iteminfo_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[17]));
			if (wcscmp(fieldName, L"iteminfo_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[18]));
			if (wcscmp(fieldName, L"iteminfo_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(iteminfo[19]));
			if (wcscmp(fieldName, L"grade") == 0) return Data::AnyFieldToStringConverter::ToString(&grade);
			if (wcscmp(fieldName, L"skill_skin_play_bink_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[0]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[1]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[2]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[3]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[4]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[5]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[6]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[7]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[8]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[9]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[10]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[11]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[12]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[13]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[14]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[15]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[16]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[17]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[18]));
			if (wcscmp(fieldName, L"skill_skin_play_bink_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_skin_play_bink[19]));
			if (wcscmp(fieldName, L"background_image") == 0) return Data::AnyFieldToStringConverter::ToString(&background_image);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 20; i++) {
				if (reinterpret_cast<std::uintptr_t>(skill_skin_play_bink[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) skill_skin_play_bink[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(skill_skin_play_bink[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(background_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) background_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(background_image));
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
__int8 skill_skin_type;
std::wstring skill_skin_type_EnumValue() const {return Get_skill_skin_type_EnumValue(skill_skin_type);};
char Pad0[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::IconRef icon;
Data::TableRef iteminfo[20];
int iteminfo_tableId(){return 189;};
__int8 grade;
char Pad1[3];
wchar_t* skill_skin_play_bink[20];
wchar_t* background_image;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 344; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillskin_RecordPtr // : DrRecordPtr
	{
		skillskin_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillskin_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}