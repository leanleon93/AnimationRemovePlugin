/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_airdash_Record : zoneenv2_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"airdash_level") == 0) return airdash_level;
			if (wcscmp(fieldName, L"kismet") == 0) return kismet;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"airdash_level") == 0) return Data::AnyFieldToStringConverter::ToString(&airdash_level);
			if (wcscmp(fieldName, L"kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&kismet);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kismet));
		}
		__int8 airdash_level;
char Pad_sub_0[3];
wchar_t* kismet;

		static __int32 SubType() { return 11; }
	};
#pragma pack(pop)
}