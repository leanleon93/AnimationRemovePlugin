/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct relic_symbol_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"imageset") == 0) return imageset;
			if (wcscmp(fieldName, L"imageset_1") == 0) return imageset[0];
			if (wcscmp(fieldName, L"imageset_2") == 0) return imageset[1];
			if (wcscmp(fieldName, L"imageset_3") == 0) return imageset[2];
			if (wcscmp(fieldName, L"imageset_4") == 0) return imageset[3];
			if (wcscmp(fieldName, L"imageset_5") == 0) return imageset[4];
			if (wcscmp(fieldName, L"imageset_6") == 0) return imageset[5];
			if (wcscmp(fieldName, L"imageset_7") == 0) return imageset[6];
			if (wcscmp(fieldName, L"imageset_8") == 0) return imageset[7];
			if (wcscmp(fieldName, L"imageset_9") == 0) return imageset[8];
			if (wcscmp(fieldName, L"indexes_1") == 0) return indexes_1;
			if (wcscmp(fieldName, L"indexes_1_1") == 0) return indexes_1[0];
			if (wcscmp(fieldName, L"indexes_1_2") == 0) return indexes_1[1];
			if (wcscmp(fieldName, L"indexes_1_3") == 0) return indexes_1[2];
			if (wcscmp(fieldName, L"indexes_1_4") == 0) return indexes_1[3];
			if (wcscmp(fieldName, L"indexes_2") == 0) return indexes_2;
			if (wcscmp(fieldName, L"indexes_2_1") == 0) return indexes_2[0];
			if (wcscmp(fieldName, L"indexes_2_2") == 0) return indexes_2[1];
			if (wcscmp(fieldName, L"indexes_2_3") == 0) return indexes_2[2];
			if (wcscmp(fieldName, L"indexes_2_4") == 0) return indexes_2[3];
			if (wcscmp(fieldName, L"indexes_3") == 0) return indexes_3;
			if (wcscmp(fieldName, L"indexes_3_1") == 0) return indexes_3[0];
			if (wcscmp(fieldName, L"indexes_3_2") == 0) return indexes_3[1];
			if (wcscmp(fieldName, L"indexes_3_3") == 0) return indexes_3[2];
			if (wcscmp(fieldName, L"indexes_3_4") == 0) return indexes_3[3];
			if (wcscmp(fieldName, L"indexes_4") == 0) return indexes_4;
			if (wcscmp(fieldName, L"indexes_4_1") == 0) return indexes_4[0];
			if (wcscmp(fieldName, L"indexes_4_2") == 0) return indexes_4[1];
			if (wcscmp(fieldName, L"indexes_4_3") == 0) return indexes_4[2];
			if (wcscmp(fieldName, L"indexes_4_4") == 0) return indexes_4[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"imageset_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[0]));
			if (wcscmp(fieldName, L"imageset_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[1]));
			if (wcscmp(fieldName, L"imageset_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[2]));
			if (wcscmp(fieldName, L"imageset_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[3]));
			if (wcscmp(fieldName, L"imageset_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[4]));
			if (wcscmp(fieldName, L"imageset_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[5]));
			if (wcscmp(fieldName, L"imageset_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[6]));
			if (wcscmp(fieldName, L"imageset_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[7]));
			if (wcscmp(fieldName, L"imageset_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(imageset[8]));
			if (wcscmp(fieldName, L"indexes_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_1[0]));
			if (wcscmp(fieldName, L"indexes_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_1[1]));
			if (wcscmp(fieldName, L"indexes_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_1[2]));
			if (wcscmp(fieldName, L"indexes_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_1[3]));
			if (wcscmp(fieldName, L"indexes_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_2[0]));
			if (wcscmp(fieldName, L"indexes_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_2[1]));
			if (wcscmp(fieldName, L"indexes_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_2[2]));
			if (wcscmp(fieldName, L"indexes_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_2[3]));
			if (wcscmp(fieldName, L"indexes_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_3[0]));
			if (wcscmp(fieldName, L"indexes_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_3[1]));
			if (wcscmp(fieldName, L"indexes_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_3[2]));
			if (wcscmp(fieldName, L"indexes_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_3[3]));
			if (wcscmp(fieldName, L"indexes_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_4[0]));
			if (wcscmp(fieldName, L"indexes_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_4[1]));
			if (wcscmp(fieldName, L"indexes_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_4[2]));
			if (wcscmp(fieldName, L"indexes_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(indexes_4[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 9; i++) {
				if (reinterpret_cast<std::uintptr_t>(imageset[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) imageset[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(imageset[i]));
			}
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* imageset[9];
bool indexes_1[4];
bool indexes_2[4];
bool indexes_3[4];
bool indexes_4[4];

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 310; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) relic_symbol_RecordPtr // : DrRecordPtr
	{
		relic_symbol_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::relic_symbol_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}