/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contributionreward_Record : DrEl
	{
	private:
		static std::wstring Get_contribution_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"contribution_type") == 0) return contribution_type;
			if (wcscmp(fieldName, L"minimum_group_item") == 0) return minimum_group_item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"contribution_type") == 0) return Data::AnyFieldToStringConverter::ToString(&contribution_type);
			if (wcscmp(fieldName, L"minimum_group_item") == 0) return Data::AnyFieldToStringConverter::ToString(&minimum_group_item);

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
__int8 contribution_type;
std::wstring contribution_type_EnumValue() const {return Get_contribution_type_EnumValue(contribution_type);};
char Pad0[3];
Data::TableRef minimum_group_item;
int minimum_group_item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(0, 13); }
		static __int16 TableId() { return 75; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contributionreward_RecordPtr // : DrRecordPtr
	{
		contributionreward_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contributionreward_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}