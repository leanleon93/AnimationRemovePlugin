/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class boast_RecordSubType : __int32
    {
		boast_record_sub_npc_kill = 0,
		boast_record_sub_duel = 1,
		boast_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct boast_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"result_show_delay_time") == 0) return result_show_delay_time;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"result_show_delay_time") == 0) return Data::AnyFieldToStringConverter::ToString(&result_show_delay_time);

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
Data::TableRef name2;
int name2_tableId(){return 405;};
float result_show_delay_time;

		static TableVersion Version() { return TableVersion(2, 3); }
		static __int16 TableId() { return 42; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boast_RecordPtr // : DrRecordPtr
	{
		boast_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::boast_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}