/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guild_member_grade_authority_Record : DrEl
	{
	private:
		static std::wstring Get_authority_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"editable") == 0) return editable;
			if (wcscmp(fieldName, L"editable_1") == 0) return editable[0];
			if (wcscmp(fieldName, L"editable_2") == 0) return editable[1];
			if (wcscmp(fieldName, L"editable_3") == 0) return editable[2];
			if (wcscmp(fieldName, L"editable_4") == 0) return editable[3];
			if (wcscmp(fieldName, L"editable_5") == 0) return editable[4];
			if (wcscmp(fieldName, L"initial_value") == 0) return initial_value;
			if (wcscmp(fieldName, L"initial_value_1") == 0) return initial_value[0];
			if (wcscmp(fieldName, L"initial_value_2") == 0) return initial_value[1];
			if (wcscmp(fieldName, L"initial_value_3") == 0) return initial_value[2];
			if (wcscmp(fieldName, L"initial_value_4") == 0) return initial_value[3];
			if (wcscmp(fieldName, L"initial_value_5") == 0) return initial_value[4];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"editable_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(editable[0]));
			if (wcscmp(fieldName, L"editable_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(editable[1]));
			if (wcscmp(fieldName, L"editable_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(editable[2]));
			if (wcscmp(fieldName, L"editable_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(editable[3]));
			if (wcscmp(fieldName, L"editable_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(editable[4]));
			if (wcscmp(fieldName, L"initial_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(initial_value[0]));
			if (wcscmp(fieldName, L"initial_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(initial_value[1]));
			if (wcscmp(fieldName, L"initial_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(initial_value[2]));
			if (wcscmp(fieldName, L"initial_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(initial_value[3]));
			if (wcscmp(fieldName, L"initial_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(initial_value[4]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 authority;
__int8 guild_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool editable[5];
bool initial_value[5];

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 169; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_member_grade_authority_RecordPtr // : DrRecordPtr
	{
		guild_member_grade_authority_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_member_grade_authority_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}