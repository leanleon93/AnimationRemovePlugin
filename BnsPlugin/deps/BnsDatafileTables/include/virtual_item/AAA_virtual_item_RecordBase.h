/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct virtual_item_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"talkable") == 0) return talkable;
			if (wcscmp(fieldName, L"talk_mesh") == 0) return talk_mesh;
			if (wcscmp(fieldName, L"talk_animset") == 0) return talk_animset;
			if (wcscmp(fieldName, L"message") == 0) return message;
			if (wcscmp(fieldName, L"message_1") == 0) return message[0];
			if (wcscmp(fieldName, L"message_2") == 0) return message[1];
			if (wcscmp(fieldName, L"message_3") == 0) return message[2];
			if (wcscmp(fieldName, L"message_4") == 0) return message[3];
			if (wcscmp(fieldName, L"message_5") == 0) return message[4];
			if (wcscmp(fieldName, L"message_6") == 0) return message[5];
			if (wcscmp(fieldName, L"message_7") == 0) return message[6];
			if (wcscmp(fieldName, L"message_8") == 0) return message[7];
			if (wcscmp(fieldName, L"message_9") == 0) return message[8];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"talkable") == 0) return Data::AnyFieldToStringConverter::ToString(&talkable);
			if (wcscmp(fieldName, L"talk_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_mesh);
			if (wcscmp(fieldName, L"talk_animset") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_animset);
			if (wcscmp(fieldName, L"message_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[0]));
			if (wcscmp(fieldName, L"message_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[1]));
			if (wcscmp(fieldName, L"message_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[2]));
			if (wcscmp(fieldName, L"message_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[3]));
			if (wcscmp(fieldName, L"message_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[4]));
			if (wcscmp(fieldName, L"message_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[5]));
			if (wcscmp(fieldName, L"message_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[6]));
			if (wcscmp(fieldName, L"message_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[7]));
			if (wcscmp(fieldName, L"message_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(message[8]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(talk_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) talk_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(talk_mesh));
			if (reinterpret_cast<std::uintptr_t>(talk_animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) talk_animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(talk_animset));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::IconRef icon;
Data::TableRef name2;
int name2_tableId(){return 405;};
bool talkable;
char Pad0[3];
wchar_t* talk_mesh;
wchar_t* talk_animset;
Data::TableRef message[9];
int message_tableId(){return 260;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 421; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) virtual_item_RecordPtr // : DrRecordPtr
	{
		virtual_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::virtual_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}