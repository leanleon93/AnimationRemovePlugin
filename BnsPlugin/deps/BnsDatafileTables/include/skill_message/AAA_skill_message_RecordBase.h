/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_message_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"message") == 0) return message;
			if (wcscmp(fieldName, L"message_1") == 0) return message[0];
			if (wcscmp(fieldName, L"message_2") == 0) return message[1];
			if (wcscmp(fieldName, L"message_3") == 0) return message[2];
			if (wcscmp(fieldName, L"message_4") == 0) return message[3];
			if (wcscmp(fieldName, L"probability") == 0) return probability;
			if (wcscmp(fieldName, L"probability_1") == 0) return probability[0];
			if (wcscmp(fieldName, L"probability_2") == 0) return probability[1];
			if (wcscmp(fieldName, L"probability_3") == 0) return probability[2];
			if (wcscmp(fieldName, L"probability_4") == 0) return probability[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"message_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[0]));
			if (wcscmp(fieldName, L"message_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[1]));
			if (wcscmp(fieldName, L"message_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[2]));
			if (wcscmp(fieldName, L"message_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[3]));
			if (wcscmp(fieldName, L"probability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(probability[0]));
			if (wcscmp(fieldName, L"probability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(probability[1]));
			if (wcscmp(fieldName, L"probability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(probability[2]));
			if (wcscmp(fieldName, L"probability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(probability[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 skill3_id;
__int8 variation_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef message[4];
int message_tableId(){return 151;};
__int16 probability[4];

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 338; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_message_RecordPtr // : DrRecordPtr
	{
		skill_message_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_message_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}