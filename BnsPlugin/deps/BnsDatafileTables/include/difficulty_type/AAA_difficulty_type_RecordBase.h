/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct difficulty_type_Record : DrEl
	{
	private:
		static std::wstring Get_id_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"max_party_member_count") == 0) return max_party_member_count;
			if (wcscmp(fieldName, L"default_val") == 0) return default_val;
			if (wcscmp(fieldName, L"is_pvp") == 0) return is_pvp;
			if (wcscmp(fieldName, L"name") == 0) return name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"max_party_member_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_party_member_count);
			if (wcscmp(fieldName, L"default_val") == 0) return Data::AnyFieldToStringConverter::ToString(&default_val);
			if (wcscmp(fieldName, L"is_pvp") == 0) return Data::AnyFieldToStringConverter::ToString(&is_pvp);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
__int8 max_party_member_count;
bool default_val;
bool is_pvp;
char Pad0[1];
Data::TableRef name;
int name_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 97; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) difficulty_type_RecordPtr // : DrRecordPtr
	{
		difficulty_type_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::difficulty_type_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}