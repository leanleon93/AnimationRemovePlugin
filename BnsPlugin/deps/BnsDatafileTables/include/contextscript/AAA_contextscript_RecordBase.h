/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contextscript_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_job_style_EnumValue(__int8 value);
		static std::wstring Get_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"job_style_1") == 0) return job_style[0];
			if (wcscmp(fieldName, L"job_style_2") == 0) return job_style[1];
			if (wcscmp(fieldName, L"race") == 0) return race;
			if (wcscmp(fieldName, L"context_simple_mode") == 0) return context_simple_mode;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"job") == 0) return Data::AnyFieldToStringConverter::ToString(&job);
			if (wcscmp(fieldName, L"job_style_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(job_style[0]));
			if (wcscmp(fieldName, L"job_style_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(job_style[1]));
			if (wcscmp(fieldName, L"race") == 0) return Data::AnyFieldToStringConverter::ToString(&race);
			if (wcscmp(fieldName, L"context_simple_mode") == 0) return Data::AnyFieldToStringConverter::ToString(&context_simple_mode);

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
__int8 job;
std::wstring job_EnumValue() const {return Get_job_EnumValue(job);};
__int8 job_style[2];
std::wstring job_style_EnumValue(int index) const {return Get_job_style_EnumValue(job_style[index]);};
__int8 race;
std::wstring race_EnumValue() const {return Get_race_EnumValue(race);};
bool context_simple_mode;

		static TableVersion Version() { return TableVersion(0, 49); }
		static __int16 TableId() { return 74; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contextscript_RecordPtr // : DrRecordPtr
	{
		contextscript_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contextscript_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}