/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct ranking2_contents_Record : DrEl
	{
	private:
		static std::wstring Get_contents_type_EnumValue(__int8 value);
		static std::wstring Get_player_type_EnumValue(__int8 value);
		static std::wstring Get_score_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"contents_type") == 0) return contents_type;
			if (wcscmp(fieldName, L"player_type") == 0) return player_type;
			if (wcscmp(fieldName, L"score_type") == 0) return score_type;
			if (wcscmp(fieldName, L"minimum_score") == 0) return minimum_score;
			if (wcscmp(fieldName, L"contents_banner_img") == 0) return contents_banner_img;
			if (wcscmp(fieldName, L"contents_name") == 0) return contents_name;
			if (wcscmp(fieldName, L"sort_number") == 0) return sort_number;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"contents_type") == 0) return Data::AnyFieldToStringConverter::ToString(&contents_type);
			if (wcscmp(fieldName, L"player_type") == 0) return Data::AnyFieldToStringConverter::ToString(&player_type);
			if (wcscmp(fieldName, L"score_type") == 0) return Data::AnyFieldToStringConverter::ToString(&score_type);
			if (wcscmp(fieldName, L"minimum_score") == 0) return Data::AnyFieldToStringConverter::ToString(&minimum_score);
			if (wcscmp(fieldName, L"contents_banner_img") == 0) return Data::AnyFieldToStringConverter::ToString(&contents_banner_img);
			if (wcscmp(fieldName, L"contents_name") == 0) return Data::AnyFieldToStringConverter::ToString(&contents_name);
			if (wcscmp(fieldName, L"sort_number") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_number);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(contents_banner_img) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) contents_banner_img = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(contents_banner_img));
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
__int8 contents_type;
std::wstring contents_type_EnumValue() const {return Get_contents_type_EnumValue(contents_type);};
__int8 player_type;
std::wstring player_type_EnumValue() const {return Get_player_type_EnumValue(player_type);};
__int8 score_type;
std::wstring score_type_EnumValue() const {return Get_score_type_EnumValue(score_type);};
char Pad0[1];
__int32 minimum_score;
wchar_t* contents_banner_img;
Data::TableRef contents_name;
int contents_name_tableId(){return 405;};
__int8 sort_number;

		static TableVersion Version() { return TableVersion(9, 1); }
		static __int16 TableId() { return 296; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) ranking2_contents_RecordPtr // : DrRecordPtr
	{
		ranking2_contents_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::ranking2_contents_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}