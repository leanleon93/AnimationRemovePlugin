/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct tencent_quest_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"check_vitality") == 0) return check_vitality;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"check_vitality") == 0) return Data::AnyFieldToStringConverter::ToString(&check_vitality);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 questid;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		bool check_vitality;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 402; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) tencent_quest_RecordPtr // : DrRecordPtr
	{
		tencent_quest_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::tencent_quest_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}