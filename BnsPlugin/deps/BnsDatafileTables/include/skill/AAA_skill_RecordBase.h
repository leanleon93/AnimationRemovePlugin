/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class skill_RecordSubType : __int32
    {
		skill_record_sub_active_skill = 0,
		skill_record_sub_passive_skill = 1,
		skill_record_sub_action = 2,
		skill_record_sub_count = 3,
    };
#pragma pack(push, 1)
	struct skill_Record : DrEl
	{
	private:
		static std::wstring Get_short_cut_key_EnumValue(__int16 value);
		static std::wstring Get_short_cut_key_classic_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"short_cut_key") == 0) return short_cut_key;
			if (wcscmp(fieldName, L"short_cut_key_classic") == 0) return short_cut_key_classic;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"short_cut_key") == 0) return Data::AnyFieldToStringConverter::ToString(&short_cut_key);
			if (wcscmp(fieldName, L"short_cut_key_classic") == 0) return Data::AnyFieldToStringConverter::ToString(&short_cut_key_classic);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 variation_1_level;
__int8 variation_2_level;
__int8 variation_3_level;
__int8 variation_4_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
__int16 short_cut_key;
std::wstring short_cut_key_EnumValue() const {return Get_short_cut_key_EnumValue(short_cut_key);};
__int16 short_cut_key_classic;
std::wstring short_cut_key_classic_EnumValue() const {return Get_short_cut_key_classic_EnumValue(short_cut_key_classic);};

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 335; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_RecordPtr // : DrRecordPtr
	{
		skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}