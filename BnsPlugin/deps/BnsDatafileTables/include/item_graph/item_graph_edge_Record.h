/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "AAA_item_graph_RecordBase.h"

namespace Data {
#pragma pack(push, 1)
	struct item_graph_edge_Record : item_graph_Record
	{
	private:
		static std::wstring Get_edge_type_EnumValue(__int8 value);
		static std::wstring Get_attribute_group_EnumValue(__int8 value);
		static std::wstring Get_seed_item_sub_group_EnumValue(__int8 value);
		static std::wstring Get_start_orientation_EnumValue(__int8 value);
		static std::wstring Get_end_orientation_EnumValue(__int8 value);
		static std::wstring Get_success_probability_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			auto baseResult = item_graph_Record::GetField(fieldName);
			if (baseResult.has_value()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"edge_type") == 0) return edge_type;
			if (wcscmp(fieldName, L"attribute_group") == 0) return attribute_group;
			if (wcscmp(fieldName, L"seed_item_sub_group") == 0) return seed_item_sub_group;
			if (wcscmp(fieldName, L"feed_item") == 0) return feed_item;
			if (wcscmp(fieldName, L"feed_recipe") == 0) return feed_recipe;
			if (wcscmp(fieldName, L"start_item") == 0) return start_item;
			if (wcscmp(fieldName, L"start_orientation") == 0) return start_orientation;
			if (wcscmp(fieldName, L"end_item") == 0) return end_item;
			if (wcscmp(fieldName, L"end_orientation") == 0) return end_orientation;
			if (wcscmp(fieldName, L"success_probability") == 0) return success_probability;
			if (wcscmp(fieldName, L"has_arrow") == 0) return has_arrow;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			auto baseResult = item_graph_Record::GetFieldAsString(fieldName);
			if (!baseResult.empty()) {
				return baseResult;
			}
			if (wcscmp(fieldName, L"edge_type") == 0) return Data::AnyFieldToStringConverter::ToString(&edge_type);
			if (wcscmp(fieldName, L"attribute_group") == 0) return Data::AnyFieldToStringConverter::ToString(&attribute_group);
			if (wcscmp(fieldName, L"seed_item_sub_group") == 0) return Data::AnyFieldToStringConverter::ToString(&seed_item_sub_group);
			if (wcscmp(fieldName, L"feed_item") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_item);
			if (wcscmp(fieldName, L"feed_recipe") == 0) return Data::AnyFieldToStringConverter::ToString(&feed_recipe);
			if (wcscmp(fieldName, L"start_item") == 0) return Data::AnyFieldToStringConverter::ToString(&start_item);
			if (wcscmp(fieldName, L"start_orientation") == 0) return Data::AnyFieldToStringConverter::ToString(&start_orientation);
			if (wcscmp(fieldName, L"end_item") == 0) return Data::AnyFieldToStringConverter::ToString(&end_item);
			if (wcscmp(fieldName, L"end_orientation") == 0) return Data::AnyFieldToStringConverter::ToString(&end_orientation);
			if (wcscmp(fieldName, L"success_probability") == 0) return Data::AnyFieldToStringConverter::ToString(&success_probability);
			if (wcscmp(fieldName, L"has_arrow") == 0) return Data::AnyFieldToStringConverter::ToString(&has_arrow);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			item_graph_Record::AutoCorrectLookupOffsets(lookupDataPtr);
			//No offsets to correct
		}
		__int8 edge_type;
std::wstring edge_type_EnumValue() const {return Get_edge_type_EnumValue(edge_type);};
__int8 attribute_group;
std::wstring attribute_group_EnumValue() const {return Get_attribute_group_EnumValue(attribute_group);};
__int8 seed_item_sub_group;
std::wstring seed_item_sub_group_EnumValue() const {return Get_seed_item_sub_group_EnumValue(seed_item_sub_group);};
char Pad_sub_0[1];
Data::TableRef feed_item;
int feed_item_tableId(){return 189;};
Data::TableRef feed_recipe;
int feed_recipe_tableId(){return 212;};
Data::TableRef start_item;
int start_item_tableId(){return 189;};
__int8 start_orientation;
std::wstring start_orientation_EnumValue() const {return Get_start_orientation_EnumValue(start_orientation);};
char Pad_sub_1[3];
Data::TableRef end_item;
int end_item_tableId(){return 189;};
__int8 end_orientation;
std::wstring end_orientation_EnumValue() const {return Get_end_orientation_EnumValue(end_orientation);};
__int8 success_probability;
std::wstring success_probability_EnumValue() const {return Get_success_probability_EnumValue(success_probability);};
bool has_arrow;

		static __int32 SubType() { return 1; }
	};
#pragma pack(pop)
}