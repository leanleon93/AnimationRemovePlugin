/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guilduniformslider_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"min_value") == 0) return min_value;
			if (wcscmp(fieldName, L"max_value") == 0) return max_value;
			if (wcscmp(fieldName, L"step") == 0) return step;
			if (wcscmp(fieldName, L"required_guild_level") == 0) return required_guild_level;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"min_value") == 0) return Data::AnyFieldToStringConverter::ToString(&min_value);
			if (wcscmp(fieldName, L"max_value") == 0) return Data::AnyFieldToStringConverter::ToString(&max_value);
			if (wcscmp(fieldName, L"step") == 0) return Data::AnyFieldToStringConverter::ToString(&step);
			if (wcscmp(fieldName, L"required_guild_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_guild_level);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 param_type;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 min_value;
__int8 max_value;
__int8 step;
__int8 required_guild_level;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 175; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformslider_RecordPtr // : DrRecordPtr
	{
		guilduniformslider_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformslider_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}