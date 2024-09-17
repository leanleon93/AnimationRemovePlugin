/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct fishing_paste_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"use_auto_fishing") == 0) return use_auto_fishing;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);
			if (wcscmp(fieldName, L"use_auto_fishing") == 0) return Data::AnyFieldToStringConverter::ToString(&use_auto_fishing);

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
Data::TableRef item;
int item_tableId(){return 189;};
bool use_auto_fishing;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 146; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) fishing_paste_RecordPtr // : DrRecordPtr
	{
		fishing_paste_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::fishing_paste_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}