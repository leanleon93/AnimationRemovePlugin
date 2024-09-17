/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skipteleport_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"mastery_level") == 0) return mastery_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mastery_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 level;
__int16 mastery_level;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 363; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skipteleport_RecordPtr // : DrRecordPtr
	{
		skipteleport_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skipteleport_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}