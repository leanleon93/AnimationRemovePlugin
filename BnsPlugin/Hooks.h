#pragma once
#include "BSFunctions.h"
#include "Data.h"
#include "EU/skillshow3/AAA_skillshow3_RecordBase.h"

extern DrDataTable* (__fastcall* oData_DataManager_Effect)();

extern bool(__fastcall* oBInputKey)(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);
void EffectTableTest();
static void SkillShow3TableTest();
bool __fastcall hkBInputKey(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);

void RemoveAnimationsForRecord(BnsTables::EU::skillshow3_Record* record);
extern BnsTables::Shared::DrEl* (__fastcall* oFind_b8)(DrMultiKeyTable* thisptr, unsigned __int64 key);
BnsTables::Shared::DrEl* __fastcall hkFind_b8(DrMultiKeyTable* thisptr, unsigned __int64 key);