/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zonepathway_Record : DrEl
	{
	private:
		static std::wstring Get_move_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"pos") == 0) return pos;
			if (wcscmp(fieldName, L"move_type") == 0) return move_type;
			if (wcscmp(fieldName, L"warp_social") == 0) return warp_social;
			if (wcscmp(fieldName, L"description") == 0) return description;
			if (wcscmp(fieldName, L"sync") == 0) return sync;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"pos") == 0) return Data::AnyFieldToStringConverter::ToString(&pos);
			if (wcscmp(fieldName, L"move_type") == 0) return Data::AnyFieldToStringConverter::ToString(&move_type);
			if (wcscmp(fieldName, L"warp_social") == 0) return Data::AnyFieldToStringConverter::ToString(&warp_social);
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);
			if (wcscmp(fieldName, L"sync") == 0) return Data::AnyFieldToStringConverter::ToString(&sync);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(description) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) description = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(description));
		}
		union Key
		{
            struct {
                __int32 zone;
__int16 id;
__int16 waypoint;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::XYZ pos;
__int8 move_type;
std::wstring move_type_EnumValue() const {return Get_move_type_EnumValue(move_type);};
char Pad0[3];
Data::TableRef warp_social;
int warp_social_tableId(){return 367;};
wchar_t* description;
__int16 sync;

		static TableVersion Version() { return TableVersion(1, 52); }
		static __int16 TableId() { return 451; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonepathway_RecordPtr // : DrRecordPtr
	{
		zonepathway_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonepathway_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}