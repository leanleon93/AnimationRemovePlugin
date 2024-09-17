/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_train_category_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"tree_id") == 0) return tree_id;
			if (wcscmp(fieldName, L"pc_level") == 0) return pc_level;
			if (wcscmp(fieldName, L"pc_mastery_level") == 0) return pc_mastery_level;
			if (wcscmp(fieldName, L"complete_quest") == 0) return complete_quest;
			if (wcscmp(fieldName, L"jumping_pc_complete_quest") == 0) return jumping_pc_complete_quest;
			if (wcscmp(fieldName, L"consumed_tp") == 0) return consumed_tp;
			if (wcscmp(fieldName, L"sort_id") == 0) return sort_id;
			if (wcscmp(fieldName, L"ui_invisible") == 0) return ui_invisible;
			if (wcscmp(fieldName, L"context_lock_disable") == 0) return context_lock_disable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"tree_id") == 0) return Data::AnyFieldToStringConverter::ToString(&tree_id);
			if (wcscmp(fieldName, L"pc_level") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_level);
			if (wcscmp(fieldName, L"pc_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_mastery_level);
			if (wcscmp(fieldName, L"complete_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&complete_quest);
			if (wcscmp(fieldName, L"jumping_pc_complete_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&jumping_pc_complete_quest);
			if (wcscmp(fieldName, L"consumed_tp") == 0) return Data::AnyFieldToStringConverter::ToString(&consumed_tp);
			if (wcscmp(fieldName, L"sort_id") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_id);
			if (wcscmp(fieldName, L"ui_invisible") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_invisible);
			if (wcscmp(fieldName, L"context_lock_disable") == 0) return Data::AnyFieldToStringConverter::ToString(&context_lock_disable);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 job;
__int32 view_skill_id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 tree_id;
__int16 pc_level;
__int16 pc_mastery_level;
char Pad0[2];
Data::TableRef complete_quest;
int complete_quest_tableId(){return 283;};
Data::TableRef jumping_pc_complete_quest;
int jumping_pc_complete_quest_tableId(){return 283;};
__int32 consumed_tp;
__int8 sort_id;
bool ui_invisible;
bool context_lock_disable;

		static TableVersion Version() { return TableVersion(0, 37); }
		static __int16 TableId() { return 354; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_category_RecordPtr // : DrRecordPtr
	{
		skill_train_category_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_category_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}