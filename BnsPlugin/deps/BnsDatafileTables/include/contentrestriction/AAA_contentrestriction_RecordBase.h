/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct contentrestriction_Record : DrEl
	{
	private:
		static std::wstring Get_code_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"require_level") == 0) return require_level;
			if (wcscmp(fieldName, L"require_grade") == 0) return require_grade;
			if (wcscmp(fieldName, L"require_level_post_send") == 0) return require_level_post_send;
			if (wcscmp(fieldName, L"require_grade_post_send") == 0) return require_grade_post_send;
			if (wcscmp(fieldName, L"force_restrict_post_send") == 0) return force_restrict_post_send;
			if (wcscmp(fieldName, L"force_restrict_personal_trade") == 0) return force_restrict_personal_trade;
			if (wcscmp(fieldName, L"market_trade") == 0) return market_trade;
			if (wcscmp(fieldName, L"post_send") == 0) return post_send;
			if (wcscmp(fieldName, L"account_post_send") == 0) return account_post_send;
			if (wcscmp(fieldName, L"post_receive") == 0) return post_receive;
			if (wcscmp(fieldName, L"personal_trade") == 0) return personal_trade;
			if (wcscmp(fieldName, L"account_inventory_goods_receive") == 0) return account_inventory_goods_receive;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"require_level") == 0) return Data::AnyFieldToStringConverter::ToString(&require_level);
			if (wcscmp(fieldName, L"require_grade") == 0) return Data::AnyFieldToStringConverter::ToString(&require_grade);
			if (wcscmp(fieldName, L"require_level_post_send") == 0) return Data::AnyFieldToStringConverter::ToString(&require_level_post_send);
			if (wcscmp(fieldName, L"require_grade_post_send") == 0) return Data::AnyFieldToStringConverter::ToString(&require_grade_post_send);
			if (wcscmp(fieldName, L"force_restrict_post_send") == 0) return Data::AnyFieldToStringConverter::ToString(&force_restrict_post_send);
			if (wcscmp(fieldName, L"force_restrict_personal_trade") == 0) return Data::AnyFieldToStringConverter::ToString(&force_restrict_personal_trade);
			if (wcscmp(fieldName, L"market_trade") == 0) return Data::AnyFieldToStringConverter::ToString(&market_trade);
			if (wcscmp(fieldName, L"post_send") == 0) return Data::AnyFieldToStringConverter::ToString(&post_send);
			if (wcscmp(fieldName, L"account_post_send") == 0) return Data::AnyFieldToStringConverter::ToString(&account_post_send);
			if (wcscmp(fieldName, L"post_receive") == 0) return Data::AnyFieldToStringConverter::ToString(&post_receive);
			if (wcscmp(fieldName, L"personal_trade") == 0) return Data::AnyFieldToStringConverter::ToString(&personal_trade);
			if (wcscmp(fieldName, L"account_inventory_goods_receive") == 0) return Data::AnyFieldToStringConverter::ToString(&account_inventory_goods_receive);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int8 code;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int16 require_level;
char Pad0[2];
__int32 require_grade;
__int16 require_level_post_send;
char Pad1[2];
__int32 require_grade_post_send;
bool force_restrict_post_send;
bool force_restrict_personal_trade;
bool market_trade;
bool post_send;
bool account_post_send;
bool post_receive;
bool personal_trade;
bool account_inventory_goods_receive;

		static TableVersion Version() { return TableVersion(2, 0); }
		static __int16 TableId() { return 67; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) contentrestriction_RecordPtr // : DrRecordPtr
	{
		contentrestriction_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::contentrestriction_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}