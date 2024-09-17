/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mapoverlay_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"mapid") == 0) return mapid;
			if (wcscmp(fieldName, L"position_x") == 0) return position_x;
			if (wcscmp(fieldName, L"position_y") == 0) return position_y;
			if (wcscmp(fieldName, L"size_x") == 0) return size_x;
			if (wcscmp(fieldName, L"size_y") == 0) return size_y;
			if (wcscmp(fieldName, L"opacity") == 0) return opacity;
			if (wcscmp(fieldName, L"imageset") == 0) return imageset;
			if (wcscmp(fieldName, L"mask_imageset") == 0) return mask_imageset;
			if (wcscmp(fieldName, L"area") == 0) return area;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"mapid") == 0) return Data::AnyFieldToStringConverter::ToString(&mapid);
			if (wcscmp(fieldName, L"position_x") == 0) return Data::AnyFieldToStringConverter::ToString(&position_x);
			if (wcscmp(fieldName, L"position_y") == 0) return Data::AnyFieldToStringConverter::ToString(&position_y);
			if (wcscmp(fieldName, L"size_x") == 0) return Data::AnyFieldToStringConverter::ToString(&size_x);
			if (wcscmp(fieldName, L"size_y") == 0) return Data::AnyFieldToStringConverter::ToString(&size_y);
			if (wcscmp(fieldName, L"opacity") == 0) return Data::AnyFieldToStringConverter::ToString(&opacity);
			if (wcscmp(fieldName, L"imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&imageset);
			if (wcscmp(fieldName, L"mask_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&mask_imageset);
			if (wcscmp(fieldName, L"area") == 0) return Data::AnyFieldToStringConverter::ToString(&area);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(imageset));
			if (reinterpret_cast<std::uintptr_t>(mask_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mask_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mask_imageset));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 mapid;
__int16 position_x;
__int16 position_y;
__int16 size_x;
__int16 size_y;
__int16 opacity;
char Pad0[2];
wchar_t* imageset;
wchar_t* mask_imageset;
Data::TableRef area;
int area_tableId(){return 99;};

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 241; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mapoverlay_RecordPtr // : DrRecordPtr
	{
		mapoverlay_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mapoverlay_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}