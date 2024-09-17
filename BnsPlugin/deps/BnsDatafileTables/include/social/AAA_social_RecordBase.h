/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct social_Record : DrEl
	{
	private:
		static std::wstring Get_rotate_EnumValue(__int8 value);
		static std::wstring Get_message_target_type_EnumValue(__int8 value);
		static std::wstring Get_message_contents_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"duration") == 0) return duration;
			if (wcscmp(fieldName, L"balloon_text") == 0) return balloon_text;
			if (wcscmp(fieldName, L"voice_sync") == 0) return voice_sync;
			if (wcscmp(fieldName, L"show") == 0) return show;
			if (wcscmp(fieldName, L"balloon_duration") == 0) return balloon_duration;
			if (wcscmp(fieldName, L"kismet_start_time") == 0) return kismet_start_time;
			if (wcscmp(fieldName, L"kismet") == 0) return kismet;
			if (wcscmp(fieldName, L"rotate") == 0) return rotate;
			if (wcscmp(fieldName, L"spawn_cinematic") == 0) return spawn_cinematic;
			if (wcscmp(fieldName, L"message") == 0) return message;
			if (wcscmp(fieldName, L"message_target_type") == 0) return message_target_type;
			if (wcscmp(fieldName, L"message_contents_type") == 0) return message_contents_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"duration") == 0) return Data::AnyFieldToStringConverter::ToString(&duration);
			if (wcscmp(fieldName, L"balloon_text") == 0) return Data::AnyFieldToStringConverter::ToString(&balloon_text);
			if (wcscmp(fieldName, L"voice_sync") == 0) return Data::AnyFieldToStringConverter::ToString(&voice_sync);
			if (wcscmp(fieldName, L"show") == 0) return Data::AnyFieldToStringConverter::ToString(&show);
			if (wcscmp(fieldName, L"balloon_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&balloon_duration);
			if (wcscmp(fieldName, L"kismet_start_time") == 0) return Data::AnyFieldToStringConverter::ToString(&kismet_start_time);
			if (wcscmp(fieldName, L"kismet") == 0) return Data::AnyFieldToStringConverter::ToString(&kismet);
			if (wcscmp(fieldName, L"rotate") == 0) return Data::AnyFieldToStringConverter::ToString(&rotate);
			if (wcscmp(fieldName, L"spawn_cinematic") == 0) return Data::AnyFieldToStringConverter::ToString(&spawn_cinematic);
			if (wcscmp(fieldName, L"message") == 0) return Data::AnyFieldToStringConverter::ToString(&message);
			if (wcscmp(fieldName, L"message_target_type") == 0) return Data::AnyFieldToStringConverter::ToString(&message_target_type);
			if (wcscmp(fieldName, L"message_contents_type") == 0) return Data::AnyFieldToStringConverter::ToString(&message_contents_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(show));
			if (reinterpret_cast<std::uintptr_t>(kismet) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kismet = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kismet));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 duration;
Data::TableRef balloon_text;
int balloon_text_tableId(){return 405;};
bool voice_sync;
char Pad0[3];
wchar_t* show;
__int32 balloon_duration;
__int32 kismet_start_time;
wchar_t* kismet;
__int8 rotate;
std::wstring rotate_EnumValue() const {return Get_rotate_EnumValue(rotate);};
char Pad1[3];
Data::TableRef spawn_cinematic;
int spawn_cinematic_tableId(){return 56;};
Data::TableRef message;
int message_tableId(){return 151;};
__int8 message_target_type;
std::wstring message_target_type_EnumValue() const {return Get_message_target_type_EnumValue(message_target_type);};
__int8 message_contents_type;
std::wstring message_contents_type_EnumValue() const {return Get_message_contents_type_EnumValue(message_contents_type);};

		static TableVersion Version() { return TableVersion(0, 25); }
		static __int16 TableId() { return 367; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) social_RecordPtr // : DrRecordPtr
	{
		social_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::social_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}