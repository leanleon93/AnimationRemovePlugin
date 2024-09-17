/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct questrewardskill3_Record : DrEl
	{
	private:
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"skill3") == 0) return skill3;
			if (wcscmp(fieldName, L"skill3_1") == 0) return skill3[0];
			if (wcscmp(fieldName, L"skill3_2") == 0) return skill3[1];
			if (wcscmp(fieldName, L"skill3_3") == 0) return skill3[2];
			if (wcscmp(fieldName, L"skill3_4") == 0) return skill3[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style);
			if (wcscmp(fieldName, L"skill3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[0]));
			if (wcscmp(fieldName, L"skill3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[1]));
			if (wcscmp(fieldName, L"skill3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[2]));
			if (wcscmp(fieldName, L"skill3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[3]));

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
Data::TableRef skill3[4];
int skill3_tableId(){return 324;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 285; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) questrewardskill3_RecordPtr // : DrRecordPtr
	{
		questrewardskill3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::questrewardskill3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}