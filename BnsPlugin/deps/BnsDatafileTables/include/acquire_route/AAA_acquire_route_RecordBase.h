/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct acquire_route_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"category") == 0) return category;
			if (wcscmp(fieldName, L"route_text") == 0) return route_text;
			if (wcscmp(fieldName, L"route_text_1") == 0) return route_text[0];
			if (wcscmp(fieldName, L"route_text_2") == 0) return route_text[1];
			if (wcscmp(fieldName, L"route_text_3") == 0) return route_text[2];
			if (wcscmp(fieldName, L"route_text_4") == 0) return route_text[3];
			if (wcscmp(fieldName, L"route_text_5") == 0) return route_text[4];
			if (wcscmp(fieldName, L"route_ref") == 0) return route_ref;
			if (wcscmp(fieldName, L"route_ref_1") == 0) return route_ref[0];
			if (wcscmp(fieldName, L"route_ref_2") == 0) return route_ref[1];
			if (wcscmp(fieldName, L"route_ref_3") == 0) return route_ref[2];
			if (wcscmp(fieldName, L"route_ref_4") == 0) return route_ref[3];
			if (wcscmp(fieldName, L"route_ref_5") == 0) return route_ref[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"category") == 0) return Data::AnyFieldToStringConverter::ToString(&category);
			if (wcscmp(fieldName, L"route_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_text[0]));
			if (wcscmp(fieldName, L"route_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_text[1]));
			if (wcscmp(fieldName, L"route_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_text[2]));
			if (wcscmp(fieldName, L"route_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_text[3]));
			if (wcscmp(fieldName, L"route_text_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_text[4]));
			if (wcscmp(fieldName, L"route_ref_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_ref[0]));
			if (wcscmp(fieldName, L"route_ref_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_ref[1]));
			if (wcscmp(fieldName, L"route_ref_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_ref[2]));
			if (wcscmp(fieldName, L"route_ref_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_ref[3]));
			if (wcscmp(fieldName, L"route_ref_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(route_ref[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 category;
std::wstring category_EnumValue() const {return Get_category_EnumValue(category);};
char Pad0[3];
Data::TableRef route_text[5];
int route_text_tableId(){return 405;};
Data::ExplicitTableRef route_ref[5];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 8; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) acquire_route_RecordPtr // : DrRecordPtr
	{
		acquire_route_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::acquire_route_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}