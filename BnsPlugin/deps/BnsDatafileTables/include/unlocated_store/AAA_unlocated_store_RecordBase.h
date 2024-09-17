/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct unlocated_store_Record : DrEl
	{
	private:
		static std::wstring Get_unlocated_store_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"store2") == 0) return store2;
			if (wcscmp(fieldName, L"available_only_with_grade_benefit") == 0) return available_only_with_grade_benefit;
			if (wcscmp(fieldName, L"unlocated_store_type") == 0) return unlocated_store_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"store2") == 0) return Data::AnyFieldToStringConverter::ToString(&store2);
			if (wcscmp(fieldName, L"available_only_with_grade_benefit") == 0) return Data::AnyFieldToStringConverter::ToString(&available_only_with_grade_benefit);
			if (wcscmp(fieldName, L"unlocated_store_type") == 0) return Data::AnyFieldToStringConverter::ToString(&unlocated_store_type);

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
Data::TableRef store2;
int store2_tableId(){return 383;};
bool available_only_with_grade_benefit;
__int8 unlocated_store_type;
std::wstring unlocated_store_type_EnumValue() const {return Get_unlocated_store_type_EnumValue(unlocated_store_type);};

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 415; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) unlocated_store_RecordPtr // : DrRecordPtr
	{
		unlocated_store_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::unlocated_store_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}