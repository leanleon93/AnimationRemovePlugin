/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mastery_grade_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"image_tag") == 0) return image_tag;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"image_tag") == 0) return Data::AnyFieldToStringConverter::ToString(&image_tag);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(image_tag) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) image_tag = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(image_tag));
		}
		union Key
		{
            struct {
                __int8 grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 level;
char Pad0[3];
wchar_t* image_tag;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 245; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_grade_RecordPtr // : DrRecordPtr
	{
		mastery_grade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_grade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}