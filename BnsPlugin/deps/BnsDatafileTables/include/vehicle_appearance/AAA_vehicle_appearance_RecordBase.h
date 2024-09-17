/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct vehicle_appearance_Record : DrEl
	{
	private:
		static std::wstring Get_foot_print_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"anim_set_name") == 0) return anim_set_name;
			if (wcscmp(fieldName, L"rider_anim_set_name") == 0) return rider_anim_set_name;
			if (wcscmp(fieldName, L"anim_tree_name") == 0) return anim_tree_name;
			if (wcscmp(fieldName, L"mesh_name") == 0) return mesh_name;
			if (wcscmp(fieldName, L"material_name") == 0) return material_name;
			if (wcscmp(fieldName, L"material_name_1") == 0) return material_name[0];
			if (wcscmp(fieldName, L"material_name_2") == 0) return material_name[1];
			if (wcscmp(fieldName, L"material_name_3") == 0) return material_name[2];
			if (wcscmp(fieldName, L"material_name_4") == 0) return material_name[3];
			if (wcscmp(fieldName, L"material_name_5") == 0) return material_name[4];
			if (wcscmp(fieldName, L"physic_asset") == 0) return physic_asset;
			if (wcscmp(fieldName, L"ride_show_name") == 0) return ride_show_name;
			if (wcscmp(fieldName, L"getoff_show_name") == 0) return getoff_show_name;
			if (wcscmp(fieldName, L"cancel_show_name") == 0) return cancel_show_name;
			if (wcscmp(fieldName, L"move_vehicle_idle") == 0) return move_vehicle_idle;
			if (wcscmp(fieldName, L"attach_rider_bone") == 0) return attach_rider_bone;
			if (wcscmp(fieldName, L"attach_vehicle_socket") == 0) return attach_vehicle_socket;
			if (wcscmp(fieldName, L"stand_idle") == 0) return stand_idle;
			if (wcscmp(fieldName, L"effect_show") == 0) return effect_show;
			if (wcscmp(fieldName, L"foot_print_type") == 0) return foot_print_type;
			if (wcscmp(fieldName, L"preview_mesh_zoom_out_value") == 0) return preview_mesh_zoom_out_value;
			if (wcscmp(fieldName, L"preview_mesh_light_brightness") == 0) return preview_mesh_light_brightness;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"anim_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_set_name);
			if (wcscmp(fieldName, L"rider_anim_set_name") == 0) return Data::AnyFieldToStringConverter::ToString(&rider_anim_set_name);
			if (wcscmp(fieldName, L"anim_tree_name") == 0) return Data::AnyFieldToStringConverter::ToString(&anim_tree_name);
			if (wcscmp(fieldName, L"mesh_name") == 0) return Data::AnyFieldToStringConverter::ToString(&mesh_name);
			if (wcscmp(fieldName, L"material_name_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[0]));
			if (wcscmp(fieldName, L"material_name_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[1]));
			if (wcscmp(fieldName, L"material_name_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[2]));
			if (wcscmp(fieldName, L"material_name_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[3]));
			if (wcscmp(fieldName, L"material_name_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(material_name[4]));
			if (wcscmp(fieldName, L"physic_asset") == 0) return Data::AnyFieldToStringConverter::ToString(&physic_asset);
			if (wcscmp(fieldName, L"ride_show_name") == 0) return Data::AnyFieldToStringConverter::ToString(&ride_show_name);
			if (wcscmp(fieldName, L"getoff_show_name") == 0) return Data::AnyFieldToStringConverter::ToString(&getoff_show_name);
			if (wcscmp(fieldName, L"cancel_show_name") == 0) return Data::AnyFieldToStringConverter::ToString(&cancel_show_name);
			if (wcscmp(fieldName, L"move_vehicle_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&move_vehicle_idle);
			if (wcscmp(fieldName, L"attach_rider_bone") == 0) return Data::AnyFieldToStringConverter::ToString(&attach_rider_bone);
			if (wcscmp(fieldName, L"attach_vehicle_socket") == 0) return Data::AnyFieldToStringConverter::ToString(&attach_vehicle_socket);
			if (wcscmp(fieldName, L"stand_idle") == 0) return Data::AnyFieldToStringConverter::ToString(&stand_idle);
			if (wcscmp(fieldName, L"effect_show") == 0) return Data::AnyFieldToStringConverter::ToString(&effect_show);
			if (wcscmp(fieldName, L"foot_print_type") == 0) return Data::AnyFieldToStringConverter::ToString(&foot_print_type);
			if (wcscmp(fieldName, L"preview_mesh_zoom_out_value") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_mesh_zoom_out_value);
			if (wcscmp(fieldName, L"preview_mesh_light_brightness") == 0) return Data::AnyFieldToStringConverter::ToString(&preview_mesh_light_brightness);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(anim_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_set_name));
			if (reinterpret_cast<std::uintptr_t>(rider_anim_set_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) rider_anim_set_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(rider_anim_set_name));
			if (reinterpret_cast<std::uintptr_t>(anim_tree_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) anim_tree_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(anim_tree_name));
			if (reinterpret_cast<std::uintptr_t>(mesh_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) mesh_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(mesh_name));
			for (int i = 0; i < 5; i++) {
				if (reinterpret_cast<std::uintptr_t>(material_name[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) material_name[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(material_name[i]));
			}
			if (reinterpret_cast<std::uintptr_t>(physic_asset) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) physic_asset = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(physic_asset));
			if (reinterpret_cast<std::uintptr_t>(ride_show_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) ride_show_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(ride_show_name));
			if (reinterpret_cast<std::uintptr_t>(getoff_show_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) getoff_show_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(getoff_show_name));
			if (reinterpret_cast<std::uintptr_t>(cancel_show_name) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) cancel_show_name = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(cancel_show_name));
			if (reinterpret_cast<std::uintptr_t>(move_vehicle_idle) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) move_vehicle_idle = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(move_vehicle_idle));
			if (reinterpret_cast<std::uintptr_t>(attach_rider_bone) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attach_rider_bone = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attach_rider_bone));
			if (reinterpret_cast<std::uintptr_t>(attach_vehicle_socket) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) attach_vehicle_socket = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(attach_vehicle_socket));
			if (reinterpret_cast<std::uintptr_t>(effect_show) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) effect_show = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(effect_show));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
wchar_t* anim_set_name;
wchar_t* rider_anim_set_name;
wchar_t* anim_tree_name;
wchar_t* mesh_name;
wchar_t* material_name[5];
wchar_t* physic_asset;
wchar_t* ride_show_name;
wchar_t* getoff_show_name;
wchar_t* cancel_show_name;
wchar_t* move_vehicle_idle;
wchar_t* attach_rider_bone;
wchar_t* attach_vehicle_socket;
Data::TableRef stand_idle;
int stand_idle_tableId(){return 379;};
wchar_t* effect_show;
__int8 foot_print_type;
std::wstring foot_print_type_EnumValue() const {return Get_foot_print_type_EnumValue(foot_print_type);};
char Pad0[3];
float preview_mesh_zoom_out_value;
float preview_mesh_light_brightness;

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 419; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) vehicle_appearance_RecordPtr // : DrRecordPtr
	{
		vehicle_appearance_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::vehicle_appearance_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}