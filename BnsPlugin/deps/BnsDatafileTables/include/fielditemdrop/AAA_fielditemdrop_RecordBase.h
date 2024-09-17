/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class fielditemdrop_RecordSubType : __int32
    {
		fielditemdrop_record_sub_npc = 0,
		fielditemdrop_record_sub_env = 1,
		fielditemdrop_record_sub_quest = 2,
		fielditemdrop_record_sub_npc_deadbody = 3,
		fielditemdrop_record_sub_count = 4,
    };
#pragma pack(push, 1)
	struct fielditemdrop_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"fielditem") == 0) return fielditem;
			if (wcscmp(fieldName, L"fielditem_1") == 0) return fielditem[0];
			if (wcscmp(fieldName, L"fielditem_2") == 0) return fielditem[1];
			if (wcscmp(fieldName, L"fielditem_3") == 0) return fielditem[2];
			if (wcscmp(fieldName, L"prob") == 0) return prob;
			if (wcscmp(fieldName, L"prob_1") == 0) return prob[0];
			if (wcscmp(fieldName, L"prob_2") == 0) return prob[1];
			if (wcscmp(fieldName, L"prob_3") == 0) return prob[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"fielditem_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fielditem[0]));
			if (wcscmp(fieldName, L"fielditem_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fielditem[1]));
			if (wcscmp(fieldName, L"fielditem_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fielditem[2]));
			if (wcscmp(fieldName, L"prob_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(prob[0]));
			if (wcscmp(fieldName, L"prob_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(prob[1]));
			if (wcscmp(fieldName, L"prob_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(prob[2]));

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
Data::TableRef fielditem[3];
int fielditem_tableId(){return 137;};
__int8 prob[3];

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 138; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fielditemdrop_RecordPtr // : DrRecordPtr
	{
		fielditemdrop_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fielditemdrop_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}