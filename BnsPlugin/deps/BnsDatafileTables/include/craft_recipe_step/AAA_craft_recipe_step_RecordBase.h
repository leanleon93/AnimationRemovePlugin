/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct craft_recipe_step_Record : DrEl
	{
	private:

	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"time_cost") == 0) return time_cost;
			if (wcscmp(fieldName, L"output_id") == 0) return output_id;
			if (wcscmp(fieldName, L"output_id_1") == 0) return output_id[0];
			if (wcscmp(fieldName, L"output_id_2") == 0) return output_id[1];
			if (wcscmp(fieldName, L"output_id_3") == 0) return output_id[2];
			if (wcscmp(fieldName, L"output_amount") == 0) return output_amount;
			if (wcscmp(fieldName, L"output_amount_1") == 0) return output_amount[0];
			if (wcscmp(fieldName, L"output_amount_2") == 0) return output_amount[1];
			if (wcscmp(fieldName, L"output_amount_3") == 0) return output_amount[2];
			if (wcscmp(fieldName, L"output_customizable") == 0) return output_customizable;
			if (wcscmp(fieldName, L"output_customizable_1") == 0) return output_customizable[0];
			if (wcscmp(fieldName, L"output_customizable_2") == 0) return output_customizable[1];
			if (wcscmp(fieldName, L"output_customizable_3") == 0) return output_customizable[2];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"time_cost") == 0) return Data::AnyFieldToStringConverter::ToString(&time_cost);
			if (wcscmp(fieldName, L"output_id_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_id[0]));
			if (wcscmp(fieldName, L"output_id_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_id[1]));
			if (wcscmp(fieldName, L"output_id_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_id[2]));
			if (wcscmp(fieldName, L"output_amount_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_amount[0]));
			if (wcscmp(fieldName, L"output_amount_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_amount[1]));
			if (wcscmp(fieldName, L"output_amount_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_amount[2]));
			if (wcscmp(fieldName, L"output_customizable_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_customizable[0]));
			if (wcscmp(fieldName, L"output_customizable_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_customizable[1]));
			if (wcscmp(fieldName, L"output_customizable_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(output_customizable[2]));

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
__int32 time_cost;
__int64 output_id[3];
__int16 output_amount[3];
bool output_customizable[3];

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 83; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) craft_recipe_step_RecordPtr // : DrRecordPtr
	{
		craft_recipe_step_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::craft_recipe_step_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}