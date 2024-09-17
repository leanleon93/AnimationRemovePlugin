/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct itemgearscore_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"weapon_min") == 0) return weapon_min;
			if (wcscmp(fieldName, L"weapon_max") == 0) return weapon_max;
			if (wcscmp(fieldName, L"ring_min") == 0) return ring_min;
			if (wcscmp(fieldName, L"ring_max") == 0) return ring_max;
			if (wcscmp(fieldName, L"earring_min") == 0) return earring_min;
			if (wcscmp(fieldName, L"earring_max") == 0) return earring_max;
			if (wcscmp(fieldName, L"necklace_min") == 0) return necklace_min;
			if (wcscmp(fieldName, L"necklace_max") == 0) return necklace_max;
			if (wcscmp(fieldName, L"bracelet_min") == 0) return bracelet_min;
			if (wcscmp(fieldName, L"bracelet_max") == 0) return bracelet_max;
			if (wcscmp(fieldName, L"belt_min") == 0) return belt_min;
			if (wcscmp(fieldName, L"belt_max") == 0) return belt_max;
			if (wcscmp(fieldName, L"soul_min") == 0) return soul_min;
			if (wcscmp(fieldName, L"soul_max") == 0) return soul_max;
			if (wcscmp(fieldName, L"soul_2_min") == 0) return soul_2_min;
			if (wcscmp(fieldName, L"soul_2_max") == 0) return soul_2_max;
			if (wcscmp(fieldName, L"pet_1_min") == 0) return pet_1_min;
			if (wcscmp(fieldName, L"pet_1_max") == 0) return pet_1_max;
			if (wcscmp(fieldName, L"rune_1_min") == 0) return rune_1_min;
			if (wcscmp(fieldName, L"rune_1_max") == 0) return rune_1_max;
			if (wcscmp(fieldName, L"rune_2_min") == 0) return rune_2_min;
			if (wcscmp(fieldName, L"rune_2_max") == 0) return rune_2_max;
			if (wcscmp(fieldName, L"gloves_min") == 0) return gloves_min;
			if (wcscmp(fieldName, L"gloves_max") == 0) return gloves_max;
			if (wcscmp(fieldName, L"nova_min") == 0) return nova_min;
			if (wcscmp(fieldName, L"nova_max") == 0) return nova_max;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"weapon_min") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_min);
			if (wcscmp(fieldName, L"weapon_max") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_max);
			if (wcscmp(fieldName, L"ring_min") == 0) return Data::AnyFieldToStringConverter::ToString(&ring_min);
			if (wcscmp(fieldName, L"ring_max") == 0) return Data::AnyFieldToStringConverter::ToString(&ring_max);
			if (wcscmp(fieldName, L"earring_min") == 0) return Data::AnyFieldToStringConverter::ToString(&earring_min);
			if (wcscmp(fieldName, L"earring_max") == 0) return Data::AnyFieldToStringConverter::ToString(&earring_max);
			if (wcscmp(fieldName, L"necklace_min") == 0) return Data::AnyFieldToStringConverter::ToString(&necklace_min);
			if (wcscmp(fieldName, L"necklace_max") == 0) return Data::AnyFieldToStringConverter::ToString(&necklace_max);
			if (wcscmp(fieldName, L"bracelet_min") == 0) return Data::AnyFieldToStringConverter::ToString(&bracelet_min);
			if (wcscmp(fieldName, L"bracelet_max") == 0) return Data::AnyFieldToStringConverter::ToString(&bracelet_max);
			if (wcscmp(fieldName, L"belt_min") == 0) return Data::AnyFieldToStringConverter::ToString(&belt_min);
			if (wcscmp(fieldName, L"belt_max") == 0) return Data::AnyFieldToStringConverter::ToString(&belt_max);
			if (wcscmp(fieldName, L"soul_min") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_min);
			if (wcscmp(fieldName, L"soul_max") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_max);
			if (wcscmp(fieldName, L"soul_2_min") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_2_min);
			if (wcscmp(fieldName, L"soul_2_max") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_2_max);
			if (wcscmp(fieldName, L"pet_1_min") == 0) return Data::AnyFieldToStringConverter::ToString(&pet_1_min);
			if (wcscmp(fieldName, L"pet_1_max") == 0) return Data::AnyFieldToStringConverter::ToString(&pet_1_max);
			if (wcscmp(fieldName, L"rune_1_min") == 0) return Data::AnyFieldToStringConverter::ToString(&rune_1_min);
			if (wcscmp(fieldName, L"rune_1_max") == 0) return Data::AnyFieldToStringConverter::ToString(&rune_1_max);
			if (wcscmp(fieldName, L"rune_2_min") == 0) return Data::AnyFieldToStringConverter::ToString(&rune_2_min);
			if (wcscmp(fieldName, L"rune_2_max") == 0) return Data::AnyFieldToStringConverter::ToString(&rune_2_max);
			if (wcscmp(fieldName, L"gloves_min") == 0) return Data::AnyFieldToStringConverter::ToString(&gloves_min);
			if (wcscmp(fieldName, L"gloves_max") == 0) return Data::AnyFieldToStringConverter::ToString(&gloves_max);
			if (wcscmp(fieldName, L"nova_min") == 0) return Data::AnyFieldToStringConverter::ToString(&nova_min);
			if (wcscmp(fieldName, L"nova_max") == 0) return Data::AnyFieldToStringConverter::ToString(&nova_max);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int8 level;
__int8 mastery_level;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 weapon_min;
__int32 weapon_max;
__int32 ring_min;
__int32 ring_max;
__int32 earring_min;
__int32 earring_max;
__int32 necklace_min;
__int32 necklace_max;
__int32 bracelet_min;
__int32 bracelet_max;
__int32 belt_min;
__int32 belt_max;
__int32 soul_min;
__int32 soul_max;
__int32 soul_2_min;
__int32 soul_2_max;
__int32 pet_1_min;
__int32 pet_1_max;
__int32 rune_1_min;
__int32 rune_1_max;
__int32 rune_2_min;
__int32 rune_2_max;
__int32 gloves_min;
__int32 gloves_max;
__int32 nova_min;
__int32 nova_max;

		static TableVersion Version() { return TableVersion(0, 4); }
		static __int16 TableId() { return 193; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) itemgearscore_RecordPtr // : DrRecordPtr
	{
		itemgearscore_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::itemgearscore_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}