/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct treasure_board_reward_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"reward_grade") == 0) return reward_grade;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"max_draw_count") == 0) return max_draw_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"reward_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_grade);
			if (wcscmp(fieldName, L"reward_item") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_item);
			if (wcscmp(fieldName, L"reward_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_item_count);
			if (wcscmp(fieldName, L"max_draw_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_draw_count);

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
__int16 reward_grade;
char Pad0[2];
Data::TableRef reward_item;
int reward_item_tableId(){return 189;};
__int16 reward_item_count;
__int16 max_draw_count;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 410; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_reward_RecordPtr // : DrRecordPtr
	{
		treasure_board_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::treasure_board_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}