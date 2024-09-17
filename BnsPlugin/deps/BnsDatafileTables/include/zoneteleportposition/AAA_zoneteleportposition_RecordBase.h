/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zoneteleportposition_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"position") == 0) return position;
			if (wcscmp(fieldName, L"yaw") == 0) return yaw;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"position") == 0) return Data::AnyFieldToStringConverter::ToString(&position);
			if (wcscmp(fieldName, L"yaw") == 0) return Data::AnyFieldToStringConverter::ToString(&yaw);

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
__int32 zone;
Data::XYZ position;
__int16 yaw;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 455; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneteleportposition_RecordPtr // : DrRecordPtr
	{
		zoneteleportposition_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneteleportposition_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}