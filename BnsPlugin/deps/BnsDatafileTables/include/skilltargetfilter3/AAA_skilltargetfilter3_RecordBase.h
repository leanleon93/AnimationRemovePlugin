/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skilltargetfilter3_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"fire_filter_target") == 0) return fire_filter_target;
			if (wcscmp(fieldName, L"fire_filter_target_1") == 0) return fire_filter_target[0];
			if (wcscmp(fieldName, L"fire_filter_target_2") == 0) return fire_filter_target[1];
			if (wcscmp(fieldName, L"fire_filter_target_3") == 0) return fire_filter_target[2];
			if (wcscmp(fieldName, L"fire_filter_target_4") == 0) return fire_filter_target[3];
			if (wcscmp(fieldName, L"fire_filter_target_5") == 0) return fire_filter_target[4];
			if (wcscmp(fieldName, L"fire_filter_target_6") == 0) return fire_filter_target[5];
			if (wcscmp(fieldName, L"fire_filter_target_7") == 0) return fire_filter_target[6];
			if (wcscmp(fieldName, L"fire_filter_target_8") == 0) return fire_filter_target[7];
			if (wcscmp(fieldName, L"exec_filter_target") == 0) return exec_filter_target;
			if (wcscmp(fieldName, L"exec_filter_target_1") == 0) return exec_filter_target[0];
			if (wcscmp(fieldName, L"exec_filter_target_2") == 0) return exec_filter_target[1];
			if (wcscmp(fieldName, L"exec_filter_target_3") == 0) return exec_filter_target[2];
			if (wcscmp(fieldName, L"exec_filter_target_4") == 0) return exec_filter_target[3];
			if (wcscmp(fieldName, L"exec_filter_target_5") == 0) return exec_filter_target[4];
			if (wcscmp(fieldName, L"exec_filter_target_6") == 0) return exec_filter_target[5];
			if (wcscmp(fieldName, L"exec_filter_target_7") == 0) return exec_filter_target[6];
			if (wcscmp(fieldName, L"exec_filter_target_8") == 0) return exec_filter_target[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"fire_filter_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[0]));
			if (wcscmp(fieldName, L"fire_filter_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[1]));
			if (wcscmp(fieldName, L"fire_filter_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[2]));
			if (wcscmp(fieldName, L"fire_filter_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[3]));
			if (wcscmp(fieldName, L"fire_filter_target_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[4]));
			if (wcscmp(fieldName, L"fire_filter_target_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[5]));
			if (wcscmp(fieldName, L"fire_filter_target_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[6]));
			if (wcscmp(fieldName, L"fire_filter_target_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fire_filter_target[7]));
			if (wcscmp(fieldName, L"exec_filter_target_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[0]));
			if (wcscmp(fieldName, L"exec_filter_target_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[1]));
			if (wcscmp(fieldName, L"exec_filter_target_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[2]));
			if (wcscmp(fieldName, L"exec_filter_target_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[3]));
			if (wcscmp(fieldName, L"exec_filter_target_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[4]));
			if (wcscmp(fieldName, L"exec_filter_target_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[5]));
			if (wcscmp(fieldName, L"exec_filter_target_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[6]));
			if (wcscmp(fieldName, L"exec_filter_target_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(exec_filter_target[7]));

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
Data::TableRef fire_filter_target[8];
int fire_filter_target_tableId(){return 141;};
Data::TableRef exec_filter_target[8];
int exec_filter_target_tableId(){return 141;};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 349; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skilltargetfilter3_RecordPtr // : DrRecordPtr
	{
		skilltargetfilter3_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skilltargetfilter3_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}