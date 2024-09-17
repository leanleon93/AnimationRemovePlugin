/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct job_style_specialization_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"specialization_tag_imageset") == 0) return specialization_tag_imageset;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"specialization_tag_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&specialization_tag_imageset);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(specialization_tag_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) specialization_tag_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(specialization_tag_imageset));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* specialization_tag_imageset;
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 226; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_style_specialization_RecordPtr // : DrRecordPtr
	{
		job_style_specialization_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_style_specialization_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}