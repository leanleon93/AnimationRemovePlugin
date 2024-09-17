/*
 Generated Code! Do not manually edit this code. Modify the generator instead.
*/
#pragma once
#include "../DrEl.h"
#include "../AnyToStringConverter.h"

namespace Data {

#pragma pack(push, 1)
	struct indicator_social_Record : DrEl
	{
	private:
		static std::wstring Get_rotate2_EnumValue(__int8 value);
	public:
		std::any GetField(const wchar_t* fieldName) const {
			if (wcscmp(fieldName, L"alias") == 0) return alias;
			if (wcscmp(fieldName, L"interval") == 0) return interval;
			if (wcscmp(fieldName, L"duration2") == 0) return duration2;
			if (wcscmp(fieldName, L"begine_time2") == 0) return begine_time2;
			if (wcscmp(fieldName, L"begine_time2_1") == 0) return begine_time2[0];
			if (wcscmp(fieldName, L"begine_time2_2") == 0) return begine_time2[1];
			if (wcscmp(fieldName, L"begine_time2_3") == 0) return begine_time2[2];
			if (wcscmp(fieldName, L"begine_time2_4") == 0) return begine_time2[3];
			if (wcscmp(fieldName, L"begine_time2_5") == 0) return begine_time2[4];
			if (wcscmp(fieldName, L"begine_time2_6") == 0) return begine_time2[5];
			if (wcscmp(fieldName, L"begine_time2_7") == 0) return begine_time2[6];
			if (wcscmp(fieldName, L"begine_time2_8") == 0) return begine_time2[7];
			if (wcscmp(fieldName, L"begine_time2_9") == 0) return begine_time2[8];
			if (wcscmp(fieldName, L"begine_time2_10") == 0) return begine_time2[9];
			if (wcscmp(fieldName, L"balloon_text2") == 0) return balloon_text2;
			if (wcscmp(fieldName, L"balloon_text2_1") == 0) return balloon_text2[0];
			if (wcscmp(fieldName, L"balloon_text2_2") == 0) return balloon_text2[1];
			if (wcscmp(fieldName, L"balloon_text2_3") == 0) return balloon_text2[2];
			if (wcscmp(fieldName, L"balloon_text2_4") == 0) return balloon_text2[3];
			if (wcscmp(fieldName, L"balloon_text2_5") == 0) return balloon_text2[4];
			if (wcscmp(fieldName, L"balloon_text2_6") == 0) return balloon_text2[5];
			if (wcscmp(fieldName, L"balloon_text2_7") == 0) return balloon_text2[6];
			if (wcscmp(fieldName, L"balloon_text2_8") == 0) return balloon_text2[7];
			if (wcscmp(fieldName, L"balloon_text2_9") == 0) return balloon_text2[8];
			if (wcscmp(fieldName, L"balloon_text2_10") == 0) return balloon_text2[9];
			if (wcscmp(fieldName, L"balloon_text2_duration") == 0) return balloon_text2_duration;
			if (wcscmp(fieldName, L"balloon_text2_duration_1") == 0) return balloon_text2_duration[0];
			if (wcscmp(fieldName, L"balloon_text2_duration_2") == 0) return balloon_text2_duration[1];
			if (wcscmp(fieldName, L"balloon_text2_duration_3") == 0) return balloon_text2_duration[2];
			if (wcscmp(fieldName, L"balloon_text2_duration_4") == 0) return balloon_text2_duration[3];
			if (wcscmp(fieldName, L"balloon_text2_duration_5") == 0) return balloon_text2_duration[4];
			if (wcscmp(fieldName, L"balloon_text2_duration_6") == 0) return balloon_text2_duration[5];
			if (wcscmp(fieldName, L"balloon_text2_duration_7") == 0) return balloon_text2_duration[6];
			if (wcscmp(fieldName, L"balloon_text2_duration_8") == 0) return balloon_text2_duration[7];
			if (wcscmp(fieldName, L"balloon_text2_duration_9") == 0) return balloon_text2_duration[8];
			if (wcscmp(fieldName, L"balloon_text2_duration_10") == 0) return balloon_text2_duration[9];
			if (wcscmp(fieldName, L"voice_sync") == 0) return voice_sync;
			if (wcscmp(fieldName, L"voice_sync_1") == 0) return voice_sync[0];
			if (wcscmp(fieldName, L"voice_sync_2") == 0) return voice_sync[1];
			if (wcscmp(fieldName, L"voice_sync_3") == 0) return voice_sync[2];
			if (wcscmp(fieldName, L"voice_sync_4") == 0) return voice_sync[3];
			if (wcscmp(fieldName, L"voice_sync_5") == 0) return voice_sync[4];
			if (wcscmp(fieldName, L"voice_sync_6") == 0) return voice_sync[5];
			if (wcscmp(fieldName, L"voice_sync_7") == 0) return voice_sync[6];
			if (wcscmp(fieldName, L"voice_sync_8") == 0) return voice_sync[7];
			if (wcscmp(fieldName, L"voice_sync_9") == 0) return voice_sync[8];
			if (wcscmp(fieldName, L"voice_sync_10") == 0) return voice_sync[9];
			if (wcscmp(fieldName, L"show2") == 0) return show2;
			if (wcscmp(fieldName, L"show2_1") == 0) return show2[0];
			if (wcscmp(fieldName, L"show2_2") == 0) return show2[1];
			if (wcscmp(fieldName, L"show2_3") == 0) return show2[2];
			if (wcscmp(fieldName, L"show2_4") == 0) return show2[3];
			if (wcscmp(fieldName, L"show2_5") == 0) return show2[4];
			if (wcscmp(fieldName, L"show2_6") == 0) return show2[5];
			if (wcscmp(fieldName, L"show2_7") == 0) return show2[6];
			if (wcscmp(fieldName, L"show2_8") == 0) return show2[7];
			if (wcscmp(fieldName, L"show2_9") == 0) return show2[8];
			if (wcscmp(fieldName, L"show2_10") == 0) return show2[9];
			if (wcscmp(fieldName, L"rotate2") == 0) return rotate2;
			if (wcscmp(fieldName, L"rotate2_1") == 0) return rotate2[0];
			if (wcscmp(fieldName, L"rotate2_2") == 0) return rotate2[1];
			if (wcscmp(fieldName, L"rotate2_3") == 0) return rotate2[2];
			if (wcscmp(fieldName, L"rotate2_4") == 0) return rotate2[3];
			if (wcscmp(fieldName, L"rotate2_5") == 0) return rotate2[4];
			if (wcscmp(fieldName, L"rotate2_6") == 0) return rotate2[5];
			if (wcscmp(fieldName, L"rotate2_7") == 0) return rotate2[6];
			if (wcscmp(fieldName, L"rotate2_8") == 0) return rotate2[7];
			if (wcscmp(fieldName, L"rotate2_9") == 0) return rotate2[8];
			if (wcscmp(fieldName, L"rotate2_10") == 0) return rotate2[9];
			if (wcscmp(fieldName, L"sub_npc2") == 0) return sub_npc2;
			if (wcscmp(fieldName, L"sub_npc2_1") == 0) return sub_npc2[0];
			if (wcscmp(fieldName, L"sub_npc2_2") == 0) return sub_npc2[1];
			if (wcscmp(fieldName, L"sub_npc2_3") == 0) return sub_npc2[2];
			if (wcscmp(fieldName, L"sub_npc2_4") == 0) return sub_npc2[3];
			if (wcscmp(fieldName, L"sub_npc2_5") == 0) return sub_npc2[4];
			if (wcscmp(fieldName, L"sub_npc2_6") == 0) return sub_npc2[5];
			if (wcscmp(fieldName, L"sub_npc2_7") == 0) return sub_npc2[6];
			if (wcscmp(fieldName, L"sub_npc2_8") == 0) return sub_npc2[7];
			if (wcscmp(fieldName, L"sub_npc2_9") == 0) return sub_npc2[8];
			if (wcscmp(fieldName, L"sub_npc2_10") == 0) return sub_npc2[9];
			if (wcscmp(fieldName, L"sub_indicator_social2") == 0) return sub_indicator_social2;
			if (wcscmp(fieldName, L"sub_indicator_social2_1") == 0) return sub_indicator_social2[0];
			if (wcscmp(fieldName, L"sub_indicator_social2_2") == 0) return sub_indicator_social2[1];
			if (wcscmp(fieldName, L"sub_indicator_social2_3") == 0) return sub_indicator_social2[2];
			if (wcscmp(fieldName, L"sub_indicator_social2_4") == 0) return sub_indicator_social2[3];
			if (wcscmp(fieldName, L"sub_indicator_social2_5") == 0) return sub_indicator_social2[4];
			if (wcscmp(fieldName, L"sub_indicator_social2_6") == 0) return sub_indicator_social2[5];
			if (wcscmp(fieldName, L"sub_indicator_social2_7") == 0) return sub_indicator_social2[6];
			if (wcscmp(fieldName, L"sub_indicator_social2_8") == 0) return sub_indicator_social2[7];
			if (wcscmp(fieldName, L"sub_indicator_social2_9") == 0) return sub_indicator_social2[8];
			if (wcscmp(fieldName, L"sub_indicator_social2_10") == 0) return sub_indicator_social2[9];

			return std::any();
		}
		std::wstring GetFieldAsString(const wchar_t* fieldName) {
			if (wcscmp(fieldName, L"alias") == 0) return Data::AnyFieldToStringConverter::ToString(&alias);
			if (wcscmp(fieldName, L"interval") == 0) return Data::AnyFieldToStringConverter::ToString(&interval);
			if (wcscmp(fieldName, L"duration2") == 0) return Data::AnyFieldToStringConverter::ToString(&duration2);
			if (wcscmp(fieldName, L"begine_time2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[0]));
			if (wcscmp(fieldName, L"begine_time2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[1]));
			if (wcscmp(fieldName, L"begine_time2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[2]));
			if (wcscmp(fieldName, L"begine_time2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[3]));
			if (wcscmp(fieldName, L"begine_time2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[4]));
			if (wcscmp(fieldName, L"begine_time2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[5]));
			if (wcscmp(fieldName, L"begine_time2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[6]));
			if (wcscmp(fieldName, L"begine_time2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[7]));
			if (wcscmp(fieldName, L"begine_time2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[8]));
			if (wcscmp(fieldName, L"begine_time2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(begine_time2[9]));
			if (wcscmp(fieldName, L"balloon_text2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[0]));
			if (wcscmp(fieldName, L"balloon_text2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[1]));
			if (wcscmp(fieldName, L"balloon_text2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[2]));
			if (wcscmp(fieldName, L"balloon_text2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[3]));
			if (wcscmp(fieldName, L"balloon_text2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[4]));
			if (wcscmp(fieldName, L"balloon_text2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[5]));
			if (wcscmp(fieldName, L"balloon_text2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[6]));
			if (wcscmp(fieldName, L"balloon_text2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[7]));
			if (wcscmp(fieldName, L"balloon_text2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[8]));
			if (wcscmp(fieldName, L"balloon_text2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2[9]));
			if (wcscmp(fieldName, L"balloon_text2_duration_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[0]));
			if (wcscmp(fieldName, L"balloon_text2_duration_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[1]));
			if (wcscmp(fieldName, L"balloon_text2_duration_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[2]));
			if (wcscmp(fieldName, L"balloon_text2_duration_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[3]));
			if (wcscmp(fieldName, L"balloon_text2_duration_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[4]));
			if (wcscmp(fieldName, L"balloon_text2_duration_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[5]));
			if (wcscmp(fieldName, L"balloon_text2_duration_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[6]));
			if (wcscmp(fieldName, L"balloon_text2_duration_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[7]));
			if (wcscmp(fieldName, L"balloon_text2_duration_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[8]));
			if (wcscmp(fieldName, L"balloon_text2_duration_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(balloon_text2_duration[9]));
			if (wcscmp(fieldName, L"voice_sync_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[0]));
			if (wcscmp(fieldName, L"voice_sync_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[1]));
			if (wcscmp(fieldName, L"voice_sync_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[2]));
			if (wcscmp(fieldName, L"voice_sync_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[3]));
			if (wcscmp(fieldName, L"voice_sync_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[4]));
			if (wcscmp(fieldName, L"voice_sync_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[5]));
			if (wcscmp(fieldName, L"voice_sync_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[6]));
			if (wcscmp(fieldName, L"voice_sync_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[7]));
			if (wcscmp(fieldName, L"voice_sync_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[8]));
			if (wcscmp(fieldName, L"voice_sync_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(voice_sync[9]));
			if (wcscmp(fieldName, L"show2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[0]));
			if (wcscmp(fieldName, L"show2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[1]));
			if (wcscmp(fieldName, L"show2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[2]));
			if (wcscmp(fieldName, L"show2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[3]));
			if (wcscmp(fieldName, L"show2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[4]));
			if (wcscmp(fieldName, L"show2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[5]));
			if (wcscmp(fieldName, L"show2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[6]));
			if (wcscmp(fieldName, L"show2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[7]));
			if (wcscmp(fieldName, L"show2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[8]));
			if (wcscmp(fieldName, L"show2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(show2[9]));
			if (wcscmp(fieldName, L"rotate2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[0]));
			if (wcscmp(fieldName, L"rotate2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[1]));
			if (wcscmp(fieldName, L"rotate2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[2]));
			if (wcscmp(fieldName, L"rotate2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[3]));
			if (wcscmp(fieldName, L"rotate2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[4]));
			if (wcscmp(fieldName, L"rotate2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[5]));
			if (wcscmp(fieldName, L"rotate2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[6]));
			if (wcscmp(fieldName, L"rotate2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[7]));
			if (wcscmp(fieldName, L"rotate2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[8]));
			if (wcscmp(fieldName, L"rotate2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(rotate2[9]));
			if (wcscmp(fieldName, L"sub_npc2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[0]));
			if (wcscmp(fieldName, L"sub_npc2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[1]));
			if (wcscmp(fieldName, L"sub_npc2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[2]));
			if (wcscmp(fieldName, L"sub_npc2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[3]));
			if (wcscmp(fieldName, L"sub_npc2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[4]));
			if (wcscmp(fieldName, L"sub_npc2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[5]));
			if (wcscmp(fieldName, L"sub_npc2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[6]));
			if (wcscmp(fieldName, L"sub_npc2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[7]));
			if (wcscmp(fieldName, L"sub_npc2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[8]));
			if (wcscmp(fieldName, L"sub_npc2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_npc2[9]));
			if (wcscmp(fieldName, L"sub_indicator_social2_1") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[0]));
			if (wcscmp(fieldName, L"sub_indicator_social2_2") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[1]));
			if (wcscmp(fieldName, L"sub_indicator_social2_3") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[2]));
			if (wcscmp(fieldName, L"sub_indicator_social2_4") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[3]));
			if (wcscmp(fieldName, L"sub_indicator_social2_5") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[4]));
			if (wcscmp(fieldName, L"sub_indicator_social2_6") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[5]));
			if (wcscmp(fieldName, L"sub_indicator_social2_7") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[6]));
			if (wcscmp(fieldName, L"sub_indicator_social2_8") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[7]));
			if (wcscmp(fieldName, L"sub_indicator_social2_9") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[8]));
			if (wcscmp(fieldName, L"sub_indicator_social2_10") == 0) return Data::AnyFieldToStringConverter::ToString(&(sub_indicator_social2[9]));

			return L"";
		}
		void AutoCorrectLookupOffsets(const char* lookupDataPtr) {
			if (reinterpret_cast<std::uintptr_t>(alias) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) alias = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(alias));
			else return;
			for (int i = 0; i < 10; i++) {
				if (reinterpret_cast<std::uintptr_t>(show2[i]) < reinterpret_cast<std::uintptr_t>(lookupDataPtr)) show2[i] = reinterpret_cast<wchar_t*>(const_cast<char*>(lookupDataPtr) + reinterpret_cast<std::uintptr_t>(show2[i]));
			}
		}
		union Key
		{
            struct {
                
            };
			unsigned __int64 key;
		};
		__declspec(align(8)) Key key;
		wchar_t* alias;
__int32 interval;
__int32 duration2;
__int32 begine_time2[10];
Data::TableRef balloon_text2[10];
int balloon_text2_tableId(){return 405;};
__int32 balloon_text2_duration[10];
bool voice_sync[10];
char Pad0[2];
wchar_t* show2[10];
__int8 rotate2[10];
std::wstring rotate2_EnumValue(int index) const {return Get_rotate2_EnumValue(rotate2[index]);};
char Pad1[2];
Data::TableRef sub_npc2[10];
int sub_npc2_tableId(){return 255;};
Data::TableRef sub_indicator_social2[10];
int sub_indicator_social2_tableId(){return 181;};

		static TableVersion Version() { return TableVersion(0, 18); }
		static __int16 TableId() { return 181; }
		static __int32 SubType() { return 0; }
	};
#pragma pack(pop)
#pragma pack(push, 1)
	struct __declspec(align(4)) indicator_social_RecordPtr // : DrRecordPtr
	{
		indicator_social_Record* _record;
		int _cacheChunkIndex;
		//__unaligned __declspec(align(1)) const Data::indicator_social_Record* _debug;
		bool _makeCopy;
	};
#pragma pack(pop)
}