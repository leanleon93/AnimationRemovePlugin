/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct feedback_rank_Record : DrEl
	{
	private:
		static std::wstring Get_rank_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"rank_type") == 0) return rank_type;
			if (wcscmp(fieldName, L"rank_score") == 0) return rank_score;
			if (wcscmp(fieldName, L"rank_score_1") == 0) return rank_score[0];
			if (wcscmp(fieldName, L"rank_score_2") == 0) return rank_score[1];
			if (wcscmp(fieldName, L"rank_score_3") == 0) return rank_score[2];
			if (wcscmp(fieldName, L"rank_score_4") == 0) return rank_score[3];
			if (wcscmp(fieldName, L"rank_score_5") == 0) return rank_score[4];
			if (wcscmp(fieldName, L"rank_score_6") == 0) return rank_score[5];
			if (wcscmp(fieldName, L"rank_score_7") == 0) return rank_score[6];
			if (wcscmp(fieldName, L"rank_score_8") == 0) return rank_score[7];
			if (wcscmp(fieldName, L"rank_score_9") == 0) return rank_score[8];
			if (wcscmp(fieldName, L"rank_score_10") == 0) return rank_score[9];
			if (wcscmp(fieldName, L"rank_title") == 0) return rank_title;
			if (wcscmp(fieldName, L"rank_title_1") == 0) return rank_title[0];
			if (wcscmp(fieldName, L"rank_title_2") == 0) return rank_title[1];
			if (wcscmp(fieldName, L"rank_title_3") == 0) return rank_title[2];
			if (wcscmp(fieldName, L"rank_title_4") == 0) return rank_title[3];
			if (wcscmp(fieldName, L"rank_title_5") == 0) return rank_title[4];
			if (wcscmp(fieldName, L"rank_title_6") == 0) return rank_title[5];
			if (wcscmp(fieldName, L"rank_title_7") == 0) return rank_title[6];
			if (wcscmp(fieldName, L"rank_title_8") == 0) return rank_title[7];
			if (wcscmp(fieldName, L"rank_title_9") == 0) return rank_title[8];
			if (wcscmp(fieldName, L"rank_title_10") == 0) return rank_title[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"rank_type") == 0) return Data::AnyFieldToStringConverter::ToString(&rank_type);
			if (wcscmp(fieldName, L"rank_score_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[0]));
			if (wcscmp(fieldName, L"rank_score_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[1]));
			if (wcscmp(fieldName, L"rank_score_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[2]));
			if (wcscmp(fieldName, L"rank_score_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[3]));
			if (wcscmp(fieldName, L"rank_score_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[4]));
			if (wcscmp(fieldName, L"rank_score_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[5]));
			if (wcscmp(fieldName, L"rank_score_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[6]));
			if (wcscmp(fieldName, L"rank_score_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[7]));
			if (wcscmp(fieldName, L"rank_score_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[8]));
			if (wcscmp(fieldName, L"rank_score_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_score[9]));
			if (wcscmp(fieldName, L"rank_title_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[0]));
			if (wcscmp(fieldName, L"rank_title_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[1]));
			if (wcscmp(fieldName, L"rank_title_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[2]));
			if (wcscmp(fieldName, L"rank_title_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[3]));
			if (wcscmp(fieldName, L"rank_title_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[4]));
			if (wcscmp(fieldName, L"rank_title_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[5]));
			if (wcscmp(fieldName, L"rank_title_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[6]));
			if (wcscmp(fieldName, L"rank_title_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[7]));
			if (wcscmp(fieldName, L"rank_title_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[8]));
			if (wcscmp(fieldName, L"rank_title_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(rank_title[9]));

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
__int8 rank_type;
std::wstring rank_type_EnumValue() const {return Get_rank_type_EnumValue(rank_type);};
char Pad0[3];
__int32 rank_score[10];
Data::TableRef rank_title[10];
int rank_title_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 134; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) feedback_rank_RecordPtr // : DrRecordPtr
	{
		feedback_rank_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::feedback_rank_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}