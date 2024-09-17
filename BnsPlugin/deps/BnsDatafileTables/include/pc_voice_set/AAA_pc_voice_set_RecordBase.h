/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct pc_voice_set_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
		static std::wstring Get_stance_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"voice_set_name") == 0) return voice_set_name;
			if (wcscmp(fieldName, L"sample_sound_name") == 0) return sample_sound_name;
			if (wcscmp(fieldName, L"sample_sound_name_1") == 0) return sample_sound_name[0];
			if (wcscmp(fieldName, L"sample_sound_name_2") == 0) return sample_sound_name[1];
			if (wcscmp(fieldName, L"sample_sound_name_3") == 0) return sample_sound_name[2];
			if (wcscmp(fieldName, L"sample_sound_name_4") == 0) return sample_sound_name[3];
			if (wcscmp(fieldName, L"sample_sound_name_5") == 0) return sample_sound_name[4];
			if (wcscmp(fieldName, L"sample_sound_name_6") == 0) return sample_sound_name[5];
			if (wcscmp(fieldName, L"type1_sample_sound_name") == 0) return type1_sample_sound_name;
			if (wcscmp(fieldName, L"type2_sample_sound_name") == 0) return type2_sample_sound_name;
			if (wcscmp(fieldName, L"type3_sample_sound_name") == 0) return type3_sample_sound_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"voice_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&voice_set_name);
			if (wcscmp(fieldName, L"sample_sound_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sample_sound_name[0]));
			if (wcscmp(fieldName, L"sample_sound_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sample_sound_name[1]));
			if (wcscmp(fieldName, L"sample_sound_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sample_sound_name[2]));
			if (wcscmp(fieldName, L"sample_sound_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(sample_sound_name[3]));
			if (wcscmp(fieldName, L"sample_sound_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(sample_sound_name[4]));
			if (wcscmp(fieldName, L"sample_sound_name_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(sample_sound_name[5]));
			if (wcscmp(fieldName, L"type1_sample_sound_name") == 0) return Data::AnyFieldToStringConverter::ToString(&type1_sample_sound_name);
			if (wcscmp(fieldName, L"type2_sample_sound_name") == 0) return Data::AnyFieldToStringConverter::ToString(&type2_sample_sound_name);
			if (wcscmp(fieldName, L"type3_sample_sound_name") == 0) return Data::AnyFieldToStringConverter::ToString(&type3_sample_sound_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(voice_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) voice_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(voice_set_name));
			else return;
			for (int i = 0; i < 6; i++) {
				if (reinterpret_cast<std::uintptr_t>(sample_sound_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sample_sound_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sample_sound_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(type1_sample_sound_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) type1_sample_sound_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(type1_sample_sound_name));
			if (reinterpret_cast<std::uintptr_t>(type2_sample_sound_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) type2_sample_sound_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(type2_sample_sound_name));
			if (reinterpret_cast<std::uintptr_t>(type3_sample_sound_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) type3_sample_sound_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(type3_sample_sound_name));
		}
		union Key
		{
            struct {
                __int8 id;
__int8 job;
__int8 stance;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* voice_set_name;
wchar_t* sample_sound_name[6];
wchar_t* type1_sample_sound_name;
wchar_t* type2_sample_sound_name;
wchar_t* type3_sample_sound_name;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 273; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) pc_voice_set_RecordPtr // : DrRecordPtr
	{
		pc_voice_set_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::pc_voice_set_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}