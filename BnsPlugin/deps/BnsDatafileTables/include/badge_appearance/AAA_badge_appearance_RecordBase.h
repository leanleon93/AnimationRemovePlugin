/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct badge_appearance_Record : DrEl
	{
	private:
		static std::wstring Get_apperance_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"apperance_type") == 0) return apperance_type;
			if (wcscmp(fieldName, L"item_alias") == 0) return item_alias;
			if (wcscmp(fieldName, L"set_score") == 0) return set_score;
			if (wcscmp(fieldName, L"set_score_1") == 0) return set_score[0];
			if (wcscmp(fieldName, L"set_score_2") == 0) return set_score[1];
			if (wcscmp(fieldName, L"set_score_3") == 0) return set_score[2];
			if (wcscmp(fieldName, L"set_score_4") == 0) return set_score[3];
			if (wcscmp(fieldName, L"set_score_5") == 0) return set_score[4];
			if (wcscmp(fieldName, L"set_score_6") == 0) return set_score[5];
			if (wcscmp(fieldName, L"set_score_7") == 0) return set_score[6];
			if (wcscmp(fieldName, L"set_score_8") == 0) return set_score[7];
			if (wcscmp(fieldName, L"set_score_9") == 0) return set_score[8];
			if (wcscmp(fieldName, L"set_score_10") == 0) return set_score[9];
			if (wcscmp(fieldName, L"set_score_11") == 0) return set_score[10];
			if (wcscmp(fieldName, L"set_score_12") == 0) return set_score[11];
			if (wcscmp(fieldName, L"set_score_13") == 0) return set_score[12];
			if (wcscmp(fieldName, L"set_score_14") == 0) return set_score[13];
			if (wcscmp(fieldName, L"apperance_begin_show") == 0) return apperance_begin_show;
			if (wcscmp(fieldName, L"apperance_begin_show_1") == 0) return apperance_begin_show[0];
			if (wcscmp(fieldName, L"apperance_begin_show_2") == 0) return apperance_begin_show[1];
			if (wcscmp(fieldName, L"apperance_begin_show_3") == 0) return apperance_begin_show[2];
			if (wcscmp(fieldName, L"apperance_begin_show_4") == 0) return apperance_begin_show[3];
			if (wcscmp(fieldName, L"apperance_begin_show_5") == 0) return apperance_begin_show[4];
			if (wcscmp(fieldName, L"apperance_begin_show_6") == 0) return apperance_begin_show[5];
			if (wcscmp(fieldName, L"apperance_begin_show_7") == 0) return apperance_begin_show[6];
			if (wcscmp(fieldName, L"apperance_begin_show_8") == 0) return apperance_begin_show[7];
			if (wcscmp(fieldName, L"apperance_begin_show_9") == 0) return apperance_begin_show[8];
			if (wcscmp(fieldName, L"apperance_begin_show_10") == 0) return apperance_begin_show[9];
			if (wcscmp(fieldName, L"apperance_begin_show_11") == 0) return apperance_begin_show[10];
			if (wcscmp(fieldName, L"apperance_begin_show_12") == 0) return apperance_begin_show[11];
			if (wcscmp(fieldName, L"apperance_begin_show_13") == 0) return apperance_begin_show[12];
			if (wcscmp(fieldName, L"apperance_begin_show_14") == 0) return apperance_begin_show[13];
			if (wcscmp(fieldName, L"apperance_end_show") == 0) return apperance_end_show;
			if (wcscmp(fieldName, L"apperance_end_show_1") == 0) return apperance_end_show[0];
			if (wcscmp(fieldName, L"apperance_end_show_2") == 0) return apperance_end_show[1];
			if (wcscmp(fieldName, L"apperance_end_show_3") == 0) return apperance_end_show[2];
			if (wcscmp(fieldName, L"apperance_end_show_4") == 0) return apperance_end_show[3];
			if (wcscmp(fieldName, L"apperance_end_show_5") == 0) return apperance_end_show[4];
			if (wcscmp(fieldName, L"apperance_end_show_6") == 0) return apperance_end_show[5];
			if (wcscmp(fieldName, L"apperance_end_show_7") == 0) return apperance_end_show[6];
			if (wcscmp(fieldName, L"apperance_end_show_8") == 0) return apperance_end_show[7];
			if (wcscmp(fieldName, L"apperance_end_show_9") == 0) return apperance_end_show[8];
			if (wcscmp(fieldName, L"apperance_end_show_10") == 0) return apperance_end_show[9];
			if (wcscmp(fieldName, L"apperance_end_show_11") == 0) return apperance_end_show[10];
			if (wcscmp(fieldName, L"apperance_end_show_12") == 0) return apperance_end_show[11];
			if (wcscmp(fieldName, L"apperance_end_show_13") == 0) return apperance_end_show[12];
			if (wcscmp(fieldName, L"apperance_end_show_14") == 0) return apperance_end_show[13];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"apperance_type") == 0) return Data::AnyFieldToStringConverter::ToString(&apperance_type);
			if (wcscmp(fieldName, L"item_alias") == 0) return Data::AnyFieldToStringConverter::ToString(&item_alias);
			if (wcscmp(fieldName, L"set_score_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[0]));
			if (wcscmp(fieldName, L"set_score_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[1]));
			if (wcscmp(fieldName, L"set_score_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[2]));
			if (wcscmp(fieldName, L"set_score_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[3]));
			if (wcscmp(fieldName, L"set_score_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[4]));
			if (wcscmp(fieldName, L"set_score_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[5]));
			if (wcscmp(fieldName, L"set_score_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[6]));
			if (wcscmp(fieldName, L"set_score_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[7]));
			if (wcscmp(fieldName, L"set_score_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[8]));
			if (wcscmp(fieldName, L"set_score_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[9]));
			if (wcscmp(fieldName, L"set_score_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[10]));
			if (wcscmp(fieldName, L"set_score_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[11]));
			if (wcscmp(fieldName, L"set_score_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[12]));
			if (wcscmp(fieldName, L"set_score_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(set_score[13]));
			if (wcscmp(fieldName, L"apperance_begin_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[0]));
			if (wcscmp(fieldName, L"apperance_begin_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[1]));
			if (wcscmp(fieldName, L"apperance_begin_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[2]));
			if (wcscmp(fieldName, L"apperance_begin_show_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[3]));
			if (wcscmp(fieldName, L"apperance_begin_show_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[4]));
			if (wcscmp(fieldName, L"apperance_begin_show_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[5]));
			if (wcscmp(fieldName, L"apperance_begin_show_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[6]));
			if (wcscmp(fieldName, L"apperance_begin_show_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[7]));
			if (wcscmp(fieldName, L"apperance_begin_show_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[8]));
			if (wcscmp(fieldName, L"apperance_begin_show_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[9]));
			if (wcscmp(fieldName, L"apperance_begin_show_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[10]));
			if (wcscmp(fieldName, L"apperance_begin_show_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[11]));
			if (wcscmp(fieldName, L"apperance_begin_show_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[12]));
			if (wcscmp(fieldName, L"apperance_begin_show_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_begin_show[13]));
			if (wcscmp(fieldName, L"apperance_end_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[0]));
			if (wcscmp(fieldName, L"apperance_end_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[1]));
			if (wcscmp(fieldName, L"apperance_end_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[2]));
			if (wcscmp(fieldName, L"apperance_end_show_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[3]));
			if (wcscmp(fieldName, L"apperance_end_show_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[4]));
			if (wcscmp(fieldName, L"apperance_end_show_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[5]));
			if (wcscmp(fieldName, L"apperance_end_show_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[6]));
			if (wcscmp(fieldName, L"apperance_end_show_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[7]));
			if (wcscmp(fieldName, L"apperance_end_show_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[8]));
			if (wcscmp(fieldName, L"apperance_end_show_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[9]));
			if (wcscmp(fieldName, L"apperance_end_show_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[10]));
			if (wcscmp(fieldName, L"apperance_end_show_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[11]));
			if (wcscmp(fieldName, L"apperance_end_show_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[12]));
			if (wcscmp(fieldName, L"apperance_end_show_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(apperance_end_show[13]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 14; i++) {
				if (reinterpret_cast<std::uintptr_t>(apperance_begin_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) apperance_begin_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(apperance_begin_show[i]));
			}
			for (int i = 0; i < 14; i++) {
				if (reinterpret_cast<std::uintptr_t>(apperance_end_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) apperance_end_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(apperance_end_show[i]));
			}
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int8 apperance_type;
std::wstring apperance_type_EnumValue() const {return Get_apperance_type_EnumValue(apperance_type);};
char Pad0[3];
Data::TableRef item_alias;
int item_alias_tableId(){return 189;};
__int32 set_score[14];
wchar_t* apperance_begin_show[14];
wchar_t* apperance_end_show[14];

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 26; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) badge_appearance_RecordPtr // : DrRecordPtr
	{
		badge_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::badge_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}