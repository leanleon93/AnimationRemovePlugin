/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct guilduniformpreset_Record : DrEl
	{
	private:
		static std::wstring Get_preset_type_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"preset_type") == 0) return preset_type;
			if (wcscmp(fieldName, L"preset") == 0) return preset;
			if (wcscmp(fieldName, L"name") == 0) return name;
			if (wcscmp(fieldName, L"icon_texture") == 0) return icon_texture;
			if (wcscmp(fieldName, L"icon_index") == 0) return icon_index;
			if (wcscmp(fieldName, L"desc") == 0) return desc;
			if (wcscmp(fieldName, L"order") == 0) return order;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"preset_type") == 0) return Data::AnyFieldToStringConverter::ToString(&preset_type);
			if (wcscmp(fieldName, L"preset") == 0) return Data::AnyFieldToStringConverter::ToString(&preset);
			if (wcscmp(fieldName, L"name") == 0) return Data::AnyFieldToStringConverter::ToString(&name);
			if (wcscmp(fieldName, L"icon_texture") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_texture);
			if (wcscmp(fieldName, L"icon_index") == 0) return Data::AnyFieldToStringConverter::ToString(&icon_index);
			if (wcscmp(fieldName, L"desc") == 0) return Data::AnyFieldToStringConverter::ToString(&desc);
			if (wcscmp(fieldName, L"order") == 0) return Data::AnyFieldToStringConverter::ToString(&order);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			//No offsets to correct
		}
		union Key
		{
            struct {
                __int32 index;

            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		__int8 preset_type;
std::wstring preset_type_EnumValue() const {return Get_preset_type_EnumValue(preset_type);};
char Pad0[3];
Data::TableRef preset;
int preset_tableId(){return 165;};
Data::TableRef name;
int name_tableId(){return 405;};
Data::TableRef icon_texture;
int icon_texture_tableId(){return 178;};
__int16 icon_index;
char Pad1[2];
Data::TableRef desc;
int desc_tableId(){return 405;};
__int32 order;

		static TableVersion Version() { return TableVersion(0, 2); }
		static __int16 TableId() { return 172; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) guilduniformpreset_RecordPtr // : DrRecordPtr
	{
		guilduniformpreset_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::guilduniformpreset_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}