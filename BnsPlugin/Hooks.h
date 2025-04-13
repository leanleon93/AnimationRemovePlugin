#pragma once
#include "BSFunctions.h"
#include "Data.h"
#include "EU/skillshow3/AAA_skillshow3_RecordBase.h"
#include "KR/skillshow3/AAA_skillshow3_RecordBase.h"

extern DrDataTable* (__fastcall* oData_DataManager_Effect)();

#ifdef _BNSEU
void RemoveAnimationsForRecord(BnsTables::EU::skillshow3_Record* record);
#elif _BNSKR
void RemoveAnimationsForRecord(BnsTables::KR::skillshow3_Record* record);
#endif
extern BnsTables::Shared::DrEl* (__fastcall* oFind_b8)(DrMultiKeyTable* thisptr, unsigned __int64 key);
BnsTables::Shared::DrEl* __fastcall hkFind_b8(DrMultiKeyTable* thisptr, unsigned __int64 key);

extern bool(__fastcall* oBUIWorld_ProcessEvent)(uintptr_t* This, EInputKeyEvent* InputKeyEvent);
bool __fastcall hkBUIWorld_ProcessEvent(uintptr_t* This, EInputKeyEvent* InputKeyEvent);

extern void* (__fastcall* BNSClient_GetWorld)();