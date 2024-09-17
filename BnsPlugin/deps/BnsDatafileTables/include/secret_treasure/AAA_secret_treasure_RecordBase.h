/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct secret_treasure_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"usable_duration") == 0) return usable_duration;
			if (wcscmp(fieldName, L"do_not_use") == 0) return do_not_use;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);
			if (wcscmp(fieldName, L"usable_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&usable_duration);
			if (wcscmp(fieldName, L"do_not_use") == 0) return Data::AnyFieldToStringConverter::ToString(&do_not_use);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef item;
int item_tableId(){return 189;};
__int32 usable_duration;
bool do_not_use;

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 321; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) secret_treasure_RecordPtr // : DrRecordPtr
	{
		secret_treasure_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::secret_treasure_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}