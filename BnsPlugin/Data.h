#pragma once
#include "DrEl.h"

#pragma pack(push, 1)

struct DrAliasMap
{
	void* __vftable /*VFT*/;
};

struct DrDataTable;
struct /*VFT*/ DrDataTable_vtbl
{
	char padding[0xB0];
	_DrEl* (__fastcall* Find)(DrDataTable* thisptr, const wchar_t*, const DrAliasMap*);
	_DrEl* (__fastcall* Find)(DrDataTable* thisptr, unsigned __int64);
	void(__fastcall* SetUseLowMemory)(DrDataTable* thisptr, bool);
	DrInnerIter* (__fastcall* createInnerIter)(DrDataTable* thisptr, _DrEl* const);
	DrInnerIter* (__fastcall* createInnerIter)(DrDataTable* thisptr);
	void(__fastcall* removeInnerIter)(DrDataTable* thisptr, DrInnerIter*);
};

struct DrDataTable
{
};

struct DrElIter;
struct DrInnerIter;
struct DrInnerIter_vtbl
{
	_DrEl* (__fastcall* Ptr)(DrInnerIter* thisptr);
	bool(__fastcall* Next)(DrInnerIter* thisptr);
	bool(__fastcall* IsValid)(DrInnerIter* thisptr);
};
struct DrInnerIter
{
	DrInnerIter_vtbl* _vtptr;
};
struct DrElIter
{
	DrInnerIter* _node;
	DrDataTable* _table;
};
#pragma pack(pop)

#pragma pack(push, 4)
struct DrTableDef {
	const wchar_t* name;
};
struct DrLoaderDef {
	DrDataTable* table;
	const DrTableDef* tableDef;
	char padding[0x44];
};
#pragma pack(pop)

namespace Data {
	struct DataManager
	{
		char padding[0xC4];
		DrLoaderDef _loaderDefs[457];
	};
}

class DataHelper {
public:
	static DrDataTable* GetTable(Data::DataManager* dataManager, int tableId);
	static DrDataTable* GetTable(Data::DataManager* dataManager, const wchar_t* tableName);
	static DrElIter* DrElIter_DrElIter();
	static void FreeDrElIter(DrElIter* ptr);
};
