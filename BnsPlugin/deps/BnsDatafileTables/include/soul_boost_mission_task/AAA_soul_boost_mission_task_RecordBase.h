/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_boost_mission_task_Record : DrEl
	{
	private:
		static std::wstring Get_proceedable_type_EnumValue(__int8 value);
		static std::wstring Get_actor_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name_en") == 0) return name_en;
			if (wcscmp(fieldName, L"name_fr") == 0) return name_fr;
			if (wcscmp(fieldName, L"name_de") == 0) return name_de;
			if (wcscmp(fieldName, L"name_pt") == 0) return name_pt;
			if (wcscmp(fieldName, L"name_th") == 0) return name_th;
			if (wcscmp(fieldName, L"name_vn") == 0) return name_vn;
			if (wcscmp(fieldName, L"name_text") == 0) return name_text;
			if (wcscmp(fieldName, L"event") == 0) return event;
			if (wcscmp(fieldName, L"mission_step") == 0) return mission_step;
			if (wcscmp(fieldName, L"task_number") == 0) return task_number;
			if (wcscmp(fieldName, L"mission") == 0) return mission;
			if (wcscmp(fieldName, L"proceedable_type") == 0) return proceedable_type;
			if (wcscmp(fieldName, L"actor_type") == 0) return actor_type;
			if (wcscmp(fieldName, L"goal_count") == 0) return goal_count;
			if (wcscmp(fieldName, L"mission_point") == 0) return mission_point;
			if (wcscmp(fieldName, L"mission_level") == 0) return mission_level;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"description_en") == 0) return description_en;
			if (wcscmp(fieldName, L"description_fr") == 0) return description_fr;
			if (wcscmp(fieldName, L"description_de") == 0) return description_de;
			if (wcscmp(fieldName, L"description_pt") == 0) return description_pt;
			if (wcscmp(fieldName, L"description_th") == 0) return description_th;
			if (wcscmp(fieldName, L"description_vn") == 0) return description_vn;
			if (wcscmp(fieldName, L"description_text") == 0) return description_text;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name_en") == 0) return Data::AnyFieldToStringConverter::ToString(&name_en);
			if (wcscmp(fieldName, L"name_fr") == 0) return Data::AnyFieldToStringConverter::ToString(&name_fr);
			if (wcscmp(fieldName, L"name_de") == 0) return Data::AnyFieldToStringConverter::ToString(&name_de);
			if (wcscmp(fieldName, L"name_pt") == 0) return Data::AnyFieldToStringConverter::ToString(&name_pt);
			if (wcscmp(fieldName, L"name_th") == 0) return Data::AnyFieldToStringConverter::ToString(&name_th);
			if (wcscmp(fieldName, L"name_vn") == 0) return Data::AnyFieldToStringConverter::ToString(&name_vn);
			if (wcscmp(fieldName, L"name_text") == 0) return Data::AnyFieldToStringConverter::ToString(&name_text);
			if (wcscmp(fieldName, L"event") == 0) return Data::AnyFieldToStringConverter::ToString(&event);
			if (wcscmp(fieldName, L"mission_step") == 0) return Data::AnyFieldToStringConverter::ToString(&mission_step);
			if (wcscmp(fieldName, L"task_number") == 0) return Data::AnyFieldToStringConverter::ToString(&task_number);
			if (wcscmp(fieldName, L"mission") == 0) return Data::AnyFieldToStringConverter::ToString(&mission);
			if (wcscmp(fieldName, L"proceedable_type") == 0) return Data::AnyFieldToStringConverter::ToString(&proceedable_type);
			if (wcscmp(fieldName, L"actor_type") == 0) return Data::AnyFieldToStringConverter::ToString(&actor_type);
			if (wcscmp(fieldName, L"goal_count") == 0) return Data::AnyFieldToStringConverter::ToString(&goal_count);
			if (wcscmp(fieldName, L"mission_point") == 0) return Data::AnyFieldToStringConverter::ToString(&mission_point);
			if (wcscmp(fieldName, L"mission_level") == 0) return Data::AnyFieldToStringConverter::ToString(&mission_level);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"description_en") == 0) return Data::AnyFieldToStringConverter::ToString(&description_en);
			if (wcscmp(fieldName, L"description_fr") == 0) return Data::AnyFieldToStringConverter::ToString(&description_fr);
			if (wcscmp(fieldName, L"description_de") == 0) return Data::AnyFieldToStringConverter::ToString(&description_de);
			if (wcscmp(fieldName, L"description_pt") == 0) return Data::AnyFieldToStringConverter::ToString(&description_pt);
			if (wcscmp(fieldName, L"description_th") == 0) return Data::AnyFieldToStringConverter::ToString(&description_th);
			if (wcscmp(fieldName, L"description_vn") == 0) return Data::AnyFieldToStringConverter::ToString(&description_vn);
			if (wcscmp(fieldName, L"description_text") == 0) return Data::AnyFieldToStringConverter::ToString(&description_text);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name));
			if (reinterpret_cast<std::uintptr_t>(name_en) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_en = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_en));
			if (reinterpret_cast<std::uintptr_t>(name_fr) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_fr = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_fr));
			if (reinterpret_cast<std::uintptr_t>(name_de) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_de = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_de));
			if (reinterpret_cast<std::uintptr_t>(name_pt) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_pt = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_pt));
			if (reinterpret_cast<std::uintptr_t>(name_th) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_th = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_th));
			if (reinterpret_cast<std::uintptr_t>(name_vn) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) name_vn = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(name_vn));
			if (reinterpret_cast<std::uintptr_t>(description) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description));
			if (reinterpret_cast<std::uintptr_t>(description_en) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_en = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_en));
			if (reinterpret_cast<std::uintptr_t>(description_fr) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_fr = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_fr));
			if (reinterpret_cast<std::uintptr_t>(description_de) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_de = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_de));
			if (reinterpret_cast<std::uintptr_t>(description_pt) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_pt = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_pt));
			if (reinterpret_cast<std::uintptr_t>(description_th) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_th = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_th));
			if (reinterpret_cast<std::uintptr_t>(description_vn) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description_vn = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description_vn));
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
Data::TableRef name_text;
int name_text_tableId(){return 405;};
Data::TableRef event;
int event_tableId(){return 368;};
Data::TableRef mission_step;
int mission_step_tableId(){return 371;};
__int8 task_number;
char Pad0[3];
Data::TableRef mission;
int mission_tableId(){return 370;};
__int8 proceedable_type;
std::wstring proceedable_type_EnumValue() const {return Get_proceedable_type_EnumValue(proceedable_type);};
__int8 actor_type;
std::wstring actor_type_EnumValue() const {return Get_actor_type_EnumValue(actor_type);};
char Pad1[2];
__int64 goal_count;
__int32 mission_point;
__int8 mission_level;
char Pad2[3];
wchar_t* description;
wchar_t* description_en;
wchar_t* description_fr;
wchar_t* description_de;
wchar_t* description_pt;
wchar_t* description_th;
wchar_t* description_vn;
Data::TableRef description_text;
int description_text_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(6, 2); }
		static __int16 TableId() { return 372; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_boost_mission_task_RecordPtr // : DrRecordPtr
	{
		soul_boost_mission_task_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_boost_mission_task_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}