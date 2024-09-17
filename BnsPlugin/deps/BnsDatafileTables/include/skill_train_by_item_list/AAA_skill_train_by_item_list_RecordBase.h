/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct skill_train_by_item_list_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"change_set") == 0) return change_set;
			if (wcscmp(fieldName, L"change_set_1") == 0) return change_set[0];
			if (wcscmp(fieldName, L"change_set_2") == 0) return change_set[1];
			if (wcscmp(fieldName, L"change_set_3") == 0) return change_set[2];
			if (wcscmp(fieldName, L"change_set_4") == 0) return change_set[3];
			if (wcscmp(fieldName, L"change_set_5") == 0) return change_set[4];
			if (wcscmp(fieldName, L"change_set_6") == 0) return change_set[5];
			if (wcscmp(fieldName, L"change_set_7") == 0) return change_set[6];
			if (wcscmp(fieldName, L"change_set_8") == 0) return change_set[7];
			if (wcscmp(fieldName, L"change_set_9") == 0) return change_set[8];
			if (wcscmp(fieldName, L"change_set_10") == 0) return change_set[9];
			if (wcscmp(fieldName, L"change_set_prob_weight") == 0) return change_set_prob_weight;
			if (wcscmp(fieldName, L"change_set_prob_weight_1") == 0) return change_set_prob_weight[0];
			if (wcscmp(fieldName, L"change_set_prob_weight_2") == 0) return change_set_prob_weight[1];
			if (wcscmp(fieldName, L"change_set_prob_weight_3") == 0) return change_set_prob_weight[2];
			if (wcscmp(fieldName, L"change_set_prob_weight_4") == 0) return change_set_prob_weight[3];
			if (wcscmp(fieldName, L"change_set_prob_weight_5") == 0) return change_set_prob_weight[4];
			if (wcscmp(fieldName, L"change_set_prob_weight_6") == 0) return change_set_prob_weight[5];
			if (wcscmp(fieldName, L"change_set_prob_weight_7") == 0) return change_set_prob_weight[6];
			if (wcscmp(fieldName, L"change_set_prob_weight_8") == 0) return change_set_prob_weight[7];
			if (wcscmp(fieldName, L"change_set_prob_weight_9") == 0) return change_set_prob_weight[8];
			if (wcscmp(fieldName, L"change_set_prob_weight_10") == 0) return change_set_prob_weight[9];
			if (wcscmp(fieldName, L"change_set_total_prob_weight") == 0) return change_set_total_prob_weight;
			if (wcscmp(fieldName, L"change_set_total_count") == 0) return change_set_total_count;
			if (wcscmp(fieldName, L"draw_enable") == 0) return draw_enable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"change_set_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[0]));
			if (wcscmp(fieldName, L"change_set_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[1]));
			if (wcscmp(fieldName, L"change_set_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[2]));
			if (wcscmp(fieldName, L"change_set_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[3]));
			if (wcscmp(fieldName, L"change_set_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[4]));
			if (wcscmp(fieldName, L"change_set_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[5]));
			if (wcscmp(fieldName, L"change_set_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[6]));
			if (wcscmp(fieldName, L"change_set_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[7]));
			if (wcscmp(fieldName, L"change_set_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[8]));
			if (wcscmp(fieldName, L"change_set_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set[9]));
			if (wcscmp(fieldName, L"change_set_prob_weight_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[0]));
			if (wcscmp(fieldName, L"change_set_prob_weight_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[1]));
			if (wcscmp(fieldName, L"change_set_prob_weight_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[2]));
			if (wcscmp(fieldName, L"change_set_prob_weight_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[3]));
			if (wcscmp(fieldName, L"change_set_prob_weight_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[4]));
			if (wcscmp(fieldName, L"change_set_prob_weight_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[5]));
			if (wcscmp(fieldName, L"change_set_prob_weight_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[6]));
			if (wcscmp(fieldName, L"change_set_prob_weight_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[7]));
			if (wcscmp(fieldName, L"change_set_prob_weight_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[8]));
			if (wcscmp(fieldName, L"change_set_prob_weight_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(change_set_prob_weight[9]));
			if (wcscmp(fieldName, L"change_set_total_prob_weight") == 0) return Data::AnyFieldToStringConverter::ToString(&change_set_total_prob_weight);
			if (wcscmp(fieldName, L"change_set_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&change_set_total_count);
			if (wcscmp(fieldName, L"draw_enable") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_enable);

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
Data::TableRef change_set[10];
int change_set_tableId(){return 352;};
__int16 change_set_prob_weight[10];
__int32 change_set_total_prob_weight;
__int8 change_set_total_count;
bool draw_enable;

		static TableVersion Version() { return TableVersion(2, 1); }
		static __int16 TableId() { return 353; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) skill_train_by_item_list_RecordPtr // : DrRecordPtr
	{
		skill_train_by_item_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::skill_train_by_item_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}