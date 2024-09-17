/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct bossnpc_Record : DrEl
	{
	private:
		static std::wstring Get_ui_style_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"sp_point") == 0) return sp_point;
			if (wcscmp(fieldName, L"sp_point_1") == 0) return sp_point[0];
			if (wcscmp(fieldName, L"sp_point_2") == 0) return sp_point[1];
			if (wcscmp(fieldName, L"sp_point_3") == 0) return sp_point[2];
			if (wcscmp(fieldName, L"sp_show") == 0) return sp_show;
			if (wcscmp(fieldName, L"sp_show_1") == 0) return sp_show[0];
			if (wcscmp(fieldName, L"sp_show_2") == 0) return sp_show[1];
			if (wcscmp(fieldName, L"sp_show_3") == 0) return sp_show[2];
			if (wcscmp(fieldName, L"immune_breaker_disabale_show") == 0) return immune_breaker_disabale_show;
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time") == 0) return berserk_sequence_invoke_time;
			if (wcscmp(fieldName, L"difficulty_type_modify") == 0) return difficulty_type_modify;
			if (wcscmp(fieldName, L"use_second_gauge") == 0) return use_second_gauge;
			if (wcscmp(fieldName, L"default_gp") == 0) return default_gp;
			if (wcscmp(fieldName, L"gp_section") == 0) return gp_section;
			if (wcscmp(fieldName, L"gp_section_1") == 0) return gp_section[0];
			if (wcscmp(fieldName, L"gp_section_2") == 0) return gp_section[1];
			if (wcscmp(fieldName, L"gp_section_3") == 0) return gp_section[2];
			if (wcscmp(fieldName, L"gp_section_4") == 0) return gp_section[3];
			if (wcscmp(fieldName, L"gp_section_5") == 0) return gp_section[4];
			if (wcscmp(fieldName, L"gp_section_6") == 0) return gp_section[5];
			if (wcscmp(fieldName, L"gp_section_7") == 0) return gp_section[6];
			if (wcscmp(fieldName, L"gp_section_8") == 0) return gp_section[7];
			if (wcscmp(fieldName, L"gp_section_9") == 0) return gp_section[8];
			if (wcscmp(fieldName, L"gp_section_10") == 0) return gp_section[9];
			if (wcscmp(fieldName, L"gp_section_11") == 0) return gp_section[10];
			if (wcscmp(fieldName, L"gp_section_cnt") == 0) return gp_section_cnt;
			if (wcscmp(fieldName, L"ui_style") == 0) return ui_style;
			if (wcscmp(fieldName, L"ui_tooltip") == 0) return ui_tooltip;
			if (wcscmp(fieldName, L"ui_double_sided_left_imageset") == 0) return ui_double_sided_left_imageset;
			if (wcscmp(fieldName, L"ui_double_sided_right_imageset") == 0) return ui_double_sided_right_imageset;
			if (wcscmp(fieldName, L"ui_double_sided_left_color_r") == 0) return ui_double_sided_left_color_r;
			if (wcscmp(fieldName, L"ui_double_sided_left_color_g") == 0) return ui_double_sided_left_color_g;
			if (wcscmp(fieldName, L"ui_double_sided_left_color_b") == 0) return ui_double_sided_left_color_b;
			if (wcscmp(fieldName, L"ui_double_sided_left_color_a") == 0) return ui_double_sided_left_color_a;
			if (wcscmp(fieldName, L"ui_double_sided_right_color_r") == 0) return ui_double_sided_right_color_r;
			if (wcscmp(fieldName, L"ui_double_sided_right_color_g") == 0) return ui_double_sided_right_color_g;
			if (wcscmp(fieldName, L"ui_double_sided_right_color_b") == 0) return ui_double_sided_right_color_b;
			if (wcscmp(fieldName, L"ui_double_sided_right_color_a") == 0) return ui_double_sided_right_color_a;
			if (wcscmp(fieldName, L"ui_fury_color_r") == 0) return ui_fury_color_r;
			if (wcscmp(fieldName, L"ui_fury_color_r_1") == 0) return ui_fury_color_r[0];
			if (wcscmp(fieldName, L"ui_fury_color_r_2") == 0) return ui_fury_color_r[1];
			if (wcscmp(fieldName, L"ui_fury_color_r_3") == 0) return ui_fury_color_r[2];
			if (wcscmp(fieldName, L"ui_fury_color_g") == 0) return ui_fury_color_g;
			if (wcscmp(fieldName, L"ui_fury_color_g_1") == 0) return ui_fury_color_g[0];
			if (wcscmp(fieldName, L"ui_fury_color_g_2") == 0) return ui_fury_color_g[1];
			if (wcscmp(fieldName, L"ui_fury_color_g_3") == 0) return ui_fury_color_g[2];
			if (wcscmp(fieldName, L"ui_fury_color_b") == 0) return ui_fury_color_b;
			if (wcscmp(fieldName, L"ui_fury_color_b_1") == 0) return ui_fury_color_b[0];
			if (wcscmp(fieldName, L"ui_fury_color_b_2") == 0) return ui_fury_color_b[1];
			if (wcscmp(fieldName, L"ui_fury_color_b_3") == 0) return ui_fury_color_b[2];
			if (wcscmp(fieldName, L"ui_fury_color_a") == 0) return ui_fury_color_a;
			if (wcscmp(fieldName, L"ui_fury_color_a_1") == 0) return ui_fury_color_a[0];
			if (wcscmp(fieldName, L"ui_fury_color_a_2") == 0) return ui_fury_color_a[1];
			if (wcscmp(fieldName, L"ui_fury_color_a_3") == 0) return ui_fury_color_a[2];
			if (wcscmp(fieldName, L"use_break") == 0) return use_break;
			if (wcscmp(fieldName, L"break_gauge_limit") == 0) return break_gauge_limit;
			if (wcscmp(fieldName, L"break_gauge_limit_increase_value") == 0) return break_gauge_limit_increase_value;
			if (wcscmp(fieldName, L"max_break_count") == 0) return max_break_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"sp_point_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_point[0]));
			if (wcscmp(fieldName, L"sp_point_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_point[1]));
			if (wcscmp(fieldName, L"sp_point_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_point[2]));
			if (wcscmp(fieldName, L"sp_show_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_show[0]));
			if (wcscmp(fieldName, L"sp_show_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_show[1]));
			if (wcscmp(fieldName, L"sp_show_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sp_show[2]));
			if (wcscmp(fieldName, L"immune_breaker_disabale_show") == 0) return Data::AnyFieldToStringConverter::ToString(&immune_breaker_disabale_show);
			if (wcscmp(fieldName, L"berserk_sequence_invoke_time") == 0) return Data::AnyFieldToStringConverter::ToString(&berserk_sequence_invoke_time);
			if (wcscmp(fieldName, L"difficulty_type_modify") == 0) return Data::AnyFieldToStringConverter::ToString(&difficulty_type_modify);
			if (wcscmp(fieldName, L"use_second_gauge") == 0) return Data::AnyFieldToStringConverter::ToString(&use_second_gauge);
			if (wcscmp(fieldName, L"default_gp") == 0) return Data::AnyFieldToStringConverter::ToString(&default_gp);
			if (wcscmp(fieldName, L"gp_section_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[0]));
			if (wcscmp(fieldName, L"gp_section_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[1]));
			if (wcscmp(fieldName, L"gp_section_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[2]));
			if (wcscmp(fieldName, L"gp_section_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[3]));
			if (wcscmp(fieldName, L"gp_section_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[4]));
			if (wcscmp(fieldName, L"gp_section_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[5]));
			if (wcscmp(fieldName, L"gp_section_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[6]));
			if (wcscmp(fieldName, L"gp_section_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[7]));
			if (wcscmp(fieldName, L"gp_section_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[8]));
			if (wcscmp(fieldName, L"gp_section_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[9]));
			if (wcscmp(fieldName, L"gp_section_11") == 0) return Data::AnyFieldToStringConverter::ToString(&(gp_section[10]));
			if (wcscmp(fieldName, L"gp_section_cnt") == 0) return Data::AnyFieldToStringConverter::ToString(&gp_section_cnt);
			if (wcscmp(fieldName, L"ui_style") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_style);
			if (wcscmp(fieldName, L"ui_tooltip") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_tooltip);
			if (wcscmp(fieldName, L"ui_double_sided_left_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_left_imageset);
			if (wcscmp(fieldName, L"ui_double_sided_right_imageset") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_right_imageset);
			if (wcscmp(fieldName, L"ui_double_sided_left_color_r") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_left_color_r);
			if (wcscmp(fieldName, L"ui_double_sided_left_color_g") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_left_color_g);
			if (wcscmp(fieldName, L"ui_double_sided_left_color_b") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_left_color_b);
			if (wcscmp(fieldName, L"ui_double_sided_left_color_a") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_left_color_a);
			if (wcscmp(fieldName, L"ui_double_sided_right_color_r") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_right_color_r);
			if (wcscmp(fieldName, L"ui_double_sided_right_color_g") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_right_color_g);
			if (wcscmp(fieldName, L"ui_double_sided_right_color_b") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_right_color_b);
			if (wcscmp(fieldName, L"ui_double_sided_right_color_a") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_double_sided_right_color_a);
			if (wcscmp(fieldName, L"ui_fury_color_r_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_r[0]));
			if (wcscmp(fieldName, L"ui_fury_color_r_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_r[1]));
			if (wcscmp(fieldName, L"ui_fury_color_r_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_r[2]));
			if (wcscmp(fieldName, L"ui_fury_color_g_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_g[0]));
			if (wcscmp(fieldName, L"ui_fury_color_g_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_g[1]));
			if (wcscmp(fieldName, L"ui_fury_color_g_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_g[2]));
			if (wcscmp(fieldName, L"ui_fury_color_b_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_b[0]));
			if (wcscmp(fieldName, L"ui_fury_color_b_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_b[1]));
			if (wcscmp(fieldName, L"ui_fury_color_b_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_b[2]));
			if (wcscmp(fieldName, L"ui_fury_color_a_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_a[0]));
			if (wcscmp(fieldName, L"ui_fury_color_a_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_a[1]));
			if (wcscmp(fieldName, L"ui_fury_color_a_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(ui_fury_color_a[2]));
			if (wcscmp(fieldName, L"use_break") == 0) return Data::AnyFieldToStringConverter::ToString(&use_break);
			if (wcscmp(fieldName, L"break_gauge_limit") == 0) return Data::AnyFieldToStringConverter::ToString(&break_gauge_limit);
			if (wcscmp(fieldName, L"break_gauge_limit_increase_value") == 0) return Data::AnyFieldToStringConverter::ToString(&break_gauge_limit_increase_value);
			if (wcscmp(fieldName, L"max_break_count") == 0) return Data::AnyFieldToStringConverter::ToString(&max_break_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(sp_show[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) sp_show[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(sp_show[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(immune_breaker_disabale_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) immune_breaker_disabale_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(immune_breaker_disabale_show));
			if (reinterpret_cast<std::uintptr_t>(ui_double_sided_left_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) ui_double_sided_left_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(ui_double_sided_left_imageset));
			if (reinterpret_cast<std::uintptr_t>(ui_double_sided_right_imageset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) ui_double_sided_right_imageset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(ui_double_sided_right_imageset));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 sp_point[3];
char Pad0[2];
wchar_t* sp_show[3];
wchar_t* immune_breaker_disabale_show;
__int32 berserk_sequence_invoke_time;
Data::TableRef difficulty_type_modify;
int difficulty_type_modify_tableId(){return 98;};
bool use_second_gauge;
char Pad1[1];
__int16 default_gp;
__int16 gp_section[11];
__int8 gp_section_cnt;
__int8 ui_style;
std::wstring ui_style_EnumValue() const {return Get_ui_style_EnumValue(ui_style);};
Data::TableRef ui_tooltip;
int ui_tooltip_tableId(){return 405;};
wchar_t* ui_double_sided_left_imageset;
wchar_t* ui_double_sided_right_imageset;
__int16 ui_double_sided_left_color_r;
__int16 ui_double_sided_left_color_g;
__int16 ui_double_sided_left_color_b;
__int16 ui_double_sided_left_color_a;
__int16 ui_double_sided_right_color_r;
__int16 ui_double_sided_right_color_g;
__int16 ui_double_sided_right_color_b;
__int16 ui_double_sided_right_color_a;
__int16 ui_fury_color_r[3];
__int16 ui_fury_color_g[3];
__int16 ui_fury_color_b[3];
__int16 ui_fury_color_a[3];
bool use_break;
char Pad2[1];
__int16 break_gauge_limit;
__int16 break_gauge_limit_increase_value;
__int8 max_break_count;

		static TableVersion Version() { return TableVersion(3, 0); }
		static __int16 TableId() { return 46; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) bossnpc_RecordPtr // : DrRecordPtr
	{
		bossnpc_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::bossnpc_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}