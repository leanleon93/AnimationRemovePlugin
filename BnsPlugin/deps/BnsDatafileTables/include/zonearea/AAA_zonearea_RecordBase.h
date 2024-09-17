/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zonearea_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"box") == 0) return box;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"areacolor") == 0) return areacolor;
			if (wcscmp(fieldName, L"pos") == 0) return pos;
			if (wcscmp(fieldName, L"scale_x") == 0) return scale_x;
			if (wcscmp(fieldName, L"scale_y") == 0) return scale_y;
			if (wcscmp(fieldName, L"scale_z") == 0) return scale_z;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"box") == 0) return Data::AnyFieldToStringConverter::ToString(&box);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"areacolor") == 0) return Data::AnyFieldToStringConverter::ToString(&areacolor);
			if (wcscmp(fieldName, L"pos") == 0) return Data::AnyFieldToStringConverter::ToString(&pos);
			if (wcscmp(fieldName, L"scale_x") == 0) return Data::AnyFieldToStringConverter::ToString(&scale_x);
			if (wcscmp(fieldName, L"scale_y") == 0) return Data::AnyFieldToStringConverter::ToString(&scale_y);
			if (wcscmp(fieldName, L"scale_z") == 0) return Data::AnyFieldToStringConverter::ToString(&scale_z);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(description) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description));
		}
		union Key
		{
            struct {
                __int32 zone;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::ExplicitTableRef box;
wchar_t* description;
Data::RGB areacolor;
char Pad0[1];
Data::XYZ pos;
float scale_x;
float scale_y;
float scale_z;

		static TableVersion Version() { return TableVersion(0, 55); }
		static __int16 TableId() { return 438; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonearea_RecordPtr // : DrRecordPtr
	{
		zonearea_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonearea_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}