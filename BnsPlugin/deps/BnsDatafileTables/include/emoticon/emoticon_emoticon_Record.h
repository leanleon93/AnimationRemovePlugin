/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_emoticon_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct emoticon_emoticon_Record : emoticon_Record
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = emoticon_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"tip") == 0) return tip;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"candidate_name") == 0) return candidate_name;
			if (wcscmp(fieldName, L"single_name") == 0) return single_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = emoticon_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"tip") == 0) return Data::AnyFieldToStringConverter::ToString(&tip);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"candidate_name") == 0) return Data::AnyFieldToStringConverter::ToString(&candidate_name);
			if (wcscmp(fieldName, L"single_name") == 0) return Data::AnyFieldToStringConverter::ToString(&single_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			emoticon_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef tip;
int tip_tableId(){return 405;};
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef candidate_name;
int candidate_name_tableId(){return 405;};
Data::TableRef single_name;
int single_name_tableId(){return 405;};

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}