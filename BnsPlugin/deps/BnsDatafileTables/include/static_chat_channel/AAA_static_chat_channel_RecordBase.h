/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct static_chat_channel_Record : DrEl
	{
	private:
		static std::wstring Get_partychanneltype_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name2") == 0) return name2;
			if (wcscmp(fieldName, L"partychanneltype") == 0) return partychanneltype;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name2") == 0) return Data::AnyFieldToStringConverter::ToString(&name2);
			if (wcscmp(fieldName, L"partychanneltype") == 0) return Data::AnyFieldToStringConverter::ToString(&partychanneltype);

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
Data::TableRef name2;
int name2_tableId(){return 405;};
__int8 partychanneltype;
std::wstring partychanneltype_EnumValue() const {return Get_partychanneltype_EnumValue(partychanneltype);};

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 382; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) static_chat_channel_RecordPtr // : DrRecordPtr
	{
		static_chat_channel_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::static_chat_channel_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}