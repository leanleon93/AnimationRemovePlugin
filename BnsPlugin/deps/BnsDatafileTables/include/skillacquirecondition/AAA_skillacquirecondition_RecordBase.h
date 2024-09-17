/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillacquirecondition_Record : DrEl
	{
	private:
		static std::wstring Get_pc_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"pc_level") == 0) return pc_level;
			if (wcscmp(fieldName, L"pc_job") == 0) return pc_job;
			if (wcscmp(fieldName, L"training_name") == 0) return training_name;
			if (wcscmp(fieldName, L"training_icon") == 0) return training_icon;
			if (wcscmp(fieldName, L"main_info") == 0) return main_info;
			if (wcscmp(fieldName, L"sub_info") == 0) return sub_info;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"pc_level") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_level);
			if (wcscmp(fieldName, L"pc_job") == 0) return Data::AnyFieldToStringConverter::ToString(&pc_job);
			if (wcscmp(fieldName, L"training_name") == 0) return Data::AnyFieldToStringConverter::ToString(&training_name);
			if (wcscmp(fieldName, L"training_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&training_icon);
			if (wcscmp(fieldName, L"main_info") == 0) return Data::AnyFieldToStringConverter::ToString(&main_info);
			if (wcscmp(fieldName, L"sub_info") == 0) return Data::AnyFieldToStringConverter::ToString(&sub_info);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;
__int8 variation_index;
__int8 variation_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 pc_level;
__int8 pc_job;
std::wstring pc_job_EnumValue() const {return Get_pc_job_EnumValue(pc_job);};
char Pad0[2];
Data::TableRef training_name;
int training_name_tableId(){return 405;};
Data::IconRef training_icon;
Data::TableRef main_info;
int main_info_tableId(){return 405;};
Data::TableRef sub_info;
int sub_info_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 13); }
		static __int16 TableId() { return 325; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillacquirecondition_RecordPtr // : DrRecordPtr
	{
		skillacquirecondition_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillacquirecondition_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}