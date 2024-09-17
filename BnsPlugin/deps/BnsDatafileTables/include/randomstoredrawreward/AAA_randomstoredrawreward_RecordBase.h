/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct randomstoredrawreward_Record : DrEl
	{
	private:
		static std::wstring Get_random_store_number_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"fixed_reward") == 0) return fixed_reward;
			if (wcscmp(fieldName, L"fixed_reward_1") == 0) return fixed_reward[0];
			if (wcscmp(fieldName, L"fixed_reward_2") == 0) return fixed_reward[1];
			if (wcscmp(fieldName, L"fixed_reward_3") == 0) return fixed_reward[2];
			if (wcscmp(fieldName, L"fixed_reward_4") == 0) return fixed_reward[3];
			if (wcscmp(fieldName, L"fixed_reward_count") == 0) return fixed_reward_count;
			if (wcscmp(fieldName, L"fixed_reward_count_1") == 0) return fixed_reward_count[0];
			if (wcscmp(fieldName, L"fixed_reward_count_2") == 0) return fixed_reward_count[1];
			if (wcscmp(fieldName, L"fixed_reward_count_3") == 0) return fixed_reward_count[2];
			if (wcscmp(fieldName, L"fixed_reward_count_4") == 0) return fixed_reward_count[3];
			if (wcscmp(fieldName, L"optional_reward") == 0) return optional_reward;
			if (wcscmp(fieldName, L"optional_reward_1") == 0) return optional_reward[0];
			if (wcscmp(fieldName, L"optional_reward_2") == 0) return optional_reward[1];
			if (wcscmp(fieldName, L"optional_reward_3") == 0) return optional_reward[2];
			if (wcscmp(fieldName, L"optional_reward_4") == 0) return optional_reward[3];
			if (wcscmp(fieldName, L"optional_reward_5") == 0) return optional_reward[4];
			if (wcscmp(fieldName, L"optional_reward_6") == 0) return optional_reward[5];
			if (wcscmp(fieldName, L"optional_reward_7") == 0) return optional_reward[6];
			if (wcscmp(fieldName, L"optional_reward_8") == 0) return optional_reward[7];
			if (wcscmp(fieldName, L"optional_reward_count") == 0) return optional_reward_count;
			if (wcscmp(fieldName, L"optional_reward_count_1") == 0) return optional_reward_count[0];
			if (wcscmp(fieldName, L"optional_reward_count_2") == 0) return optional_reward_count[1];
			if (wcscmp(fieldName, L"optional_reward_count_3") == 0) return optional_reward_count[2];
			if (wcscmp(fieldName, L"optional_reward_count_4") == 0) return optional_reward_count[3];
			if (wcscmp(fieldName, L"optional_reward_count_5") == 0) return optional_reward_count[4];
			if (wcscmp(fieldName, L"optional_reward_count_6") == 0) return optional_reward_count[5];
			if (wcscmp(fieldName, L"optional_reward_count_7") == 0) return optional_reward_count[6];
			if (wcscmp(fieldName, L"optional_reward_count_8") == 0) return optional_reward_count[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"fixed_reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward[0]));
			if (wcscmp(fieldName, L"fixed_reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward[1]));
			if (wcscmp(fieldName, L"fixed_reward_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward[2]));
			if (wcscmp(fieldName, L"fixed_reward_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward[3]));
			if (wcscmp(fieldName, L"fixed_reward_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_count[0]));
			if (wcscmp(fieldName, L"fixed_reward_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_count[1]));
			if (wcscmp(fieldName, L"fixed_reward_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_count[2]));
			if (wcscmp(fieldName, L"fixed_reward_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_reward_count[3]));
			if (wcscmp(fieldName, L"optional_reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[0]));
			if (wcscmp(fieldName, L"optional_reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[1]));
			if (wcscmp(fieldName, L"optional_reward_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[2]));
			if (wcscmp(fieldName, L"optional_reward_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[3]));
			if (wcscmp(fieldName, L"optional_reward_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[4]));
			if (wcscmp(fieldName, L"optional_reward_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[5]));
			if (wcscmp(fieldName, L"optional_reward_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[6]));
			if (wcscmp(fieldName, L"optional_reward_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward[7]));
			if (wcscmp(fieldName, L"optional_reward_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[0]));
			if (wcscmp(fieldName, L"optional_reward_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[1]));
			if (wcscmp(fieldName, L"optional_reward_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[2]));
			if (wcscmp(fieldName, L"optional_reward_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[3]));
			if (wcscmp(fieldName, L"optional_reward_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[4]));
			if (wcscmp(fieldName, L"optional_reward_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[5]));
			if (wcscmp(fieldName, L"optional_reward_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[6]));
			if (wcscmp(fieldName, L"optional_reward_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(optional_reward_count[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;
__int8 random_store_number;
__int32 required_draw_count;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef fixed_reward[4];
int fixed_reward_tableId(){return 189;};
__int8 fixed_reward_count[4];
Data::TableRef optional_reward[8];
int optional_reward_tableId(){return 189;};
__int8 optional_reward_count[8];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 293; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randomstoredrawreward_RecordPtr // : DrRecordPtr
	{
		randomstoredrawreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::randomstoredrawreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}