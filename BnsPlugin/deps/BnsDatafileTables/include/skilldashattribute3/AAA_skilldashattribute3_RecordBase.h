/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skilldashattribute3_Record : DrEl
	{
	private:
		static std::wstring Get_dash_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"dash_type") == 0) return dash_type;
			if (wcscmp(fieldName, L"dash_margin") == 0) return dash_margin;
			if (wcscmp(fieldName, L"calculate_dash_position_include_radius") == 0) return calculate_dash_position_include_radius;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"dash_type") == 0) return Data::AnyFieldToStringConverter::ToString(&dash_type);
			if (wcscmp(fieldName, L"dash_margin") == 0) return Data::AnyFieldToStringConverter::ToString(&dash_margin);
			if (wcscmp(fieldName, L"calculate_dash_position_include_radius") == 0) return Data::AnyFieldToStringConverter::ToString(&calculate_dash_position_include_radius);

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
__int8 dash_type;
std::wstring dash_type_EnumValue() const {return Get_dash_type_EnumValue(dash_type);};
char Pad0[1];
__int16 dash_margin;
bool calculate_dash_position_include_radius;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 334; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilldashattribute3_RecordPtr // : DrRecordPtr
	{
		skilldashattribute3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilldashattribute3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}