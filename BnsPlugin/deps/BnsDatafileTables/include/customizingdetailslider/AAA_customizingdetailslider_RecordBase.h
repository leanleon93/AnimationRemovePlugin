/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct customizingdetailslider_Record : DrEl
	{
	private:
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
		static std::wstring Get_desc_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"min_value") == 0) return min_value;
			if (wcscmp(fieldName, L"max_value") == 0) return max_value;
			if (wcscmp(fieldName, L"step") == 0) return step;
			if (wcscmp(fieldName, L"desc_type") == 0) return desc_type;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"min_value") == 0) return Data::AnyFieldToStringConverter::ToString(&min_value);
			if (wcscmp(fieldName, L"max_value") == 0) return Data::AnyFieldToStringConverter::ToString(&max_value);
			if (wcscmp(fieldName, L"step") == 0) return Data::AnyFieldToStringConverter::ToString(&step);
			if (wcscmp(fieldName, L"desc_type") == 0) return Data::AnyFieldToStringConverter::ToString(&desc_type);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 race;
__int8 sex;
__int8 param_index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 min_value;
__int8 max_value;
__int8 step;
__int8 desc_type;
std::wstring desc_type_EnumValue() const {return Get_desc_type_EnumValue(desc_type);};

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 90; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingdetailslider_RecordPtr // : DrRecordPtr
	{
		customizingdetailslider_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingdetailslider_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}