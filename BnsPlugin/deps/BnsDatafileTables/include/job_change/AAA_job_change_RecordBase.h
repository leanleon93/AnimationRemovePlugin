/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct job_change_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"cost_item") == 0) return cost_item;
			if (wcscmp(fieldName, L"required_level") == 0) return required_level;
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return required_mastery_level;
			if (wcscmp(fieldName, L"required_quest_id") == 0) return required_quest_id;
			if (wcscmp(fieldName, L"required_quest_id_1") == 0) return required_quest_id[0];
			if (wcscmp(fieldName, L"required_quest_id_2") == 0) return required_quest_id[1];
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return required_achievement_id;
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return required_achievement_step;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;
			if (wcscmp(fieldName, L"appearance_1") == 0) return appearance[0];
			if (wcscmp(fieldName, L"appearance_2") == 0) return appearance[1];
			if (wcscmp(fieldName, L"appearance_3") == 0) return appearance[2];
			if (wcscmp(fieldName, L"appearance_4") == 0) return appearance[3];
			if (wcscmp(fieldName, L"appearance_5") == 0) return appearance[4];
			if (wcscmp(fieldName, L"appearance_6") == 0) return appearance[5];
			if (wcscmp(fieldName, L"appearance_7") == 0) return appearance[6];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"cost_item") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_item);
			if (wcscmp(fieldName, L"required_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_level);
			if (wcscmp(fieldName, L"required_mastery_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_mastery_level);
			if (wcscmp(fieldName, L"required_quest_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest_id[0]));
			if (wcscmp(fieldName, L"required_quest_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(required_quest_id[1]));
			if (wcscmp(fieldName, L"required_achievement_id") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_id);
			if (wcscmp(fieldName, L"required_achievement_step") == 0) return Data::AnyFieldToStringConverter::ToString(&required_achievement_step);
			if (wcscmp(fieldName, L"appearance_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[0]));
			if (wcscmp(fieldName, L"appearance_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[1]));
			if (wcscmp(fieldName, L"appearance_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[2]));
			if (wcscmp(fieldName, L"appearance_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[3]));
			if (wcscmp(fieldName, L"appearance_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[4]));
			if (wcscmp(fieldName, L"appearance_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[5]));
			if (wcscmp(fieldName, L"appearance_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(appearance[6]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
Data::TableRef zone;
int zone_tableId(){return 443;};
Data::TableRef cost_item;
int cost_item_tableId(){return 189;};
__int8 required_level;
__int8 required_mastery_level;
__int16 required_quest_id[2];
__int16 required_achievement_id;
__int16 required_achievement_step;
char Pad0[2];
Data::TableRef appearance[7];
int appearance_tableId(){return 84;};

		static TableVersion Version() { return TableVersion(3, 2); }
		static __int16 TableId() { return 218; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) job_change_RecordPtr // : DrRecordPtr
	{
		job_change_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::job_change_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}