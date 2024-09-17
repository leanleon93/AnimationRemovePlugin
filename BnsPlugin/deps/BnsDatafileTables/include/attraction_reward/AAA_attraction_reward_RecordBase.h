/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct attraction_reward_Record : DrEl
	{
	private:
		static std::wstring Get_reward_contents_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_exp") == 0) return reward_exp;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_exp);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 reward_contents_type;
__int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef reward_item[3];
int reward_item_tableId(){return 189;};
__int8 reward_item_count[3];
char Pad0[1];
__int32 reward_exp;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 17; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) attraction_reward_RecordPtr // : DrRecordPtr
	{
		attraction_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::attraction_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}