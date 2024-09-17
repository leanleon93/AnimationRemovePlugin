/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fishing_field_group_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"fishing_field") == 0) return fishing_field;
			if (wcscmp(fieldName, L"fishing_field_1") == 0) return fishing_field[0];
			if (wcscmp(fieldName, L"fishing_field_2") == 0) return fishing_field[1];
			if (wcscmp(fieldName, L"fishing_field_3") == 0) return fishing_field[2];
			if (wcscmp(fieldName, L"fishing_field_4") == 0) return fishing_field[3];
			if (wcscmp(fieldName, L"fishing_field_5") == 0) return fishing_field[4];
			if (wcscmp(fieldName, L"fishing_field_6") == 0) return fishing_field[5];
			if (wcscmp(fieldName, L"fishing_field_7") == 0) return fishing_field[6];
			if (wcscmp(fieldName, L"fishing_field_8") == 0) return fishing_field[7];
			if (wcscmp(fieldName, L"fishing_field_9") == 0) return fishing_field[8];
			if (wcscmp(fieldName, L"fishing_field_10") == 0) return fishing_field[9];
			if (wcscmp(fieldName, L"fishing_field_count") == 0) return fishing_field_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"fishing_field_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[0]));
			if (wcscmp(fieldName, L"fishing_field_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[1]));
			if (wcscmp(fieldName, L"fishing_field_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[2]));
			if (wcscmp(fieldName, L"fishing_field_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[3]));
			if (wcscmp(fieldName, L"fishing_field_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[4]));
			if (wcscmp(fieldName, L"fishing_field_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[5]));
			if (wcscmp(fieldName, L"fishing_field_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[6]));
			if (wcscmp(fieldName, L"fishing_field_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[7]));
			if (wcscmp(fieldName, L"fishing_field_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[8]));
			if (wcscmp(fieldName, L"fishing_field_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(fishing_field[9]));
			if (wcscmp(fieldName, L"fishing_field_count") == 0) return Data::AnyFieldToStringConverter::ToString(&fishing_field_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name2;
int name2_tableId(){return 405;};
Data::TableRef desc;
int desc_tableId(){return 405;};
Data::TableRef fishing_field[10];
int fishing_field_tableId(){return 144;};
__int16 fishing_field_count;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 145; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_field_group_RecordPtr // : DrRecordPtr
	{
		fishing_field_group_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_field_group_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}