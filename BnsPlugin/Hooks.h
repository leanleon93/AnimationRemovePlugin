#pragma once
#include "BSFunctions.h"
#include "Data.h"
#include "Records/Skillshow3/AAA_skillshow3_RecordBase.h"

extern DrDataTable* (__fastcall* oData_DataManager_Effect)();

extern bool(__fastcall* oBInputKey)(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);
void EffectTableTest();
static void SkillShow3TableTest();
bool __fastcall hkBInputKey(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);

void RemoveAnimationsForRecord(Data::skillshow3_Record* record);
extern DrEl* (__fastcall* oFind_b8)(DrMultiKeyTable* thisptr, unsigned __int64 key);
DrEl* __fastcall hkFind_b8(DrMultiKeyTable* thisptr, unsigned __int64 key);