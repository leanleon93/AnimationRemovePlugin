/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct trainskillversion_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"version") == 0) return version;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"version") == 0) return Data::AnyFieldToStringConverter::ToString(&version);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 version;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 408; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) trainskillversion_RecordPtr // : DrRecordPtr
	{
		trainskillversion_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::trainskillversion_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}