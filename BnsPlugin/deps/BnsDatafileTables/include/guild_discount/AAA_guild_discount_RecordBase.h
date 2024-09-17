/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guild_discount_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item_growth") == 0) return item_growth;
			if (wcscmp(fieldName, L"item_awakening") == 0) return item_awakening;
			if (wcscmp(fieldName, L"weapon_tranform") == 0) return weapon_tranform;
			if (wcscmp(fieldName, L"accessory_tranform") == 0) return accessory_tranform;
			if (wcscmp(fieldName, L"weapon_gem_tranform") == 0) return weapon_gem_tranform;
			if (wcscmp(fieldName, L"pet_gem_tranform") == 0) return pet_gem_tranform;
			if (wcscmp(fieldName, L"post_charge_discount_rate") == 0) return post_charge_discount_rate;
			if (wcscmp(fieldName, L"post_charge_discount_max") == 0) return post_charge_discount_max;
			if (wcscmp(fieldName, L"detach_weapon_gem_money_cost_discount_rate") == 0) return detach_weapon_gem_money_cost_discount_rate;
			if (wcscmp(fieldName, L"purify_item_discount_rate") == 0) return purify_item_discount_rate;
			if (wcscmp(fieldName, L"item_improve") == 0) return item_improve;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item_growth") == 0) return Data::AnyFieldToStringConverter::ToString(&item_growth);
			if (wcscmp(fieldName, L"item_awakening") == 0) return Data::AnyFieldToStringConverter::ToString(&item_awakening);
			if (wcscmp(fieldName, L"weapon_tranform") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_tranform);
			if (wcscmp(fieldName, L"accessory_tranform") == 0) return Data::AnyFieldToStringConverter::ToString(&accessory_tranform);
			if (wcscmp(fieldName, L"weapon_gem_tranform") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_gem_tranform);
			if (wcscmp(fieldName, L"pet_gem_tranform") == 0) return Data::AnyFieldToStringConverter::ToString(&pet_gem_tranform);
			if (wcscmp(fieldName, L"post_charge_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&post_charge_discount_rate);
			if (wcscmp(fieldName, L"post_charge_discount_max") == 0) return Data::AnyFieldToStringConverter::ToString(&post_charge_discount_max);
			if (wcscmp(fieldName, L"detach_weapon_gem_money_cost_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&detach_weapon_gem_money_cost_discount_rate);
			if (wcscmp(fieldName, L"purify_item_discount_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&purify_item_discount_rate);
			if (wcscmp(fieldName, L"item_improve") == 0) return Data::AnyFieldToStringConverter::ToString(&item_improve);

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
__int8 item_growth;
__int8 item_awakening;
__int8 weapon_tranform;
__int8 accessory_tranform;
__int8 weapon_gem_tranform;
__int8 pet_gem_tranform;
__int8 post_charge_discount_rate;
char Pad0[1];
__int32 post_charge_discount_max;
__int8 detach_weapon_gem_money_cost_discount_rate;
__int8 purify_item_discount_rate;
__int8 item_improve;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 167; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guild_discount_RecordPtr // : DrRecordPtr
	{
		guild_discount_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guild_discount_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}