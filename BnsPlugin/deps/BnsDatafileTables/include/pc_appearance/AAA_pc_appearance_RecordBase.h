/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pc_appearance_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"anim_set_name") == 0) return anim_set_name;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"anim_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_set_name);
			if (wcscmp(fieldName, L"appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(anim_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_set_name));
		}
		union Key
		{
            struct {
                __int8 race;
__int8 job;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_set_name;
Data::TableRef appearance;
int appearance_tableId(){return 84;};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 265; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_appearance_RecordPtr // : DrRecordPtr
	{
		pc_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}