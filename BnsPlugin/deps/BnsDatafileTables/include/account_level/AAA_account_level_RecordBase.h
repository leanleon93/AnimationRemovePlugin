/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct account_level_Record : DrEl
	{
	private:
		static std::wstring Get_ability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"exp") == 0) return exp;
			if (wcscmp(fieldName, L"ability") == 0) return ability;
			if (wcscmp(fieldName, L"ability_1") == 0) return ability[0];
			if (wcscmp(fieldName, L"ability_2") == 0) return ability[1];
			if (wcscmp(fieldName, L"ability_3") == 0) return ability[2];
			if (wcscmp(fieldName, L"ability_4") == 0) return ability[3];
			if (wcscmp(fieldName, L"ability_5") == 0) return ability[4];
			if (wcscmp(fieldName, L"ability_6") == 0) return ability[5];
			if (wcscmp(fieldName, L"ability_7") == 0) return ability[6];
			if (wcscmp(fieldName, L"ability_8") == 0) return ability[7];
			if (wcscmp(fieldName, L"ability_value") == 0) return ability_value;
			if (wcscmp(fieldName, L"ability_value_1") == 0) return ability_value[0];
			if (wcscmp(fieldName, L"ability_value_2") == 0) return ability_value[1];
			if (wcscmp(fieldName, L"ability_value_3") == 0) return ability_value[2];
			if (wcscmp(fieldName, L"ability_value_4") == 0) return ability_value[3];
			if (wcscmp(fieldName, L"ability_value_5") == 0) return ability_value[4];
			if (wcscmp(fieldName, L"ability_value_6") == 0) return ability_value[5];
			if (wcscmp(fieldName, L"ability_value_7") == 0) return ability_value[6];
			if (wcscmp(fieldName, L"ability_value_8") == 0) return ability_value[7];
			if (wcscmp(fieldName, L"ability_base_value") == 0) return ability_base_value;
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return ability_base_value[0];
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return ability_base_value[1];
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return ability_base_value[2];
			if (wcscmp(fieldName, L"ability_base_value_4") == 0) return ability_base_value[3];
			if (wcscmp(fieldName, L"ability_base_value_5") == 0) return ability_base_value[4];
			if (wcscmp(fieldName, L"ability_base_value_6") == 0) return ability_base_value[5];
			if (wcscmp(fieldName, L"ability_base_value_7") == 0) return ability_base_value[6];
			if (wcscmp(fieldName, L"ability_base_value_8") == 0) return ability_base_value[7];
			if (wcscmp(fieldName, L"badge_slot_quota_category1_premium") == 0) return badge_slot_quota_category1_premium;
			if (wcscmp(fieldName, L"badge_slot_quota_category1_normal") == 0) return badge_slot_quota_category1_normal;
			if (wcscmp(fieldName, L"badge_slot_quota_category2_premium") == 0) return badge_slot_quota_category2_premium;
			if (wcscmp(fieldName, L"badge_slot_quota_category2_normal") == 0) return badge_slot_quota_category2_normal;
			if (wcscmp(fieldName, L"badge_slot_quota_category3_premium") == 0) return badge_slot_quota_category3_premium;
			if (wcscmp(fieldName, L"badge_slot_quota_category3_normal") == 0) return badge_slot_quota_category3_normal;
			if (wcscmp(fieldName, L"badge_page") == 0) return badge_page;
			if (wcscmp(fieldName, L"badge_inventory_size") == 0) return badge_inventory_size;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"exp") == 0) return Data::AnyFieldToStringConverter::ToString(&exp);
			if (wcscmp(fieldName, L"ability_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[0]));
			if (wcscmp(fieldName, L"ability_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[1]));
			if (wcscmp(fieldName, L"ability_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[2]));
			if (wcscmp(fieldName, L"ability_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[3]));
			if (wcscmp(fieldName, L"ability_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[4]));
			if (wcscmp(fieldName, L"ability_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[5]));
			if (wcscmp(fieldName, L"ability_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[6]));
			if (wcscmp(fieldName, L"ability_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability[7]));
			if (wcscmp(fieldName, L"ability_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[0]));
			if (wcscmp(fieldName, L"ability_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[1]));
			if (wcscmp(fieldName, L"ability_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[2]));
			if (wcscmp(fieldName, L"ability_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[3]));
			if (wcscmp(fieldName, L"ability_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[4]));
			if (wcscmp(fieldName, L"ability_value_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[5]));
			if (wcscmp(fieldName, L"ability_value_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[6]));
			if (wcscmp(fieldName, L"ability_value_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_value[7]));
			if (wcscmp(fieldName, L"ability_base_value_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[0]));
			if (wcscmp(fieldName, L"ability_base_value_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[1]));
			if (wcscmp(fieldName, L"ability_base_value_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[2]));
			if (wcscmp(fieldName, L"ability_base_value_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[3]));
			if (wcscmp(fieldName, L"ability_base_value_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[4]));
			if (wcscmp(fieldName, L"ability_base_value_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[5]));
			if (wcscmp(fieldName, L"ability_base_value_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[6]));
			if (wcscmp(fieldName, L"ability_base_value_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(ability_base_value[7]));
			if (wcscmp(fieldName, L"badge_slot_quota_category1_premium") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_slot_quota_category1_premium);
			if (wcscmp(fieldName, L"badge_slot_quota_category1_normal") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_slot_quota_category1_normal);
			if (wcscmp(fieldName, L"badge_slot_quota_category2_premium") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_slot_quota_category2_premium);
			if (wcscmp(fieldName, L"badge_slot_quota_category2_normal") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_slot_quota_category2_normal);
			if (wcscmp(fieldName, L"badge_slot_quota_category3_premium") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_slot_quota_category3_premium);
			if (wcscmp(fieldName, L"badge_slot_quota_category3_normal") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_slot_quota_category3_normal);
			if (wcscmp(fieldName, L"badge_page") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_page);
			if (wcscmp(fieldName, L"badge_inventory_size") == 0) return Data::AnyFieldToStringConverter::ToString(&badge_inventory_size);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int16 level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::TableRef name;
int name_tableId(){return 405;};
__int64 exp;
__int8 ability[8];
std::wstring ability_EnumValue(int index) const {return Get_ability_EnumValue(ability[index]);};
__int32 ability_value[8];
__int32 ability_base_value[8];
__int8 badge_slot_quota_category1_premium;
__int8 badge_slot_quota_category1_normal;
__int8 badge_slot_quota_category2_premium;
__int8 badge_slot_quota_category2_normal;
__int8 badge_slot_quota_category3_premium;
__int8 badge_slot_quota_category3_normal;
__int8 badge_page;
__int8 badge_inventory_size;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 4; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) account_level_RecordPtr // : DrRecordPtr
	{
		account_level_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::account_level_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}