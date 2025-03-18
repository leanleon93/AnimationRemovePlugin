#pragma once
#include "BSFunctions.h"
#include "Data.h"
#include "EU/skillshow3/AAA_skillshow3_RecordBase.h"

extern DrDataTable* (__fastcall* oData_DataManager_Effect)();

void RemoveAnimationsForRecord(BnsTables::EU::skillshow3_Record* record);
extern BnsTables::Shared::DrEl* (__fastcall* oFind_b8)(DrMultiKeyTable* thisptr, unsigned __int64 key);
BnsTables::Shared::DrEl* __fastcall hkFind_b8(DrMultiKeyTable* thisptr, unsigned __int64 key);

extern bool(__fastcall* oBUIWorld_ProcessEvent)(uintptr_t* This, EInputKeyEvent* InputKeyEvent);
bool __fastcall hkBUIWorld_ProcessEvent(uintptr_t* This, EInputKeyEvent* InputKeyEvent);

extern void* (__fastcall* BNSClient_GetWorld)();