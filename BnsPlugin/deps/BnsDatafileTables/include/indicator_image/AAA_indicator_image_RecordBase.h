/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct indicator_image_Record : DrEl
	{
	private:
		static std::wstring Get_indicator_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"mesh_iconset") == 0) return mesh_iconset;
			if (wcscmp(fieldName, L"minimap") == 0) return minimap;
			if (wcscmp(fieldName, L"minimap_over") == 0) return minimap_over;
			if (wcscmp(fieldName, L"minimap_boder") == 0) return minimap_boder;
			if (wcscmp(fieldName, L"minimap_boder_over") == 0) return minimap_boder_over;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"mesh_iconset") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_iconset);
			if (wcscmp(fieldName, L"minimap") == 0) return Data::AnyFieldToStringConverter::ToString(&minimap);
			if (wcscmp(fieldName, L"minimap_over") == 0) return Data::AnyFieldToStringConverter::ToString(&minimap_over);
			if (wcscmp(fieldName, L"minimap_boder") == 0) return Data::AnyFieldToStringConverter::ToString(&minimap_boder);
			if (wcscmp(fieldName, L"minimap_boder_over") == 0) return Data::AnyFieldToStringConverter::ToString(&minimap_boder_over);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(mesh_iconset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_iconset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_iconset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(minimap) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) minimap = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(minimap));
			if (reinterpret_cast<std::uintptr_t>(minimap_over) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) minimap_over = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(minimap_over));
			if (reinterpret_cast<std::uintptr_t>(minimap_boder) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) minimap_boder = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(minimap_boder));
			if (reinterpret_cast<std::uintptr_t>(minimap_boder_over) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) minimap_boder_over = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(minimap_boder_over));
		}
		union Key
		{
            struct {
                __int16 indicator;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* mesh_iconset;
wchar_t* minimap;
wchar_t* minimap_over;
wchar_t* minimap_boder;
wchar_t* minimap_boder_over;

		static TableVersion Version() { return TableVersion(0, 29); }
		static __int16 TableId() { return 180; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_image_RecordPtr // : DrRecordPtr
	{
		indicator_image_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::indicator_image_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}