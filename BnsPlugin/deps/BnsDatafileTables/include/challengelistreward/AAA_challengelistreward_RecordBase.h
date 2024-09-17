/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct challengelistreward_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"reward_item") == 0) return reward_item;
			if (wcscmp(fieldName, L"reward_item_1") == 0) return reward_item[0];
			if (wcscmp(fieldName, L"reward_item_2") == 0) return reward_item[1];
			if (wcscmp(fieldName, L"reward_item_3") == 0) return reward_item[2];
			if (wcscmp(fieldName, L"reward_item_4") == 0) return reward_item[3];
			if (wcscmp(fieldName, L"reward_item_5") == 0) return reward_item[4];
			if (wcscmp(fieldName, L"reward_item_6") == 0) return reward_item[5];
			if (wcscmp(fieldName, L"reward_item_count") == 0) return reward_item_count;
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return reward_item_count[0];
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return reward_item_count[1];
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return reward_item_count[2];
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return reward_item_count[3];
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return reward_item_count[4];
			if (wcscmp(fieldName, L"reward_item_count_6") == 0) return reward_item_count[5];
			if (wcscmp(fieldName, L"reward_money") == 0) return reward_money;
			if (wcscmp(fieldName, L"reward_account_exp") == 0) return reward_account_exp;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"reward_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[0]));
			if (wcscmp(fieldName, L"reward_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[1]));
			if (wcscmp(fieldName, L"reward_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[2]));
			if (wcscmp(fieldName, L"reward_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[3]));
			if (wcscmp(fieldName, L"reward_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[4]));
			if (wcscmp(fieldName, L"reward_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item[5]));
			if (wcscmp(fieldName, L"reward_item_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[0]));
			if (wcscmp(fieldName, L"reward_item_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[1]));
			if (wcscmp(fieldName, L"reward_item_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[2]));
			if (wcscmp(fieldName, L"reward_item_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[3]));
			if (wcscmp(fieldName, L"reward_item_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[4]));
			if (wcscmp(fieldName, L"reward_item_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_item_count[5]));
			if (wcscmp(fieldName, L"reward_money") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_money);
			if (wcscmp(fieldName, L"reward_account_exp") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_account_exp);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef reward_item[6];
int reward_item_tableId(){return 189;};
__int16 reward_item_count[6];
__int32 reward_money;
__int32 reward_account_exp;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 52; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) challengelistreward_RecordPtr // : DrRecordPtr
	{
		challengelistreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::challengelistreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}