/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_npctalkmessage_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct npctalkmessage_craft_Record : npctalkmessage_Record
	{
	private:
		static std::wstring Get_craft_message_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = npctalkmessage_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"craft_message_type") == 0) return craft_message_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = npctalkmessage_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"craft_message_type") == 0) return Data::AnyFieldToStringConverter::ToString(&craft_message_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			npctalkmessage_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 craft_message_type;
std::wstring craft_message_type_EnumValue() const {return Get_craft_message_type_EnumValue(craft_message_type);};

		static __int32 SubType() { return 3; }
	};
#pragma pack(pop)
}