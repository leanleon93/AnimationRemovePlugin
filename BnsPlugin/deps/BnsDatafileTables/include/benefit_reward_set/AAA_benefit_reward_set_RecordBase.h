/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct benefit_reward_set_Record : DrEl
	{
	private:
		static std::wstring Get_reward_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"reward") == 0) return reward;
			if (wcscmp(fieldName, L"reward_1") == 0) return reward[0];
			if (wcscmp(fieldName, L"reward_2") == 0) return reward[1];
			if (wcscmp(fieldName, L"reward_3") == 0) return reward[2];
			if (wcscmp(fieldName, L"reward_4") == 0) return reward[3];
			if (wcscmp(fieldName, L"reward_value") == 0) return reward_value;
			if (wcscmp(fieldName, L"reward_value_1") == 0) return reward_value[0];
			if (wcscmp(fieldName, L"reward_value_2") == 0) return reward_value[1];
			if (wcscmp(fieldName, L"reward_value_3") == 0) return reward_value[2];
			if (wcscmp(fieldName, L"reward_value_4") == 0) return reward_value[3];
			if (wcscmp(fieldName, L"name2") == 0) return name2;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[0]));
			if (wcscmp(fieldName, L"reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[1]));
			if (wcscmp(fieldName, L"reward_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[2]));
			if (wcscmp(fieldName, L"reward_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward[3]));
			if (wcscmp(fieldName, L"reward_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_value[0]));
			if (wcscmp(fieldName, L"reward_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_value[1]));
			if (wcscmp(fieldName, L"reward_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_value[2]));
			if (wcscmp(fieldName, L"reward_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_value[3]));
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 reward[4];
std::wstring reward_EnumValue(int index) const {return Get_reward_EnumValue(reward[index]);};
__int32 reward_value[4];
Data::TableRef name2;
int name2_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 39; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) benefit_reward_set_RecordPtr // : DrRecordPtr
	{
		benefit_reward_set_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::benefit_reward_set_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}