/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct map_group_1_guide_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"map_group_1") == 0) return map_group_1;
			if (wcscmp(fieldName, L"expedition_desc") == 0) return expedition_desc;
			if (wcscmp(fieldName, L"expedition_image") == 0) return expedition_image;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"map_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&map_group_1);
			if (wcscmp(fieldName, L"expedition_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&expedition_desc);
			if (wcscmp(fieldName, L"expedition_image") == 0) return Data::AnyFieldToStringConverter::ToString(&expedition_image);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(expedition_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) expedition_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(expedition_image));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef map_group_1;
int map_group_1_tableId(){return 237;};
Data::TableRef expedition_desc;
int expedition_desc_tableId(){return 405;};
wchar_t* expedition_image;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 238; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) map_group_1_guide_RecordPtr // : DrRecordPtr
	{
		map_group_1_guide_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::map_group_1_guide_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}