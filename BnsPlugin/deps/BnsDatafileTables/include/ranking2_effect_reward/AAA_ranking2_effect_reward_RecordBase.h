/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_effect_reward_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"buff_effect") == 0) return buff_effect;
			if (wcscmp(fieldName, L"party_effect") == 0) return party_effect;
			if (wcscmp(fieldName, L"zone_effect") == 0) return zone_effect;
			if (wcscmp(fieldName, L"fx_effect") == 0) return fx_effect;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"buff_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&buff_effect);
			if (wcscmp(fieldName, L"party_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&party_effect);
			if (wcscmp(fieldName, L"zone_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_effect);
			if (wcscmp(fieldName, L"fx_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&fx_effect);

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
Data::TableRef buff_effect;
int buff_effect_tableId(){return 111;};
Data::TableRef party_effect;
int party_effect_tableId(){return 111;};
Data::TableRef zone_effect;
int zone_effect_tableId(){return 111;};
Data::TableRef fx_effect;
int fx_effect_tableId(){return 111;};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 297; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_effect_reward_RecordPtr // : DrRecordPtr
	{
		ranking2_effect_reward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_effect_reward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}