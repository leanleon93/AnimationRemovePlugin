/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct summoned_appearance_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"animset") == 0) return animset;
			if (wcscmp(fieldName, L"moveanim") == 0) return moveanim;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;
			if (wcscmp(fieldName, L"sword") == 0) return sword;
			if (wcscmp(fieldName, L"glove_r") == 0) return glove_r;
			if (wcscmp(fieldName, L"glove_l") == 0) return glove_l;
			if (wcscmp(fieldName, L"hammer") == 0) return hammer;
			if (wcscmp(fieldName, L"gun_r") == 0) return gun_r;
			if (wcscmp(fieldName, L"gun_l") == 0) return gun_l;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"animset") == 0) return Data::AnyFieldToStringConverter::ToString(&animset);
			if (wcscmp(fieldName, L"moveanim") == 0) return Data::AnyFieldToStringConverter::ToString(&moveanim);
			if (wcscmp(fieldName, L"appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance);
			if (wcscmp(fieldName, L"sword") == 0) return Data::AnyFieldToStringConverter::ToString(&sword);
			if (wcscmp(fieldName, L"glove_r") == 0) return Data::AnyFieldToStringConverter::ToString(&glove_r);
			if (wcscmp(fieldName, L"glove_l") == 0) return Data::AnyFieldToStringConverter::ToString(&glove_l);
			if (wcscmp(fieldName, L"hammer") == 0) return Data::AnyFieldToStringConverter::ToString(&hammer);
			if (wcscmp(fieldName, L"gun_r") == 0) return Data::AnyFieldToStringConverter::ToString(&gun_r);
			if (wcscmp(fieldName, L"gun_l") == 0) return Data::AnyFieldToStringConverter::ToString(&gun_l);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(animset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(sword) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sword = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sword));
			if (reinterpret_cast<std::uintptr_t>(glove_r) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) glove_r = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(glove_r));
			if (reinterpret_cast<std::uintptr_t>(glove_l) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) glove_l = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(glove_l));
			if (reinterpret_cast<std::uintptr_t>(hammer) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) hammer = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(hammer));
			if (reinterpret_cast<std::uintptr_t>(gun_r) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gun_r = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gun_r));
			if (reinterpret_cast<std::uintptr_t>(gun_l) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gun_l = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gun_l));
		}
		union Key
		{
            struct {
                __int8 race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* animset;
Data::TableRef moveanim;
int moveanim_tableId(){return 393;};
Data::TableRef appearance;
int appearance_tableId(){return 84;};
wchar_t* sword;
wchar_t* glove_r;
wchar_t* glove_l;
wchar_t* hammer;
wchar_t* gun_r;
wchar_t* gun_l;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 386; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoned_appearance_RecordPtr // : DrRecordPtr
	{
		summoned_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summoned_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}