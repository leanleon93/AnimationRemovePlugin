/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_bot_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"race") == 0) return race;
			if (wcscmp(fieldName, L"sex") == 0) return sex;
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"mastery_level") == 0) return mastery_level;
			if (wcscmp(fieldName, L"faction") == 0) return faction;
			if (wcscmp(fieldName, L"speed") == 0) return speed;
			if (wcscmp(fieldName, L"radius") == 0) return radius;
			if (wcscmp(fieldName, L"scale") == 0) return scale;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;
			if (wcscmp(fieldName, L"animset") == 0) return animset;
			if (wcscmp(fieldName, L"summoned_name2") == 0) return summoned_name2;
			if (wcscmp(fieldName, L"summoned_appearance") == 0) return summoned_appearance;
			if (wcscmp(fieldName, L"summoned_animset") == 0) return summoned_animset;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"race") == 0) return Data::AnyFieldToStringConverter::ToString(&race);
			if (wcscmp(fieldName, L"sex") == 0) return Data::AnyFieldToStringConverter::ToString(&sex);
			if (wcscmp(fieldName, L"job") == 0) return Data::AnyFieldToStringConverter::ToString(&job);
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mastery_level);
			if (wcscmp(fieldName, L"faction") == 0) return Data::AnyFieldToStringConverter::ToString(&faction);
			if (wcscmp(fieldName, L"speed") == 0) return Data::AnyFieldToStringConverter::ToString(&speed);
			if (wcscmp(fieldName, L"radius") == 0) return Data::AnyFieldToStringConverter::ToString(&radius);
			if (wcscmp(fieldName, L"scale") == 0) return Data::AnyFieldToStringConverter::ToString(&scale);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance);
			if (wcscmp(fieldName, L"animset") == 0) return Data::AnyFieldToStringConverter::ToString(&animset);
			if (wcscmp(fieldName, L"summoned_name2") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_name2);
			if (wcscmp(fieldName, L"summoned_appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_appearance);
			if (wcscmp(fieldName, L"summoned_animset") == 0) return Data::AnyFieldToStringConverter::ToString(&summoned_animset);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(animset));
			if (reinterpret_cast<std::uintptr_t>(summoned_animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) summoned_animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(summoned_animset));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 race;
std::wstring race_EnumValue() const {return Get_race_EnumValue(race);};
__int8 sex;
std::wstring sex_EnumValue() const {return Get_sex_EnumValue(sex);};
__int8 job;
std::wstring job_EnumValue() const {return Get_job_EnumValue(job);};
__int8 level;
__int8 mastery_level;
char Pad0[3];
Data::TableRef faction;
int faction_tableId(){return 130;};
__int16 speed;
__int16 radius;
__int16 scale;
char Pad1[2];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* animset;
Data::TableRef summoned_name2;
int summoned_name2_tableId(){return 405;};
Data::TableRef summoned_appearance;
int summoned_appearance_tableId(){return 84;};
wchar_t* summoned_animset;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 103; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_bot_RecordPtr // : DrRecordPtr
	{
		duel_bot_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_bot_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}