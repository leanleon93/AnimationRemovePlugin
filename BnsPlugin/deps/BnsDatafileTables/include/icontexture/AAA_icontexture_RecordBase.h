/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct icontexture_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_width") == 0) return icon_width;
			if (wcscmp(fieldName, L"icon_height") == 0) return icon_height;
			if (wcscmp(fieldName, L"texture_width") == 0) return texture_width;
			if (wcscmp(fieldName, L"texture_height") == 0) return texture_height;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_width") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_width);
			if (wcscmp(fieldName, L"icon_height") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_height);
			if (wcscmp(fieldName, L"texture_width") == 0) return Data::AnyFieldToStringConverter::ToString(&texture_width);
			if (wcscmp(fieldName, L"texture_height") == 0) return Data::AnyFieldToStringConverter::ToString(&texture_height);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(icon_texture) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon_texture = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon_texture));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* icon_texture;
__int16 icon_width;
__int16 icon_height;
__int16 texture_width;
__int16 texture_height;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 178; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) icontexture_RecordPtr // : DrRecordPtr
	{
		icontexture_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::icontexture_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}