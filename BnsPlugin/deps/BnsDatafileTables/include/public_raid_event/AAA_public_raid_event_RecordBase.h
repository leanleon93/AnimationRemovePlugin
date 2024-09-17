/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class public_raid_event_RecordSubType : __int32
    {
		public_raid_event_record_sub_score_event = 0,
		public_raid_event_record_sub_count = 1,
    };
#pragma pack(push, 1)
	struct public_raid_event_Record : DrEl
	{
	private:
		static std::wstring Get_event_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"event_duration") == 0) return event_duration;
			if (wcscmp(fieldName, L"event_type") == 0) return event_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"event_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&event_duration);
			if (wcscmp(fieldName, L"event_type") == 0) return Data::AnyFieldToStringConverter::ToString(&event_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 event_duration;
__int8 event_type;
std::wstring event_type_EnumValue() const {return Get_event_type_EnumValue(event_type);};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 280; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) public_raid_event_RecordPtr // : DrRecordPtr
	{
		public_raid_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::public_raid_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}