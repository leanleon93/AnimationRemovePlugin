/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct boss_challenge_round_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"spawn_effect") == 0) return spawn_effect;
			if (wcscmp(fieldName, L"spawn_effect_1") == 0) return spawn_effect[0];
			if (wcscmp(fieldName, L"spawn_effect_2") == 0) return spawn_effect[1];
			if (wcscmp(fieldName, L"boss_spawn_delay") == 0) return boss_spawn_delay;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"spawn_effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(spawn_effect[0]));
			if (wcscmp(fieldName, L"spawn_effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(spawn_effect[1]));
			if (wcscmp(fieldName, L"boss_spawn_delay") == 0) return Data::AnyFieldToStringConverter::ToString(&boss_spawn_delay);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int32 id;
__int16 round;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef spawn_effect[2];
int spawn_effect_tableId(){return 111;};
__int32 boss_spawn_delay;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 45; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) boss_challenge_round_RecordPtr // : DrRecordPtr
	{
		boss_challenge_round_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::boss_challenge_round_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}