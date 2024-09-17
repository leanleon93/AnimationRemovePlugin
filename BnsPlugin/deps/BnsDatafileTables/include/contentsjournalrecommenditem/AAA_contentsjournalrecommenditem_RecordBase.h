/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contentsjournalrecommenditem_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"weapon_recommend_score") == 0) return weapon_recommend_score;
			if (wcscmp(fieldName, L"necklace_recommend_score") == 0) return necklace_recommend_score;
			if (wcscmp(fieldName, L"earring_recommend_score") == 0) return earring_recommend_score;
			if (wcscmp(fieldName, L"ring_recommend_score") == 0) return ring_recommend_score;
			if (wcscmp(fieldName, L"bracelet_recommend_score") == 0) return bracelet_recommend_score;
			if (wcscmp(fieldName, L"belt_recommend_score") == 0) return belt_recommend_score;
			if (wcscmp(fieldName, L"gloves_recommend_score") == 0) return gloves_recommend_score;
			if (wcscmp(fieldName, L"soul_1_recommend_score") == 0) return soul_1_recommend_score;
			if (wcscmp(fieldName, L"soul_2_recommend_score") == 0) return soul_2_recommend_score;
			if (wcscmp(fieldName, L"pet_recommend_score") == 0) return pet_recommend_score;
			if (wcscmp(fieldName, L"rune_1_recommend_score") == 0) return rune_1_recommend_score;
			if (wcscmp(fieldName, L"rune_2_recommend_score") == 0) return rune_2_recommend_score;
			if (wcscmp(fieldName, L"nova_recommend_score") == 0) return nova_recommend_score;
			if (wcscmp(fieldName, L"skill_stone_1_recommend_score") == 0) return skill_stone_1_recommend_score;
			if (wcscmp(fieldName, L"skill_stone_2_recommend_score") == 0) return skill_stone_2_recommend_score;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"weapon_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&weapon_recommend_score);
			if (wcscmp(fieldName, L"necklace_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&necklace_recommend_score);
			if (wcscmp(fieldName, L"earring_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&earring_recommend_score);
			if (wcscmp(fieldName, L"ring_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&ring_recommend_score);
			if (wcscmp(fieldName, L"bracelet_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&bracelet_recommend_score);
			if (wcscmp(fieldName, L"belt_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&belt_recommend_score);
			if (wcscmp(fieldName, L"gloves_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&gloves_recommend_score);
			if (wcscmp(fieldName, L"soul_1_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_1_recommend_score);
			if (wcscmp(fieldName, L"soul_2_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&soul_2_recommend_score);
			if (wcscmp(fieldName, L"pet_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&pet_recommend_score);
			if (wcscmp(fieldName, L"rune_1_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&rune_1_recommend_score);
			if (wcscmp(fieldName, L"rune_2_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&rune_2_recommend_score);
			if (wcscmp(fieldName, L"nova_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&nova_recommend_score);
			if (wcscmp(fieldName, L"skill_stone_1_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_stone_1_recommend_score);
			if (wcscmp(fieldName, L"skill_stone_2_recommend_score") == 0) return Data::AnyFieldToStringConverter::ToString(&skill_stone_2_recommend_score);

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
__int32 weapon_recommend_score;
__int32 necklace_recommend_score;
__int32 earring_recommend_score;
__int32 ring_recommend_score;
__int32 bracelet_recommend_score;
__int32 belt_recommend_score;
__int32 gloves_recommend_score;
__int32 soul_1_recommend_score;
__int32 soul_2_recommend_score;
__int32 pet_recommend_score;
__int32 rune_1_recommend_score;
__int32 rune_2_recommend_score;
__int32 nova_recommend_score;
__int32 skill_stone_1_recommend_score;
__int32 skill_stone_2_recommend_score;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 71; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentsjournalrecommenditem_RecordPtr // : DrRecordPtr
	{
		contentsjournalrecommenditem_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contentsjournalrecommenditem_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}