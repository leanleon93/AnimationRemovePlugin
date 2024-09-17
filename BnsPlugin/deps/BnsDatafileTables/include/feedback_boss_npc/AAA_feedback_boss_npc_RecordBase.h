/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct feedback_boss_npc_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"npc") == 0) return npc;
			if (wcscmp(fieldName, L"skill_score") == 0) return skill_score;
			if (wcscmp(fieldName, L"skill_score_1") == 0) return skill_score[0];
			if (wcscmp(fieldName, L"skill_score_2") == 0) return skill_score[1];
			if (wcscmp(fieldName, L"skill_score_3") == 0) return skill_score[2];
			if (wcscmp(fieldName, L"skill_score_4") == 0) return skill_score[3];
			if (wcscmp(fieldName, L"skill_score_5") == 0) return skill_score[4];
			if (wcscmp(fieldName, L"skill_score_6") == 0) return skill_score[5];
			if (wcscmp(fieldName, L"skill_score_7") == 0) return skill_score[6];
			if (wcscmp(fieldName, L"skill_score_8") == 0) return skill_score[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"npc") == 0) return Data::AnyFieldToStringConverter::ToString(&npc);
			if (wcscmp(fieldName, L"skill_score_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[0]));
			if (wcscmp(fieldName, L"skill_score_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[1]));
			if (wcscmp(fieldName, L"skill_score_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[2]));
			if (wcscmp(fieldName, L"skill_score_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[3]));
			if (wcscmp(fieldName, L"skill_score_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[4]));
			if (wcscmp(fieldName, L"skill_score_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[5]));
			if (wcscmp(fieldName, L"skill_score_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[6]));
			if (wcscmp(fieldName, L"skill_score_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill_score[7]));

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
Data::TableRef npc;
int npc_tableId(){return 255;};
Data::TableRef skill_score[8];
int skill_score_tableId(){return 135;};

		static TableVersion Version() { return TableVersion(1, 2); }
		static __int16 TableId() { return 132; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_boss_npc_RecordPtr // : DrRecordPtr
	{
		feedback_boss_npc_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_boss_npc_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}