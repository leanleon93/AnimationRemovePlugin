/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct newbie_care_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"dungeon") == 0) return dungeon;
			if (wcscmp(fieldName, L"achievement_register") == 0) return achievement_register;
			if (wcscmp(fieldName, L"reward_default") == 0) return reward_default;
			if (wcscmp(fieldName, L"reward_difficulty_type") == 0) return reward_difficulty_type;
			if (wcscmp(fieldName, L"reward_difficulty_type_1") == 0) return reward_difficulty_type[0];
			if (wcscmp(fieldName, L"reward_difficulty_type_2") == 0) return reward_difficulty_type[1];
			if (wcscmp(fieldName, L"reward_difficulty_type_3") == 0) return reward_difficulty_type[2];
			if (wcscmp(fieldName, L"attraction_quest") == 0) return attraction_quest;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"dungeon") == 0) return Data::AnyFieldToStringConverter::ToString(&dungeon);
			if (wcscmp(fieldName, L"achievement_register") == 0) return Data::AnyFieldToStringConverter::ToString(&achievement_register);
			if (wcscmp(fieldName, L"reward_default") == 0) return Data::AnyFieldToStringConverter::ToString(&reward_default);
			if (wcscmp(fieldName, L"reward_difficulty_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_difficulty_type[0]));
			if (wcscmp(fieldName, L"reward_difficulty_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_difficulty_type[1]));
			if (wcscmp(fieldName, L"reward_difficulty_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(reward_difficulty_type[2]));
			if (wcscmp(fieldName, L"attraction_quest") == 0) return Data::AnyFieldToStringConverter::ToString(&attraction_quest);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef dungeon;
int dungeon_tableId(){return 110;};
Data::TableRef achievement_register;
int achievement_register_tableId(){return 7;};
Data::TableRef reward_default;
int reward_default_tableId(){return 313;};
Data::TableRef reward_difficulty_type[3];
int reward_difficulty_type_tableId(){return 313;};
Data::TableRef attraction_quest;
int attraction_quest_tableId(){return 283;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 253; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) newbie_care_RecordPtr // : DrRecordPtr
	{
		newbie_care_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::newbie_care_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}