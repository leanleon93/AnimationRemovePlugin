/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guilduniformcomponent_Record : DrEl
	{
	private:
		static std::wstring Get_param_type_category_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"param_type_category") == 0) return param_type_category;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"order") == 0) return order;
			if (wcscmp(fieldName, L"required_guild_level") == 0) return required_guild_level;
			if (wcscmp(fieldName, L"usable") == 0) return usable;
			if (wcscmp(fieldName, L"recipe_id") == 0) return recipe_id;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"param_type_category") == 0) return Data::AnyFieldToStringConverter::ToString(&param_type_category);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"order") == 0) return Data::AnyFieldToStringConverter::ToString(&order);
			if (wcscmp(fieldName, L"required_guild_level") == 0) return Data::AnyFieldToStringConverter::ToString(&required_guild_level);
			if (wcscmp(fieldName, L"usable") == 0) return Data::AnyFieldToStringConverter::ToString(&usable);
			if (wcscmp(fieldName, L"recipe_id") == 0) return Data::AnyFieldToStringConverter::ToString(&recipe_id);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 param_type;
__int32 param_value;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 param_type_category;
std::wstring param_type_category_EnumValue() const {return Get_param_type_category_EnumValue(param_type_category);};
char Pad0[3];
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};
__int32 order;
__int8 required_guild_level;
bool usable;
char Pad2[2];
Data::TableRef recipe_id;
int recipe_id_tableId(){return 173;};

		static TableVersion Version() { return TableVersion(0, 8); }
		static __int16 TableId() { return 170; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformcomponent_RecordPtr // : DrRecordPtr
	{
		guilduniformcomponent_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformcomponent_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}