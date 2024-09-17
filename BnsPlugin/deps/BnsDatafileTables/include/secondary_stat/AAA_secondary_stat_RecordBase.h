/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct secondary_stat_Record : DrEl
	{
	private:
		static std::wstring Get_primary_stat_EnumValue(__int16 value);
		static std::wstring Get_secondary_stat_EnumValue(__int16 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"secondary_stat") == 0) return secondary_stat;
			if (wcscmp(fieldName, L"secondary_stat_1") == 0) return secondary_stat[0];
			if (wcscmp(fieldName, L"secondary_stat_2") == 0) return secondary_stat[1];
			if (wcscmp(fieldName, L"secondary_stat_3") == 0) return secondary_stat[2];
			if (wcscmp(fieldName, L"secondary_stat_4") == 0) return secondary_stat[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"secondary_stat_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(secondary_stat[0]));
			if (wcscmp(fieldName, L"secondary_stat_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(secondary_stat[1]));
			if (wcscmp(fieldName, L"secondary_stat_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(secondary_stat[2]));
			if (wcscmp(fieldName, L"secondary_stat_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(secondary_stat[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 primary_stat;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 secondary_stat[4];
std::wstring secondary_stat_EnumValue(int index) const {return Get_secondary_stat_EnumValue(secondary_stat[index]);};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 320; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) secondary_stat_RecordPtr // : DrRecordPtr
	{
		secondary_stat_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::secondary_stat_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}