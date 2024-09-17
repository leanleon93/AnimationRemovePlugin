/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct quest_sealed_dungeon_reward_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"fixed_item") == 0) return fixed_item;
			if (wcscmp(fieldName, L"fixed_item_1") == 0) return fixed_item[0];
			if (wcscmp(fieldName, L"fixed_item_2") == 0) return fixed_item[1];
			if (wcscmp(fieldName, L"fixed_item_3") == 0) return fixed_item[2];
			if (wcscmp(fieldName, L"fixed_item_4") == 0) return fixed_item[3];
			if (wcscmp(fieldName, L"fixed_item_count") == 0) return fixed_item_count;
			if (wcscmp(fieldName, L"fixed_item_count_1") == 0) return fixed_item_count[0];
			if (wcscmp(fieldName, L"fixed_item_count_2") == 0) return fixed_item_count[1];
			if (wcscmp(fieldName, L"fixed_item_count_3") == 0) return fixed_item_count[2];
			if (wcscmp(fieldName, L"fixed_item_count_4") == 0) return fixed_item_count[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"fixed_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[0]));
			if (wcscmp(fieldName, L"fixed_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[1]));
			if (wcscmp(fieldName, L"fixed_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[2]));
			if (wcscmp(fieldName, L"fixed_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[3]));
			if (wcscmp(fieldName, L"fixed_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_count[0]));
			if (wcscmp(fieldName, L"fixed_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_count[1]));
			if (wcscmp(fieldName, L"fixed_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_count[2]));
			if (wcscmp(fieldName, L"fixed_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_count[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;
__int8 sealed_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef fixed_item[4];
int fixed_item_tableId(){return 189;};
__int16 fixed_item_count[4];

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 286; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) quest_sealed_dungeon_reward_RecordPtr // : DrRecordPtr
	{
		quest_sealed_dungeon_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::quest_sealed_dungeon_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}