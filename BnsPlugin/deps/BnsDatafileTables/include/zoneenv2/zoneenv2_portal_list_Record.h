/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_zoneenv2_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct zoneenv2_portal_list_Record : zoneenv2_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = zoneenv2_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"portal_id") == 0) return portal_id;
			if (wcscmp(fieldName, L"portal_id_1") == 0) return portal_id[0];
			if (wcscmp(fieldName, L"portal_id_2") == 0) return portal_id[1];
			if (wcscmp(fieldName, L"portal_id_3") == 0) return portal_id[2];
			if (wcscmp(fieldName, L"portal_id_4") == 0) return portal_id[3];
			if (wcscmp(fieldName, L"portal_id_5") == 0) return portal_id[4];
			if (wcscmp(fieldName, L"portal_id_6") == 0) return portal_id[5];
			if (wcscmp(fieldName, L"portal_id_7") == 0) return portal_id[6];
			if (wcscmp(fieldName, L"portal_id_8") == 0) return portal_id[7];
			if (wcscmp(fieldName, L"portal_id_9") == 0) return portal_id[8];
			if (wcscmp(fieldName, L"portal_id_10") == 0) return portal_id[9];
			if (wcscmp(fieldName, L"portal_id_11") == 0) return portal_id[10];
			if (wcscmp(fieldName, L"portal_id_12") == 0) return portal_id[11];
			if (wcscmp(fieldName, L"portal_id_13") == 0) return portal_id[12];
			if (wcscmp(fieldName, L"portal_id_14") == 0) return portal_id[13];
			if (wcscmp(fieldName, L"portal_id_15") == 0) return portal_id[14];
			if (wcscmp(fieldName, L"portal_id_16") == 0) return portal_id[15];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = zoneenv2_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"portal_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[0]));
			if (wcscmp(fieldName, L"portal_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[1]));
			if (wcscmp(fieldName, L"portal_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[2]));
			if (wcscmp(fieldName, L"portal_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[3]));
			if (wcscmp(fieldName, L"portal_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[4]));
			if (wcscmp(fieldName, L"portal_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[5]));
			if (wcscmp(fieldName, L"portal_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[6]));
			if (wcscmp(fieldName, L"portal_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[7]));
			if (wcscmp(fieldName, L"portal_id_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[8]));
			if (wcscmp(fieldName, L"portal_id_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[9]));
			if (wcscmp(fieldName, L"portal_id_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[10]));
			if (wcscmp(fieldName, L"portal_id_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[11]));
			if (wcscmp(fieldName, L"portal_id_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[12]));
			if (wcscmp(fieldName, L"portal_id_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[13]));
			if (wcscmp(fieldName, L"portal_id_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[14]));
			if (wcscmp(fieldName, L"portal_id_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(portal_id[15]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			zoneenv2_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef portal_id[16];
int portal_id_tableId(){return 444;};

		static __int32 SubType() { return 8; }
	};
#pragma pack(pop)
}