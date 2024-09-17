/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct soulmaskset_Record : DrEl
	{
	private:
		static std::wstring Get_soulmask_type_EnumValue(__int8 value);
		static std::wstring Get_transform_job_EnumValue(__int8 value);
		static std::wstring Get_transform_weapon_type_EnumValue(__int8 value);
		static std::wstring Get_transform_stance_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"run_speed") == 0) return run_speed;
			if (wcscmp(fieldName, L"use_vehicle") == 0) return use_vehicle;
			if (wcscmp(fieldName, L"soulmask_type") == 0) return soulmask_type;
			if (wcscmp(fieldName, L"kun_mesh") == 0) return kun_mesh;
			if (wcscmp(fieldName, L"gon_male_mesh") == 0) return gon_male_mesh;
			if (wcscmp(fieldName, L"gon_female_mesh") == 0) return gon_female_mesh;
			if (wcscmp(fieldName, L"lyn_male_mesh") == 0) return lyn_male_mesh;
			if (wcscmp(fieldName, L"lyn_female_mesh") == 0) return lyn_female_mesh;
			if (wcscmp(fieldName, L"jin_male_mesh") == 0) return jin_male_mesh;
			if (wcscmp(fieldName, L"jin_female_mesh") == 0) return jin_female_mesh;
			if (wcscmp(fieldName, L"kun_mesh_col") == 0) return kun_mesh_col;
			if (wcscmp(fieldName, L"kun_mesh_col_1") == 0) return kun_mesh_col[0];
			if (wcscmp(fieldName, L"kun_mesh_col_2") == 0) return kun_mesh_col[1];
			if (wcscmp(fieldName, L"kun_mesh_col_3") == 0) return kun_mesh_col[2];
			if (wcscmp(fieldName, L"gon_male_mesh_col") == 0) return gon_male_mesh_col;
			if (wcscmp(fieldName, L"gon_male_mesh_col_1") == 0) return gon_male_mesh_col[0];
			if (wcscmp(fieldName, L"gon_male_mesh_col_2") == 0) return gon_male_mesh_col[1];
			if (wcscmp(fieldName, L"gon_male_mesh_col_3") == 0) return gon_male_mesh_col[2];
			if (wcscmp(fieldName, L"gon_female_mesh_col") == 0) return gon_female_mesh_col;
			if (wcscmp(fieldName, L"gon_female_mesh_col_1") == 0) return gon_female_mesh_col[0];
			if (wcscmp(fieldName, L"gon_female_mesh_col_2") == 0) return gon_female_mesh_col[1];
			if (wcscmp(fieldName, L"gon_female_mesh_col_3") == 0) return gon_female_mesh_col[2];
			if (wcscmp(fieldName, L"lyn_male_mesh_col") == 0) return lyn_male_mesh_col;
			if (wcscmp(fieldName, L"lyn_male_mesh_col_1") == 0) return lyn_male_mesh_col[0];
			if (wcscmp(fieldName, L"lyn_male_mesh_col_2") == 0) return lyn_male_mesh_col[1];
			if (wcscmp(fieldName, L"lyn_male_mesh_col_3") == 0) return lyn_male_mesh_col[2];
			if (wcscmp(fieldName, L"lyn_female_mesh_col") == 0) return lyn_female_mesh_col;
			if (wcscmp(fieldName, L"lyn_female_mesh_col_1") == 0) return lyn_female_mesh_col[0];
			if (wcscmp(fieldName, L"lyn_female_mesh_col_2") == 0) return lyn_female_mesh_col[1];
			if (wcscmp(fieldName, L"lyn_female_mesh_col_3") == 0) return lyn_female_mesh_col[2];
			if (wcscmp(fieldName, L"jin_male_mesh_col") == 0) return jin_male_mesh_col;
			if (wcscmp(fieldName, L"jin_male_mesh_col_1") == 0) return jin_male_mesh_col[0];
			if (wcscmp(fieldName, L"jin_male_mesh_col_2") == 0) return jin_male_mesh_col[1];
			if (wcscmp(fieldName, L"jin_male_mesh_col_3") == 0) return jin_male_mesh_col[2];
			if (wcscmp(fieldName, L"jin_female_mesh_col") == 0) return jin_female_mesh_col;
			if (wcscmp(fieldName, L"jin_female_mesh_col_1") == 0) return jin_female_mesh_col[0];
			if (wcscmp(fieldName, L"jin_female_mesh_col_2") == 0) return jin_female_mesh_col[1];
			if (wcscmp(fieldName, L"jin_female_mesh_col_3") == 0) return jin_female_mesh_col[2];
			if (wcscmp(fieldName, L"kun_accessory_mesh") == 0) return kun_accessory_mesh;
			if (wcscmp(fieldName, L"gon_male_accessory_mesh") == 0) return gon_male_accessory_mesh;
			if (wcscmp(fieldName, L"gon_female_accessory_mesh") == 0) return gon_female_accessory_mesh;
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh") == 0) return lyn_male_accessory_mesh;
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh") == 0) return lyn_female_accessory_mesh;
			if (wcscmp(fieldName, L"jin_male_accessory_mesh") == 0) return jin_male_accessory_mesh;
			if (wcscmp(fieldName, L"jin_female_accessory_mesh") == 0) return jin_female_accessory_mesh;
			if (wcscmp(fieldName, L"kun_accessory_mesh_col") == 0) return kun_accessory_mesh_col;
			if (wcscmp(fieldName, L"kun_accessory_mesh_col_1") == 0) return kun_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"kun_accessory_mesh_col_2") == 0) return kun_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"kun_accessory_mesh_col_3") == 0) return kun_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col") == 0) return gon_male_accessory_mesh_col;
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col_1") == 0) return gon_male_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col_2") == 0) return gon_male_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col_3") == 0) return gon_male_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col") == 0) return gon_female_accessory_mesh_col;
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col_1") == 0) return gon_female_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col_2") == 0) return gon_female_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col_3") == 0) return gon_female_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col") == 0) return lyn_male_accessory_mesh_col;
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col_1") == 0) return lyn_male_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col_2") == 0) return lyn_male_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col_3") == 0) return lyn_male_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col") == 0) return lyn_female_accessory_mesh_col;
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col_1") == 0) return lyn_female_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col_2") == 0) return lyn_female_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col_3") == 0) return lyn_female_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col") == 0) return jin_male_accessory_mesh_col;
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col_1") == 0) return jin_male_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col_2") == 0) return jin_male_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col_3") == 0) return jin_male_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col") == 0) return jin_female_accessory_mesh_col;
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col_1") == 0) return jin_female_accessory_mesh_col[0];
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col_2") == 0) return jin_female_accessory_mesh_col[1];
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col_3") == 0) return jin_female_accessory_mesh_col[2];
			if (wcscmp(fieldName, L"is_accessory_skel_hair") == 0) return is_accessory_skel_hair;
			if (wcscmp(fieldName, L"context_script") == 0) return context_script;
			if (wcscmp(fieldName, L"transform_appearance") == 0) return transform_appearance;
			if (wcscmp(fieldName, L"transform_animset") == 0) return transform_animset;
			if (wcscmp(fieldName, L"transform_equip_hand_appearance") == 0) return transform_equip_hand_appearance;
			if (wcscmp(fieldName, L"transform_job") == 0) return transform_job;
			if (wcscmp(fieldName, L"transform_weapon_type") == 0) return transform_weapon_type;
			if (wcscmp(fieldName, L"transform_stance") == 0) return transform_stance;
			if (wcscmp(fieldName, L"ui_show_job_target_indicator") == 0) return ui_show_job_target_indicator;
			if (wcscmp(fieldName, L"ui_show_job_style_gauge") == 0) return ui_show_job_style_gauge;
			if (wcscmp(fieldName, L"transform_appearance_jin") == 0) return transform_appearance_jin;
			if (wcscmp(fieldName, L"transform_appearance_gon") == 0) return transform_appearance_gon;
			if (wcscmp(fieldName, L"transform_appearance_kun") == 0) return transform_appearance_kun;
			if (wcscmp(fieldName, L"is_race_transform_appearance") == 0) return is_race_transform_appearance;
			if (wcscmp(fieldName, L"is_use_grocery") == 0) return is_use_grocery;
			if (wcscmp(fieldName, L"is_use_equiped_skill") == 0) return is_use_equiped_skill;
			if (wcscmp(fieldName, L"is_show_pet") == 0) return is_show_pet;
			if (wcscmp(fieldName, L"is_use_env") == 0) return is_use_env;
			if (wcscmp(fieldName, L"is_use_field_item") == 0) return is_use_field_item;
			if (wcscmp(fieldName, L"hide_hair") == 0) return hide_hair;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"run_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&run_speed);
			if (wcscmp(fieldName, L"use_vehicle") == 0) return Data::AnyFieldToStringConverter::ToString(&use_vehicle);
			if (wcscmp(fieldName, L"soulmask_type") == 0) return Data::AnyFieldToStringConverter::ToString(&soulmask_type);
			if (wcscmp(fieldName, L"kun_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&kun_mesh);
			if (wcscmp(fieldName, L"gon_male_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&gon_male_mesh);
			if (wcscmp(fieldName, L"gon_female_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&gon_female_mesh);
			if (wcscmp(fieldName, L"lyn_male_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&lyn_male_mesh);
			if (wcscmp(fieldName, L"lyn_female_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&lyn_female_mesh);
			if (wcscmp(fieldName, L"jin_male_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&jin_male_mesh);
			if (wcscmp(fieldName, L"jin_female_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&jin_female_mesh);
			if (wcscmp(fieldName, L"kun_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(kun_mesh_col[0]));
			if (wcscmp(fieldName, L"kun_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(kun_mesh_col[1]));
			if (wcscmp(fieldName, L"kun_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(kun_mesh_col[2]));
			if (wcscmp(fieldName, L"gon_male_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_male_mesh_col[0]));
			if (wcscmp(fieldName, L"gon_male_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_male_mesh_col[1]));
			if (wcscmp(fieldName, L"gon_male_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_male_mesh_col[2]));
			if (wcscmp(fieldName, L"gon_female_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_female_mesh_col[0]));
			if (wcscmp(fieldName, L"gon_female_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_female_mesh_col[1]));
			if (wcscmp(fieldName, L"gon_female_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_female_mesh_col[2]));
			if (wcscmp(fieldName, L"lyn_male_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_male_mesh_col[0]));
			if (wcscmp(fieldName, L"lyn_male_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_male_mesh_col[1]));
			if (wcscmp(fieldName, L"lyn_male_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_male_mesh_col[2]));
			if (wcscmp(fieldName, L"lyn_female_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_female_mesh_col[0]));
			if (wcscmp(fieldName, L"lyn_female_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_female_mesh_col[1]));
			if (wcscmp(fieldName, L"lyn_female_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_female_mesh_col[2]));
			if (wcscmp(fieldName, L"jin_male_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_male_mesh_col[0]));
			if (wcscmp(fieldName, L"jin_male_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_male_mesh_col[1]));
			if (wcscmp(fieldName, L"jin_male_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_male_mesh_col[2]));
			if (wcscmp(fieldName, L"jin_female_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_female_mesh_col[0]));
			if (wcscmp(fieldName, L"jin_female_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_female_mesh_col[1]));
			if (wcscmp(fieldName, L"jin_female_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_female_mesh_col[2]));
			if (wcscmp(fieldName, L"kun_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&kun_accessory_mesh);
			if (wcscmp(fieldName, L"gon_male_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&gon_male_accessory_mesh);
			if (wcscmp(fieldName, L"gon_female_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&gon_female_accessory_mesh);
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&lyn_male_accessory_mesh);
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&lyn_female_accessory_mesh);
			if (wcscmp(fieldName, L"jin_male_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&jin_male_accessory_mesh);
			if (wcscmp(fieldName, L"jin_female_accessory_mesh") == 0) return Data::AnyFieldToStringConverter::ToString(&jin_female_accessory_mesh);
			if (wcscmp(fieldName, L"kun_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(kun_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"kun_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(kun_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"kun_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(kun_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_male_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_male_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"gon_male_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_male_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_female_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_female_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"gon_female_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(gon_female_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_male_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_male_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"lyn_male_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_male_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_female_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_female_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"lyn_female_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(lyn_female_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_male_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_male_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"jin_male_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_male_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_female_accessory_mesh_col[0]));
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_female_accessory_mesh_col[1]));
			if (wcscmp(fieldName, L"jin_female_accessory_mesh_col_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(jin_female_accessory_mesh_col[2]));
			if (wcscmp(fieldName, L"is_accessory_skel_hair") == 0) return Data::AnyFieldToStringConverter::ToString(&is_accessory_skel_hair);
			if (wcscmp(fieldName, L"context_script") == 0) return Data::AnyFieldToStringConverter::ToString(&context_script);
			if (wcscmp(fieldName, L"transform_appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_appearance);
			if (wcscmp(fieldName, L"transform_animset") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_animset);
			if (wcscmp(fieldName, L"transform_equip_hand_appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_equip_hand_appearance);
			if (wcscmp(fieldName, L"transform_job") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_job);
			if (wcscmp(fieldName, L"transform_weapon_type") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_weapon_type);
			if (wcscmp(fieldName, L"transform_stance") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_stance);
			if (wcscmp(fieldName, L"ui_show_job_target_indicator") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_show_job_target_indicator);
			if (wcscmp(fieldName, L"ui_show_job_style_gauge") == 0) return Data::AnyFieldToStringConverter::ToString(&ui_show_job_style_gauge);
			if (wcscmp(fieldName, L"transform_appearance_jin") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_appearance_jin);
			if (wcscmp(fieldName, L"transform_appearance_gon") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_appearance_gon);
			if (wcscmp(fieldName, L"transform_appearance_kun") == 0) return Data::AnyFieldToStringConverter::ToString(&transform_appearance_kun);
			if (wcscmp(fieldName, L"is_race_transform_appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&is_race_transform_appearance);
			if (wcscmp(fieldName, L"is_use_grocery") == 0) return Data::AnyFieldToStringConverter::ToString(&is_use_grocery);
			if (wcscmp(fieldName, L"is_use_equiped_skill") == 0) return Data::AnyFieldToStringConverter::ToString(&is_use_equiped_skill);
			if (wcscmp(fieldName, L"is_show_pet") == 0) return Data::AnyFieldToStringConverter::ToString(&is_show_pet);
			if (wcscmp(fieldName, L"is_use_env") == 0) return Data::AnyFieldToStringConverter::ToString(&is_use_env);
			if (wcscmp(fieldName, L"is_use_field_item") == 0) return Data::AnyFieldToStringConverter::ToString(&is_use_field_item);
			if (wcscmp(fieldName, L"hide_hair") == 0) return Data::AnyFieldToStringConverter::ToString(&hide_hair);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(kun_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kun_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kun_mesh));
			if (reinterpret_cast<std::uintptr_t>(gon_male_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_male_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_male_mesh));
			if (reinterpret_cast<std::uintptr_t>(gon_female_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_female_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_female_mesh));
			if (reinterpret_cast<std::uintptr_t>(lyn_male_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_male_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_male_mesh));
			if (reinterpret_cast<std::uintptr_t>(lyn_female_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_female_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_female_mesh));
			if (reinterpret_cast<std::uintptr_t>(jin_male_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_male_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_male_mesh));
			if (reinterpret_cast<std::uintptr_t>(jin_female_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_female_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_female_mesh));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(kun_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kun_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kun_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(gon_male_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_male_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_male_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(gon_female_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_female_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_female_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(lyn_male_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_male_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_male_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(lyn_female_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_female_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_female_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(jin_male_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_male_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_male_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(jin_female_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_female_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_female_mesh_col[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(kun_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kun_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kun_accessory_mesh));
			if (reinterpret_cast<std::uintptr_t>(gon_male_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_male_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_male_accessory_mesh));
			if (reinterpret_cast<std::uintptr_t>(gon_female_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_female_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_female_accessory_mesh));
			if (reinterpret_cast<std::uintptr_t>(lyn_male_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_male_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_male_accessory_mesh));
			if (reinterpret_cast<std::uintptr_t>(lyn_female_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_female_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_female_accessory_mesh));
			if (reinterpret_cast<std::uintptr_t>(jin_male_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_male_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_male_accessory_mesh));
			if (reinterpret_cast<std::uintptr_t>(jin_female_accessory_mesh) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_female_accessory_mesh = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_female_accessory_mesh));
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(kun_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) kun_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(kun_accessory_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(gon_male_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_male_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_male_accessory_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(gon_female_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) gon_female_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(gon_female_accessory_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(lyn_male_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_male_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_male_accessory_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(lyn_female_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) lyn_female_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(lyn_female_accessory_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(jin_male_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_male_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_male_accessory_mesh_col[i]));
			}
			for (int i = 0; i < 3; i++) {
				if (reinterpret_cast<std::uintptr_t>(jin_female_accessory_mesh_col[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) jin_female_accessory_mesh_col[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(jin_female_accessory_mesh_col[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(transform_animset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) transform_animset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(transform_animset));
		}
		union Key
		{
            struct {
                __int8 soul_mask_id_1;
__int8 soul_mask_id_2;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int16 run_speed;
bool use_vehicle;
__int8 soulmask_type;
std::wstring soulmask_type_EnumValue() const {return Get_soulmask_type_EnumValue(soulmask_type);};
wchar_t* kun_mesh;
wchar_t* gon_male_mesh;
wchar_t* gon_female_mesh;
wchar_t* lyn_male_mesh;
wchar_t* lyn_female_mesh;
wchar_t* jin_male_mesh;
wchar_t* jin_female_mesh;
wchar_t* kun_mesh_col[3];
wchar_t* gon_male_mesh_col[3];
wchar_t* gon_female_mesh_col[3];
wchar_t* lyn_male_mesh_col[3];
wchar_t* lyn_female_mesh_col[3];
wchar_t* jin_male_mesh_col[3];
wchar_t* jin_female_mesh_col[3];
wchar_t* kun_accessory_mesh;
wchar_t* gon_male_accessory_mesh;
wchar_t* gon_female_accessory_mesh;
wchar_t* lyn_male_accessory_mesh;
wchar_t* lyn_female_accessory_mesh;
wchar_t* jin_male_accessory_mesh;
wchar_t* jin_female_accessory_mesh;
wchar_t* kun_accessory_mesh_col[3];
wchar_t* gon_male_accessory_mesh_col[3];
wchar_t* gon_female_accessory_mesh_col[3];
wchar_t* lyn_male_accessory_mesh_col[3];
wchar_t* lyn_female_accessory_mesh_col[3];
wchar_t* jin_male_accessory_mesh_col[3];
wchar_t* jin_female_accessory_mesh_col[3];
bool is_accessory_skel_hair;
char Pad0[3];
Data::TableRef context_script;
int context_script_tableId(){return 74;};
Data::TableRef transform_appearance;
int transform_appearance_tableId(){return 84;};
wchar_t* transform_animset;
Data::TableRef transform_equip_hand_appearance;
int transform_equip_hand_appearance_tableId(){return 189;};
__int8 transform_job;
std::wstring transform_job_EnumValue() const {return Get_transform_job_EnumValue(transform_job);};
__int8 transform_weapon_type;
std::wstring transform_weapon_type_EnumValue() const {return Get_transform_weapon_type_EnumValue(transform_weapon_type);};
__int8 transform_stance;
std::wstring transform_stance_EnumValue() const {return Get_transform_stance_EnumValue(transform_stance);};
bool ui_show_job_target_indicator;
bool ui_show_job_style_gauge;
char Pad1[3];
Data::TableRef transform_appearance_jin;
int transform_appearance_jin_tableId(){return 84;};
Data::TableRef transform_appearance_gon;
int transform_appearance_gon_tableId(){return 84;};
Data::TableRef transform_appearance_kun;
int transform_appearance_kun_tableId(){return 84;};
bool is_race_transform_appearance;
bool is_use_grocery;
bool is_use_equiped_skill;
bool is_show_pet;
bool is_use_env;
bool is_use_field_item;
bool hide_hair;

		static TableVersion Version() { return TableVersion(0, 7); }
		static __int16 TableId() { return 374; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) soulmaskset_RecordPtr // : DrRecordPtr
	{
		soulmaskset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::soulmaskset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}