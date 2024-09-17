/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct env_entrance_Record : DrEl
	{
	private:
		static std::wstring Get_season_contents_type_EnumValue(__int8 value);
		static std::wstring Get_ranking_contents_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"title") == 0) return title;
			if (wcscmp(fieldName, L"title_icon") == 0) return title_icon;
			if (wcscmp(fieldName, L"background_image") == 0) return background_image;
			if (wcscmp(fieldName, L"attraction_btn_name") == 0) return attraction_btn_name;
			if (wcscmp(fieldName, L"attraction_btn_name_1") == 0) return attraction_btn_name[0];
			if (wcscmp(fieldName, L"attraction_btn_name_2") == 0) return attraction_btn_name[1];
			if (wcscmp(fieldName, L"attraction_btn_name_3") == 0) return attraction_btn_name[2];
			if (wcscmp(fieldName, L"attraction_btn_desc") == 0) return attraction_btn_desc;
			if (wcscmp(fieldName, L"attraction_btn_desc_1") == 0) return attraction_btn_desc[0];
			if (wcscmp(fieldName, L"attraction_btn_desc_2") == 0) return attraction_btn_desc[1];
			if (wcscmp(fieldName, L"attraction_btn_desc_3") == 0) return attraction_btn_desc[2];
			if (wcscmp(fieldName, L"attraction_btn_image") == 0) return attraction_btn_image;
			if (wcscmp(fieldName, L"attraction_btn_image_1") == 0) return attraction_btn_image[0];
			if (wcscmp(fieldName, L"attraction_btn_image_2") == 0) return attraction_btn_image[1];
			if (wcscmp(fieldName, L"attraction_btn_image_3") == 0) return attraction_btn_image[2];
			if (wcscmp(fieldName, L"attraction_name_desc") == 0) return attraction_name_desc;
			if (wcscmp(fieldName, L"attraction_name_desc_1") == 0) return attraction_name_desc[0];
			if (wcscmp(fieldName, L"attraction_name_desc_2") == 0) return attraction_name_desc[1];
			if (wcscmp(fieldName, L"attraction_name_desc_3") == 0) return attraction_name_desc[2];
			if (wcscmp(fieldName, L"season_contents_type") == 0) return season_contents_type;
			if (wcscmp(fieldName, L"attraction_shortcut") == 0) return attraction_shortcut;
			if (wcscmp(fieldName, L"attraction_shortcut_1") == 0) return attraction_shortcut[0];
			if (wcscmp(fieldName, L"attraction_shortcut_2") == 0) return attraction_shortcut[1];
			if (wcscmp(fieldName, L"attraction_shortcut_3") == 0) return attraction_shortcut[2];
			if (wcscmp(fieldName, L"ranking_contents_type") == 0) return ranking_contents_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"title") == 0) return Data::AnyFieldToStringConverter::ToString(&title);
			if (wcscmp(fieldName, L"title_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&title_icon);
			if (wcscmp(fieldName, L"background_image") == 0) return Data::AnyFieldToStringConverter::ToString(&background_image);
			if (wcscmp(fieldName, L"attraction_btn_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_name[0]));
			if (wcscmp(fieldName, L"attraction_btn_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_name[1]));
			if (wcscmp(fieldName, L"attraction_btn_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_name[2]));
			if (wcscmp(fieldName, L"attraction_btn_desc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_desc[0]));
			if (wcscmp(fieldName, L"attraction_btn_desc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_desc[1]));
			if (wcscmp(fieldName, L"attraction_btn_desc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_desc[2]));
			if (wcscmp(fieldName, L"attraction_btn_image_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_image[0]));
			if (wcscmp(fieldName, L"attraction_btn_image_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_image[1]));
			if (wcscmp(fieldName, L"attraction_btn_image_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_btn_image[2]));
			if (wcscmp(fieldName, L"attraction_name_desc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_name_desc[0]));
			if (wcscmp(fieldName, L"attraction_name_desc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_name_desc[1]));
			if (wcscmp(fieldName, L"attraction_name_desc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_name_desc[2]));
			if (wcscmp(fieldName, L"season_contents_type") == 0) return Data::AnyFieldToStringConverter::ToString(&season_contents_type);
			if (wcscmp(fieldName, L"attraction_shortcut_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_shortcut[0]));
			if (wcscmp(fieldName, L"attraction_shortcut_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_shortcut[1]));
			if (wcscmp(fieldName, L"attraction_shortcut_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(attraction_shortcut[2]));
			if (wcscmp(fieldName, L"ranking_contents_type") == 0) return Data::AnyFieldToStringConverter::ToString(&ranking_contents_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(title) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title));
			if (reinterpret_cast<std::uintptr_t>(title_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title_icon));
			if (reinterpret_cast<std::uintptr_t>(background_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) background_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(background_image));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(attraction_btn_image[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attraction_btn_image[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attraction_btn_image[i]));
			}
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
wchar_t* title;
wchar_t* title_icon;
wchar_t* background_image;
Data::TableRef attraction_btn_name[3];
int attraction_btn_name_tableId(){return 405;};
Data::TableRef attraction_btn_desc[3];
int attraction_btn_desc_tableId(){return 405;};
wchar_t* attraction_btn_image[3];
Data::TableRef attraction_name_desc[3];
int attraction_name_desc_tableId(){return 405;};
__int8 season_contents_type;
std::wstring season_contents_type_EnumValue() const {return Get_season_contents_type_EnumValue(season_contents_type);};
char Pad0[3];
Data::TableRef attraction_shortcut[3];
int attraction_shortcut_tableId(){return 19;};
__int8 ranking_contents_type;
std::wstring ranking_contents_type_EnumValue() const {return Get_ranking_contents_type_EnumValue(ranking_contents_type);};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 117; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) env_entrance_RecordPtr // : DrRecordPtr
	{
		env_entrance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::env_entrance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}