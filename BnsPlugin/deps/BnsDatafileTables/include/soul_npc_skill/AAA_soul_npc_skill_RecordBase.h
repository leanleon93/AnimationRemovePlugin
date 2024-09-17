/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soul_npc_skill_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"skill3") == 0) return skill3;
			if (wcscmp(fieldName, L"skill3_1") == 0) return skill3[0];
			if (wcscmp(fieldName, L"skill3_2") == 0) return skill3[1];
			if (wcscmp(fieldName, L"skill3_3") == 0) return skill3[2];
			if (wcscmp(fieldName, L"skill3_4") == 0) return skill3[3];
			if (wcscmp(fieldName, L"skill3_5") == 0) return skill3[4];
			if (wcscmp(fieldName, L"skill3_6") == 0) return skill3[5];
			if (wcscmp(fieldName, L"skill3_7") == 0) return skill3[6];
			if (wcscmp(fieldName, L"skill3_8") == 0) return skill3[7];
			if (wcscmp(fieldName, L"skill3_9") == 0) return skill3[8];
			if (wcscmp(fieldName, L"skill3_10") == 0) return skill3[9];
			if (wcscmp(fieldName, L"soul_particle") == 0) return soul_particle;
			if (wcscmp(fieldName, L"target_ui_imageset") == 0) return target_ui_imageset;
			if (wcscmp(fieldName, L"soul_tooltip") == 0) return soul_tooltip;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"skill3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[0]));
			if (wcscmp(fieldName, L"skill3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[1]));
			if (wcscmp(fieldName, L"skill3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[2]));
			if (wcscmp(fieldName, L"skill3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[3]));
			if (wcscmp(fieldName, L"skill3_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[4]));
			if (wcscmp(fieldName, L"skill3_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[5]));
			if (wcscmp(fieldName, L"skill3_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[6]));
			if (wcscmp(fieldName, L"skill3_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[7]));
			if (wcscmp(fieldName, L"skill3_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[8]));
			if (wcscmp(fieldName, L"skill3_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(skill3[9]));
			if (wcscmp(fieldName, L"soul_particle") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_particle);
			if (wcscmp(fieldName, L"target_ui_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&target_ui_imageset);
			if (wcscmp(fieldName, L"soul_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_tooltip);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(soul_particle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) soul_particle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(soul_particle));
			if (reinterpret_cast<std::uintptr_t>(target_ui_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) target_ui_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(target_ui_imageset));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef skill3[10];
int skill3_tableId(){return 324;};
wchar_t* soul_particle;
wchar_t* target_ui_imageset;
Data::TableRef soul_tooltip;
int soul_tooltip_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 375; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soul_npc_skill_RecordPtr // : DrRecordPtr
	{
		soul_npc_skill_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soul_npc_skill_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}