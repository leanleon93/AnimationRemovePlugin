#pragma once
#include <cstdint>
#include "BSFunctions.h"
#include "Data.h"
#include "Records/Effect/EffectRecordBase.h"
#include "Records/Skillshow3/SkillShow3Base.h"

extern DrDataTable* (__fastcall* oData_DataManager_Effect)();

extern bool(__fastcall* oBInputKey)(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);
void EffectTableTest();
static void SkillShow3TableTest();
bool __fastcall hkBInputKey(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);

void RemoveAnimationsForRecord(Data::Skillshow3Record* record);
extern DrEl* (__fastcall* oFind_b8)(DrMultiKeyTable* thisptr, unsigned __int64 key);
DrEl* __fastcall hkFind_b8(DrMultiKeyTable* thisptr, unsigned __int64 key);