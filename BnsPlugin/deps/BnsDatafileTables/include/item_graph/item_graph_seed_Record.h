/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_graph_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_graph_seed_Record : item_graph_Record
	{
	private:
		static std::wstring Get_seed_item_sub_group_EnumValue(__int8 value);
		static std::wstring Get_node_type_EnumValue(__int8 value);
		static std::wstring Get_attribute_group_EnumValue(__int8 value);
		static std::wstring Get_item_equip_type_EnumValue(__int8 value);
		static std::wstring Get_growth_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = item_graph_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"seed_item") == 0) return seed_item;
			if (wcscmp(fieldName, L"seed_item_1") == 0) return seed_item[0];
			if (wcscmp(fieldName, L"seed_item_2") == 0) return seed_item[1];
			if (wcscmp(fieldName, L"seed_item_3") == 0) return seed_item[2];
			if (wcscmp(fieldName, L"seed_item_4") == 0) return seed_item[3];
			if (wcscmp(fieldName, L"seed_item_5") == 0) return seed_item[4];
			if (wcscmp(fieldName, L"seed_item_6") == 0) return seed_item[5];
			if (wcscmp(fieldName, L"seed_item_7") == 0) return seed_item[6];
			if (wcscmp(fieldName, L"seed_item_8") == 0) return seed_item[7];
			if (wcscmp(fieldName, L"seed_item_9") == 0) return seed_item[8];
			if (wcscmp(fieldName, L"seed_item_10") == 0) return seed_item[9];
			if (wcscmp(fieldName, L"seed_item_11") == 0) return seed_item[10];
			if (wcscmp(fieldName, L"seed_item_12") == 0) return seed_item[11];
			if (wcscmp(fieldName, L"seed_item_13") == 0) return seed_item[12];
			if (wcscmp(fieldName, L"seed_item_14") == 0) return seed_item[13];
			if (wcscmp(fieldName, L"seed_item_15") == 0) return seed_item[14];
			if (wcscmp(fieldName, L"seed_item_16") == 0) return seed_item[15];
			if (wcscmp(fieldName, L"seed_item_17") == 0) return seed_item[16];
			if (wcscmp(fieldName, L"seed_item_18") == 0) return seed_item[17];
			if (wcscmp(fieldName, L"seed_item_19") == 0) return seed_item[18];
			if (wcscmp(fieldName, L"seed_item_20") == 0) return seed_item[19];
			if (wcscmp(fieldName, L"seed_item_21") == 0) return seed_item[20];
			if (wcscmp(fieldName, L"seed_item_22") == 0) return seed_item[21];
			if (wcscmp(fieldName, L"seed_item_23") == 0) return seed_item[22];
			if (wcscmp(fieldName, L"seed_item_24") == 0) return seed_item[23];
			if (wcscmp(fieldName, L"seed_item_25") == 0) return seed_item[24];
			if (wcscmp(fieldName, L"seed_item_26") == 0) return seed_item[25];
			if (wcscmp(fieldName, L"seed_item_27") == 0) return seed_item[26];
			if (wcscmp(fieldName, L"seed_item_28") == 0) return seed_item[27];
			if (wcscmp(fieldName, L"seed_item_29") == 0) return seed_item[28];
			if (wcscmp(fieldName, L"seed_item_30") == 0) return seed_item[29];
			if (wcscmp(fieldName, L"seed_item_31") == 0) return seed_item[30];
			if (wcscmp(fieldName, L"seed_item_32") == 0) return seed_item[31];
			if (wcscmp(fieldName, L"seed_item_33") == 0) return seed_item[32];
			if (wcscmp(fieldName, L"seed_item_34") == 0) return seed_item[33];
			if (wcscmp(fieldName, L"seed_item_35") == 0) return seed_item[34];
			if (wcscmp(fieldName, L"seed_item_36") == 0) return seed_item[35];
			if (wcscmp(fieldName, L"seed_item_37") == 0) return seed_item[36];
			if (wcscmp(fieldName, L"seed_item_38") == 0) return seed_item[37];
			if (wcscmp(fieldName, L"seed_item_39") == 0) return seed_item[38];
			if (wcscmp(fieldName, L"seed_item_40") == 0) return seed_item[39];
			if (wcscmp(fieldName, L"seed_item_41") == 0) return seed_item[40];
			if (wcscmp(fieldName, L"seed_item_42") == 0) return seed_item[41];
			if (wcscmp(fieldName, L"seed_item_group") == 0) return seed_item_group;
			if (wcscmp(fieldName, L"seed_item_sub_group") == 0) return seed_item_sub_group;
			if (wcscmp(fieldName, L"seed_item_sub_group_1") == 0) return seed_item_sub_group[0];
			if (wcscmp(fieldName, L"seed_item_sub_group_2") == 0) return seed_item_sub_group[1];
			if (wcscmp(fieldName, L"seed_item_sub_group_3") == 0) return seed_item_sub_group[2];
			if (wcscmp(fieldName, L"seed_item_sub_group_4") == 0) return seed_item_sub_group[3];
			if (wcscmp(fieldName, L"seed_item_sub_group_5") == 0) return seed_item_sub_group[4];
			if (wcscmp(fieldName, L"seed_item_sub_group_6") == 0) return seed_item_sub_group[5];
			if (wcscmp(fieldName, L"seed_item_sub_group_7") == 0) return seed_item_sub_group[6];
			if (wcscmp(fieldName, L"seed_item_sub_group_8") == 0) return seed_item_sub_group[7];
			if (wcscmp(fieldName, L"seed_item_sub_group_9") == 0) return seed_item_sub_group[8];
			if (wcscmp(fieldName, L"seed_item_sub_group_10") == 0) return seed_item_sub_group[9];
			if (wcscmp(fieldName, L"seed_item_sub_group_11") == 0) return seed_item_sub_group[10];
			if (wcscmp(fieldName, L"seed_item_sub_group_12") == 0) return seed_item_sub_group[11];
			if (wcscmp(fieldName, L"seed_item_sub_group_13") == 0) return seed_item_sub_group[12];
			if (wcscmp(fieldName, L"seed_item_sub_group_14") == 0) return seed_item_sub_group[13];
			if (wcscmp(fieldName, L"seed_item_sub_group_15") == 0) return seed_item_sub_group[14];
			if (wcscmp(fieldName, L"seed_item_sub_group_16") == 0) return seed_item_sub_group[15];
			if (wcscmp(fieldName, L"seed_item_sub_group_17") == 0) return seed_item_sub_group[16];
			if (wcscmp(fieldName, L"seed_item_sub_group_18") == 0) return seed_item_sub_group[17];
			if (wcscmp(fieldName, L"seed_item_sub_group_19") == 0) return seed_item_sub_group[18];
			if (wcscmp(fieldName, L"seed_item_sub_group_20") == 0) return seed_item_sub_group[19];
			if (wcscmp(fieldName, L"seed_item_sub_group_21") == 0) return seed_item_sub_group[20];
			if (wcscmp(fieldName, L"seed_item_sub_group_22") == 0) return seed_item_sub_group[21];
			if (wcscmp(fieldName, L"seed_item_sub_group_23") == 0) return seed_item_sub_group[22];
			if (wcscmp(fieldName, L"seed_item_sub_group_24") == 0) return seed_item_sub_group[23];
			if (wcscmp(fieldName, L"seed_item_sub_group_25") == 0) return seed_item_sub_group[24];
			if (wcscmp(fieldName, L"seed_item_sub_group_26") == 0) return seed_item_sub_group[25];
			if (wcscmp(fieldName, L"seed_item_sub_group_27") == 0) return seed_item_sub_group[26];
			if (wcscmp(fieldName, L"seed_item_sub_group_28") == 0) return seed_item_sub_group[27];
			if (wcscmp(fieldName, L"seed_item_sub_group_29") == 0) return seed_item_sub_group[28];
			if (wcscmp(fieldName, L"seed_item_sub_group_30") == 0) return seed_item_sub_group[29];
			if (wcscmp(fieldName, L"seed_item_sub_group_31") == 0) return seed_item_sub_group[30];
			if (wcscmp(fieldName, L"seed_item_sub_group_32") == 0) return seed_item_sub_group[31];
			if (wcscmp(fieldName, L"seed_item_sub_group_33") == 0) return seed_item_sub_group[32];
			if (wcscmp(fieldName, L"seed_item_sub_group_34") == 0) return seed_item_sub_group[33];
			if (wcscmp(fieldName, L"seed_item_sub_group_35") == 0) return seed_item_sub_group[34];
			if (wcscmp(fieldName, L"seed_item_sub_group_36") == 0) return seed_item_sub_group[35];
			if (wcscmp(fieldName, L"seed_item_sub_group_37") == 0) return seed_item_sub_group[36];
			if (wcscmp(fieldName, L"seed_item_sub_group_38") == 0) return seed_item_sub_group[37];
			if (wcscmp(fieldName, L"seed_item_sub_group_39") == 0) return seed_item_sub_group[38];
			if (wcscmp(fieldName, L"seed_item_sub_group_40") == 0) return seed_item_sub_group[39];
			if (wcscmp(fieldName, L"seed_item_sub_group_41") == 0) return seed_item_sub_group[40];
			if (wcscmp(fieldName, L"seed_item_sub_group_42") == 0) return seed_item_sub_group[41];
			if (wcscmp(fieldName, L"node_type") == 0) return node_type;
			if (wcscmp(fieldName, L"attribute_group") == 0) return attribute_group;
			if (wcscmp(fieldName, L"item_equip_type") == 0) return item_equip_type;
			if (wcscmp(fieldName, L"growth_category") == 0) return growth_category;
			if (wcscmp(fieldName, L"row") == 0) return row;
			if (wcscmp(fieldName, L"column") == 0) return column;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = item_graph_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"seed_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[0]));
			if (wcscmp(fieldName, L"seed_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[1]));
			if (wcscmp(fieldName, L"seed_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[2]));
			if (wcscmp(fieldName, L"seed_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[3]));
			if (wcscmp(fieldName, L"seed_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[4]));
			if (wcscmp(fieldName, L"seed_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[5]));
			if (wcscmp(fieldName, L"seed_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[6]));
			if (wcscmp(fieldName, L"seed_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[7]));
			if (wcscmp(fieldName, L"seed_item_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[8]));
			if (wcscmp(fieldName, L"seed_item_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[9]));
			if (wcscmp(fieldName, L"seed_item_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[10]));
			if (wcscmp(fieldName, L"seed_item_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[11]));
			if (wcscmp(fieldName, L"seed_item_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[12]));
			if (wcscmp(fieldName, L"seed_item_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[13]));
			if (wcscmp(fieldName, L"seed_item_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[14]));
			if (wcscmp(fieldName, L"seed_item_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[15]));
			if (wcscmp(fieldName, L"seed_item_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[16]));
			if (wcscmp(fieldName, L"seed_item_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[17]));
			if (wcscmp(fieldName, L"seed_item_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[18]));
			if (wcscmp(fieldName, L"seed_item_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[19]));
			if (wcscmp(fieldName, L"seed_item_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[20]));
			if (wcscmp(fieldName, L"seed_item_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[21]));
			if (wcscmp(fieldName, L"seed_item_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[22]));
			if (wcscmp(fieldName, L"seed_item_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[23]));
			if (wcscmp(fieldName, L"seed_item_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[24]));
			if (wcscmp(fieldName, L"seed_item_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[25]));
			if (wcscmp(fieldName, L"seed_item_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[26]));
			if (wcscmp(fieldName, L"seed_item_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[27]));
			if (wcscmp(fieldName, L"seed_item_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[28]));
			if (wcscmp(fieldName, L"seed_item_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[29]));
			if (wcscmp(fieldName, L"seed_item_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[30]));
			if (wcscmp(fieldName, L"seed_item_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[31]));
			if (wcscmp(fieldName, L"seed_item_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[32]));
			if (wcscmp(fieldName, L"seed_item_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[33]));
			if (wcscmp(fieldName, L"seed_item_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[34]));
			if (wcscmp(fieldName, L"seed_item_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[35]));
			if (wcscmp(fieldName, L"seed_item_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[36]));
			if (wcscmp(fieldName, L"seed_item_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[37]));
			if (wcscmp(fieldName, L"seed_item_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[38]));
			if (wcscmp(fieldName, L"seed_item_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[39]));
			if (wcscmp(fieldName, L"seed_item_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[40]));
			if (wcscmp(fieldName, L"seed_item_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item[41]));
			if (wcscmp(fieldName, L"seed_item_group") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_item_group);
			if (wcscmp(fieldName, L"seed_item_sub_group_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[0]));
			if (wcscmp(fieldName, L"seed_item_sub_group_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[1]));
			if (wcscmp(fieldName, L"seed_item_sub_group_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[2]));
			if (wcscmp(fieldName, L"seed_item_sub_group_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[3]));
			if (wcscmp(fieldName, L"seed_item_sub_group_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[4]));
			if (wcscmp(fieldName, L"seed_item_sub_group_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[5]));
			if (wcscmp(fieldName, L"seed_item_sub_group_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[6]));
			if (wcscmp(fieldName, L"seed_item_sub_group_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[7]));
			if (wcscmp(fieldName, L"seed_item_sub_group_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[8]));
			if (wcscmp(fieldName, L"seed_item_sub_group_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[9]));
			if (wcscmp(fieldName, L"seed_item_sub_group_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[10]));
			if (wcscmp(fieldName, L"seed_item_sub_group_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[11]));
			if (wcscmp(fieldName, L"seed_item_sub_group_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[12]));
			if (wcscmp(fieldName, L"seed_item_sub_group_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[13]));
			if (wcscmp(fieldName, L"seed_item_sub_group_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[14]));
			if (wcscmp(fieldName, L"seed_item_sub_group_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[15]));
			if (wcscmp(fieldName, L"seed_item_sub_group_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[16]));
			if (wcscmp(fieldName, L"seed_item_sub_group_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[17]));
			if (wcscmp(fieldName, L"seed_item_sub_group_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[18]));
			if (wcscmp(fieldName, L"seed_item_sub_group_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[19]));
			if (wcscmp(fieldName, L"seed_item_sub_group_21") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[20]));
			if (wcscmp(fieldName, L"seed_item_sub_group_22") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[21]));
			if (wcscmp(fieldName, L"seed_item_sub_group_23") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[22]));
			if (wcscmp(fieldName, L"seed_item_sub_group_24") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[23]));
			if (wcscmp(fieldName, L"seed_item_sub_group_25") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[24]));
			if (wcscmp(fieldName, L"seed_item_sub_group_26") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[25]));
			if (wcscmp(fieldName, L"seed_item_sub_group_27") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[26]));
			if (wcscmp(fieldName, L"seed_item_sub_group_28") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[27]));
			if (wcscmp(fieldName, L"seed_item_sub_group_29") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[28]));
			if (wcscmp(fieldName, L"seed_item_sub_group_30") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[29]));
			if (wcscmp(fieldName, L"seed_item_sub_group_31") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[30]));
			if (wcscmp(fieldName, L"seed_item_sub_group_32") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[31]));
			if (wcscmp(fieldName, L"seed_item_sub_group_33") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[32]));
			if (wcscmp(fieldName, L"seed_item_sub_group_34") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[33]));
			if (wcscmp(fieldName, L"seed_item_sub_group_35") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[34]));
			if (wcscmp(fieldName, L"seed_item_sub_group_36") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[35]));
			if (wcscmp(fieldName, L"seed_item_sub_group_37") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[36]));
			if (wcscmp(fieldName, L"seed_item_sub_group_38") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[37]));
			if (wcscmp(fieldName, L"seed_item_sub_group_39") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[38]));
			if (wcscmp(fieldName, L"seed_item_sub_group_40") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[39]));
			if (wcscmp(fieldName, L"seed_item_sub_group_41") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[40]));
			if (wcscmp(fieldName, L"seed_item_sub_group_42") == 0) return Data::AnyFieldToStringConverter::ToString(&(seed_item_sub_group[41]));
			if (wcscmp(fieldName, L"node_type") == 0) return Data::AnyFieldToStringConverter::ToString(&node_type);
			if (wcscmp(fieldName, L"attribute_group") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_group);
			if (wcscmp(fieldName, L"item_equip_type") == 0) return Data::AnyFieldToStringConverter::ToString(&item_equip_type);
			if (wcscmp(fieldName, L"growth_category") == 0) return Data::AnyFieldToStringConverter::ToString(&growth_category);
			if (wcscmp(fieldName, L"row") == 0) return Data::AnyFieldToStringConverter::ToString(&row);
			if (wcscmp(fieldName, L"column") == 0) return Data::AnyFieldToStringConverter::ToString(&column);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			item_graph_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		Data::TableRef seed_item[42];
int seed_item_tableId(){return 189;};
Data::TableRef seed_item_group;
int seed_item_group_tableId(){return 195;};
__int8 seed_item_sub_group[42];
std::wstring seed_item_sub_group_EnumValue(int index) const {return Get_seed_item_sub_group_EnumValue(seed_item_sub_group[index]);};
__int8 node_type;
std::wstring node_type_EnumValue() const {return Get_node_type_EnumValue(node_type);};
__int8 attribute_group;
std::wstring attribute_group_EnumValue() const {return Get_attribute_group_EnumValue(attribute_group);};
__int8 item_equip_type;
std::wstring item_equip_type_EnumValue() const {return Get_item_equip_type_EnumValue(item_equip_type);};
__int8 growth_category;
std::wstring growth_category_EnumValue() const {return Get_growth_category_EnumValue(growth_category);};
__int16 row;
__int16 column;

		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
}