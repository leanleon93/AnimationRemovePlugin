/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct key_cap_Record : DrEl
	{
	private:
		static std::wstring Get_key_code_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"short_name") == 0) return short_name;
			if (wcscmp(fieldName, L"image") == 0) return image;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"scroll_imageset") == 0) return scroll_imageset;
			if (wcscmp(fieldName, L"scroll_imageset_scale") == 0) return scroll_imageset_scale;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"short_name") == 0) return Data::AnyFieldToStringConverter::ToString(&short_name);
			if (wcscmp(fieldName, L"image") == 0) return Data::AnyFieldToStringConverter::ToString(&image);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"scroll_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&scroll_imageset);
			if (wcscmp(fieldName, L"scroll_imageset_scale") == 0) return Data::AnyFieldToStringConverter::ToString(&scroll_imageset_scale);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(scroll_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) scroll_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(scroll_imageset));
		}
		union Key
		{
            struct {
                __int16 key_code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef short_name;
int short_name_tableId(){return 405;};
Data::TableRef image;
int image_tableId(){return 405;};
Data::IconRef icon;
wchar_t* scroll_imageset;
float scroll_imageset_scale;

		static TableVersion Version() { return TableVersion(0, 13); }
		static __int16 TableId() { return 230; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) key_cap_RecordPtr // : DrRecordPtr
	{
		key_cap_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::key_cap_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}