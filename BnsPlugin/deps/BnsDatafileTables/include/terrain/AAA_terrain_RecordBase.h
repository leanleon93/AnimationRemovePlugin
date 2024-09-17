/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct terrain_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"umap_name") == 0) return umap_name;
			if (wcscmp(fieldName, L"terrain_start_x") == 0) return terrain_start_x;
			if (wcscmp(fieldName, L"terrain_start_y") == 0) return terrain_start_y;
			if (wcscmp(fieldName, L"count_x") == 0) return count_x;
			if (wcscmp(fieldName, L"count_y") == 0) return count_y;
			if (wcscmp(fieldName, L"terrain_origin_x") == 0) return terrain_origin_x;
			if (wcscmp(fieldName, L"terrain_origin_y") == 0) return terrain_origin_y;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"umap_name") == 0) return Data::AnyFieldToStringConverter::ToString(&umap_name);
			if (wcscmp(fieldName, L"terrain_start_x") == 0) return Data::AnyFieldToStringConverter::ToString(&terrain_start_x);
			if (wcscmp(fieldName, L"terrain_start_y") == 0) return Data::AnyFieldToStringConverter::ToString(&terrain_start_y);
			if (wcscmp(fieldName, L"count_x") == 0) return Data::AnyFieldToStringConverter::ToString(&count_x);
			if (wcscmp(fieldName, L"count_y") == 0) return Data::AnyFieldToStringConverter::ToString(&count_y);
			if (wcscmp(fieldName, L"terrain_origin_x") == 0) return Data::AnyFieldToStringConverter::ToString(&terrain_origin_x);
			if (wcscmp(fieldName, L"terrain_origin_y") == 0) return Data::AnyFieldToStringConverter::ToString(&terrain_origin_y);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(umap_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) umap_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(umap_name));
			if (reinterpret_cast<std::uintptr_t>(description) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* umap_name;
__int16 terrain_start_x;
__int16 terrain_start_y;
__int16 count_x;
__int16 count_y;
__int32 terrain_origin_x;
__int32 terrain_origin_y;
wchar_t* description;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 404; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) terrain_RecordPtr // : DrRecordPtr
	{
		terrain_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::terrain_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}