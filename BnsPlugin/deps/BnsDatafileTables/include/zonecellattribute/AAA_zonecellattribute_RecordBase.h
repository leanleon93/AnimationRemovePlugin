/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct zonecellattribute_Record : DrEl
	{
	private:
		static std::wstring Get_cell_attribute_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone") == 0) return zone;
			if (wcscmp(fieldName, L"pos_count") == 0) return pos_count;
			if (wcscmp(fieldName, L"pos_x") == 0) return pos_x;
			if (wcscmp(fieldName, L"pos_x_1") == 0) return pos_x[0];
			if (wcscmp(fieldName, L"pos_x_2") == 0) return pos_x[1];
			if (wcscmp(fieldName, L"pos_x_3") == 0) return pos_x[2];
			if (wcscmp(fieldName, L"pos_x_4") == 0) return pos_x[3];
			if (wcscmp(fieldName, L"pos_x_5") == 0) return pos_x[4];
			if (wcscmp(fieldName, L"pos_x_6") == 0) return pos_x[5];
			if (wcscmp(fieldName, L"pos_x_7") == 0) return pos_x[6];
			if (wcscmp(fieldName, L"pos_x_8") == 0) return pos_x[7];
			if (wcscmp(fieldName, L"pos_x_9") == 0) return pos_x[8];
			if (wcscmp(fieldName, L"pos_x_10") == 0) return pos_x[9];
			if (wcscmp(fieldName, L"pos_x_11") == 0) return pos_x[10];
			if (wcscmp(fieldName, L"pos_x_12") == 0) return pos_x[11];
			if (wcscmp(fieldName, L"pos_x_13") == 0) return pos_x[12];
			if (wcscmp(fieldName, L"pos_x_14") == 0) return pos_x[13];
			if (wcscmp(fieldName, L"pos_x_15") == 0) return pos_x[14];
			if (wcscmp(fieldName, L"pos_x_16") == 0) return pos_x[15];
			if (wcscmp(fieldName, L"pos_x_17") == 0) return pos_x[16];
			if (wcscmp(fieldName, L"pos_x_18") == 0) return pos_x[17];
			if (wcscmp(fieldName, L"pos_x_19") == 0) return pos_x[18];
			if (wcscmp(fieldName, L"pos_x_20") == 0) return pos_x[19];
			if (wcscmp(fieldName, L"pos_y") == 0) return pos_y;
			if (wcscmp(fieldName, L"pos_y_1") == 0) return pos_y[0];
			if (wcscmp(fieldName, L"pos_y_2") == 0) return pos_y[1];
			if (wcscmp(fieldName, L"pos_y_3") == 0) return pos_y[2];
			if (wcscmp(fieldName, L"pos_y_4") == 0) return pos_y[3];
			if (wcscmp(fieldName, L"pos_y_5") == 0) return pos_y[4];
			if (wcscmp(fieldName, L"pos_y_6") == 0) return pos_y[5];
			if (wcscmp(fieldName, L"pos_y_7") == 0) return pos_y[6];
			if (wcscmp(fieldName, L"pos_y_8") == 0) return pos_y[7];
			if (wcscmp(fieldName, L"pos_y_9") == 0) return pos_y[8];
			if (wcscmp(fieldName, L"pos_y_10") == 0) return pos_y[9];
			if (wcscmp(fieldName, L"pos_y_11") == 0) return pos_y[10];
			if (wcscmp(fieldName, L"pos_y_12") == 0) return pos_y[11];
			if (wcscmp(fieldName, L"pos_y_13") == 0) return pos_y[12];
			if (wcscmp(fieldName, L"pos_y_14") == 0) return pos_y[13];
			if (wcscmp(fieldName, L"pos_y_15") == 0) return pos_y[14];
			if (wcscmp(fieldName, L"pos_y_16") == 0) return pos_y[15];
			if (wcscmp(fieldName, L"pos_y_17") == 0) return pos_y[16];
			if (wcscmp(fieldName, L"pos_y_18") == 0) return pos_y[17];
			if (wcscmp(fieldName, L"pos_y_19") == 0) return pos_y[18];
			if (wcscmp(fieldName, L"pos_y_20") == 0) return pos_y[19];
			if (wcscmp(fieldName, L"pos_z_start") == 0) return pos_z_start;
			if (wcscmp(fieldName, L"pos_z_end") == 0) return pos_z_end;
			if (wcscmp(fieldName, L"cell_attribute") == 0) return cell_attribute;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone") == 0) return Data::AnyFieldToStringConverter::ToString(&zone);
			if (wcscmp(fieldName, L"pos_count") == 0) return Data::AnyFieldToStringConverter::ToString(&pos_count);
			if (wcscmp(fieldName, L"pos_x_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[0]));
			if (wcscmp(fieldName, L"pos_x_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[1]));
			if (wcscmp(fieldName, L"pos_x_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[2]));
			if (wcscmp(fieldName, L"pos_x_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[3]));
			if (wcscmp(fieldName, L"pos_x_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[4]));
			if (wcscmp(fieldName, L"pos_x_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[5]));
			if (wcscmp(fieldName, L"pos_x_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[6]));
			if (wcscmp(fieldName, L"pos_x_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[7]));
			if (wcscmp(fieldName, L"pos_x_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[8]));
			if (wcscmp(fieldName, L"pos_x_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[9]));
			if (wcscmp(fieldName, L"pos_x_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[10]));
			if (wcscmp(fieldName, L"pos_x_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[11]));
			if (wcscmp(fieldName, L"pos_x_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[12]));
			if (wcscmp(fieldName, L"pos_x_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[13]));
			if (wcscmp(fieldName, L"pos_x_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[14]));
			if (wcscmp(fieldName, L"pos_x_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[15]));
			if (wcscmp(fieldName, L"pos_x_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[16]));
			if (wcscmp(fieldName, L"pos_x_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[17]));
			if (wcscmp(fieldName, L"pos_x_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[18]));
			if (wcscmp(fieldName, L"pos_x_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_x[19]));
			if (wcscmp(fieldName, L"pos_y_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[0]));
			if (wcscmp(fieldName, L"pos_y_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[1]));
			if (wcscmp(fieldName, L"pos_y_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[2]));
			if (wcscmp(fieldName, L"pos_y_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[3]));
			if (wcscmp(fieldName, L"pos_y_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[4]));
			if (wcscmp(fieldName, L"pos_y_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[5]));
			if (wcscmp(fieldName, L"pos_y_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[6]));
			if (wcscmp(fieldName, L"pos_y_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[7]));
			if (wcscmp(fieldName, L"pos_y_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[8]));
			if (wcscmp(fieldName, L"pos_y_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[9]));
			if (wcscmp(fieldName, L"pos_y_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[10]));
			if (wcscmp(fieldName, L"pos_y_12") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[11]));
			if (wcscmp(fieldName, L"pos_y_13") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[12]));
			if (wcscmp(fieldName, L"pos_y_14") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[13]));
			if (wcscmp(fieldName, L"pos_y_15") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[14]));
			if (wcscmp(fieldName, L"pos_y_16") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[15]));
			if (wcscmp(fieldName, L"pos_y_17") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[16]));
			if (wcscmp(fieldName, L"pos_y_18") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[17]));
			if (wcscmp(fieldName, L"pos_y_19") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[18]));
			if (wcscmp(fieldName, L"pos_y_20") == 0) return Data::AnyFieldToStringConverter::ToString(&(pos_y[19]));
			if (wcscmp(fieldName, L"pos_z_start") == 0) return Data::AnyFieldToStringConverter::ToString(&pos_z_start);
			if (wcscmp(fieldName, L"pos_z_end") == 0) return Data::AnyFieldToStringConverter::ToString(&pos_z_end);
			if (wcscmp(fieldName, L"cell_attribute") == 0) return Data::AnyFieldToStringConverter::ToString(&cell_attribute);

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
Data::TableRef zone;
int zone_tableId(){return 443;};
__int8 pos_count;
char Pad0[3];
__int32 pos_x[20];
__int32 pos_y[20];
__int32 pos_z_start;
__int32 pos_z_end;
__int8 cell_attribute;
std::wstring cell_attribute_EnumValue() const {return Get_cell_attribute_EnumValue(cell_attribute);};

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 441; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) zonecellattribute_RecordPtr // : DrRecordPtr
	{
		zonecellattribute_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::zonecellattribute_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}