/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class customizingpreview_RecordSubType : __int32
    {
		customizingpreview_record_sub_pose = 0,
		customizingpreview_record_sub_face_look = 1,
		customizingpreview_record_sub_costume = 2,
		customizingpreview_record_sub_light = 3,
		customizingpreview_record_sub_silhouette = 4,
		customizingpreview_record_sub_count = 5,
    };
#pragma pack(push, 1)
	struct customizingpreview_Record : DrEl
	{
	private:
		static std::wstring Get_preview_type_EnumValue(__int8 value);
		static std::wstring Get_race_EnumValue(__int8 value);
		static std::wstring Get_sex_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 preview_type;
__int8 preview_value;
__int8 race;
__int8 sex;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 93; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) customizingpreview_RecordPtr // : DrRecordPtr
	{
		customizingpreview_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::customizingpreview_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}