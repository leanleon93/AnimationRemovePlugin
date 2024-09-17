/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillsystematizationgroup_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"use_bookmark") == 0) return use_bookmark;
			if (wcscmp(fieldName, L"bookmark_description") == 0) return bookmark_description;
			if (wcscmp(fieldName, L"category_icon_text") == 0) return category_icon_text;
			if (wcscmp(fieldName, L"category_icon_text_1") == 0) return category_icon_text[0];
			if (wcscmp(fieldName, L"category_icon_text_2") == 0) return category_icon_text[1];
			if (wcscmp(fieldName, L"train_icon_text") == 0) return train_icon_text;
			if (wcscmp(fieldName, L"train_icon_text_1") == 0) return train_icon_text[0];
			if (wcscmp(fieldName, L"train_icon_text_2") == 0) return train_icon_text[1];
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"tooltip_description") == 0) return tooltip_description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"use_bookmark") == 0) return Data::AnyFieldToStringConverter::ToString(&use_bookmark);
			if (wcscmp(fieldName, L"bookmark_description") == 0) return Data::AnyFieldToStringConverter::ToString(&bookmark_description);
			if (wcscmp(fieldName, L"category_icon_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(category_icon_text[0]));
			if (wcscmp(fieldName, L"category_icon_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(category_icon_text[1]));
			if (wcscmp(fieldName, L"train_icon_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(train_icon_text[0]));
			if (wcscmp(fieldName, L"train_icon_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(train_icon_text[1]));
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"tooltip_description") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip_description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(category_icon_text[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) category_icon_text[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(category_icon_text[i]));
			}
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(train_icon_text[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) train_icon_text[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(train_icon_text[i]));
			}
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef description;
int description_tableId(){return 405;};
__int8 sort_no;
bool use_bookmark;
char Pad0[2];
Data::TableRef bookmark_description;
int bookmark_description_tableId(){return 405;};
wchar_t* category_icon_text[2];
wchar_t* train_icon_text[2];
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef tooltip_description;
int tooltip_description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 348; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillsystematizationgroup_RecordPtr // : DrRecordPtr
	{
		skillsystematizationgroup_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillsystematizationgroup_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}