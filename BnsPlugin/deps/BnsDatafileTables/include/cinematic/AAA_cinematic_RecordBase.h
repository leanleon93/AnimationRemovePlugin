/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct cinematic_Record : DrEl
	{
	private:
		static std::wstring Get_skippable_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"cinema_name") == 0) return cinema_name;
			if (wcscmp(fieldName, L"cinema_resource_name") == 0) return cinema_resource_name;
			if (wcscmp(fieldName, L"teen_cinema_name") == 0) return teen_cinema_name;
			if (wcscmp(fieldName, L"teen_cinema_resource_name") == 0) return teen_cinema_resource_name;
			if (wcscmp(fieldName, L"costume") == 0) return costume;
			if (wcscmp(fieldName, L"skippable") == 0) return skippable;
			if (wcscmp(fieldName, L"point_camera") == 0) return point_camera;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"cinema_name") == 0) return Data::AnyFieldToStringConverter::ToString(&cinema_name);
			if (wcscmp(fieldName, L"cinema_resource_name") == 0) return Data::AnyFieldToStringConverter::ToString(&cinema_resource_name);
			if (wcscmp(fieldName, L"teen_cinema_name") == 0) return Data::AnyFieldToStringConverter::ToString(&teen_cinema_name);
			if (wcscmp(fieldName, L"teen_cinema_resource_name") == 0) return Data::AnyFieldToStringConverter::ToString(&teen_cinema_resource_name);
			if (wcscmp(fieldName, L"costume") == 0) return Data::AnyFieldToStringConverter::ToString(&costume);
			if (wcscmp(fieldName, L"skippable") == 0) return Data::AnyFieldToStringConverter::ToString(&skippable);
			if (wcscmp(fieldName, L"point_camera") == 0) return Data::AnyFieldToStringConverter::ToString(&point_camera);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(cinema_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) cinema_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(cinema_name));
			if (reinterpret_cast<std::uintptr_t>(cinema_resource_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) cinema_resource_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(cinema_resource_name));
			if (reinterpret_cast<std::uintptr_t>(teen_cinema_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) teen_cinema_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(teen_cinema_name));
			if (reinterpret_cast<std::uintptr_t>(teen_cinema_resource_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) teen_cinema_resource_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(teen_cinema_resource_name));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* cinema_name;
wchar_t* cinema_resource_name;
wchar_t* teen_cinema_name;
wchar_t* teen_cinema_resource_name;
Data::TableRef costume;
int costume_tableId(){return 189;};
__int8 skippable;
std::wstring skippable_EnumValue() const {return Get_skippable_EnumValue(skippable);};
bool point_camera;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 56; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) cinematic_RecordPtr // : DrRecordPtr
	{
		cinematic_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::cinematic_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}