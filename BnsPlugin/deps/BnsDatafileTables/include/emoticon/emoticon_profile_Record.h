/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_emoticon_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct emoticon_profile_Record : emoticon_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = emoticon_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"profile_image_set_path") == 0) return profile_image_set_path;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = emoticon_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"profile_image_set_path") == 0) return Data::AnyFieldToStringConverter::ToString(&profile_image_set_path);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			emoticon_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(profile_image_set_path) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) profile_image_set_path = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(profile_image_set_path));
		}
		wchar_t* profile_image_set_path;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}