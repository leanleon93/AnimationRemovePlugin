/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct envresponse_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"trigger_kismet") == 0) return trigger_kismet;
			if (wcscmp(fieldName, L"trigger_bgm") == 0) return trigger_bgm;
			if (wcscmp(fieldName, L"trigger_bgm_duration") == 0) return trigger_bgm_duration;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"trigger_kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&trigger_kismet);
			if (wcscmp(fieldName, L"trigger_bgm") == 0) return Data::AnyFieldToStringConverter::ToString(&trigger_bgm);
			if (wcscmp(fieldName, L"trigger_bgm_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&trigger_bgm_duration);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(trigger_kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) trigger_kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(trigger_kismet));
			if (reinterpret_cast<std::uintptr_t>(trigger_bgm) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) trigger_bgm = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(trigger_bgm));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* trigger_kismet;
wchar_t* trigger_bgm;
__int32 trigger_bgm_duration;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 118; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) envresponse_RecordPtr // : DrRecordPtr
	{
		envresponse_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::envresponse_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}