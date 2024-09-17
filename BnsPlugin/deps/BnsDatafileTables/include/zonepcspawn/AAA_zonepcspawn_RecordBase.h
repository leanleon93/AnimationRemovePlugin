/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zonepcspawn_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"pos") == 0) return pos;
			if (wcscmp(fieldName, L"summon_pos") == 0) return summon_pos;
			if (wcscmp(fieldName, L"yaw") == 0) return yaw;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"pos") == 0) return Data::AnyFieldToStringConverter::ToString(&pos);
			if (wcscmp(fieldName, L"summon_pos") == 0) return Data::AnyFieldToStringConverter::ToString(&summon_pos);
			if (wcscmp(fieldName, L"yaw") == 0) return Data::AnyFieldToStringConverter::ToString(&yaw);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

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
Data::XYZ pos;
Data::XYZ summon_pos;
__int16 yaw;
char Pad0[2];
wchar_t* description;

		static TableVersion Version() { return TableVersion(0, 49); }
		static __int16 TableId() { return 452; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonepcspawn_RecordPtr // : DrRecordPtr
	{
		zonepcspawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonepcspawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}