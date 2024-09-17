/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct vehicle_Record : DrEl
	{
	private:
		static std::wstring Get_disable_move_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"vehicle_speed") == 0) return vehicle_speed;
			if (wcscmp(fieldName, L"sprint_speed") == 0) return sprint_speed;
			if (wcscmp(fieldName, L"glide_speed") == 0) return glide_speed;
			if (wcscmp(fieldName, L"boost_speed") == 0) return boost_speed;
			if (wcscmp(fieldName, L"turn_rate") == 0) return turn_rate;
			if (wcscmp(fieldName, L"jump_height") == 0) return jump_height;
			if (wcscmp(fieldName, L"jump_run_height") == 0) return jump_run_height;
			if (wcscmp(fieldName, L"jump_sprint_height") == 0) return jump_sprint_height;
			if (wcscmp(fieldName, L"riding_action_duration") == 0) return riding_action_duration;
			if (wcscmp(fieldName, L"appearance") == 0) return appearance;
			if (wcscmp(fieldName, L"context_script") == 0) return context_script;
			if (wcscmp(fieldName, L"disable_move_type") == 0) return disable_move_type;
			if (wcscmp(fieldName, L"disable_move_type_1") == 0) return disable_move_type[0];
			if (wcscmp(fieldName, L"disable_move_type_2") == 0) return disable_move_type[1];
			if (wcscmp(fieldName, L"disable_move_type_3") == 0) return disable_move_type[2];
			if (wcscmp(fieldName, L"disable_move_type_4") == 0) return disable_move_type[3];
			if (wcscmp(fieldName, L"disable_move_type_5") == 0) return disable_move_type[4];
			if (wcscmp(fieldName, L"disable_move_type_6") == 0) return disable_move_type[5];
			if (wcscmp(fieldName, L"disable_move_type_7") == 0) return disable_move_type[6];
			if (wcscmp(fieldName, L"disable_move_type_8") == 0) return disable_move_type[7];
			if (wcscmp(fieldName, L"group") == 0) return group;
			if (wcscmp(fieldName, L"level") == 0) return level;
			if (wcscmp(fieldName, L"item") == 0) return item;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"vehicle_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&vehicle_speed);
			if (wcscmp(fieldName, L"sprint_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&sprint_speed);
			if (wcscmp(fieldName, L"glide_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&glide_speed);
			if (wcscmp(fieldName, L"boost_speed") == 0) return Data::AnyFieldToStringConverter::ToString(&boost_speed);
			if (wcscmp(fieldName, L"turn_rate") == 0) return Data::AnyFieldToStringConverter::ToString(&turn_rate);
			if (wcscmp(fieldName, L"jump_height") == 0) return Data::AnyFieldToStringConverter::ToString(&jump_height);
			if (wcscmp(fieldName, L"jump_run_height") == 0) return Data::AnyFieldToStringConverter::ToString(&jump_run_height);
			if (wcscmp(fieldName, L"jump_sprint_height") == 0) return Data::AnyFieldToStringConverter::ToString(&jump_sprint_height);
			if (wcscmp(fieldName, L"riding_action_duration") == 0) return Data::AnyFieldToStringConverter::ToString(&riding_action_duration);
			if (wcscmp(fieldName, L"appearance") == 0) return Data::AnyFieldToStringConverter::ToString(&appearance);
			if (wcscmp(fieldName, L"context_script") == 0) return Data::AnyFieldToStringConverter::ToString(&context_script);
			if (wcscmp(fieldName, L"disable_move_type_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[0]));
			if (wcscmp(fieldName, L"disable_move_type_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[1]));
			if (wcscmp(fieldName, L"disable_move_type_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[2]));
			if (wcscmp(fieldName, L"disable_move_type_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[3]));
			if (wcscmp(fieldName, L"disable_move_type_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[4]));
			if (wcscmp(fieldName, L"disable_move_type_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[5]));
			if (wcscmp(fieldName, L"disable_move_type_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[6]));
			if (wcscmp(fieldName, L"disable_move_type_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(disable_move_type[7]));
			if (wcscmp(fieldName, L"group") == 0) return Data::AnyFieldToStringConverter::ToString(&group);
			if (wcscmp(fieldName, L"level") == 0) return Data::AnyFieldToStringConverter::ToString(&level);
			if (wcscmp(fieldName, L"item") == 0) return Data::AnyFieldToStringConverter::ToString(&item);

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
__int16 vehicle_speed;
char Pad0[2];
__int32 sprint_speed;
__int32 glide_speed;
__int32 boost_speed;
__int32 turn_rate;
__int32 jump_height;
__int32 jump_run_height;
__int32 jump_sprint_height;
__int32 riding_action_duration;
Data::TableRef appearance;
int appearance_tableId(){return 419;};
Data::TableRef context_script;
int context_script_tableId(){return 74;};
__int8 disable_move_type[8];
std::wstring disable_move_type_EnumValue(int index) const {return Get_disable_move_type_EnumValue(disable_move_type[index]);};
__int32 group;
__int32 level;
Data::TableRef item;
int item_tableId(){return 189;};

		static TableVersion Version() { return TableVersion(4, 0); }
		static __int16 TableId() { return 420; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) vehicle_RecordPtr // : DrRecordPtr
	{
		vehicle_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::vehicle_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}