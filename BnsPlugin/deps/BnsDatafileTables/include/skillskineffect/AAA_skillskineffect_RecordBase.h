/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillskineffect_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"normal_component") == 0) return normal_component;
			if (wcscmp(fieldName, L"critical_component") == 0) return critical_component;
			if (wcscmp(fieldName, L"back_normal_component") == 0) return back_normal_component;
			if (wcscmp(fieldName, L"back_critical_component") == 0) return back_critical_component;
			if (wcscmp(fieldName, L"buff_continuance_component") == 0) return buff_continuance_component;
			if (wcscmp(fieldName, L"immune_buff_component") == 0) return immune_buff_component;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"normal_component") == 0) return Data::AnyFieldToStringConverter::ToString(&normal_component);
			if (wcscmp(fieldName, L"critical_component") == 0) return Data::AnyFieldToStringConverter::ToString(&critical_component);
			if (wcscmp(fieldName, L"back_normal_component") == 0) return Data::AnyFieldToStringConverter::ToString(&back_normal_component);
			if (wcscmp(fieldName, L"back_critical_component") == 0) return Data::AnyFieldToStringConverter::ToString(&back_critical_component);
			if (wcscmp(fieldName, L"buff_continuance_component") == 0) return Data::AnyFieldToStringConverter::ToString(&buff_continuance_component);
			if (wcscmp(fieldName, L"immune_buff_component") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_buff_component);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(normal_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) normal_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(normal_component));
			else return;
			if (reinterpret_cast<std::uintptr_t>(critical_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) critical_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(critical_component));
			if (reinterpret_cast<std::uintptr_t>(back_normal_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) back_normal_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(back_normal_component));
			if (reinterpret_cast<std::uintptr_t>(back_critical_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) back_critical_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(back_critical_component));
			if (reinterpret_cast<std::uintptr_t>(buff_continuance_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) buff_continuance_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(buff_continuance_component));
			if (reinterpret_cast<std::uintptr_t>(immune_buff_component) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) immune_buff_component = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(immune_buff_component));
		}
		union Key
		{
            struct {
                __int32 id;
__int16 skillskin_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* normal_component;
wchar_t* critical_component;
wchar_t* back_normal_component;
wchar_t* back_critical_component;
wchar_t* buff_continuance_component;
wchar_t* immune_buff_component;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 345; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillskineffect_RecordPtr // : DrRecordPtr
	{
		skillskineffect_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillskineffect_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}