/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct race_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"lobby_race_imageset") == 0) return lobby_race_imageset;
			if (wcscmp(fieldName, L"character_info_race_imageset") == 0) return character_info_race_imageset;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"male_customize_zoomcamera_add_height") == 0) return male_customize_zoomcamera_add_height;
			if (wcscmp(fieldName, L"female_customize_zoomcamera_add_height") == 0) return female_customize_zoomcamera_add_height;
			if (wcscmp(fieldName, L"lobby_race_bgm") == 0) return lobby_race_bgm;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"lobby_race_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&lobby_race_imageset);
			if (wcscmp(fieldName, L"character_info_race_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&character_info_race_imageset);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"male_customize_zoomcamera_add_height") == 0) return Data::AnyFieldToStringConverter::ToString(&male_customize_zoomcamera_add_height);
			if (wcscmp(fieldName, L"female_customize_zoomcamera_add_height") == 0) return Data::AnyFieldToStringConverter::ToString(&female_customize_zoomcamera_add_height);
			if (wcscmp(fieldName, L"lobby_race_bgm") == 0) return Data::AnyFieldToStringConverter::ToString(&lobby_race_bgm);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(lobby_race_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lobby_race_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lobby_race_imageset));
			else return;
			if (reinterpret_cast<std::uintptr_t>(character_info_race_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) character_info_race_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(character_info_race_imageset));
			if (reinterpret_cast<std::uintptr_t>(lobby_race_bgm) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lobby_race_bgm = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lobby_race_bgm));
		}
		union Key
		{
            struct {
                __int8 race;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name2;
int name2_tableId(){return 405;};
wchar_t* lobby_race_imageset;
wchar_t* character_info_race_imageset;
Data::TableRef desc;
int desc_tableId(){return 405;};
__int8 male_customize_zoomcamera_add_height;
__int8 female_customize_zoomcamera_add_height;
char Pad0[2];
wchar_t* lobby_race_bgm;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 288; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) race_RecordPtr // : DrRecordPtr
	{
		race_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::race_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}