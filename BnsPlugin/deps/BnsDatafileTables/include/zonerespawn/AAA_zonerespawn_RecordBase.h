/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zonerespawn_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"area") == 0) return area;
			if (wcscmp(fieldName, L"center") == 0) return center;
			if (wcscmp(fieldName, L"activated_faction") == 0) return activated_faction;
			if (wcscmp(fieldName, L"activated_faction_1") == 0) return activated_faction[0];
			if (wcscmp(fieldName, L"activated_faction_2") == 0) return activated_faction[1];
			if (wcscmp(fieldName, L"activated_faction_3") == 0) return activated_faction[2];
			if (wcscmp(fieldName, L"activated_faction_4") == 0) return activated_faction[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"area") == 0) return Data::AnyFieldToStringConverter::ToString(&area);
			if (wcscmp(fieldName, L"center") == 0) return Data::AnyFieldToStringConverter::ToString(&center);
			if (wcscmp(fieldName, L"activated_faction_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(activated_faction[0]));
			if (wcscmp(fieldName, L"activated_faction_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(activated_faction[1]));
			if (wcscmp(fieldName, L"activated_faction_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(activated_faction[2]));
			if (wcscmp(fieldName, L"activated_faction_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(activated_faction[3]));

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
Data::TableRef area;
int area_tableId(){return 438;};
Data::XYZ center;
Data::TableRef activated_faction[4];
int activated_faction_tableId(){return 130;};

		static TableVersion Version() { return TableVersion(0, 46); }
		static __int16 TableId() { return 453; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonerespawn_RecordPtr // : DrRecordPtr
	{
		zonerespawn_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonerespawn_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}