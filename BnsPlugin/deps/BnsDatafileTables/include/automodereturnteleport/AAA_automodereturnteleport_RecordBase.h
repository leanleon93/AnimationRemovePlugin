/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct automodereturnteleport_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"teleport") == 0) return teleport;
			if (wcscmp(fieldName, L"npc") == 0) return npc;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"teleport") == 0) return Data::AnyFieldToStringConverter::ToString(&teleport);
			if (wcscmp(fieldName, L"npc") == 0) return Data::AnyFieldToStringConverter::ToString(&npc);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
		}
		union Key
		{
            struct {
                __int16 index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* name;
Data::TableRef teleport;
int teleport_tableId(){return 401;};
Data::TableRef npc;
int npc_tableId(){return 255;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 24; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) automodereturnteleport_RecordPtr // : DrRecordPtr
	{
		automodereturnteleport_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::automodereturnteleport_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}