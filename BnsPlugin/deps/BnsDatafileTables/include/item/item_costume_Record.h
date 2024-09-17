/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_costume_Record : item_Record
	{
	private:
		static std::wstring Get_custom_dress_design_state_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = item_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"guild_used") == 0) return guild_used;
			if (wcscmp(fieldName, L"closet_group_id") == 0) return closet_group_id;
			if (wcscmp(fieldName, L"talk_social") == 0) return talk_social;
			if (wcscmp(fieldName, L"pair_costume") == 0) return pair_costume;
			if (wcscmp(fieldName, L"pair_costume_brand") == 0) return pair_costume_brand;
			if (wcscmp(fieldName, L"pair_costume_signal_show") == 0) return pair_costume_signal_show;
			if (wcscmp(fieldName, L"pair_costume_signal_detach_show") == 0) return pair_costume_signal_detach_show;
			if (wcscmp(fieldName, L"custom_dress_design_state") == 0) return custom_dress_design_state;
			if (wcscmp(fieldName, L"skill_skin") == 0) return skill_skin;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = item_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"guild_used") == 0) return Data::AnyFieldToStringConverter::ToString(&guild_used);
			if (wcscmp(fieldName, L"closet_group_id") == 0) return Data::AnyFieldToStringConverter::ToString(&closet_group_id);
			if (wcscmp(fieldName, L"talk_social") == 0) return Data::AnyFieldToStringConverter::ToString(&talk_social);
			if (wcscmp(fieldName, L"pair_costume") == 0) return Data::AnyFieldToStringConverter::ToString(&pair_costume);
			if (wcscmp(fieldName, L"pair_costume_brand") == 0) return Data::AnyFieldToStringConverter::ToString(&pair_costume_brand);
			if (wcscmp(fieldName, L"pair_costume_signal_show") == 0) return Data::AnyFieldToStringConverter::ToString(&pair_costume_signal_show);
			if (wcscmp(fieldName, L"pair_costume_signal_detach_show") == 0) return Data::AnyFieldToStringConverter::ToString(&pair_costume_signal_detach_show);
			if (wcscmp(fieldName, L"custom_dress_design_state") == 0) return Data::AnyFieldToStringConverter::ToString(&custom_dress_design_state);
			if (wcscmp(fieldName, L"skill_skin") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_skin);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			item_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			if (reinterpret_cast<std::uintptr_t>(pair_costume_signal_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pair_costume_signal_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pair_costume_signal_show));
			else return;
			if (reinterpret_cast<std::uintptr_t>(pair_costume_signal_detach_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) pair_costume_signal_detach_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(pair_costume_signal_detach_show));
		}
		char Pad_sub_0[3];
bool guild_used;
char Pad_sub_1[3];
__int32 closet_group_id;
Data::TableRef talk_social;
int talk_social_tableId(){return 399;};
Data::TableRef pair_costume;
int pair_costume_tableId(){return 189;};
Data::TableRef pair_costume_brand;
int pair_costume_brand_tableId(){return 183;};
wchar_t* pair_costume_signal_show;
wchar_t* pair_costume_signal_detach_show;
__int8 custom_dress_design_state;
std::wstring custom_dress_design_state_EnumValue() const {return Get_custom_dress_design_state_EnumValue(custom_dress_design_state);};
char Pad_sub_2[3];
Data::TableRef skill_skin;
int skill_skin_tableId(){return 344;};

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}