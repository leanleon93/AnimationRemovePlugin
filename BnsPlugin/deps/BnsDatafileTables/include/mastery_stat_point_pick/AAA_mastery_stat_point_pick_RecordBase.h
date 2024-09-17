/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct mastery_stat_point_pick_Record : DrEl
	{
	private:
		static std::wstring Get_stat_point_pick_attribute_EnumValue(__int8 value);
		static std::wstring Get_stat_point_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"required_stat_point") == 0) return required_stat_point;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"required_stat_point") == 0) return Data::AnyFieldToStringConverter::ToString(&required_stat_point);
			if (wcscmp(fieldName, L"effect") == 0) return Data::AnyFieldToStringConverter::ToString(&effect);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 stat_point_pick_attribute;
__int8 stat_point_tier;
__int8 stat_point_job;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 required_stat_point;
char Pad0[2];
Data::TableRef effect;
int effect_tableId(){return 111;};
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 248; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) mastery_stat_point_pick_RecordPtr // : DrRecordPtr
	{
		mastery_stat_point_pick_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::mastery_stat_point_pick_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}