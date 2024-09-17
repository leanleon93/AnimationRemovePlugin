/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct condition_event_Record : DrEl
	{
	private:
		static std::wstring Get_tooltip_arg_type_1_EnumValue(__int8 value);
		static std::wstring Get_tooltip_arg_type_2_EnumValue(__int8 value);
		static std::wstring Get_tooltip_arg_type_3_EnumValue(__int8 value);
		static std::wstring Get_tooltip_arg_type_4_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"instant_event_recycle_time") == 0) return instant_event_recycle_time;
			if (wcscmp(fieldName, L"tooltip_text_1") == 0) return tooltip_text_1;
			if (wcscmp(fieldName, L"tooltip_arg_type_1") == 0) return tooltip_arg_type_1;
			if (wcscmp(fieldName, L"tooltip_arg_type_1_1") == 0) return tooltip_arg_type_1[0];
			if (wcscmp(fieldName, L"tooltip_arg_type_1_2") == 0) return tooltip_arg_type_1[1];
			if (wcscmp(fieldName, L"tooltip_arg_type_1_3") == 0) return tooltip_arg_type_1[2];
			if (wcscmp(fieldName, L"tooltip_arg_type_1_4") == 0) return tooltip_arg_type_1[3];
			if (wcscmp(fieldName, L"tooltip_arg_1") == 0) return tooltip_arg_1;
			if (wcscmp(fieldName, L"tooltip_arg_1_1") == 0) return tooltip_arg_1[0];
			if (wcscmp(fieldName, L"tooltip_arg_1_2") == 0) return tooltip_arg_1[1];
			if (wcscmp(fieldName, L"tooltip_arg_1_3") == 0) return tooltip_arg_1[2];
			if (wcscmp(fieldName, L"tooltip_arg_1_4") == 0) return tooltip_arg_1[3];
			if (wcscmp(fieldName, L"tooltip_text_2") == 0) return tooltip_text_2;
			if (wcscmp(fieldName, L"tooltip_arg_type_2") == 0) return tooltip_arg_type_2;
			if (wcscmp(fieldName, L"tooltip_arg_type_2_1") == 0) return tooltip_arg_type_2[0];
			if (wcscmp(fieldName, L"tooltip_arg_type_2_2") == 0) return tooltip_arg_type_2[1];
			if (wcscmp(fieldName, L"tooltip_arg_type_2_3") == 0) return tooltip_arg_type_2[2];
			if (wcscmp(fieldName, L"tooltip_arg_type_2_4") == 0) return tooltip_arg_type_2[3];
			if (wcscmp(fieldName, L"tooltip_arg_2") == 0) return tooltip_arg_2;
			if (wcscmp(fieldName, L"tooltip_arg_2_1") == 0) return tooltip_arg_2[0];
			if (wcscmp(fieldName, L"tooltip_arg_2_2") == 0) return tooltip_arg_2[1];
			if (wcscmp(fieldName, L"tooltip_arg_2_3") == 0) return tooltip_arg_2[2];
			if (wcscmp(fieldName, L"tooltip_arg_2_4") == 0) return tooltip_arg_2[3];
			if (wcscmp(fieldName, L"tooltip_text_3") == 0) return tooltip_text_3;
			if (wcscmp(fieldName, L"tooltip_arg_type_3") == 0) return tooltip_arg_type_3;
			if (wcscmp(fieldName, L"tooltip_arg_type_3_1") == 0) return tooltip_arg_type_3[0];
			if (wcscmp(fieldName, L"tooltip_arg_type_3_2") == 0) return tooltip_arg_type_3[1];
			if (wcscmp(fieldName, L"tooltip_arg_type_3_3") == 0) return tooltip_arg_type_3[2];
			if (wcscmp(fieldName, L"tooltip_arg_type_3_4") == 0) return tooltip_arg_type_3[3];
			if (wcscmp(fieldName, L"tooltip_arg_3") == 0) return tooltip_arg_3;
			if (wcscmp(fieldName, L"tooltip_arg_3_1") == 0) return tooltip_arg_3[0];
			if (wcscmp(fieldName, L"tooltip_arg_3_2") == 0) return tooltip_arg_3[1];
			if (wcscmp(fieldName, L"tooltip_arg_3_3") == 0) return tooltip_arg_3[2];
			if (wcscmp(fieldName, L"tooltip_arg_3_4") == 0) return tooltip_arg_3[3];
			if (wcscmp(fieldName, L"tooltip_text_4") == 0) return tooltip_text_4;
			if (wcscmp(fieldName, L"tooltip_arg_type_4") == 0) return tooltip_arg_type_4;
			if (wcscmp(fieldName, L"tooltip_arg_type_4_1") == 0) return tooltip_arg_type_4[0];
			if (wcscmp(fieldName, L"tooltip_arg_type_4_2") == 0) return tooltip_arg_type_4[1];
			if (wcscmp(fieldName, L"tooltip_arg_type_4_3") == 0) return tooltip_arg_type_4[2];
			if (wcscmp(fieldName, L"tooltip_arg_type_4_4") == 0) return tooltip_arg_type_4[3];
			if (wcscmp(fieldName, L"tooltip_arg_4") == 0) return tooltip_arg_4;
			if (wcscmp(fieldName, L"tooltip_arg_4_1") == 0) return tooltip_arg_4[0];
			if (wcscmp(fieldName, L"tooltip_arg_4_2") == 0) return tooltip_arg_4[1];
			if (wcscmp(fieldName, L"tooltip_arg_4_3") == 0) return tooltip_arg_4[2];
			if (wcscmp(fieldName, L"tooltip_arg_4_4") == 0) return tooltip_arg_4[3];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"instant_event_recycle_time") == 0) return Data::AnyFieldToStringConverter::ToString(&instant_event_recycle_time);
			if (wcscmp(fieldName, L"tooltip_text_1") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip_text_1);
			if (wcscmp(fieldName, L"tooltip_arg_type_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_1[0]));
			if (wcscmp(fieldName, L"tooltip_arg_type_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_1[1]));
			if (wcscmp(fieldName, L"tooltip_arg_type_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_1[2]));
			if (wcscmp(fieldName, L"tooltip_arg_type_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_1[3]));
			if (wcscmp(fieldName, L"tooltip_arg_1_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_1[0]));
			if (wcscmp(fieldName, L"tooltip_arg_1_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_1[1]));
			if (wcscmp(fieldName, L"tooltip_arg_1_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_1[2]));
			if (wcscmp(fieldName, L"tooltip_arg_1_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_1[3]));
			if (wcscmp(fieldName, L"tooltip_text_2") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip_text_2);
			if (wcscmp(fieldName, L"tooltip_arg_type_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_2[0]));
			if (wcscmp(fieldName, L"tooltip_arg_type_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_2[1]));
			if (wcscmp(fieldName, L"tooltip_arg_type_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_2[2]));
			if (wcscmp(fieldName, L"tooltip_arg_type_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_2[3]));
			if (wcscmp(fieldName, L"tooltip_arg_2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_2[0]));
			if (wcscmp(fieldName, L"tooltip_arg_2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_2[1]));
			if (wcscmp(fieldName, L"tooltip_arg_2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_2[2]));
			if (wcscmp(fieldName, L"tooltip_arg_2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_2[3]));
			if (wcscmp(fieldName, L"tooltip_text_3") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip_text_3);
			if (wcscmp(fieldName, L"tooltip_arg_type_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_3[0]));
			if (wcscmp(fieldName, L"tooltip_arg_type_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_3[1]));
			if (wcscmp(fieldName, L"tooltip_arg_type_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_3[2]));
			if (wcscmp(fieldName, L"tooltip_arg_type_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_3[3]));
			if (wcscmp(fieldName, L"tooltip_arg_3_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_3[0]));
			if (wcscmp(fieldName, L"tooltip_arg_3_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_3[1]));
			if (wcscmp(fieldName, L"tooltip_arg_3_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_3[2]));
			if (wcscmp(fieldName, L"tooltip_arg_3_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_3[3]));
			if (wcscmp(fieldName, L"tooltip_text_4") == 0) return Data::AnyFieldToStringConverter::ToString(&tooltip_text_4);
			if (wcscmp(fieldName, L"tooltip_arg_type_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_4[0]));
			if (wcscmp(fieldName, L"tooltip_arg_type_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_4[1]));
			if (wcscmp(fieldName, L"tooltip_arg_type_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_4[2]));
			if (wcscmp(fieldName, L"tooltip_arg_type_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_type_4[3]));
			if (wcscmp(fieldName, L"tooltip_arg_4_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_4[0]));
			if (wcscmp(fieldName, L"tooltip_arg_4_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_4[1]));
			if (wcscmp(fieldName, L"tooltip_arg_4_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_4[2]));
			if (wcscmp(fieldName, L"tooltip_arg_4_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(tooltip_arg_4[3]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
		}
		union Key
		{
            struct {
                __int16 id;
__int16 score;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
Data::TableRef name;
int name_tableId(){return 405;};
__int32 instant_event_recycle_time;
Data::TableRef tooltip_text_1;
int tooltip_text_1_tableId(){return 405;};
__int8 tooltip_arg_type_1[4];
std::wstring tooltip_arg_type_1_EnumValue(int index) const {return Get_tooltip_arg_type_1_EnumValue(tooltip_arg_type_1[index]);};
__int32 tooltip_arg_1[4];
Data::TableRef tooltip_text_2;
int tooltip_text_2_tableId(){return 405;};
__int8 tooltip_arg_type_2[4];
std::wstring tooltip_arg_type_2_EnumValue(int index) const {return Get_tooltip_arg_type_2_EnumValue(tooltip_arg_type_2[index]);};
__int32 tooltip_arg_2[4];
Data::TableRef tooltip_text_3;
int tooltip_text_3_tableId(){return 405;};
__int8 tooltip_arg_type_3[4];
std::wstring tooltip_arg_type_3_EnumValue(int index) const {return Get_tooltip_arg_type_3_EnumValue(tooltip_arg_type_3[index]);};
__int32 tooltip_arg_3[4];
Data::TableRef tooltip_text_4;
int tooltip_text_4_tableId(){return 405;};
__int8 tooltip_arg_type_4[4];
std::wstring tooltip_arg_type_4_EnumValue(int index) const {return Get_tooltip_arg_type_4_EnumValue(tooltip_arg_type_4[index]);};
__int32 tooltip_arg_4[4];

		static TableVersion Version() { return TableVersion(2, 2); }
		static __int16 TableId() { return 62; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) condition_event_RecordPtr // : DrRecordPtr
	{
		condition_event_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::condition_event_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}