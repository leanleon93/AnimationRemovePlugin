/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct sealed_dungeon_reward_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"sealed_level") == 0) return sealed_level;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_4") == 0) return reward_item[3];
			if (wcscmp(fieldName, L"reward_item_5") == 0) return reward_item[4];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return reward_item_count[3];
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return reward_item_count[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"sealed_level") == 0) return Data::AnyFieldToStringConverter::ToString(&sealed_level);
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[3]));
			if (wcscmp(fieldName, L"reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[4]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[3]));
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[4]));

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
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
__int8 sealed_level;
char Pad0[3];
Data::TableRef reward_item[5];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[5];

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 317; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) sealed_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		sealed_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::sealed_dungeon_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}