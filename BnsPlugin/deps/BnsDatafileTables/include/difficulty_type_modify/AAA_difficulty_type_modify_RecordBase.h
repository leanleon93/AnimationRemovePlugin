/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct difficulty_type_modify_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time") == 0) return berserk_sequence_invoke_time;
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time_1") == 0) return berserk_sequence_invoke_time[0];
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time_2") == 0) return berserk_sequence_invoke_time[1];
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time_3") == 0) return berserk_sequence_invoke_time[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(berserk_sequence_invoke_time[0]));
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(berserk_sequence_invoke_time[1]));
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(berserk_sequence_invoke_time[2]));

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
__int32 berserk_sequence_invoke_time[3];

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 98; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) difficulty_type_modify_RecordPtr // : DrRecordPtr
	{
		difficulty_type_modify_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::difficulty_type_modify_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}