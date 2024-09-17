/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_achievement_register_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct achievement_register_transform_item_Record : achievement_register_Record
	{
	private:
		static std::wstring Get_result_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = achievement_register_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"result") == 0) return result;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = achievement_register_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);
			if (wcscmp(fieldName, L"result") == 0) return Data::AnyFieldToStringConverter::ToString(&result);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			achievement_register_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef item;
int item_tableId(){return 189;};
__int8 result;
std::wstring result_EnumValue() const {return Get_result_EnumValue(result);};

		static __int32 SubType() { return 41; }
	};
#pragma pack(pop)
}