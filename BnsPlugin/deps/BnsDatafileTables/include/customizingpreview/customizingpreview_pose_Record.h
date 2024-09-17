/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_customizingpreview_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct customizingpreview_pose_Record : customizingpreview_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = customizingpreview_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"pose_showname") == 0) return pose_showname;
			if (wcscmp(fieldName, L"pose_show_duration") == 0) return pose_show_duration;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = customizingpreview_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"pose_showname") == 0) return Data::AnyFieldToStringConverter::ToString(&pose_showname);
			if (wcscmp(fieldName, L"pose_show_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&pose_show_duration);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			customizingpreview_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(pose_showname) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pose_showname = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pose_showname));
		}
		wchar_t* pose_showname;
__int32 pose_show_duration;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}