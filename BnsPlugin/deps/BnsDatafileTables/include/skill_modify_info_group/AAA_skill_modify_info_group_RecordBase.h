/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_modify_info_group_Record : DrEl
	{
	private:
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"skill_modify_info") == 0) return skill_modify_info;
			if (wcscmp(fieldName, L"skill_modify_info_1") == 0) return skill_modify_info[0];
			if (wcscmp(fieldName, L"skill_modify_info_2") == 0) return skill_modify_info[1];
			if (wcscmp(fieldName, L"skill_modify_info_3") == 0) return skill_modify_info[2];
			if (wcscmp(fieldName, L"skill_modify_info_4") == 0) return skill_modify_info[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style);
			if (wcscmp(fieldName, L"skill_modify_info_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[0]));
			if (wcscmp(fieldName, L"skill_modify_info_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[1]));
			if (wcscmp(fieldName, L"skill_modify_info_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[2]));
			if (wcscmp(fieldName, L"skill_modify_info_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_modify_info[3]));

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
__int8 job_style;
std::wstring job_style_EnumValue() const {return Get_job_style_EnumValue(job_style);};
char Pad0[3];
Data::TableRef skill_modify_info[4];
int skill_modify_info_tableId(){return 339;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 340; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_modify_info_group_RecordPtr // : DrRecordPtr
	{
		skill_modify_info_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_modify_info_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}