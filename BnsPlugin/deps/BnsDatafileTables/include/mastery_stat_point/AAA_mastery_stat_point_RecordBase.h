/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mastery_stat_point_Record : DrEl
	{
	private:
		static std::wstring Get_stat_point_attribute_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"stat_effect") == 0) return stat_effect;
			if (wcscmp(fieldName, L"event_effect") == 0) return event_effect;
			if (wcscmp(fieldName, L"event_effect_1") == 0) return event_effect[0];
			if (wcscmp(fieldName, L"event_effect_2") == 0) return event_effect[1];
			if (wcscmp(fieldName, L"event_effect_3") == 0) return event_effect[2];
			if (wcscmp(fieldName, L"event_effect_4") == 0) return event_effect[3];
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"stat_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&stat_effect);
			if (wcscmp(fieldName, L"event_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[0]));
			if (wcscmp(fieldName, L"event_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[1]));
			if (wcscmp(fieldName, L"event_effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[2]));
			if (wcscmp(fieldName, L"event_effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(event_effect[3]));
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 stat_point_attribute;
__int16 stat_point;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef stat_effect;
int stat_effect_tableId(){return 111;};
Data::TableRef event_effect[4];
int event_effect_tableId(){return 111;};
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 247; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_stat_point_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}