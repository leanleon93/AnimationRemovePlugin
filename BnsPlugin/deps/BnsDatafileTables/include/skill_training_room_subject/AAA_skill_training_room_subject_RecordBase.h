/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class skill_training_room_subject_RecordSubType : __int32
    {
		skill_training_room_subject_record_sub_class_training = 0,
		skill_training_room_subject_record_sub_boss_training = 1,
		skill_training_room_subject_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct skill_training_room_subject_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"subject_name") == 0) return subject_name;
			if (wcscmp(fieldName, L"group_data_id") == 0) return group_data_id;
			if (wcscmp(fieldName, L"system_msg") == 0) return system_msg;
			if (wcscmp(fieldName, L"start_kismet_name") == 0) return start_kismet_name;
			if (wcscmp(fieldName, L"start_kismet_name_1") == 0) return start_kismet_name[0];
			if (wcscmp(fieldName, L"start_kismet_name_2") == 0) return start_kismet_name[1];
			if (wcscmp(fieldName, L"end_kismet_name") == 0) return end_kismet_name;
			if (wcscmp(fieldName, L"end_kismet_name_1") == 0) return end_kismet_name[0];
			if (wcscmp(fieldName, L"end_kismet_name_2") == 0) return end_kismet_name[1];
			if (wcscmp(fieldName, L"sort_number") == 0) return sort_number;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"subject_name") == 0) return Data::AnyFieldToStringConverter::ToString(&subject_name);
			if (wcscmp(fieldName, L"group_data_id") == 0) return Data::AnyFieldToStringConverter::ToString(&group_data_id);
			if (wcscmp(fieldName, L"system_msg") == 0) return Data::AnyFieldToStringConverter::ToString(&system_msg);
			if (wcscmp(fieldName, L"start_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_kismet_name[0]));
			if (wcscmp(fieldName, L"start_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(start_kismet_name[1]));
			if (wcscmp(fieldName, L"end_kismet_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(end_kismet_name[0]));
			if (wcscmp(fieldName, L"end_kismet_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(end_kismet_name[1]));
			if (wcscmp(fieldName, L"sort_number") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_number);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(start_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) start_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(start_kismet_name[i]));
			}
			for (int i = 0; i < 2; i++) {
				if (reinterpret_cast<std::uintptr_t>(end_kismet_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) end_kismet_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(end_kismet_name[i]));
			}
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef subject_name;
int subject_name_tableId(){return 405;};
Data::TableRef group_data_id;
int group_data_id_tableId(){return 357;};
Data::TableRef system_msg;
int system_msg_tableId(){return 151;};
wchar_t* start_kismet_name[2];
wchar_t* end_kismet_name[2];
__int16 sort_number;

		static TableVersion Version() { return TableVersion(0, 11); }
		static __int16 TableId() { return 358; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_training_room_subject_RecordPtr // : DrRecordPtr
	{
		skill_training_room_subject_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_training_room_subject_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}