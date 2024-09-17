/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_chest_Record : zoneenv2_Record
	{
	private:
		static std::wstring Get_expedition_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"expedition_type") == 0) return expedition_type;
			if (wcscmp(fieldName, L"expedition") == 0) return expedition;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"expedition_type") == 0) return Data::AnyFieldToStringConverter::ToString(&expedition_type);
			if (wcscmp(fieldName, L"expedition") == 0) return Data::AnyFieldToStringConverter::ToString(&expedition);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 expedition_type;
std::wstring expedition_type_EnumValue() const {return Get_expedition_type_EnumValue(expedition_type);};
char Pad_sub_0[3];
Data::TableRef expedition;
int expedition_tableId(){return 435;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}