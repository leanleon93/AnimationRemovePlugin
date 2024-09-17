/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct randombox_preview_Record : DrEl
	{
	private:
		static std::wstring Get_fixed_item_condition_EnumValue(__int8 value);
		static std::wstring Get_selected_item_condition_EnumValue(__int8 value);
		static std::wstring Get_random_item_condition_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"fixed_item") == 0) return fixed_item;
			if (wcscmp(fieldName, L"fixed_item_1") == 0) return fixed_item[0];
			if (wcscmp(fieldName, L"fixed_item_2") == 0) return fixed_item[1];
			if (wcscmp(fieldName, L"fixed_item_3") == 0) return fixed_item[2];
			if (wcscmp(fieldName, L"fixed_item_4") == 0) return fixed_item[3];
			if (wcscmp(fieldName, L"fixed_item_5") == 0) return fixed_item[4];
			if (wcscmp(fieldName, L"fixed_item_6") == 0) return fixed_item[5];
			if (wcscmp(fieldName, L"fixed_item_7") == 0) return fixed_item[6];
			if (wcscmp(fieldName, L"fixed_item_8") == 0) return fixed_item[7];
			if (wcscmp(fieldName, L"fixed_item_condition") == 0) return fixed_item_condition;
			if (wcscmp(fieldName, L"fixed_item_condition_1") == 0) return fixed_item_condition[0];
			if (wcscmp(fieldName, L"fixed_item_condition_2") == 0) return fixed_item_condition[1];
			if (wcscmp(fieldName, L"fixed_item_condition_3") == 0) return fixed_item_condition[2];
			if (wcscmp(fieldName, L"fixed_item_condition_4") == 0) return fixed_item_condition[3];
			if (wcscmp(fieldName, L"fixed_item_condition_5") == 0) return fixed_item_condition[4];
			if (wcscmp(fieldName, L"fixed_item_condition_6") == 0) return fixed_item_condition[5];
			if (wcscmp(fieldName, L"fixed_item_condition_7") == 0) return fixed_item_condition[6];
			if (wcscmp(fieldName, L"fixed_item_condition_8") == 0) return fixed_item_condition[7];
			if (wcscmp(fieldName, L"selected_item") == 0) return selected_item;
			if (wcscmp(fieldName, L"selected_item_1") == 0) return selected_item[0];
			if (wcscmp(fieldName, L"selected_item_2") == 0) return selected_item[1];
			if (wcscmp(fieldName, L"selected_item_3") == 0) return selected_item[2];
			if (wcscmp(fieldName, L"selected_item_4") == 0) return selected_item[3];
			if (wcscmp(fieldName, L"selected_item_5") == 0) return selected_item[4];
			if (wcscmp(fieldName, L"selected_item_6") == 0) return selected_item[5];
			if (wcscmp(fieldName, L"selected_item_7") == 0) return selected_item[6];
			if (wcscmp(fieldName, L"selected_item_8") == 0) return selected_item[7];
			if (wcscmp(fieldName, L"selected_item_9") == 0) return selected_item[8];
			if (wcscmp(fieldName, L"selected_item_10") == 0) return selected_item[9];
			if (wcscmp(fieldName, L"selected_item_11") == 0) return selected_item[10];
			if (wcscmp(fieldName, L"selected_item_12") == 0) return selected_item[11];
			if (wcscmp(fieldName, L"selected_item_13") == 0) return selected_item[12];
			if (wcscmp(fieldName, L"selected_item_14") == 0) return selected_item[13];
			if (wcscmp(fieldName, L"selected_item_15") == 0) return selected_item[14];
			if (wcscmp(fieldName, L"selected_item_16") == 0) return selected_item[15];
			if (wcscmp(fieldName, L"selected_item_17") == 0) return selected_item[16];
			if (wcscmp(fieldName, L"selected_item_18") == 0) return selected_item[17];
			if (wcscmp(fieldName, L"selected_item_19") == 0) return selected_item[18];
			if (wcscmp(fieldName, L"selected_item_20") == 0) return selected_item[19];
			if (wcscmp(fieldName, L"selected_item_condition") == 0) return selected_item_condition;
			if (wcscmp(fieldName, L"selected_item_condition_1") == 0) return selected_item_condition[0];
			if (wcscmp(fieldName, L"selected_item_condition_2") == 0) return selected_item_condition[1];
			if (wcscmp(fieldName, L"selected_item_condition_3") == 0) return selected_item_condition[2];
			if (wcscmp(fieldName, L"selected_item_condition_4") == 0) return selected_item_condition[3];
			if (wcscmp(fieldName, L"selected_item_condition_5") == 0) return selected_item_condition[4];
			if (wcscmp(fieldName, L"selected_item_condition_6") == 0) return selected_item_condition[5];
			if (wcscmp(fieldName, L"selected_item_condition_7") == 0) return selected_item_condition[6];
			if (wcscmp(fieldName, L"selected_item_condition_8") == 0) return selected_item_condition[7];
			if (wcscmp(fieldName, L"selected_item_condition_9") == 0) return selected_item_condition[8];
			if (wcscmp(fieldName, L"selected_item_condition_10") == 0) return selected_item_condition[9];
			if (wcscmp(fieldName, L"selected_item_condition_11") == 0) return selected_item_condition[10];
			if (wcscmp(fieldName, L"selected_item_condition_12") == 0) return selected_item_condition[11];
			if (wcscmp(fieldName, L"selected_item_condition_13") == 0) return selected_item_condition[12];
			if (wcscmp(fieldName, L"selected_item_condition_14") == 0) return selected_item_condition[13];
			if (wcscmp(fieldName, L"selected_item_condition_15") == 0) return selected_item_condition[14];
			if (wcscmp(fieldName, L"selected_item_condition_16") == 0) return selected_item_condition[15];
			if (wcscmp(fieldName, L"selected_item_condition_17") == 0) return selected_item_condition[16];
			if (wcscmp(fieldName, L"selected_item_condition_18") == 0) return selected_item_condition[17];
			if (wcscmp(fieldName, L"selected_item_condition_19") == 0) return selected_item_condition[18];
			if (wcscmp(fieldName, L"selected_item_condition_20") == 0) return selected_item_condition[19];
			if (wcscmp(fieldName, L"random_item") == 0) return random_item;
			if (wcscmp(fieldName, L"random_item_1") == 0) return random_item[0];
			if (wcscmp(fieldName, L"random_item_2") == 0) return random_item[1];
			if (wcscmp(fieldName, L"random_item_3") == 0) return random_item[2];
			if (wcscmp(fieldName, L"random_item_4") == 0) return random_item[3];
			if (wcscmp(fieldName, L"random_item_5") == 0) return random_item[4];
			if (wcscmp(fieldName, L"random_item_6") == 0) return random_item[5];
			if (wcscmp(fieldName, L"random_item_7") == 0) return random_item[6];
			if (wcscmp(fieldName, L"random_item_8") == 0) return random_item[7];
			if (wcscmp(fieldName, L"random_item_9") == 0) return random_item[8];
			if (wcscmp(fieldName, L"random_item_10") == 0) return random_item[9];
			if (wcscmp(fieldName, L"random_item_11") == 0) return random_item[10];
			if (wcscmp(fieldName, L"random_item_12") == 0) return random_item[11];
			if (wcscmp(fieldName, L"random_item_13") == 0) return random_item[12];
			if (wcscmp(fieldName, L"random_item_14") == 0) return random_item[13];
			if (wcscmp(fieldName, L"random_item_15") == 0) return random_item[14];
			if (wcscmp(fieldName, L"random_item_16") == 0) return random_item[15];
			if (wcscmp(fieldName, L"random_item_17") == 0) return random_item[16];
			if (wcscmp(fieldName, L"random_item_18") == 0) return random_item[17];
			if (wcscmp(fieldName, L"random_item_19") == 0) return random_item[18];
			if (wcscmp(fieldName, L"random_item_20") == 0) return random_item[19];
			if (wcscmp(fieldName, L"random_item_condition") == 0) return random_item_condition;
			if (wcscmp(fieldName, L"random_item_condition_1") == 0) return random_item_condition[0];
			if (wcscmp(fieldName, L"random_item_condition_2") == 0) return random_item_condition[1];
			if (wcscmp(fieldName, L"random_item_condition_3") == 0) return random_item_condition[2];
			if (wcscmp(fieldName, L"random_item_condition_4") == 0) return random_item_condition[3];
			if (wcscmp(fieldName, L"random_item_condition_5") == 0) return random_item_condition[4];
			if (wcscmp(fieldName, L"random_item_condition_6") == 0) return random_item_condition[5];
			if (wcscmp(fieldName, L"random_item_condition_7") == 0) return random_item_condition[6];
			if (wcscmp(fieldName, L"random_item_condition_8") == 0) return random_item_condition[7];
			if (wcscmp(fieldName, L"random_item_condition_9") == 0) return random_item_condition[8];
			if (wcscmp(fieldName, L"random_item_condition_10") == 0) return random_item_condition[9];
			if (wcscmp(fieldName, L"random_item_condition_11") == 0) return random_item_condition[10];
			if (wcscmp(fieldName, L"random_item_condition_12") == 0) return random_item_condition[11];
			if (wcscmp(fieldName, L"random_item_condition_13") == 0) return random_item_condition[12];
			if (wcscmp(fieldName, L"random_item_condition_14") == 0) return random_item_condition[13];
			if (wcscmp(fieldName, L"random_item_condition_15") == 0) return random_item_condition[14];
			if (wcscmp(fieldName, L"random_item_condition_16") == 0) return random_item_condition[15];
			if (wcscmp(fieldName, L"random_item_condition_17") == 0) return random_item_condition[16];
			if (wcscmp(fieldName, L"random_item_condition_18") == 0) return random_item_condition[17];
			if (wcscmp(fieldName, L"random_item_condition_19") == 0) return random_item_condition[18];
			if (wcscmp(fieldName, L"random_item_condition_20") == 0) return random_item_condition[19];
			if (wcscmp(fieldName, L"description") == 0) return description;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"fixed_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[0]));
			if (wcscmp(fieldName, L"fixed_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[1]));
			if (wcscmp(fieldName, L"fixed_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[2]));
			if (wcscmp(fieldName, L"fixed_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[3]));
			if (wcscmp(fieldName, L"fixed_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[4]));
			if (wcscmp(fieldName, L"fixed_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[5]));
			if (wcscmp(fieldName, L"fixed_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[6]));
			if (wcscmp(fieldName, L"fixed_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item[7]));
			if (wcscmp(fieldName, L"fixed_item_condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[0]));
			if (wcscmp(fieldName, L"fixed_item_condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[1]));
			if (wcscmp(fieldName, L"fixed_item_condition_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[2]));
			if (wcscmp(fieldName, L"fixed_item_condition_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[3]));
			if (wcscmp(fieldName, L"fixed_item_condition_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[4]));
			if (wcscmp(fieldName, L"fixed_item_condition_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[5]));
			if (wcscmp(fieldName, L"fixed_item_condition_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[6]));
			if (wcscmp(fieldName, L"fixed_item_condition_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(fixed_item_condition[7]));
			if (wcscmp(fieldName, L"selected_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[0]));
			if (wcscmp(fieldName, L"selected_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[1]));
			if (wcscmp(fieldName, L"selected_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[2]));
			if (wcscmp(fieldName, L"selected_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[3]));
			if (wcscmp(fieldName, L"selected_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[4]));
			if (wcscmp(fieldName, L"selected_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[5]));
			if (wcscmp(fieldName, L"selected_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[6]));
			if (wcscmp(fieldName, L"selected_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[7]));
			if (wcscmp(fieldName, L"selected_item_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[8]));
			if (wcscmp(fieldName, L"selected_item_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[9]));
			if (wcscmp(fieldName, L"selected_item_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[10]));
			if (wcscmp(fieldName, L"selected_item_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[11]));
			if (wcscmp(fieldName, L"selected_item_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[12]));
			if (wcscmp(fieldName, L"selected_item_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[13]));
			if (wcscmp(fieldName, L"selected_item_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[14]));
			if (wcscmp(fieldName, L"selected_item_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[15]));
			if (wcscmp(fieldName, L"selected_item_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[16]));
			if (wcscmp(fieldName, L"selected_item_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[17]));
			if (wcscmp(fieldName, L"selected_item_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[18]));
			if (wcscmp(fieldName, L"selected_item_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item[19]));
			if (wcscmp(fieldName, L"selected_item_condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[0]));
			if (wcscmp(fieldName, L"selected_item_condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[1]));
			if (wcscmp(fieldName, L"selected_item_condition_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[2]));
			if (wcscmp(fieldName, L"selected_item_condition_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[3]));
			if (wcscmp(fieldName, L"selected_item_condition_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[4]));
			if (wcscmp(fieldName, L"selected_item_condition_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[5]));
			if (wcscmp(fieldName, L"selected_item_condition_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[6]));
			if (wcscmp(fieldName, L"selected_item_condition_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[7]));
			if (wcscmp(fieldName, L"selected_item_condition_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[8]));
			if (wcscmp(fieldName, L"selected_item_condition_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[9]));
			if (wcscmp(fieldName, L"selected_item_condition_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[10]));
			if (wcscmp(fieldName, L"selected_item_condition_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[11]));
			if (wcscmp(fieldName, L"selected_item_condition_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[12]));
			if (wcscmp(fieldName, L"selected_item_condition_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[13]));
			if (wcscmp(fieldName, L"selected_item_condition_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[14]));
			if (wcscmp(fieldName, L"selected_item_condition_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[15]));
			if (wcscmp(fieldName, L"selected_item_condition_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[16]));
			if (wcscmp(fieldName, L"selected_item_condition_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[17]));
			if (wcscmp(fieldName, L"selected_item_condition_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[18]));
			if (wcscmp(fieldName, L"selected_item_condition_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(selected_item_condition[19]));
			if (wcscmp(fieldName, L"random_item_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[0]));
			if (wcscmp(fieldName, L"random_item_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[1]));
			if (wcscmp(fieldName, L"random_item_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[2]));
			if (wcscmp(fieldName, L"random_item_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[3]));
			if (wcscmp(fieldName, L"random_item_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[4]));
			if (wcscmp(fieldName, L"random_item_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[5]));
			if (wcscmp(fieldName, L"random_item_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[6]));
			if (wcscmp(fieldName, L"random_item_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[7]));
			if (wcscmp(fieldName, L"random_item_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[8]));
			if (wcscmp(fieldName, L"random_item_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[9]));
			if (wcscmp(fieldName, L"random_item_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[10]));
			if (wcscmp(fieldName, L"random_item_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[11]));
			if (wcscmp(fieldName, L"random_item_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[12]));
			if (wcscmp(fieldName, L"random_item_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[13]));
			if (wcscmp(fieldName, L"random_item_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[14]));
			if (wcscmp(fieldName, L"random_item_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[15]));
			if (wcscmp(fieldName, L"random_item_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[16]));
			if (wcscmp(fieldName, L"random_item_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[17]));
			if (wcscmp(fieldName, L"random_item_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[18]));
			if (wcscmp(fieldName, L"random_item_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item[19]));
			if (wcscmp(fieldName, L"random_item_condition_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[0]));
			if (wcscmp(fieldName, L"random_item_condition_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[1]));
			if (wcscmp(fieldName, L"random_item_condition_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[2]));
			if (wcscmp(fieldName, L"random_item_condition_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[3]));
			if (wcscmp(fieldName, L"random_item_condition_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[4]));
			if (wcscmp(fieldName, L"random_item_condition_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[5]));
			if (wcscmp(fieldName, L"random_item_condition_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[6]));
			if (wcscmp(fieldName, L"random_item_condition_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[7]));
			if (wcscmp(fieldName, L"random_item_condition_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[8]));
			if (wcscmp(fieldName, L"random_item_condition_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[9]));
			if (wcscmp(fieldName, L"random_item_condition_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[10]));
			if (wcscmp(fieldName, L"random_item_condition_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[11]));
			if (wcscmp(fieldName, L"random_item_condition_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[12]));
			if (wcscmp(fieldName, L"random_item_condition_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[13]));
			if (wcscmp(fieldName, L"random_item_condition_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[14]));
			if (wcscmp(fieldName, L"random_item_condition_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[15]));
			if (wcscmp(fieldName, L"random_item_condition_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[16]));
			if (wcscmp(fieldName, L"random_item_condition_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[17]));
			if (wcscmp(fieldName, L"random_item_condition_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[18]));
			if (wcscmp(fieldName, L"random_item_condition_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(random_item_condition[19]));
			if (wcscmp(fieldName, L"description") == 0) return Data::AnyFieldToStringConverter::ToString(&description);

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
Data::ExplicitTableRef fixed_item[8];
__int8 fixed_item_condition[8];
std::wstring fixed_item_condition_EnumValue(int index) const {return Get_fixed_item_condition_EnumValue(fixed_item_condition[index]);};
Data::ExplicitTableRef selected_item[20];
__int8 selected_item_condition[20];
std::wstring selected_item_condition_EnumValue(int index) const {return Get_selected_item_condition_EnumValue(selected_item_condition[index]);};
Data::ExplicitTableRef random_item[20];
__int8 random_item_condition[20];
std::wstring random_item_condition_EnumValue(int index) const {return Get_random_item_condition_EnumValue(random_item_condition[index]);};
Data::TableRef description;
int description_tableId(){return 405;};

		static TableVersion Version() { return TableVersion(0, 5); }
		static __int16 TableId() { return 290; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) randombox_preview_RecordPtr // : DrRecordPtr
	{
		randombox_preview_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::randombox_preview_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}