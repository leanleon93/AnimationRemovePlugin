/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct wave_dungeon_reward_Record : DrEl
	{
	private:
		static std::wstring Get_difficulty_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"reward_exp") == 0) return reward_exp;
			if (wcscmp(fieldName, L"reward_money") == 0) return reward_money;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_exp);
			if (wcscmp(fieldName, L"reward_money") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_money);
			if (wcscmp(fieldName, L"reward_item") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_item);
			if (wcscmp(fieldName, L"reward_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_item_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 id;
__int8 difficulty_type;
__int8 wave;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int32 reward_exp;
__int32 reward_money;
Data::TableRef reward_item;
int reward_item_tableId(){return 189;};
__int16 reward_item_count;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 425; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) wave_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		wave_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::wave_dungeon_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}