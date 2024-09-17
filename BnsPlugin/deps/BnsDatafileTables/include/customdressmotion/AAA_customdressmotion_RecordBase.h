/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct customdressmotion_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"sequence") == 0) return sequence;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"sequence") == 0) return Data::AnyFieldToStringConverter::ToString(&sequence);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(sequence) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sequence = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sequence));
		}
		union Key
		{
            struct {
                __int32 order;
__int8 race;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* sequence;
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 87; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customdressmotion_RecordPtr // : DrRecordPtr
	{
		customdressmotion_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customdressmotion_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}