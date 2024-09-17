/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct item_improve_succession_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"seed_improve_id") == 0) return seed_improve_id;
			if (wcscmp(fieldName, L"seed_improve_level") == 0) return seed_improve_level;
			if (wcscmp(fieldName, L"result_improve_id") == 0) return result_improve_id;
			if (wcscmp(fieldName, L"result_improve_level") == 0) return result_improve_level;
			if (wcscmp(fieldName, L"feed_main_improve_id") == 0) return feed_main_improve_id;
			if (wcscmp(fieldName, L"feed_main_improve_level") == 0) return feed_main_improve_level;
			if (wcscmp(fieldName, L"feed_main_ingredient") == 0) return feed_main_ingredient;
			if (wcscmp(fieldName, L"feed_main_ingredient_count") == 0) return feed_main_ingredient_count;
			if (wcscmp(fieldName, L"feed_sub_ingredient") == 0) return feed_sub_ingredient;
			if (wcscmp(fieldName, L"feed_sub_ingredient_1") == 0) return feed_sub_ingredient[0];
			if (wcscmp(fieldName, L"feed_sub_ingredient_2") == 0) return feed_sub_ingredient[1];
			if (wcscmp(fieldName, L"feed_sub_ingredient_3") == 0) return feed_sub_ingredient[2];
			if (wcscmp(fieldName, L"feed_sub_ingredient_4") == 0) return feed_sub_ingredient[3];
			if (wcscmp(fieldName, L"feed_sub_ingredient_5") == 0) return feed_sub_ingredient[4];
			if (wcscmp(fieldName, L"feed_sub_ingredient_6") == 0) return feed_sub_ingredient[5];
			if (wcscmp(fieldName, L"feed_sub_ingredient_7") == 0) return feed_sub_ingredient[6];
			if (wcscmp(fieldName, L"feed_sub_ingredient_8") == 0) return feed_sub_ingredient[7];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count") == 0) return feed_sub_ingredient_count;
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_1") == 0) return feed_sub_ingredient_count[0];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_2") == 0) return feed_sub_ingredient_count[1];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_3") == 0) return feed_sub_ingredient_count[2];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_4") == 0) return feed_sub_ingredient_count[3];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_5") == 0) return feed_sub_ingredient_count[4];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_6") == 0) return feed_sub_ingredient_count[5];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_7") == 0) return feed_sub_ingredient_count[6];
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_8") == 0) return feed_sub_ingredient_count[7];
			if (wcscmp(fieldName, L"cost_money") == 0) return cost_money;
			if (wcscmp(fieldName, L"feed_succession_option_step") == 0) return feed_succession_option_step;
			if (wcscmp(fieldName, L"feed_succession_option_step_1") == 0) return feed_succession_option_step[0];
			if (wcscmp(fieldName, L"feed_succession_option_step_2") == 0) return feed_succession_option_step[1];
			if (wcscmp(fieldName, L"feed_succession_option_step_3") == 0) return feed_succession_option_step[2];
			if (wcscmp(fieldName, L"feed_succession_option_step_4") == 0) return feed_succession_option_step[3];
			if (wcscmp(fieldName, L"feed_succession_option_step_5") == 0) return feed_succession_option_step[4];
			if (wcscmp(fieldName, L"result_succession_option_step") == 0) return result_succession_option_step;
			if (wcscmp(fieldName, L"result_succession_option_step_1") == 0) return result_succession_option_step[0];
			if (wcscmp(fieldName, L"result_succession_option_step_2") == 0) return result_succession_option_step[1];
			if (wcscmp(fieldName, L"result_succession_option_step_3") == 0) return result_succession_option_step[2];
			if (wcscmp(fieldName, L"result_succession_option_step_4") == 0) return result_succession_option_step[3];
			if (wcscmp(fieldName, L"result_succession_option_step_5") == 0) return result_succession_option_step[4];
			if (wcscmp(fieldName, L"keep_main_ingredient_spirit") == 0) return keep_main_ingredient_spirit;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"seed_improve_id") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_improve_id);
			if (wcscmp(fieldName, L"seed_improve_level") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_improve_level);
			if (wcscmp(fieldName, L"result_improve_id") == 0) return Data::AnyFieldToStringConverter::ToString(&result_improve_id);
			if (wcscmp(fieldName, L"result_improve_level") == 0) return Data::AnyFieldToStringConverter::ToString(&result_improve_level);
			if (wcscmp(fieldName, L"feed_main_improve_id") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_main_improve_id);
			if (wcscmp(fieldName, L"feed_main_improve_level") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_main_improve_level);
			if (wcscmp(fieldName, L"feed_main_ingredient") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_main_ingredient);
			if (wcscmp(fieldName, L"feed_main_ingredient_count") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_main_ingredient_count);
			if (wcscmp(fieldName, L"feed_sub_ingredient_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[0]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[1]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[2]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[3]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[4]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[5]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[6]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient[7]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[0]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[1]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[2]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[3]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[4]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[5]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[6]));
			if (wcscmp(fieldName, L"feed_sub_ingredient_count_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_sub_ingredient_count[7]));
			if (wcscmp(fieldName, L"cost_money") == 0) return Data::AnyFieldToStringConverter::ToString(&cost_money);
			if (wcscmp(fieldName, L"feed_succession_option_step_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_succession_option_step[0]));
			if (wcscmp(fieldName, L"feed_succession_option_step_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_succession_option_step[1]));
			if (wcscmp(fieldName, L"feed_succession_option_step_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_succession_option_step[2]));
			if (wcscmp(fieldName, L"feed_succession_option_step_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_succession_option_step[3]));
			if (wcscmp(fieldName, L"feed_succession_option_step_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(feed_succession_option_step[4]));
			if (wcscmp(fieldName, L"result_succession_option_step_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(result_succession_option_step[0]));
			if (wcscmp(fieldName, L"result_succession_option_step_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(result_succession_option_step[1]));
			if (wcscmp(fieldName, L"result_succession_option_step_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(result_succession_option_step[2]));
			if (wcscmp(fieldName, L"result_succession_option_step_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(result_succession_option_step[3]));
			if (wcscmp(fieldName, L"result_succession_option_step_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(result_succession_option_step[4]));
			if (wcscmp(fieldName, L"keep_main_ingredient_spirit") == 0) return Data::AnyFieldToStringConverter::ToString(&keep_main_ingredient_spirit);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
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
__int32 seed_improve_id;
__int8 seed_improve_level;
char Pad0[3];
__int32 result_improve_id;
__int8 result_improve_level;
char Pad1[3];
__int32 feed_main_improve_id;
__int8 feed_main_improve_level;
char Pad2[3];
Data::TableRef feed_main_ingredient;
int feed_main_ingredient_tableId(){return 189;};
__int16 feed_main_ingredient_count;
char Pad3[2];
Data::TableRef feed_sub_ingredient[8];
int feed_sub_ingredient_tableId(){return 189;};
__int16 feed_sub_ingredient_count[8];
__int32 cost_money;
__int8 feed_succession_option_step[5];
__int8 result_succession_option_step[5];
bool keep_main_ingredient_spirit;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 202; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) item_improve_succession_RecordPtr // : DrRecordPtr
	{
		item_improve_succession_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::item_improve_succession_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}