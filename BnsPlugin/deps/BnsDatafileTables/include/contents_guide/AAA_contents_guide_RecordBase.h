/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class contents_guide_RecordSubType : __int32
    {
		contents_guide_record_sub_boss_monster = 0,
		contents_guide_record_sub_count = 1,
    };
#pragma pack(push, 1)
	struct contents_guide_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"min_level") == 0) return min_level;
			if (wcscmp(fieldName, L"max_level") == 0) return max_level;
			if (wcscmp(fieldName, L"title") == 0) return title;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"min_level") == 0) return Data::AnyFieldToStringConverter::ToString(&min_level);
			if (wcscmp(fieldName, L"max_level") == 0) return Data::AnyFieldToStringConverter::ToString(&max_level);
			if (wcscmp(fieldName, L"title") == 0) return Data::AnyFieldToStringConverter::ToString(&title);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
__int8 min_level;
__int8 max_level;
char Pad0[1];
Data::TableRef title;
int title_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 68; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contents_guide_RecordPtr // : DrRecordPtr
	{
		contents_guide_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contents_guide_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}