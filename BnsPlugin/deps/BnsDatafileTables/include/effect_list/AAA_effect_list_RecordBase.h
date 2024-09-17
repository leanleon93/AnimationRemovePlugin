/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct effect_list_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"effect") == 0) return effect;
			if (wcscmp(fieldName, L"effect_1") == 0) return effect[0];
			if (wcscmp(fieldName, L"effect_2") == 0) return effect[1];
			if (wcscmp(fieldName, L"effect_3") == 0) return effect[2];
			if (wcscmp(fieldName, L"effect_4") == 0) return effect[3];
			if (wcscmp(fieldName, L"effect_5") == 0) return effect[4];
			if (wcscmp(fieldName, L"effect_6") == 0) return effect[5];
			if (wcscmp(fieldName, L"effect_7") == 0) return effect[6];
			if (wcscmp(fieldName, L"effect_8") == 0) return effect[7];
			if (wcscmp(fieldName, L"effect_9") == 0) return effect[8];
			if (wcscmp(fieldName, L"effect_10") == 0) return effect[9];
			if (wcscmp(fieldName, L"effect_11") == 0) return effect[10];
			if (wcscmp(fieldName, L"effect_12") == 0) return effect[11];
			if (wcscmp(fieldName, L"effect_13") == 0) return effect[12];
			if (wcscmp(fieldName, L"effect_14") == 0) return effect[13];
			if (wcscmp(fieldName, L"effect_15") == 0) return effect[14];
			if (wcscmp(fieldName, L"effect_16") == 0) return effect[15];
			if (wcscmp(fieldName, L"effect_17") == 0) return effect[16];
			if (wcscmp(fieldName, L"effect_18") == 0) return effect[17];
			if (wcscmp(fieldName, L"effect_19") == 0) return effect[18];
			if (wcscmp(fieldName, L"effect_20") == 0) return effect[19];
			if (wcscmp(fieldName, L"effect_weight") == 0) return effect_weight;
			if (wcscmp(fieldName, L"effect_weight_1") == 0) return effect_weight[0];
			if (wcscmp(fieldName, L"effect_weight_2") == 0) return effect_weight[1];
			if (wcscmp(fieldName, L"effect_weight_3") == 0) return effect_weight[2];
			if (wcscmp(fieldName, L"effect_weight_4") == 0) return effect_weight[3];
			if (wcscmp(fieldName, L"effect_weight_5") == 0) return effect_weight[4];
			if (wcscmp(fieldName, L"effect_weight_6") == 0) return effect_weight[5];
			if (wcscmp(fieldName, L"effect_weight_7") == 0) return effect_weight[6];
			if (wcscmp(fieldName, L"effect_weight_8") == 0) return effect_weight[7];
			if (wcscmp(fieldName, L"effect_weight_9") == 0) return effect_weight[8];
			if (wcscmp(fieldName, L"effect_weight_10") == 0) return effect_weight[9];
			if (wcscmp(fieldName, L"effect_weight_11") == 0) return effect_weight[10];
			if (wcscmp(fieldName, L"effect_weight_12") == 0) return effect_weight[11];
			if (wcscmp(fieldName, L"effect_weight_13") == 0) return effect_weight[12];
			if (wcscmp(fieldName, L"effect_weight_14") == 0) return effect_weight[13];
			if (wcscmp(fieldName, L"effect_weight_15") == 0) return effect_weight[14];
			if (wcscmp(fieldName, L"effect_weight_16") == 0) return effect_weight[15];
			if (wcscmp(fieldName, L"effect_weight_17") == 0) return effect_weight[16];
			if (wcscmp(fieldName, L"effect_weight_18") == 0) return effect_weight[17];
			if (wcscmp(fieldName, L"effect_weight_19") == 0) return effect_weight[18];
			if (wcscmp(fieldName, L"effect_weight_20") == 0) return effect_weight[19];
			if (wcscmp(fieldName, L"effect_total_weight") == 0) return effect_total_weight;
			if (wcscmp(fieldName, L"effect_total_count") == 0) return effect_total_count;
			if (wcscmp(fieldName, L"draw_enable") == 0) return draw_enable;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"effect_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[0]));
			if (wcscmp(fieldName, L"effect_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[1]));
			if (wcscmp(fieldName, L"effect_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[2]));
			if (wcscmp(fieldName, L"effect_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[3]));
			if (wcscmp(fieldName, L"effect_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[4]));
			if (wcscmp(fieldName, L"effect_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[5]));
			if (wcscmp(fieldName, L"effect_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[6]));
			if (wcscmp(fieldName, L"effect_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[7]));
			if (wcscmp(fieldName, L"effect_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[8]));
			if (wcscmp(fieldName, L"effect_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[9]));
			if (wcscmp(fieldName, L"effect_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[10]));
			if (wcscmp(fieldName, L"effect_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[11]));
			if (wcscmp(fieldName, L"effect_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[12]));
			if (wcscmp(fieldName, L"effect_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[13]));
			if (wcscmp(fieldName, L"effect_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[14]));
			if (wcscmp(fieldName, L"effect_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[15]));
			if (wcscmp(fieldName, L"effect_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[16]));
			if (wcscmp(fieldName, L"effect_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[17]));
			if (wcscmp(fieldName, L"effect_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[18]));
			if (wcscmp(fieldName, L"effect_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect[19]));
			if (wcscmp(fieldName, L"effect_weight_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[0]));
			if (wcscmp(fieldName, L"effect_weight_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[1]));
			if (wcscmp(fieldName, L"effect_weight_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[2]));
			if (wcscmp(fieldName, L"effect_weight_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[3]));
			if (wcscmp(fieldName, L"effect_weight_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[4]));
			if (wcscmp(fieldName, L"effect_weight_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[5]));
			if (wcscmp(fieldName, L"effect_weight_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[6]));
			if (wcscmp(fieldName, L"effect_weight_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[7]));
			if (wcscmp(fieldName, L"effect_weight_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[8]));
			if (wcscmp(fieldName, L"effect_weight_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[9]));
			if (wcscmp(fieldName, L"effect_weight_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[10]));
			if (wcscmp(fieldName, L"effect_weight_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[11]));
			if (wcscmp(fieldName, L"effect_weight_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[12]));
			if (wcscmp(fieldName, L"effect_weight_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[13]));
			if (wcscmp(fieldName, L"effect_weight_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[14]));
			if (wcscmp(fieldName, L"effect_weight_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[15]));
			if (wcscmp(fieldName, L"effect_weight_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[16]));
			if (wcscmp(fieldName, L"effect_weight_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[17]));
			if (wcscmp(fieldName, L"effect_weight_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[18]));
			if (wcscmp(fieldName, L"effect_weight_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(effect_weight[19]));
			if (wcscmp(fieldName, L"effect_total_weight") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_total_weight);
			if (wcscmp(fieldName, L"effect_total_count") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_total_count);
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
Data::TableRef effect[20];
int effect_tableId(){return 111;};
__int16 effect_weight[20];
__int32 effect_total_weight;
__int8 effect_total_count;
bool draw_enable;

		static TableVersion Version() { return TableVersion(1, 1); }
		static __int16 TableId() { return 113; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) effect_list_RecordPtr // : DrRecordPtr
	{
		effect_list_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::effect_list_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}