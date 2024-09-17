/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct loadingimage_Record : DrEl
	{
	private:
		static std::wstring Get_job_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"zone_id") == 0) return zone_id;
			if (wcscmp(fieldName, L"zone_attraction") == 0) return zone_attraction;
			if (wcscmp(fieldName, L"level_min") == 0) return level_min;
			if (wcscmp(fieldName, L"level_max") == 0) return level_max;
			if (wcscmp(fieldName, L"job") == 0) return job;
			if (wcscmp(fieldName, L"back_ground") == 0) return back_ground;
			if (wcscmp(fieldName, L"count_back_ground") == 0) return count_back_ground;
			if (wcscmp(fieldName, L"editable") == 0) return editable;
			if (wcscmp(fieldName, L"guide_text_ref") == 0) return guide_text_ref;
			if (wcscmp(fieldName, L"guide_text_count") == 0) return guide_text_count;

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"zone_id") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_id);
			if (wcscmp(fieldName, L"zone_attraction") == 0) return Data::AnyFieldToStringConverter::ToString(&zone_attraction);
			if (wcscmp(fieldName, L"level_min") == 0) return Data::AnyFieldToStringConverter::ToString(&level_min);
			if (wcscmp(fieldName, L"level_max") == 0) return Data::AnyFieldToStringConverter::ToString(&level_max);
			if (wcscmp(fieldName, L"job") == 0) return Data::AnyFieldToStringConverter::ToString(&job);
			if (wcscmp(fieldName, L"back_ground") == 0) return Data::AnyFieldToStringConverter::ToString(&back_ground);
			if (wcscmp(fieldName, L"count_back_ground") == 0) return Data::AnyFieldToStringConverter::ToString(&count_back_ground);
			if (wcscmp(fieldName, L"editable") == 0) return Data::AnyFieldToStringConverter::ToString(&editable);
			if (wcscmp(fieldName, L"guide_text_ref") == 0) return Data::AnyFieldToStringConverter::ToString(&guide_text_ref);
			if (wcscmp(fieldName, L"guide_text_count") == 0) return Data::AnyFieldToStringConverter::ToString(&guide_text_count);

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			if (reinterpret_cast<std::uintptr_t>(back_ground) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) back_ground = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(back_ground));
			if (reinterpret_cast<std::uintptr_t>(guide_text_ref) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) guide_text_ref = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(guide_text_ref));
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 zone_id;
Data::ExplicitTableRef zone_attraction;
__int8 level_min;
__int8 level_max;
__int8 job;
std::wstring job_EnumValue() const {return Get_job_EnumValue(job);};
char Pad0[1];
wchar_t* back_ground;
__int8 count_back_ground;
bool editable;
char Pad1[2];
wchar_t* guide_text_ref;
__int16 guide_text_count;

		static TableVersion Version() { return TableVersion(0, 9); }
		static __int16 TableId() { return 234; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) loadingimage_RecordPtr // : DrRecordPtr
	{
		loadingimage_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::loadingimage_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}