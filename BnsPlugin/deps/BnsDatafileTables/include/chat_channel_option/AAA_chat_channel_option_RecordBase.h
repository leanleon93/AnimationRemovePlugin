/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct chat_channel_option_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_group_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"font_color_index") == 0) return font_color_index;
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"modifiable") == 0) return modifiable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"font_color_index") == 0) return Data::AnyFieldToStringConverter::ToString(&font_color_index);
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"modifiable") == 0) return Data::AnyFieldToStringConverter::ToString(&modifiable);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int64 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
__int8 font_color_index;
__int8 group;
std::wstring group_EnumValue() const {return Get_group_EnumValue(group);};
bool modifiable;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 54; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) chat_channel_option_RecordPtr // : DrRecordPtr
	{
		chat_channel_option_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::chat_channel_option_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}