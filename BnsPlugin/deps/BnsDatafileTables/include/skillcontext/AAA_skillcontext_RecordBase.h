/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skillcontext_Record : DrEl
	{
	private:
		static std::wstring Get_playerstance_EnumValue(__int8 value);
		static std::wstring Get_playerstate_EnumValue(__int8 value);
		static std::wstring Get_playerlinking_EnumValue(__int8 value);
		static std::wstring Get_playerlinkstage_EnumValue(__int8 value);
		static std::wstring Get_enemydistance_EnumValue(__int8 value);
		static std::wstring Get_enemystate_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"context_use_default") == 0) return context_use_default;
			if (wcscmp(fieldName, L"context") == 0) return context;
			if (wcscmp(fieldName, L"context_1") == 0) return context[0];
			if (wcscmp(fieldName, L"context_2") == 0) return context[1];
			if (wcscmp(fieldName, L"skillbar_use_default") == 0) return skillbar_use_default;
			if (wcscmp(fieldName, L"skillbar_stance") == 0) return skillbar_stance;
			if (wcscmp(fieldName, L"skillbar_stance_1") == 0) return skillbar_stance[0];
			if (wcscmp(fieldName, L"skillbar_stance_2") == 0) return skillbar_stance[1];
			if (wcscmp(fieldName, L"skillbar_stance_3") == 0) return skillbar_stance[2];
			if (wcscmp(fieldName, L"skillbar") == 0) return skillbar;
			if (wcscmp(fieldName, L"skillbar_1") == 0) return skillbar[0];
			if (wcscmp(fieldName, L"skillbar_2") == 0) return skillbar[1];
			if (wcscmp(fieldName, L"skillbar_3") == 0) return skillbar[2];
			if (wcscmp(fieldName, L"skillbar_4") == 0) return skillbar[3];
			if (wcscmp(fieldName, L"skillbar_5") == 0) return skillbar[4];
			if (wcscmp(fieldName, L"skillbar_6") == 0) return skillbar[5];
			if (wcscmp(fieldName, L"skillbar_7") == 0) return skillbar[6];
			if (wcscmp(fieldName, L"skillbar_8") == 0) return skillbar[7];
			if (wcscmp(fieldName, L"skillbar_9") == 0) return skillbar[8];
			if (wcscmp(fieldName, L"skillbar_10") == 0) return skillbar[9];
			if (wcscmp(fieldName, L"skillbar_11") == 0) return skillbar[10];
			if (wcscmp(fieldName, L"skillbar_12") == 0) return skillbar[11];
			if (wcscmp(fieldName, L"context_fallback") == 0) return context_fallback;
			if (wcscmp(fieldName, L"context_fallback_1") == 0) return context_fallback[0];
			if (wcscmp(fieldName, L"context_fallback_2") == 0) return context_fallback[1];
			if (wcscmp(fieldName, L"cmd_key_up") == 0) return cmd_key_up;
			if (wcscmp(fieldName, L"cmd_key_down") == 0) return cmd_key_down;
			if (wcscmp(fieldName, L"cmd_key_left") == 0) return cmd_key_left;
			if (wcscmp(fieldName, L"cmd_key_right") == 0) return cmd_key_right;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"context_use_default") == 0) return Data::AnyFieldToStringConverter::ToString(&context_use_default);
			if (wcscmp(fieldName, L"context_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(context[0]));
			if (wcscmp(fieldName, L"context_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(context[1]));
			if (wcscmp(fieldName, L"skillbar_use_default") == 0) return Data::AnyFieldToStringConverter::ToString(&skillbar_use_default);
			if (wcscmp(fieldName, L"skillbar_stance_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar_stance[0]));
			if (wcscmp(fieldName, L"skillbar_stance_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar_stance[1]));
			if (wcscmp(fieldName, L"skillbar_stance_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar_stance[2]));
			if (wcscmp(fieldName, L"skillbar_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[0]));
			if (wcscmp(fieldName, L"skillbar_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[1]));
			if (wcscmp(fieldName, L"skillbar_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[2]));
			if (wcscmp(fieldName, L"skillbar_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[3]));
			if (wcscmp(fieldName, L"skillbar_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[4]));
			if (wcscmp(fieldName, L"skillbar_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[5]));
			if (wcscmp(fieldName, L"skillbar_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[6]));
			if (wcscmp(fieldName, L"skillbar_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[7]));
			if (wcscmp(fieldName, L"skillbar_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[8]));
			if (wcscmp(fieldName, L"skillbar_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[9]));
			if (wcscmp(fieldName, L"skillbar_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[10]));
			if (wcscmp(fieldName, L"skillbar_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(skillbar[11]));
			if (wcscmp(fieldName, L"context_fallback_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(context_fallback[0]));
			if (wcscmp(fieldName, L"context_fallback_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(context_fallback[1]));
			if (wcscmp(fieldName, L"cmd_key_up") == 0) return Data::AnyFieldToStringConverter::ToString(&cmd_key_up);
			if (wcscmp(fieldName, L"cmd_key_down") == 0) return Data::AnyFieldToStringConverter::ToString(&cmd_key_down);
			if (wcscmp(fieldName, L"cmd_key_left") == 0) return Data::AnyFieldToStringConverter::ToString(&cmd_key_left);
			if (wcscmp(fieldName, L"cmd_key_right") == 0) return Data::AnyFieldToStringConverter::ToString(&cmd_key_right);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 playerstance;
__int8 playerstate;
__int8 playerlinking;
__int8 playerlinkstage;
__int8 enemydistance;
__int8 enemystate;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
bool context_use_default;
char Pad0[3];
__int32 context[2];
bool skillbar_use_default;
char Pad1[3];
__int32 skillbar_stance[3];
__int32 skillbar[12];
__int32 context_fallback[2];
__int32 cmd_key_up;
__int32 cmd_key_down;
__int32 cmd_key_left;
__int32 cmd_key_right;

		static TableVersion Version() { return TableVersion(1, 13); }
		static __int16 TableId() { return 333; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skillcontext_RecordPtr // : DrRecordPtr
	{
		skillcontext_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skillcontext_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}