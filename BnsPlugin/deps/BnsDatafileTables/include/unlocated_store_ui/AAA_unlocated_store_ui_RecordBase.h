/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct unlocated_store_ui_Record : DrEl
	{
	private:
		static std::wstring Get_unlocated_store_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"title_icon") == 0) return title_icon;
			if (wcscmp(fieldName, L"title_text") == 0) return title_text;
			if (wcscmp(fieldName, L"button_icon") == 0) return button_icon;
			if (wcscmp(fieldName, L"button_text") == 0) return button_text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"title_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&title_icon);
			if (wcscmp(fieldName, L"title_text") == 0) return Data::AnyFieldToStringConverter::ToString(&title_text);
			if (wcscmp(fieldName, L"button_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&button_icon);
			if (wcscmp(fieldName, L"button_text") == 0) return Data::AnyFieldToStringConverter::ToString(&button_text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(title_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) title_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(title_icon));
			else return;
			if (reinterpret_cast<std::uintptr_t>(button_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) button_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(button_icon));
		}
		union Key
		{
            struct {
                __int8 unlocated_store_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* title_icon;
Data::TableRef title_text;
int title_text_tableId(){return 405;};
wchar_t* button_icon;
Data::TableRef button_text;
int button_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 416; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) unlocated_store_ui_RecordPtr // : DrRecordPtr
	{
		unlocated_store_ui_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::unlocated_store_ui_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}