/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct world_account_card_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"item") == 0) return item;
			if (wcscmp(fieldName, L"disabled") == 0) return disabled;
			if (wcscmp(fieldName, L"sort_no") == 0) return sort_no;
			if (wcscmp(fieldName, L"card_image") == 0) return card_image;
			if (wcscmp(fieldName, L"card_original_image") == 0) return card_original_image;
			if (wcscmp(fieldName, L"card_original_image_1") == 0) return card_original_image[0];
			if (wcscmp(fieldName, L"card_original_image_2") == 0) return card_original_image[1];
			if (wcscmp(fieldName, L"card_original_image_3") == 0) return card_original_image[2];
			if (wcscmp(fieldName, L"card_original_image_4") == 0) return card_original_image[3];
			if (wcscmp(fieldName, L"card_original_image_desc") == 0) return card_original_image_desc;
			if (wcscmp(fieldName, L"card_original_image_desc_1") == 0) return card_original_image_desc[0];
			if (wcscmp(fieldName, L"card_original_image_desc_2") == 0) return card_original_image_desc[1];
			if (wcscmp(fieldName, L"card_original_image_desc_3") == 0) return card_original_image_desc[2];
			if (wcscmp(fieldName, L"card_original_image_desc_4") == 0) return card_original_image_desc[3];
			if (wcscmp(fieldName, L"set_card_original_image") == 0) return set_card_original_image;
			if (wcscmp(fieldName, L"special_effect") == 0) return special_effect;
			if (wcscmp(fieldName, L"season") == 0) return season;
			if (wcscmp(fieldName, L"expedition") == 0) return expedition;
			if (wcscmp(fieldName, L"expedition_1") == 0) return expedition[0];
			if (wcscmp(fieldName, L"expedition_2") == 0) return expedition[1];
			if (wcscmp(fieldName, L"expedition_3") == 0) return expedition[2];
			if (wcscmp(fieldName, L"expedition_4") == 0) return expedition[3];
			if (wcscmp(fieldName, L"expedition_5") == 0) return expedition[4];
			if (wcscmp(fieldName, L"expedition_6") == 0) return expedition[5];
			if (wcscmp(fieldName, L"expedition_7") == 0) return expedition[6];
			if (wcscmp(fieldName, L"expedition_8") == 0) return expedition[7];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);
			if (wcscmp(fieldName, L"disabled") == 0) return Data::AnyFieldToStringConverter::ToString(&disabled);
			if (wcscmp(fieldName, L"sort_no") == 0) return Data::AnyFieldToStringConverter::ToString(&sort_no);
			if (wcscmp(fieldName, L"card_image") == 0) return Data::AnyFieldToStringConverter::ToString(&card_image);
			if (wcscmp(fieldName, L"card_original_image_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image[0]));
			if (wcscmp(fieldName, L"card_original_image_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image[1]));
			if (wcscmp(fieldName, L"card_original_image_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image[2]));
			if (wcscmp(fieldName, L"card_original_image_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image[3]));
			if (wcscmp(fieldName, L"card_original_image_desc_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image_desc[0]));
			if (wcscmp(fieldName, L"card_original_image_desc_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image_desc[1]));
			if (wcscmp(fieldName, L"card_original_image_desc_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image_desc[2]));
			if (wcscmp(fieldName, L"card_original_image_desc_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(card_original_image_desc[3]));
			if (wcscmp(fieldName, L"set_card_original_image") == 0) return Data::AnyFieldToStringConverter::ToString(&set_card_original_image);
			if (wcscmp(fieldName, L"special_effect") == 0) return Data::AnyFieldToStringConverter::ToString(&special_effect);
			if (wcscmp(fieldName, L"season") == 0) return Data::AnyFieldToStringConverter::ToString(&season);
			if (wcscmp(fieldName, L"expedition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[0]));
			if (wcscmp(fieldName, L"expedition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[1]));
			if (wcscmp(fieldName, L"expedition_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[2]));
			if (wcscmp(fieldName, L"expedition_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[3]));
			if (wcscmp(fieldName, L"expedition_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[4]));
			if (wcscmp(fieldName, L"expedition_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[5]));
			if (wcscmp(fieldName, L"expedition_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[6]));
			if (wcscmp(fieldName, L"expedition_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(expedition[7]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(card_image) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) card_image = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(card_image));
			for (int i = 0; i < 4; i++) {
				if (reinterpret_cast<std::uintptr_t>(card_original_image[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) card_original_image[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(card_original_image[i]));
			}
		}
		union Key
		{
            struct {
                __int16 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef item;
int item_tableId(){return 189;};
bool disabled;
char Pad0[1];
__int16 sort_no;
wchar_t* card_image;
wchar_t* card_original_image[4];
Data::TableRef card_original_image_desc[4];
int card_original_image_desc_tableId(){return 405;};
bool set_card_original_image;
bool special_effect;
__int16 season;
Data::TableRef expedition[8];
int expedition_tableId(){return 435;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 433; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) world_account_card_RecordPtr // : DrRecordPtr
	{
		world_account_card_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::world_account_card_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}