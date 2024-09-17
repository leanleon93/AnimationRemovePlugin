/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct duel_grade_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"score") == 0) return score;
			if (wcscmp(fieldName, L"duel_point_bonus_percent") == 0) return duel_point_bonus_percent;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"medium_icon") == 0) return medium_icon;
			if (wcscmp(fieldName, L"small_icon") == 0) return small_icon;
			if (wcscmp(fieldName, L"extrasmall_icon") == 0) return extrasmall_icon;
			if (wcscmp(fieldName, L"grade_level_up_message") == 0) return grade_level_up_message;
			if (wcscmp(fieldName, L"grade_level_down_message") == 0) return grade_level_down_message;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"score") == 0) return Data::AnyFieldToStringConverter::ToString(&score);
			if (wcscmp(fieldName, L"duel_point_bonus_percent") == 0) return Data::AnyFieldToStringConverter::ToString(&duel_point_bonus_percent);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"medium_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&medium_icon);
			if (wcscmp(fieldName, L"small_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&small_icon);
			if (wcscmp(fieldName, L"extrasmall_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&extrasmall_icon);
			if (wcscmp(fieldName, L"grade_level_up_message") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_level_up_message);
			if (wcscmp(fieldName, L"grade_level_down_message") == 0) return Data::AnyFieldToStringConverter::ToString(&grade_level_down_message);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 grade;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 score;
__int16 duel_point_bonus_percent;
char Pad0[2];
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::IconRef icon;
Data::IconRef medium_icon;
Data::IconRef small_icon;
Data::IconRef extrasmall_icon;
Data::TableRef grade_level_up_message;
int grade_level_up_message_tableId(){return 151;};
Data::TableRef grade_level_down_message;
int grade_level_down_message_tableId(){return 151;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 108; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) duel_grade_RecordPtr // : DrRecordPtr
	{
		duel_grade_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::duel_grade_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}