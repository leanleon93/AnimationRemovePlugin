/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_training_room_group_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_job_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"group_name") == 0) return group_name;
			if (wcscmp(fieldName, L"group_desc") == 0) return group_desc;
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"has_reward") == 0) return has_reward;
			if (wcscmp(fieldName, L"group_required_level") == 0) return group_required_level;
			if (wcscmp(fieldName, L"group_required_mastery_level") == 0) return group_required_mastery_level;
			if (wcscmp(fieldName, L"group_level_text") == 0) return group_level_text;
			if (wcscmp(fieldName, L"subject_id") == 0) return subject_id;
			if (wcscmp(fieldName, L"subject_id_1") == 0) return subject_id[0];
			if (wcscmp(fieldName, L"subject_id_2") == 0) return subject_id[1];
			if (wcscmp(fieldName, L"subject_id_3") == 0) return subject_id[2];
			if (wcscmp(fieldName, L"subject_id_4") == 0) return subject_id[3];
			if (wcscmp(fieldName, L"subject_id_5") == 0) return subject_id[4];
			if (wcscmp(fieldName, L"subject_id_6") == 0) return subject_id[5];
			if (wcscmp(fieldName, L"subject_id_7") == 0) return subject_id[6];
			if (wcscmp(fieldName, L"subject_id_8") == 0) return subject_id[7];
			if (wcscmp(fieldName, L"job_style") == 0) return job_style;
			if (wcscmp(fieldName, L"sort_number") == 0) return sort_number;
			if (wcscmp(fieldName, L"achievement") == 0) return achievement;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"group_name") == 0) return Data::AnyFieldToStringConverter::ToString(&group_name);
			if (wcscmp(fieldName, L"group_desc") == 0) return Data::AnyFieldToStringConverter::ToString(&group_desc);
			if (wcscmp(fieldName, L"job") == 0) return Data::AnyFieldToStringConverter::ToString(&job);
			if (wcscmp(fieldName, L"has_reward") == 0) return Data::AnyFieldToStringConverter::ToString(&has_reward);
			if (wcscmp(fieldName, L"group_required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&group_required_level);
			if (wcscmp(fieldName, L"group_required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&group_required_mastery_level);
			if (wcscmp(fieldName, L"group_level_text") == 0) return Data::AnyFieldToStringConverter::ToString(&group_level_text);
			if (wcscmp(fieldName, L"subject_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[0]));
			if (wcscmp(fieldName, L"subject_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[1]));
			if (wcscmp(fieldName, L"subject_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[2]));
			if (wcscmp(fieldName, L"subject_id_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[3]));
			if (wcscmp(fieldName, L"subject_id_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[4]));
			if (wcscmp(fieldName, L"subject_id_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[5]));
			if (wcscmp(fieldName, L"subject_id_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[6]));
			if (wcscmp(fieldName, L"subject_id_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(subject_id[7]));
			if (wcscmp(fieldName, L"job_style") == 0) return Data::AnyFieldToStringConverter::ToString(&job_style);
			if (wcscmp(fieldName, L"sort_number") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_number);
			if (wcscmp(fieldName, L"achievement") == 0) return Data::AnyFieldToStringConverter::ToString(&achievement);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef group_name;
int group_name_tableId(){return 405;};
Data::TableRef group_desc;
int group_desc_tableId(){return 405;};
__int8 job;
std::wstring job_EnumValue() const {return Get_job_EnumValue(job);};
bool has_reward;
__int8 group_required_level;
__int8 group_required_mastery_level;
Data::TableRef group_level_text;
int group_level_text_tableId(){return 405;};
Data::TableRef subject_id[8];
int subject_id_tableId(){return 358;};
__int8 job_style;
std::wstring job_style_EnumValue() const {return Get_job_style_EnumValue(job_style);};
char Pad0[1];
__int16 sort_number;
Data::TableRef achievement;
int achievement_tableId(){return 6;};

		static TableVersion Version() { return TableVersion(0, 12); }
		static __int16 TableId() { return 357; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_group_RecordPtr // : DrRecordPtr
	{
		skill_training_room_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_room_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}