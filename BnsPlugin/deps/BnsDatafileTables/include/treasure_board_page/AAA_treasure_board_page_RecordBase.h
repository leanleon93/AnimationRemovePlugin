/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct treasure_board_page_Record : DrEl
	{
	private:
		static std::wstring Get_reset_condition_EnumValue(__int8 value);
		static std::wstring Get_reset_price_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"one_time_draw_item") == 0) return one_time_draw_item;
			if (wcscmp(fieldName, L"one_time_draw_item_count") == 0) return one_time_draw_item_count;
			if (wcscmp(fieldName, L"five_times_draw_item") == 0) return five_times_draw_item;
			if (wcscmp(fieldName, L"five_times_draw_item_count") == 0) return five_times_draw_item_count;
			if (wcscmp(fieldName, L"reset_condition") == 0) return reset_condition;
			if (wcscmp(fieldName, L"reset_price_type") == 0) return reset_price_type;
			if (wcscmp(fieldName, L"reset_price_item") == 0) return reset_price_item;
			if (wcscmp(fieldName, L"reset_price_item_count") == 0) return reset_price_item_count;
			if (wcscmp(fieldName, L"quota") == 0) return quota;
			if (wcscmp(fieldName, L"treasure_board_reward") == 0) return treasure_board_reward;
			if (wcscmp(fieldName, L"treasure_board_reward_1") == 0) return treasure_board_reward[0];
			if (wcscmp(fieldName, L"treasure_board_reward_2") == 0) return treasure_board_reward[1];
			if (wcscmp(fieldName, L"treasure_board_reward_3") == 0) return treasure_board_reward[2];
			if (wcscmp(fieldName, L"treasure_board_reward_4") == 0) return treasure_board_reward[3];
			if (wcscmp(fieldName, L"treasure_board_reward_5") == 0) return treasure_board_reward[4];
			if (wcscmp(fieldName, L"treasure_board_reward_6") == 0) return treasure_board_reward[5];
			if (wcscmp(fieldName, L"treasure_board_reward_7") == 0) return treasure_board_reward[6];
			if (wcscmp(fieldName, L"treasure_board_reward_8") == 0) return treasure_board_reward[7];
			if (wcscmp(fieldName, L"treasure_board_reward_9") == 0) return treasure_board_reward[8];
			if (wcscmp(fieldName, L"treasure_board_reward_10") == 0) return treasure_board_reward[9];
			if (wcscmp(fieldName, L"treasure_board_reward_11") == 0) return treasure_board_reward[10];
			if (wcscmp(fieldName, L"treasure_board_reward_12") == 0) return treasure_board_reward[11];
			if (wcscmp(fieldName, L"treasure_board_reward_13") == 0) return treasure_board_reward[12];
			if (wcscmp(fieldName, L"treasure_board_reward_14") == 0) return treasure_board_reward[13];
			if (wcscmp(fieldName, L"treasure_board_reward_15") == 0) return treasure_board_reward[14];
			if (wcscmp(fieldName, L"treasure_board_reward_16") == 0) return treasure_board_reward[15];
			if (wcscmp(fieldName, L"treasure_board_reward_17") == 0) return treasure_board_reward[16];
			if (wcscmp(fieldName, L"treasure_board_reward_18") == 0) return treasure_board_reward[17];
			if (wcscmp(fieldName, L"treasure_board_reward_19") == 0) return treasure_board_reward[18];
			if (wcscmp(fieldName, L"treasure_board_reward_20") == 0) return treasure_board_reward[19];
			if (wcscmp(fieldName, L"treasure_board_reward_21") == 0) return treasure_board_reward[20];
			if (wcscmp(fieldName, L"treasure_board_reward_22") == 0) return treasure_board_reward[21];
			if (wcscmp(fieldName, L"treasure_board_reward_23") == 0) return treasure_board_reward[22];
			if (wcscmp(fieldName, L"treasure_board_reward_24") == 0) return treasure_board_reward[23];
			if (wcscmp(fieldName, L"treasure_board_reward_25") == 0) return treasure_board_reward[24];
			if (wcscmp(fieldName, L"treasure_board_reward_26") == 0) return treasure_board_reward[25];
			if (wcscmp(fieldName, L"treasure_board_reward_27") == 0) return treasure_board_reward[26];
			if (wcscmp(fieldName, L"treasure_board_reward_28") == 0) return treasure_board_reward[27];
			if (wcscmp(fieldName, L"treasure_board_reward_29") == 0) return treasure_board_reward[28];
			if (wcscmp(fieldName, L"treasure_board_reward_30") == 0) return treasure_board_reward[29];
			if (wcscmp(fieldName, L"treasure_board_reward_31") == 0) return treasure_board_reward[30];
			if (wcscmp(fieldName, L"treasure_board_reward_32") == 0) return treasure_board_reward[31];
			if (wcscmp(fieldName, L"treasure_board_reward_33") == 0) return treasure_board_reward[32];
			if (wcscmp(fieldName, L"treasure_board_reward_34") == 0) return treasure_board_reward[33];
			if (wcscmp(fieldName, L"treasure_board_reward_35") == 0) return treasure_board_reward[34];
			if (wcscmp(fieldName, L"treasure_board_reward_36") == 0) return treasure_board_reward[35];
			if (wcscmp(fieldName, L"treasure_board_reward_37") == 0) return treasure_board_reward[36];
			if (wcscmp(fieldName, L"treasure_board_reward_38") == 0) return treasure_board_reward[37];
			if (wcscmp(fieldName, L"treasure_board_reward_39") == 0) return treasure_board_reward[38];
			if (wcscmp(fieldName, L"treasure_board_reward_40") == 0) return treasure_board_reward[39];
			if (wcscmp(fieldName, L"treasure_board_reward_41") == 0) return treasure_board_reward[40];
			if (wcscmp(fieldName, L"treasure_board_reward_42") == 0) return treasure_board_reward[41];
			if (wcscmp(fieldName, L"treasure_board_reward_43") == 0) return treasure_board_reward[42];
			if (wcscmp(fieldName, L"treasure_board_reward_44") == 0) return treasure_board_reward[43];
			if (wcscmp(fieldName, L"treasure_board_reward_45") == 0) return treasure_board_reward[44];
			if (wcscmp(fieldName, L"treasure_board_reward_46") == 0) return treasure_board_reward[45];
			if (wcscmp(fieldName, L"treasure_board_reward_47") == 0) return treasure_board_reward[46];
			if (wcscmp(fieldName, L"treasure_board_reward_48") == 0) return treasure_board_reward[47];
			if (wcscmp(fieldName, L"treasure_board_reward_49") == 0) return treasure_board_reward[48];
			if (wcscmp(fieldName, L"treasure_board_reward_50") == 0) return treasure_board_reward[49];
			if (wcscmp(fieldName, L"treasure_board_reward_51") == 0) return treasure_board_reward[50];
			if (wcscmp(fieldName, L"treasure_board_reward_52") == 0) return treasure_board_reward[51];
			if (wcscmp(fieldName, L"treasure_board_reward_53") == 0) return treasure_board_reward[52];
			if (wcscmp(fieldName, L"treasure_board_reward_54") == 0) return treasure_board_reward[53];
			if (wcscmp(fieldName, L"treasure_board_reward_55") == 0) return treasure_board_reward[54];
			if (wcscmp(fieldName, L"treasure_board_reward_56") == 0) return treasure_board_reward[55];
			if (wcscmp(fieldName, L"treasure_board_reward_57") == 0) return treasure_board_reward[56];
			if (wcscmp(fieldName, L"treasure_board_reward_58") == 0) return treasure_board_reward[57];
			if (wcscmp(fieldName, L"treasure_board_reward_59") == 0) return treasure_board_reward[58];
			if (wcscmp(fieldName, L"treasure_board_name") == 0) return treasure_board_name;
			if (wcscmp(fieldName, L"treasure_board_symbol_on") == 0) return treasure_board_symbol_on;
			if (wcscmp(fieldName, L"treasure_board_symbol_off") == 0) return treasure_board_symbol_off;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"one_time_draw_item") == 0) return Data::AnyFieldToStringConverter::ToString(&one_time_draw_item);
			if (wcscmp(fieldName, L"one_time_draw_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&one_time_draw_item_count);
			if (wcscmp(fieldName, L"five_times_draw_item") == 0) return Data::AnyFieldToStringConverter::ToString(&five_times_draw_item);
			if (wcscmp(fieldName, L"five_times_draw_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&five_times_draw_item_count);
			if (wcscmp(fieldName, L"reset_condition") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_condition);
			if (wcscmp(fieldName, L"reset_price_type") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_price_type);
			if (wcscmp(fieldName, L"reset_price_item") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_price_item);
			if (wcscmp(fieldName, L"reset_price_item_count") == 0) return Data::AnyFieldToStringConverter::ToString(&reset_price_item_count);
			if (wcscmp(fieldName, L"quota") == 0) return Data::AnyFieldToStringConverter::ToString(&quota);
			if (wcscmp(fieldName, L"treasure_board_reward_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[0]));
			if (wcscmp(fieldName, L"treasure_board_reward_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[1]));
			if (wcscmp(fieldName, L"treasure_board_reward_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[2]));
			if (wcscmp(fieldName, L"treasure_board_reward_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[3]));
			if (wcscmp(fieldName, L"treasure_board_reward_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[4]));
			if (wcscmp(fieldName, L"treasure_board_reward_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[5]));
			if (wcscmp(fieldName, L"treasure_board_reward_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[6]));
			if (wcscmp(fieldName, L"treasure_board_reward_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[7]));
			if (wcscmp(fieldName, L"treasure_board_reward_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[8]));
			if (wcscmp(fieldName, L"treasure_board_reward_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[9]));
			if (wcscmp(fieldName, L"treasure_board_reward_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[10]));
			if (wcscmp(fieldName, L"treasure_board_reward_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[11]));
			if (wcscmp(fieldName, L"treasure_board_reward_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[12]));
			if (wcscmp(fieldName, L"treasure_board_reward_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[13]));
			if (wcscmp(fieldName, L"treasure_board_reward_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[14]));
			if (wcscmp(fieldName, L"treasure_board_reward_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[15]));
			if (wcscmp(fieldName, L"treasure_board_reward_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[16]));
			if (wcscmp(fieldName, L"treasure_board_reward_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[17]));
			if (wcscmp(fieldName, L"treasure_board_reward_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[18]));
			if (wcscmp(fieldName, L"treasure_board_reward_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[19]));
			if (wcscmp(fieldName, L"treasure_board_reward_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[20]));
			if (wcscmp(fieldName, L"treasure_board_reward_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[21]));
			if (wcscmp(fieldName, L"treasure_board_reward_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[22]));
			if (wcscmp(fieldName, L"treasure_board_reward_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[23]));
			if (wcscmp(fieldName, L"treasure_board_reward_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[24]));
			if (wcscmp(fieldName, L"treasure_board_reward_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[25]));
			if (wcscmp(fieldName, L"treasure_board_reward_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[26]));
			if (wcscmp(fieldName, L"treasure_board_reward_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[27]));
			if (wcscmp(fieldName, L"treasure_board_reward_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[28]));
			if (wcscmp(fieldName, L"treasure_board_reward_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[29]));
			if (wcscmp(fieldName, L"treasure_board_reward_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[30]));
			if (wcscmp(fieldName, L"treasure_board_reward_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[31]));
			if (wcscmp(fieldName, L"treasure_board_reward_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[32]));
			if (wcscmp(fieldName, L"treasure_board_reward_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[33]));
			if (wcscmp(fieldName, L"treasure_board_reward_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[34]));
			if (wcscmp(fieldName, L"treasure_board_reward_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[35]));
			if (wcscmp(fieldName, L"treasure_board_reward_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[36]));
			if (wcscmp(fieldName, L"treasure_board_reward_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[37]));
			if (wcscmp(fieldName, L"treasure_board_reward_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[38]));
			if (wcscmp(fieldName, L"treasure_board_reward_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[39]));
			if (wcscmp(fieldName, L"treasure_board_reward_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[40]));
			if (wcscmp(fieldName, L"treasure_board_reward_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[41]));
			if (wcscmp(fieldName, L"treasure_board_reward_43") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[42]));
			if (wcscmp(fieldName, L"treasure_board_reward_44") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[43]));
			if (wcscmp(fieldName, L"treasure_board_reward_45") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[44]));
			if (wcscmp(fieldName, L"treasure_board_reward_46") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[45]));
			if (wcscmp(fieldName, L"treasure_board_reward_47") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[46]));
			if (wcscmp(fieldName, L"treasure_board_reward_48") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[47]));
			if (wcscmp(fieldName, L"treasure_board_reward_49") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[48]));
			if (wcscmp(fieldName, L"treasure_board_reward_50") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[49]));
			if (wcscmp(fieldName, L"treasure_board_reward_51") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[50]));
			if (wcscmp(fieldName, L"treasure_board_reward_52") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[51]));
			if (wcscmp(fieldName, L"treasure_board_reward_53") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[52]));
			if (wcscmp(fieldName, L"treasure_board_reward_54") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[53]));
			if (wcscmp(fieldName, L"treasure_board_reward_55") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[54]));
			if (wcscmp(fieldName, L"treasure_board_reward_56") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[55]));
			if (wcscmp(fieldName, L"treasure_board_reward_57") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[56]));
			if (wcscmp(fieldName, L"treasure_board_reward_58") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[57]));
			if (wcscmp(fieldName, L"treasure_board_reward_59") == 0) return Data::AnyFieldToStringConverter::ToString(&(treasure_board_reward[58]));
			if (wcscmp(fieldName, L"treasure_board_name") == 0) return Data::AnyFieldToStringConverter::ToString(&treasure_board_name);
			if (wcscmp(fieldName, L"treasure_board_symbol_on") == 0) return Data::AnyFieldToStringConverter::ToString(&treasure_board_symbol_on);
			if (wcscmp(fieldName, L"treasure_board_symbol_off") == 0) return Data::AnyFieldToStringConverter::ToString(&treasure_board_symbol_off);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(treasure_board_symbol_on) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) treasure_board_symbol_on = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(treasure_board_symbol_on));
			if (reinterpret_cast<std::uintptr_t>(treasure_board_symbol_off) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) treasure_board_symbol_off = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(treasure_board_symbol_off));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef one_time_draw_item;
int one_time_draw_item_tableId(){return 189;};
__int16 one_time_draw_item_count;
char Pad0[2];
Data::TableRef five_times_draw_item;
int five_times_draw_item_tableId(){return 189;};
__int16 five_times_draw_item_count;
__int8 reset_condition;
std::wstring reset_condition_EnumValue() const {return Get_reset_condition_EnumValue(reset_condition);};
__int8 reset_price_type;
std::wstring reset_price_type_EnumValue() const {return Get_reset_price_type_EnumValue(reset_price_type);};
Data::TableRef reset_price_item;
int reset_price_item_tableId(){return 189;};
__int16 reset_price_item_count;
char Pad1[2];
Data::TableRef quota;
int quota_tableId(){return 66;};
Data::TableRef treasure_board_reward[59];
int treasure_board_reward_tableId(){return 410;};
Data::TableRef treasure_board_name;
int treasure_board_name_tableId(){return 405;};
wchar_t* treasure_board_symbol_on;
wchar_t* treasure_board_symbol_off;

		static TableVersion Version() { return TableVersion(1, 0); }
		static __int16 TableId() { return 409; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) treasure_board_page_RecordPtr // : DrRecordPtr
	{
		treasure_board_page_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::treasure_board_page_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}