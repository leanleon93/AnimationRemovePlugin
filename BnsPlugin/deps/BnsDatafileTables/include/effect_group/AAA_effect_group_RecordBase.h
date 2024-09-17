/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct effect_group_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_1") == 0) return effect[0];
			if (wcscmp(fieldName, L"effect_2") == 0) return effect[1];
			if (wcscmp(fieldName, L"effect_3") == 0) return effect[2];
			if (wcscmp(fieldName, L"effect_4") == 0) return effect[3];
			if (wcscmp(fieldName, L"effect_5") == 0) return effect[4];
			if (wcscmp(fieldName, L"effect_6") == 0) return effect[5];
			if (wcscmp(fieldName, L"effect_7") == 0) return effect[6];
			if (wcscmp(fieldName, L"effect_8") == 0) return effect[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[0]));
			if (wcscmp(fieldName, L"effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[1]));
			if (wcscmp(fieldName, L"effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[2]));
			if (wcscmp(fieldName, L"effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[3]));
			if (wcscmp(fieldName, L"effect_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[4]));
			if (wcscmp(fieldName, L"effect_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[5]));
			if (wcscmp(fieldName, L"effect_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[6]));
			if (wcscmp(fieldName, L"effect_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[7]));

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
Data::TableRef effect[8];
int effect_tableId(){return 111;};

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 112; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) effect_group_RecordPtr // : DrRecordPtr
	{
		effect_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::effect_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}