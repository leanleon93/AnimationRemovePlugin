/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct equip_gem_piece_Record : DrEl
	{
	private:
		static std::wstring Get_item_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item_ability") == 0) return item_ability;
			if (wcscmp(fieldName, L"value") == 0) return value;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item_ability") == 0) return Data::AnyFieldToStringConverter::ToString(&item_ability);
			if (wcscmp(fieldName, L"value") == 0) return Data::AnyFieldToStringConverter::ToString(&value);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
__int8 item_ability;
std::wstring item_ability_EnumValue() const {return Get_item_ability_EnumValue(item_ability);};
char Pad0[1];
__int16 value;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 119; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) equip_gem_piece_RecordPtr // : DrRecordPtr
	{
		equip_gem_piece_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::equip_gem_piece_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}