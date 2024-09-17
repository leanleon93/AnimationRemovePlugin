/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_introduction_Record : DrEl
	{
	private:
		static std::wstring Get_category_EnumValue(__int8 value);
		static std::wstring Get_associated_craft_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"title_icon") == 0) return title_icon;
			if (wcscmp(fieldName, L"normal_icon") == 0) return normal_icon;
			if (wcscmp(fieldName, L"slogan") == 0) return slogan;
			if (wcscmp(fieldName, L"introduction_description") == 0) return introduction_description;
			if (wcscmp(fieldName, L"associated_craft") == 0) return associated_craft;
			if (wcscmp(fieldName, L"associated_craft_1") == 0) return associated_craft[0];
			if (wcscmp(fieldName, L"associated_craft_2") == 0) return associated_craft[1];
			if (wcscmp(fieldName, L"representative_product_item") == 0) return representative_product_item;
			if (wcscmp(fieldName, L"representative_product_item_1") == 0) return representative_product_item[0];
			if (wcscmp(fieldName, L"representative_product_item_2") == 0) return representative_product_item[1];
			if (wcscmp(fieldName, L"representative_product_item_3") == 0) return representative_product_item[2];
			if (wcscmp(fieldName, L"representative_product_item_4") == 0) return representative_product_item[3];
			if (wcscmp(fieldName, L"representative_product_item_5") == 0) return representative_product_item[4];
			if (wcscmp(fieldName, L"representative_product_item_6") == 0) return representative_product_item[5];
			if (wcscmp(fieldName, L"representative_product_item_7") == 0) return representative_product_item[6];
			if (wcscmp(fieldName, L"representative_product_item_8") == 0) return representative_product_item[7];
			if (wcscmp(fieldName, L"representative_product_label") == 0) return representative_product_label;
			if (wcscmp(fieldName, L"representative_product_label_1") == 0) return representative_product_label[0];
			if (wcscmp(fieldName, L"representative_product_label_2") == 0) return representative_product_label[1];
			if (wcscmp(fieldName, L"representative_product_label_3") == 0) return representative_product_label[2];
			if (wcscmp(fieldName, L"representative_product_label_4") == 0) return representative_product_label[3];
			if (wcscmp(fieldName, L"representative_product_label_5") == 0) return representative_product_label[4];
			if (wcscmp(fieldName, L"representative_product_label_6") == 0) return representative_product_label[5];
			if (wcscmp(fieldName, L"representative_product_label_7") == 0) return representative_product_label[6];
			if (wcscmp(fieldName, L"representative_product_label_8") == 0) return representative_product_label[7];
			if (wcscmp(fieldName, L"special_product_item") == 0) return special_product_item;
			if (wcscmp(fieldName, L"special_product_item_1") == 0) return special_product_item[0];
			if (wcscmp(fieldName, L"special_product_item_2") == 0) return special_product_item[1];
			if (wcscmp(fieldName, L"special_product_item_3") == 0) return special_product_item[2];
			if (wcscmp(fieldName, L"special_product_item_4") == 0) return special_product_item[3];
			if (wcscmp(fieldName, L"special_product_label") == 0) return special_product_label;
			if (wcscmp(fieldName, L"special_product_label_1") == 0) return special_product_label[0];
			if (wcscmp(fieldName, L"special_product_label_2") == 0) return special_product_label[1];
			if (wcscmp(fieldName, L"special_product_label_3") == 0) return special_product_label[2];
			if (wcscmp(fieldName, L"special_product_label_4") == 0) return special_product_label[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"title_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&title_icon);
			if (wcscmp(fieldName, L"normal_icon") == 0) return Data::AnyFieldToStringConverter::ToString(&normal_icon);
			if (wcscmp(fieldName, L"slogan") == 0) return Data::AnyFieldToStringConverter::ToString(&slogan);
			if (wcscmp(fieldName, L"introduction_description") == 0) return Data::AnyFieldToStringConverter::ToString(&introduction_description);
			if (wcscmp(fieldName, L"associated_craft_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(associated_craft[0]));
			if (wcscmp(fieldName, L"associated_craft_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(associated_craft[1]));
			if (wcscmp(fieldName, L"representative_product_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[0]));
			if (wcscmp(fieldName, L"representative_product_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[1]));
			if (wcscmp(fieldName, L"representative_product_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[2]));
			if (wcscmp(fieldName, L"representative_product_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[3]));
			if (wcscmp(fieldName, L"representative_product_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[4]));
			if (wcscmp(fieldName, L"representative_product_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[5]));
			if (wcscmp(fieldName, L"representative_product_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[6]));
			if (wcscmp(fieldName, L"representative_product_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_item[7]));
			if (wcscmp(fieldName, L"representative_product_label_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[0]));
			if (wcscmp(fieldName, L"representative_product_label_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[1]));
			if (wcscmp(fieldName, L"representative_product_label_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[2]));
			if (wcscmp(fieldName, L"representative_product_label_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[3]));
			if (wcscmp(fieldName, L"representative_product_label_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[4]));
			if (wcscmp(fieldName, L"representative_product_label_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[5]));
			if (wcscmp(fieldName, L"representative_product_label_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[6]));
			if (wcscmp(fieldName, L"representative_product_label_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(representative_product_label[7]));
			if (wcscmp(fieldName, L"special_product_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_item[0]));
			if (wcscmp(fieldName, L"special_product_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_item[1]));
			if (wcscmp(fieldName, L"special_product_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_item[2]));
			if (wcscmp(fieldName, L"special_product_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_item[3]));
			if (wcscmp(fieldName, L"special_product_label_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_label[0]));
			if (wcscmp(fieldName, L"special_product_label_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_label[1]));
			if (wcscmp(fieldName, L"special_product_label_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_label[2]));
			if (wcscmp(fieldName, L"special_product_label_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(special_product_label[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 category;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		Data::IconRef title_icon;
Data::IconRef normal_icon;
Data::TableRef slogan;
int slogan_tableId(){return 405;};
Data::TableRef introduction_description;
int introduction_description_tableId(){return 405;};
__int8 associated_craft[2];
std::wstring associated_craft_EnumValue(int index) const {return Get_associated_craft_EnumValue(associated_craft[index]);};
char Pad0[2];
Data::TableRef representative_product_item[8];
int representative_product_item_tableId(){return 189;};
Data::TableRef representative_product_label[8];
int representative_product_label_tableId(){return 405;};
Data::TableRef special_product_item[4];
int special_product_item_tableId(){return 189;};
Data::TableRef special_product_label[4];
int special_product_label_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 1); }
		static __int16 TableId() { return 81; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_introduction_RecordPtr // : DrRecordPtr
	{
		craft_introduction_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_introduction_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}