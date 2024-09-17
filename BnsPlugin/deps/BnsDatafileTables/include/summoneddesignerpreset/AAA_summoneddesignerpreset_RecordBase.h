/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct summoneddesignerpreset_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"face") == 0) return face;
			if (wcscmp(fieldName, L"body") == 0) return body;
			if (wcscmp(fieldName, L"eye_color") == 0) return eye_color;
			if (wcscmp(fieldName, L"eye") == 0) return eye;
			if (wcscmp(fieldName, L"body_color") == 0) return body_color;
			if (wcscmp(fieldName, L"body_shape") == 0) return body_shape;
			if (wcscmp(fieldName, L"decal") == 0) return decal;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"face") == 0) return Data::AnyFieldToStringConverter::ToString(&face);
			if (wcscmp(fieldName, L"body") == 0) return Data::AnyFieldToStringConverter::ToString(&body);
			if (wcscmp(fieldName, L"eye_color") == 0) return Data::AnyFieldToStringConverter::ToString(&eye_color);
			if (wcscmp(fieldName, L"eye") == 0) return Data::AnyFieldToStringConverter::ToString(&eye);
			if (wcscmp(fieldName, L"body_color") == 0) return Data::AnyFieldToStringConverter::ToString(&body_color);
			if (wcscmp(fieldName, L"body_shape") == 0) return Data::AnyFieldToStringConverter::ToString(&body_shape);
			if (wcscmp(fieldName, L"decal") == 0) return Data::AnyFieldToStringConverter::ToString(&decal);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 index;
__int8 race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
__int8 face;
__int8 body;
__int8 eye_color;
__int8 eye;
__int8 body_color;
__int8 body_shape;
__int8 decal;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 389; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) summoneddesignerpreset_RecordPtr // : DrRecordPtr
	{
		summoneddesignerpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::summoneddesignerpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}