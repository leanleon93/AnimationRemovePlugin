/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_filter_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct filter_weapon_type_Record : filter_Record
	{
	private:
		static std::wstring Get_weapon_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = filter_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_type") == 0) return weapon_type;
			if (wcscmp(fieldName, L"weapon_type_1") == 0) return weapon_type[0];
			if (wcscmp(fieldName, L"weapon_type_2") == 0) return weapon_type[1];
			if (wcscmp(fieldName, L"weapon_type_3") == 0) return weapon_type[2];
			if (wcscmp(fieldName, L"weapon_type_4") == 0) return weapon_type[3];
			if (wcscmp(fieldName, L"either") == 0) return either;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = filter_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"weapon_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_type[0]));
			if (wcscmp(fieldName, L"weapon_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_type[1]));
			if (wcscmp(fieldName, L"weapon_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_type[2]));
			if (wcscmp(fieldName, L"weapon_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(weapon_type[3]));
			if (wcscmp(fieldName, L"either") == 0) return Data::AnyFieldToStringConverter::ToString(&either);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			filter_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 weapon_type[4];
std::wstring weapon_type_EnumValue(int index) const {return Get_weapon_type_EnumValue(weapon_type[index]);};
bool either;

		static __int32 SubType() { return 16; }
	};
#pragma pack(pop)
}