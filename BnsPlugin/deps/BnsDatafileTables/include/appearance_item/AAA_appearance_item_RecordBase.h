/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct appearance_item_Record : DrEl
	{
	private:
		static std::wstring Get_appearance_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"appearance_type") == 0) return appearance_type;
			if (wcscmp(fieldName, L"hypermove_effect") == 0) return hypermove_effect;
			if (wcscmp(fieldName, L"idle_show") == 0) return idle_show;
			if (wcscmp(fieldName, L"idle_event_time") == 0) return idle_event_time;
			if (wcscmp(fieldName, L"normal_begin_show") == 0) return normal_begin_show;
			if (wcscmp(fieldName, L"normal_end_show") == 0) return normal_end_show;
			if (wcscmp(fieldName, L"nameplate_widget") == 0) return nameplate_widget;
			if (wcscmp(fieldName, L"balloon_widget") == 0) return balloon_widget;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"appearance_type") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance_type);
			if (wcscmp(fieldName, L"hypermove_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&hypermove_effect);
			if (wcscmp(fieldName, L"idle_show") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_show);
			if (wcscmp(fieldName, L"idle_event_time") == 0) return Data::AnyFieldToStringConverter::ToString(&idle_event_time);
			if (wcscmp(fieldName, L"normal_begin_show") == 0) return Data::AnyFieldToStringConverter::ToString(&normal_begin_show);
			if (wcscmp(fieldName, L"normal_end_show") == 0) return Data::AnyFieldToStringConverter::ToString(&normal_end_show);
			if (wcscmp(fieldName, L"nameplate_widget") == 0) return Data::AnyFieldToStringConverter::ToString(&nameplate_widget);
			if (wcscmp(fieldName, L"balloon_widget") == 0) return Data::AnyFieldToStringConverter::ToString(&balloon_widget);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(hypermove_effect) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) hypermove_effect = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(hypermove_effect));
			if (reinterpret_cast<std::uintptr_t>(idle_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) idle_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(idle_show));
			if (reinterpret_cast<std::uintptr_t>(normal_begin_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) normal_begin_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(normal_begin_show));
			if (reinterpret_cast<std::uintptr_t>(normal_end_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) normal_end_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(normal_end_show));
			if (reinterpret_cast<std::uintptr_t>(nameplate_widget) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) nameplate_widget = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(nameplate_widget));
			if (reinterpret_cast<std::uintptr_t>(balloon_widget) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) balloon_widget = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(balloon_widget));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 appearance_type;
std::wstring appearance_type_EnumValue() const {return Get_appearance_type_EnumValue(appearance_type);};
char Pad0[3];
wchar_t* hypermove_effect;
wchar_t* idle_show;
__int32 idle_event_time;
wchar_t* normal_begin_show;
wchar_t* normal_end_show;
wchar_t* nameplate_widget;
wchar_t* balloon_widget;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 11; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) appearance_item_RecordPtr // : DrRecordPtr
	{
		appearance_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::appearance_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}