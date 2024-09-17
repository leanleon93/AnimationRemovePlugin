/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct commonanim_Record : DrEl
	{
	private:
		static std::wstring Get_anim_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"anim_name") == 0) return anim_name;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"anim_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_name);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(anim_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_name));
		}
		union Key
		{
            struct {
                __int8 anim_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* anim_name;

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 61; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) commonanim_RecordPtr // : DrRecordPtr
	{
		commonanim_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::commonanim_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}