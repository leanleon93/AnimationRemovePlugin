/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct indicator_idle_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"master_idle") == 0) return master_idle;
			if (wcscmp(fieldName, L"npc") == 0) return npc;
			if (wcscmp(fieldName, L"npc_1") == 0) return npc[0];
			if (wcscmp(fieldName, L"npc_2") == 0) return npc[1];
			if (wcscmp(fieldName, L"npc_3") == 0) return npc[2];
			if (wcscmp(fieldName, L"npc_4") == 0) return npc[3];
			if (wcscmp(fieldName, L"npc_5") == 0) return npc[4];
			if (wcscmp(fieldName, L"idle") == 0) return idle;
			if (wcscmp(fieldName, L"idle_1") == 0) return idle[0];
			if (wcscmp(fieldName, L"idle_2") == 0) return idle[1];
			if (wcscmp(fieldName, L"idle_3") == 0) return idle[2];
			if (wcscmp(fieldName, L"idle_4") == 0) return idle[3];
			if (wcscmp(fieldName, L"idle_5") == 0) return idle[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"master_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&master_idle);
			if (wcscmp(fieldName, L"npc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[0]));
			if (wcscmp(fieldName, L"npc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[1]));
			if (wcscmp(fieldName, L"npc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[2]));
			if (wcscmp(fieldName, L"npc_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[3]));
			if (wcscmp(fieldName, L"npc_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(npc[4]));
			if (wcscmp(fieldName, L"idle_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle[0]));
			if (wcscmp(fieldName, L"idle_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle[1]));
			if (wcscmp(fieldName, L"idle_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle[2]));
			if (wcscmp(fieldName, L"idle_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle[3]));
			if (wcscmp(fieldName, L"idle_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(idle[4]));

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
Data::TableRef master_idle;
int master_idle_tableId(){return 256;};
Data::TableRef npc[5];
int npc_tableId(){return 255;};
Data::TableRef idle[5];
int idle_tableId(){return 256;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 179; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_idle_RecordPtr // : DrRecordPtr
	{
		indicator_idle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::indicator_idle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}