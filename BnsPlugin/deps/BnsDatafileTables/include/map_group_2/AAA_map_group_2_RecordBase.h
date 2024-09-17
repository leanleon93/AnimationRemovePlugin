/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct map_group_2_Record : DrEl
	{
	private:
		static std::wstring Get_quest_filtering_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"quest_filtering_type") == 0) return quest_filtering_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"quest_filtering_type") == 0) return Data::AnyFieldToStringConverter::ToString(&quest_filtering_type);

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
__int8 quest_filtering_type;
std::wstring quest_filtering_type_EnumValue() const {return Get_quest_filtering_type_EnumValue(quest_filtering_type);};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 239; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) map_group_2_RecordPtr // : DrRecordPtr
	{
		map_group_2_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::map_group_2_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}