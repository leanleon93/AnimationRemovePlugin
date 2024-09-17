/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct teen_body_material_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"body_material_name") == 0) return body_material_name;
			if (wcscmp(fieldName, L"teen_body_material_name") == 0) return teen_body_material_name;
			if (wcscmp(fieldName, L"body_mesh_name") == 0) return body_mesh_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"body_material_name") == 0) return Data::AnyFieldToStringConverter::ToString(&body_material_name);
			if (wcscmp(fieldName, L"teen_body_material_name") == 0) return Data::AnyFieldToStringConverter::ToString(&teen_body_material_name);
			if (wcscmp(fieldName, L"body_mesh_name") == 0) return Data::AnyFieldToStringConverter::ToString(&body_mesh_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(body_material_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) body_material_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(body_material_name));
			else return;
			if (reinterpret_cast<std::uintptr_t>(teen_body_material_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) teen_body_material_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(teen_body_material_name));
			if (reinterpret_cast<std::uintptr_t>(body_mesh_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) body_mesh_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(body_mesh_name));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* body_material_name;
wchar_t* teen_body_material_name;
wchar_t* body_mesh_name;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 400; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) teen_body_material_RecordPtr // : DrRecordPtr
	{
		teen_body_material_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::teen_body_material_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}