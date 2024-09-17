/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct default_rating_score_group_Record : DrEl
	{
	private:
		static std::wstring Get_season_contents_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"min_rating_score") == 0) return min_rating_score;
			if (wcscmp(fieldName, L"max_rating_score") == 0) return max_rating_score;
			if (wcscmp(fieldName, L"default_rating_score") == 0) return default_rating_score;
			if (wcscmp(fieldName, L"is_placement_test") == 0) return is_placement_test;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"min_rating_score") == 0) return Data::AnyFieldToStringConverter::ToString(&min_rating_score);
			if (wcscmp(fieldName, L"max_rating_score") == 0) return Data::AnyFieldToStringConverter::ToString(&max_rating_score);
			if (wcscmp(fieldName, L"default_rating_score") == 0) return Data::AnyFieldToStringConverter::ToString(&default_rating_score);
			if (wcscmp(fieldName, L"is_placement_test") == 0) return Data::AnyFieldToStringConverter::ToString(&is_placement_test);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 season_contents_type;
__int16 group_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 min_rating_score;
__int32 max_rating_score;
__int32 default_rating_score;
bool is_placement_test;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 95; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) default_rating_score_group_RecordPtr // : DrRecordPtr
	{
		default_rating_score_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::default_rating_score_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}