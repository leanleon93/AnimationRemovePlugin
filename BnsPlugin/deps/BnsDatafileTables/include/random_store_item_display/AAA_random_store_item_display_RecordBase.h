/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct random_store_item_display_Record : DrEl
	{
	private:
		static std::wstring Get_random_store_type_EnumValue(__int8 value);
		static std::wstring Get_draw_group_EnumValue(__int8 value);
		static std::wstring Get_probability_group_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"random_store_type") == 0) return random_store_type;
			if (wcscmp(fieldName, L"display_item") == 0) return display_item;
			if (wcscmp(fieldName, L"draw_group") == 0) return draw_group;
			if (wcscmp(fieldName, L"probability_group") == 0) return probability_group;
			if (wcscmp(fieldName, L"new_arrival") == 0) return new_arrival;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"random_store_type") == 0) return Data::AnyFieldToStringConverter::ToString(&random_store_type);
			if (wcscmp(fieldName, L"display_item") == 0) return Data::AnyFieldToStringConverter::ToString(&display_item);
			if (wcscmp(fieldName, L"draw_group") == 0) return Data::AnyFieldToStringConverter::ToString(&draw_group);
			if (wcscmp(fieldName, L"probability_group") == 0) return Data::AnyFieldToStringConverter::ToString(&probability_group);
			if (wcscmp(fieldName, L"new_arrival") == 0) return Data::AnyFieldToStringConverter::ToString(&new_arrival);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 id;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 random_store_type;
std::wstring random_store_type_EnumValue() const {return Get_random_store_type_EnumValue(random_store_type);};
char Pad0[3];
Data::TableRef display_item;
int display_item_tableId(){return 189;};
__int8 draw_group;
std::wstring draw_group_EnumValue() const {return Get_draw_group_EnumValue(draw_group);};
__int8 probability_group;
std::wstring probability_group_EnumValue() const {return Get_probability_group_EnumValue(probability_group);};
bool new_arrival;

		static TableVersion Version() { return TableVersion(0, 3); }
		static __int16 TableId() { return 295; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) random_store_item_display_RecordPtr // : DrRecordPtr
	{
		random_store_item_display_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::random_store_item_display_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}