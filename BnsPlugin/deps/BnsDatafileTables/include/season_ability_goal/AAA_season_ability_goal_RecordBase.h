/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct season_ability_goal_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"scale") == 0) return scale;
			if (wcscmp(fieldName, L"scale_1") == 0) return scale[0];
			if (wcscmp(fieldName, L"scale_2") == 0) return scale[1];
			if (wcscmp(fieldName, L"scale_3") == 0) return scale[2];
			if (wcscmp(fieldName, L"scale_4") == 0) return scale[3];
			if (wcscmp(fieldName, L"scale_5") == 0) return scale[4];
			if (wcscmp(fieldName, L"scale_6") == 0) return scale[5];
			if (wcscmp(fieldName, L"scale_7") == 0) return scale[6];
			if (wcscmp(fieldName, L"scale_8") == 0) return scale[7];
			if (wcscmp(fieldName, L"scale_9") == 0) return scale[8];
			if (wcscmp(fieldName, L"scale_10") == 0) return scale[9];
			if (wcscmp(fieldName, L"value") == 0) return value;
			if (wcscmp(fieldName, L"value_1") == 0) return value[0];
			if (wcscmp(fieldName, L"value_2") == 0) return value[1];
			if (wcscmp(fieldName, L"value_3") == 0) return value[2];
			if (wcscmp(fieldName, L"value_4") == 0) return value[3];
			if (wcscmp(fieldName, L"value_5") == 0) return value[4];
			if (wcscmp(fieldName, L"value_6") == 0) return value[5];
			if (wcscmp(fieldName, L"value_7") == 0) return value[6];
			if (wcscmp(fieldName, L"value_8") == 0) return value[7];
			if (wcscmp(fieldName, L"value_9") == 0) return value[8];
			if (wcscmp(fieldName, L"value_10") == 0) return value[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"scale_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[0]));
			if (wcscmp(fieldName, L"scale_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[1]));
			if (wcscmp(fieldName, L"scale_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[2]));
			if (wcscmp(fieldName, L"scale_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[3]));
			if (wcscmp(fieldName, L"scale_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[4]));
			if (wcscmp(fieldName, L"scale_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[5]));
			if (wcscmp(fieldName, L"scale_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[6]));
			if (wcscmp(fieldName, L"scale_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[7]));
			if (wcscmp(fieldName, L"scale_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[8]));
			if (wcscmp(fieldName, L"scale_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(scale[9]));
			if (wcscmp(fieldName, L"value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[0]));
			if (wcscmp(fieldName, L"value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[1]));
			if (wcscmp(fieldName, L"value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[2]));
			if (wcscmp(fieldName, L"value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[3]));
			if (wcscmp(fieldName, L"value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[4]));
			if (wcscmp(fieldName, L"value_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[5]));
			if (wcscmp(fieldName, L"value_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[6]));
			if (wcscmp(fieldName, L"value_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[7]));
			if (wcscmp(fieldName, L"value_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[8]));
			if (wcscmp(fieldName, L"value_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(value[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 ability;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 scale[10];
char Pad0[2];
__int32 value[10];

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 318; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) season_ability_goal_RecordPtr // : DrRecordPtr
	{
		season_ability_goal_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::season_ability_goal_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}