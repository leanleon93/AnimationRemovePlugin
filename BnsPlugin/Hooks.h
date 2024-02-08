#pragma once
#include <cstdint>
#include "BSFunctions.h"
#include "Data.h"

extern const void* (__fastcall* oDrElIter_DrElIter)(DrElIter* thisptr, const DrDataTable* table);

extern const DrDataTable* (__fastcall* oData_DataManager_Effect)();

extern bool(__fastcall* oBInputKey)(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);
void EffectTableTest();
static void SkillShow3TableTest();
bool __fastcall hkBInputKey(BInputKey* thisptr, EInputKeyEvent* InputKeyEvent);

struct World
{
	char unknown_0[0x50];
	bool _activated;
	bool _IsTerrainChanged;
	bool _isTransit;
	bool _isEnterWorld;
	bool _isEnterZone;
	bool _tryLeaveZone;
	char _leaveReason;
	char unknown_1[1];
	short _worldId;
	char unknown_2[6];
	__int64 _zoneId;
	int _geozoneId;
};

#ifdef _DEBUG
std::ostream& operator<<(std::ostream& os, const World& world);
bool operator== (const World& lhs, const World& rhs);
bool operator!= (const World& lhs, const World& rhs);
#endif // _DEBUG

extern World* (__fastcall* BNSClient_GetWorld)();
World* __fastcall hkBNSClient_GetWorld();