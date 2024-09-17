/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct customizingpreview_silhouette_Record : customizingpreview_Record
	{
	private:
		static std::wstring Get_silhouette_race_EnumValue(__int8 value);
		static std::wstring Get_silhouette_sex_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = customizingpreview_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"silhouette_designer_preset_index") == 0) return silhouette_designer_preset_index;
			if (wcscmp(fieldName, L"silhouette_race") == 0) return silhouette_race;
			if (wcscmp(fieldName, L"silhouette_sex") == 0) return silhouette_sex;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"desc") == 0) return desc;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = customizingpreview_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"silhouette_designer_preset_index") == 0) return Data::AnyFieldToStringConverter::ToString(&silhouette_designer_preset_index);
			if (wcscmp(fieldName, L"silhouette_race") == 0) return Data::AnyFieldToStringConverter::ToString(&silhouette_race);
			if (wcscmp(fieldName, L"silhouette_sex") == 0) return Data::AnyFieldToStringConverter::ToString(&silhouette_sex);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			customizingpreview_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int32 silhouette_designer_preset_index;
__int8 silhouette_race;
std::wstring silhouette_race_EnumValue() const {return Get_silhouette_race_EnumValue(silhouette_race);};
__int8 silhouette_sex;
std::wstring silhouette_sex_EnumValue() const {return Get_silhouette_sex_EnumValue(silhouette_sex);};
char Pad_sub_0[2];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad_sub_1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};

		static __int32 SubType() { return 4; }
	};
#pragma pack(pop)
}