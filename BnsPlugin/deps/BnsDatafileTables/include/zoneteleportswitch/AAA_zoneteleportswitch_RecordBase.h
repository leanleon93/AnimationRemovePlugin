/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zoneteleportswitch_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"position") == 0) return position;
			if (wcscmp(fieldName, L"activate_radius") == 0) return activate_radius;
			if (wcscmp(fieldName, L"activate_teleport") == 0) return activate_teleport;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"position") == 0) return Data::AnyFieldToStringConverter::ToString(&position);
			if (wcscmp(fieldName, L"activate_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_radius);
			if (wcscmp(fieldName, L"activate_teleport") == 0) return Data::AnyFieldToStringConverter::ToString(&activate_teleport);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::XYZ position;
__int16 activate_radius;
char Pad0[2];
Data::TableRef activate_teleport;
int activate_teleport_tableId(){return 401;};

		static TableVersion Version() { return TableVersion(0, 6); }
		static __int16 TableId() { return 456; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zoneteleportswitch_RecordPtr // : DrRecordPtr
	{
		zoneteleportswitch_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zoneteleportswitch_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}