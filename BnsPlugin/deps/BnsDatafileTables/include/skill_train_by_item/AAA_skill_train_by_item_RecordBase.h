/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_train_by_item_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"origin_skill") == 0) return origin_skill;
			if (wcscmp(fieldName, L"origin_skill_1") == 0) return origin_skill[0];
			if (wcscmp(fieldName, L"origin_skill_2") == 0) return origin_skill[1];
			if (wcscmp(fieldName, L"origin_skill_3") == 0) return origin_skill[2];
			if (wcscmp(fieldName, L"origin_skill_4") == 0) return origin_skill[3];
			if (wcscmp(fieldName, L"origin_skill_5") == 0) return origin_skill[4];
			if (wcscmp(fieldName, L"origin_skill_6") == 0) return origin_skill[5];
			if (wcscmp(fieldName, L"change_skill") == 0) return change_skill;
			if (wcscmp(fieldName, L"change_skill_1") == 0) return change_skill[0];
			if (wcscmp(fieldName, L"change_skill_2") == 0) return change_skill[1];
			if (wcscmp(fieldName, L"change_skill_3") == 0) return change_skill[2];
			if (wcscmp(fieldName, L"change_skill_4") == 0) return change_skill[3];
			if (wcscmp(fieldName, L"change_skill_5") == 0) return change_skill[4];
			if (wcscmp(fieldName, L"change_skill_6") == 0) return change_skill[5];
			if (wcscmp(fieldName, L"icon") == 0) return icon;
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"origin_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(origin_skill[0]));
			if (wcscmp(fieldName, L"origin_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(origin_skill[1]));
			if (wcscmp(fieldName, L"origin_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(origin_skill[2]));
			if (wcscmp(fieldName, L"origin_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(origin_skill[3]));
			if (wcscmp(fieldName, L"origin_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(origin_skill[4]));
			if (wcscmp(fieldName, L"origin_skill_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(origin_skill[5]));
			if (wcscmp(fieldName, L"change_skill_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill[0]));
			if (wcscmp(fieldName, L"change_skill_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill[1]));
			if (wcscmp(fieldName, L"change_skill_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill[2]));
			if (wcscmp(fieldName, L"change_skill_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill[3]));
			if (wcscmp(fieldName, L"change_skill_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill[4]));
			if (wcscmp(fieldName, L"change_skill_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_skill[5]));
			if (wcscmp(fieldName, L"icon") == 0) return Data::AnyFieldToStringConverter::ToString(&icon);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

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
Data::TableRef origin_skill[6];
int origin_skill_tableId(){return 324;};
Data::TableRef change_skill[6];
int change_skill_tableId(){return 324;};
Data::IconRef icon;
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 352; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_by_item_RecordPtr // : DrRecordPtr
	{
		skill_train_by_item_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_by_item_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}