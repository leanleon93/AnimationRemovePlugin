/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_season_Record : DrEl
	{
	private:
		static std::wstring Get_season_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"season_group") == 0) return season_group;
			if (wcscmp(fieldName, L"season_number") == 0) return season_number;
			if (wcscmp(fieldName, L"season_type") == 0) return season_type;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"name_en") == 0) return name_en;
			if (wcscmp(fieldName, L"name_fr") == 0) return name_fr;
			if (wcscmp(fieldName, L"name_de") == 0) return name_de;
			if (wcscmp(fieldName, L"name_pt") == 0) return name_pt;
			if (wcscmp(fieldName, L"name_th") == 0) return name_th;
			if (wcscmp(fieldName, L"name_vn") == 0) return name_vn;
			if (wcscmp(fieldName, L"name_text") == 0) return name_text;
			if (wcscmp(fieldName, L"job_ranking") == 0) return job_ranking;
			if (wcscmp(fieldName, L"total_season") == 0) return total_season;
			if (wcscmp(fieldName, L"season_schedule") == 0) return season_schedule;
			if (wcscmp(fieldName, L"season_schedule_1") == 0) return season_schedule[0];
			if (wcscmp(fieldName, L"season_schedule_2") == 0) return season_schedule[1];
			if (wcscmp(fieldName, L"season_schedule_3") == 0) return season_schedule[2];
			if (wcscmp(fieldName, L"season_schedule_4") == 0) return season_schedule[3];
			if (wcscmp(fieldName, L"season_schedule_5") == 0) return season_schedule[4];
			if (wcscmp(fieldName, L"season_schedule_6") == 0) return season_schedule[5];
			if (wcscmp(fieldName, L"season_schedule_7") == 0) return season_schedule[6];
			if (wcscmp(fieldName, L"season_schedule_8") == 0) return season_schedule[7];
			if (wcscmp(fieldName, L"season_schedule_9") == 0) return season_schedule[8];
			if (wcscmp(fieldName, L"season_schedule_10") == 0) return season_schedule[9];
			if (wcscmp(fieldName, L"season_schedule_11") == 0) return season_schedule[10];
			if (wcscmp(fieldName, L"season_schedule_12") == 0) return season_schedule[11];
			if (wcscmp(fieldName, L"season_schedule_13") == 0) return season_schedule[12];
			if (wcscmp(fieldName, L"season_schedule_14") == 0) return season_schedule[13];
			if (wcscmp(fieldName, L"season_schedule_15") == 0) return season_schedule[14];
			if (wcscmp(fieldName, L"season_schedule_16") == 0) return season_schedule[15];
			if (wcscmp(fieldName, L"season_schedule_17") == 0) return season_schedule[16];
			if (wcscmp(fieldName, L"season_schedule_18") == 0) return season_schedule[17];
			if (wcscmp(fieldName, L"season_schedule_19") == 0) return season_schedule[18];
			if (wcscmp(fieldName, L"season_schedule_20") == 0) return season_schedule[19];
			if (wcscmp(fieldName, L"main_season_schedule") == 0) return main_season_schedule;
			if (wcscmp(fieldName, L"season_representative_icon") == 0) return season_representative_icon;
			if (wcscmp(fieldName, L"list_background_imageset") == 0) return list_background_imageset;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"season_group") == 0) return Data::AnyFieldToStringConverter::ToString(&season_group);
			if (wcscmp(fieldName, L"season_number") == 0) return Data::AnyFieldToStringConverter::ToString(&season_number);
			if (wcscmp(fieldName, L"season_type") == 0) return Data::AnyFieldToStringConverter::ToString(&season_type);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"name_en") == 0) return Data::AnyFieldToStringConverter::ToString(&name_en);
			if (wcscmp(fieldName, L"name_fr") == 0) return Data::AnyFieldToStringConverter::ToString(&name_fr);
			if (wcscmp(fieldName, L"name_de") == 0) return Data::AnyFieldToStringConverter::ToString(&name_de);
			if (wcscmp(fieldName, L"name_pt") == 0) return Data::AnyFieldToStringConverter::ToString(&name_pt);
			if (wcscmp(fieldName, L"name_th") == 0) return Data::AnyFieldToStringConverter::ToString(&name_th);
			if (wcscmp(fieldName, L"name_vn") == 0) return Data::AnyFieldToStringConverter::ToString(&name_vn);
			if (wcscmp(fieldName, L"name_text") == 0) return Data::AnyFieldToStringConverter::ToString(&name_text);
			if (wcscmp(fieldName, L"job_ranking") == 0) return Data::AnyFieldToStringConverter::ToString(&job_ranking);
			if (wcscmp(fieldName, L"total_season") == 0) return Data::AnyFieldToStringConverter::ToString(&total_season);
			if (wcscmp(fieldName, L"season_schedule_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[0]));
			if (wcscmp(fieldName, L"season_schedule_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[1]));
			if (wcscmp(fieldName, L"season_schedule_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[2]));
			if (wcscmp(fieldName, L"season_schedule_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[3]));
			if (wcscmp(fieldName, L"season_schedule_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[4]));
			if (wcscmp(fieldName, L"season_schedule_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[5]));
			if (wcscmp(fieldName, L"season_schedule_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[6]));
			if (wcscmp(fieldName, L"season_schedule_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[7]));
			if (wcscmp(fieldName, L"season_schedule_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[8]));
			if (wcscmp(fieldName, L"season_schedule_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[9]));
			if (wcscmp(fieldName, L"season_schedule_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[10]));
			if (wcscmp(fieldName, L"season_schedule_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[11]));
			if (wcscmp(fieldName, L"season_schedule_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[12]));
			if (wcscmp(fieldName, L"season_schedule_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[13]));
			if (wcscmp(fieldName, L"season_schedule_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[14]));
			if (wcscmp(fieldName, L"season_schedule_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[15]));
			if (wcscmp(fieldName, L"season_schedule_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[16]));
			if (wcscmp(fieldName, L"season_schedule_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[17]));
			if (wcscmp(fieldName, L"season_schedule_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[18]));
			if (wcscmp(fieldName, L"season_schedule_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(season_schedule[19]));
			if (wcscmp(fieldName, L"main_season_schedule") == 0) return Data::AnyFieldToStringConverter::ToString(&main_season_schedule);
			if (wcscmp(fieldName, L"season_representative_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&season_representative_icon);
			if (wcscmp(fieldName, L"list_background_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&list_background_imageset);

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
			if (reinterpret_cast<std::uintptr_t>(season_representative_icon) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) season_representative_icon = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(season_representative_icon));
			if (reinterpret_cast<std::uintptr_t>(list_background_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) list_background_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(list_background_imageset));
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
Data::TableRef season_group;
int season_group_tableId(){return 301;};
__int8 season_number;
__int8 season_type;
std::wstring season_type_EnumValue() const {return Get_season_type_EnumValue(season_type);};
char Pad0[2];
wchar_t* name;
wchar_t* name_en;
wchar_t* name_fr;
wchar_t* name_de;
wchar_t* name_pt;
wchar_t* name_th;
wchar_t* name_vn;
Data::TableRef name_text;
int name_text_tableId(){return 405;};
bool job_ranking;
char Pad1[3];
Data::TableRef total_season;
int total_season_tableId(){return 300;};
Data::TableRef season_schedule[20];
int season_schedule_tableId(){return 302;};
Data::TableRef main_season_schedule;
int main_season_schedule_tableId(){return 302;};
wchar_t* season_representative_icon;
wchar_t* list_background_imageset;

		static TableVersion Version() { return TableVersion(9, 3); }
		static __int16 TableId() { return 300; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_season_RecordPtr // : DrRecordPtr
	{
		ranking2_season_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_season_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}