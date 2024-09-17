/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {
    enum class item_graph_RecordSubType : __int32
    {
		item_graph_record_sub_seed = 0,
		item_graph_record_sub_edge = 1,
		item_graph_record_sub_count = 2,
    };
#pragma pack(push, 1)
	struct item_graph_Record : DrEl
	{
	private:

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
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		
		static TableVersion Version() { return TableVersion(1, 16); }
		static __int16 TableId() { return 194; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_graph_RecordPtr // : DrRecordPtr
	{
		item_graph_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_graph_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}