/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pc_voice_Record : DrEl
	{
	private:
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_usable_race_EnumValue(__int8 value);
		static std::wstring Get_default_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"pc_voice_set_id") == 0) return pc_voice_set_id;
			if (wcscmp(fieldName, L"usable_race") == 0) return usable_race;
			if (wcscmp(fieldName, L"usable_race_1") == 0) return usable_race[0];
			if (wcscmp(fieldName, L"usable_race_2") == 0) return usable_race[1];
			if (wcscmp(fieldName, L"usable_race_3") == 0) return usable_race[2];
			if (wcscmp(fieldName, L"usable_race_4") == 0) return usable_race[3];
			if (wcscmp(fieldName, L"default_race") == 0) return default_race;
			if (wcscmp(fieldName, L"default_race_1") == 0) return default_race[0];
			if (wcscmp(fieldName, L"default_race_2") == 0) return default_race[1];
			if (wcscmp(fieldName, L"default_race_3") == 0) return default_race[2];
			if (wcscmp(fieldName, L"default_race_4") == 0) return default_race[3];
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"desc") == 0) return desc;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"pc_voice_set_id") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_voice_set_id);
			if (wcscmp(fieldName, L"usable_race_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(usable_race[0]));
			if (wcscmp(fieldName, L"usable_race_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(usable_race[1]));
			if (wcscmp(fieldName, L"usable_race_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(usable_race[2]));
			if (wcscmp(fieldName, L"usable_race_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(usable_race[3]));
			if (wcscmp(fieldName, L"default_race_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_race[0]));
			if (wcscmp(fieldName, L"default_race_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_race[1]));
			if (wcscmp(fieldName, L"default_race_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_race[2]));
			if (wcscmp(fieldName, L"default_race_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(default_race[3]));
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 id;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 pc_voice_set_id;
__int8 usable_race[4];
std::wstring usable_race_EnumValue(int index) const {return Get_usable_race_EnumValue(usable_race[index]);};
__int8 default_race[4];
std::wstring default_race_EnumValue(int index) const {return Get_default_race_EnumValue(default_race[index]);};
char Pad0[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 272; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_RecordPtr // : DrRecordPtr
	{
		pc_voice_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_voice_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}