/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class guide_movie_RecordSubType : __int32
    {
		guide_movie_record_sub_level = 0,
		guide_movie_record_sub_quest = 1,
		guide_movie_record_sub_enter_zone = 2,
		guide_movie_record_sub_dungeon = 3,
		guide_movie_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct guide_movie_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"title") == 0) return title;
			if (wcscmp(fieldName, L"activation_level") == 0) return activation_level;
			if (wcscmp(fieldName, L"activation_mastery_level") == 0) return activation_mastery_level;
			if (wcscmp(fieldName, L"use_notice_hud") == 0) return use_notice_hud;
			if (wcscmp(fieldName, L"message") == 0) return message;
			if (wcscmp(fieldName, L"movie_url") == 0) return movie_url;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"title") == 0) return Data::AnyFieldToStringConverter::ToString(&title);
			if (wcscmp(fieldName, L"activation_level") == 0) return Data::AnyFieldToStringConverter::ToString(&activation_level);
			if (wcscmp(fieldName, L"activation_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&activation_mastery_level);
			if (wcscmp(fieldName, L"use_notice_hud") == 0) return Data::AnyFieldToStringConverter::ToString(&use_notice_hud);
			if (wcscmp(fieldName, L"message") == 0) return Data::AnyFieldToStringConverter::ToString(&message);
			if (wcscmp(fieldName, L"movie_url") == 0) return Data::AnyFieldToStringConverter::ToString(&movie_url);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(movie_url) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) movie_url = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(movie_url));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad0[3];
Data::TableRef title;
int title_tableId(){return 405;};
__int8 activation_level;
__int8 activation_mastery_level;
bool use_notice_hud;
char Pad1[1];
Data::TableRef message;
int message_tableId(){return 151;};
wchar_t* movie_url;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 159; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guide_movie_RecordPtr // : DrRecordPtr
	{
		guide_movie_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guide_movie_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}