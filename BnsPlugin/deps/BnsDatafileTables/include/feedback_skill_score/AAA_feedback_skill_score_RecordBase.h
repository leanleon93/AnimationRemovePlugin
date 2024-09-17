/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct feedback_skill_score_Record : DrEl
	{
	private:
		static std::wstring Get_skill_result_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skill") == 0) return skill;
			if (wcscmp(fieldName, L"skill_result") == 0) return skill_result;
			if (wcscmp(fieldName, L"skill_result_1") == 0) return skill_result[0];
			if (wcscmp(fieldName, L"skill_result_2") == 0) return skill_result[1];
			if (wcscmp(fieldName, L"skill_result_3") == 0) return skill_result[2];
			if (wcscmp(fieldName, L"skill_result_4") == 0) return skill_result[3];
			if (wcscmp(fieldName, L"skill_result_5") == 0) return skill_result[4];
			if (wcscmp(fieldName, L"skill_result_6") == 0) return skill_result[5];
			if (wcscmp(fieldName, L"skill_result_7") == 0) return skill_result[6];
			if (wcscmp(fieldName, L"skill_result_8") == 0) return skill_result[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skill") == 0) return Data::AnyFieldToStringConverter::ToString(&skill);
			if (wcscmp(fieldName, L"skill_result_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[0]));
			if (wcscmp(fieldName, L"skill_result_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[1]));
			if (wcscmp(fieldName, L"skill_result_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[2]));
			if (wcscmp(fieldName, L"skill_result_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[3]));
			if (wcscmp(fieldName, L"skill_result_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[4]));
			if (wcscmp(fieldName, L"skill_result_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[5]));
			if (wcscmp(fieldName, L"skill_result_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[6]));
			if (wcscmp(fieldName, L"skill_result_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_result[7]));

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
Data::TableRef skill;
int skill_tableId(){return 324;};
__int8 skill_result[8];
std::wstring skill_result_EnumValue(int index) const {return Get_skill_result_EnumValue(skill_result[index]);};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 135; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_skill_score_RecordPtr // : DrRecordPtr
	{
		feedback_skill_score_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_skill_score_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}