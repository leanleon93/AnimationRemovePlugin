/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct attachment_Record : DrEl
	{
	private:
		static std::wstring Get_skel_index_EnumValue(__int8 value);
		static std::wstring Get_bone_index_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skel_index") == 0) return skel_index;
			if (wcscmp(fieldName, L"bone_index") == 0) return bone_index;
			if (wcscmp(fieldName, L"mesh_id") == 0) return mesh_id;
			if (wcscmp(fieldName, L"mesh_col") == 0) return mesh_col;
			if (wcscmp(fieldName, L"mesh_col_1") == 0) return mesh_col[0];
			if (wcscmp(fieldName, L"mesh_col_2") == 0) return mesh_col[1];
			if (wcscmp(fieldName, L"mesh_col_3") == 0) return mesh_col[2];
			if (wcscmp(fieldName, L"mesh_animset") == 0) return mesh_animset;
			if (wcscmp(fieldName, L"attach_show") == 0) return attach_show;
			if (wcscmp(fieldName, L"detach_show") == 0) return detach_show;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skel_index") == 0) return Data::AnyFieldToStringConverter::ToString(&skel_index);
			if (wcscmp(fieldName, L"bone_index") == 0) return Data::AnyFieldToStringConverter::ToString(&bone_index);
			if (wcscmp(fieldName, L"mesh_id") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_id);
			if (wcscmp(fieldName, L"mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(mesh_col[0]));
			if (wcscmp(fieldName, L"mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(mesh_col[1]));
			if (wcscmp(fieldName, L"mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(mesh_col[2]));
			if (wcscmp(fieldName, L"mesh_animset") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_animset);
			if (wcscmp(fieldName, L"attach_show") == 0) return Data::AnyFieldToStringConverter::ToString(&attach_show);
			if (wcscmp(fieldName, L"detach_show") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_show);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(mesh_id) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_id = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_id));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_col[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(mesh_animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_animset));
			if (reinterpret_cast<std::uintptr_t>(attach_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attach_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attach_show));
			if (reinterpret_cast<std::uintptr_t>(detach_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) detach_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(detach_show));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 skel_index;
std::wstring skel_index_EnumValue() const {return Get_skel_index_EnumValue(skel_index);};
__int8 bone_index;
std::wstring bone_index_EnumValue() const {return Get_bone_index_EnumValue(bone_index);};
char Pad0[2];
wchar_t* mesh_id;
wchar_t* mesh_col[3];
wchar_t* mesh_animset;
wchar_t* attach_show;
wchar_t* detach_show;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 14; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attachment_RecordPtr // : DrRecordPtr
	{
		attachment_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::attachment_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}