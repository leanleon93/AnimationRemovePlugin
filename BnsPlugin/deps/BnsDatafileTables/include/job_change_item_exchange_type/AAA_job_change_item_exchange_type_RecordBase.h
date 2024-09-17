/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct job_change_item_exchange_type_Record : DrEl
	{
	private:
		static std::wstring Get_item_exchange_type_EnumValue(__int8 value);
		static std::wstring Get_condition_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"condition") == 0) return condition;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"name_text") == 0) return name_text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"condition") == 0) return Data::AnyFieldToStringConverter::ToString(&condition);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"name_text") == 0) return Data::AnyFieldToStringConverter::ToString(&name_text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(icon));
		}
		union Key
		{
            struct {
                __int8 item_exchange_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 condition;
std::wstring condition_EnumValue() const {return Get_condition_EnumValue(condition);};
char Pad0[3];
wchar_t* icon;
Data::TableRef name_text;
int name_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 220; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_item_exchange_type_RecordPtr // : DrRecordPtr
	{
		job_change_item_exchange_type_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_item_exchange_type_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}